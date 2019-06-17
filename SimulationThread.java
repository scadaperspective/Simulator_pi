/**
 * This is the main simulation thread. It runs a loop that recalculates simulation parameters periodically. 
 * The simulation interval can be set via the parameters file when the thread is started.
 */
package com.ron;

import java.util.Random;

/**
 * @author Ron Southworth
 *
 */
public class SimulationThread extends Thread {

	private double rudderPosition;
	private double throttlePosition;
	private double interval;
	private double hullSpeed;
	private double boatSpeed;
	private double heading;
	private double latitude;
	private double longitude;
	private double displacement;
	private double trueWindDirection;
	private double trueWindSpeed;
	private double earthRadius = 3443.9184665; // Nautical Miles. WGS 84 Semi A is 3443.91846652 KnMi Semi b is 3432.3716599595031767 KnMi
	private GPSSimulator GPS = new GPSSimulator();
	private Random generator = new Random(System.nanoTime());

	/**
	 * Initialize the Simulation
	 */
	public SimulationThread(double intv, double hsp, double spd, double hdg, double lat, double lon, double alt, double rud, double thr) {
		interval = intv;
		hullSpeed = hsp;
		boatSpeed = spd;
		heading = hdg;
		latitude = lat;
		longitude = lon;
		rudderPosition = rud;
		throttlePosition = thr;
		trueWindDirection = generator.nextDouble() * 360;
		trueWindSpeed = generator.nextDouble() * 20.0 + 5.0;
		GPS.start();
	}

	public void SetRudderPosition(int p) {
		rudderPosition = p; // return rudderPosition format -35.0 0.0 35.0 
	}

	public void SetThrottlePosition(double t) {
		throttlePosition = t; // % of Throttle
	}

	public double GetLongitude() {
		return longitude; // Latitude
	}

	public double GetLatitude() {
		return latitude; // Longitude  
	}

	public double GetHeading() {
		return heading; // Vessel heading
	}

	public double GetBoatSpeed() {
		return boatSpeed; // Note is SOW
	}

	public double GetHeadingMagnetic() {
		return GPS.getHeadingMagnetic(); // Get Mag Heading Need to add mag var Lookup table 
	}

	public double GetTrueWindSpeed() {
		return GPS.getTrueWindSpeed(); // True Wind Speed TWS
	}

	public double GetTrueWindAngle() {
		return GPS.getTrueWindAngle(); // True Wind Angle TWA
	}

	public double GetApparentWindSpeed() {
		return GPS.getApparentWindSpeed(); // Apparent Wind Speed AWS
	}

	public double GetApparentWindAngle() { 
		return GPS.getApparentWindAngle(); // Apparent Wind Angle
	}

	@Override
	public void run() {
		while (true) {
			/**
			 * Introduced some lag as to how the boat speed increases on the target speed
			 * presently achieved by adding half of the required delta from the set speed to the present speed in each iteration of the 
			 * simulation loop. 
			 * 
			 */
			if (throttlePosition >= 0) {
				boatSpeed = boatSpeed + (((hullSpeed * throttlePosition / 100) - boatSpeed) / 2);
			}
			GPS.setBoatSpeed(boatSpeed);

			/**
			 * Turn the vessel in the direction port or starboard of the rudder. We multiply the
			 * rudder slider value by a factor to simulate increased or decreasing rate of turn. At
			 * 
			 * + some code to limit Rate of Chance to under 360 Deg. 
			 */
			if (rudderPosition != 0 && boatSpeed != 0) {
				heading = heading + rudderPosition * 2.0;
			}
			if (heading < 0) {
				heading = heading + 360;
			}
			if (heading >= 360) {
				heading = heading - 360;
			}
			GPS.setHeading(heading);
			/**
			 * Introduced randomness to the indicated wind speed from direction and speed set points.
			 * Wind gusts will randomly change up to 20% above and below the base wind speed set point 
			 * likewise wind direction randomly shifts by as much as 20 degrees
                         * Must change to read grib data, load the wind speed, gust value to set dynamic variation
			 * 
			 */
			double TWS = trueWindSpeed + (generator.nextDouble() - 0.5) * trueWindSpeed / 20.0;
			double TWD = trueWindDirection + (generator.nextDouble() - 0.5) * 20.0;
			if (TWD >= 360) {
				TWD = TWD - 360;
			}
			if (TWD < 0) {
				TWD = TWD + 360;
			}
			GPS.setWind(TWS, TWD);
			/**
			 * To find the lat/lon of a point on true course t, distance d from (p1,l1) *** calculated in RADIANS
			 * along a rhumbline (Note: initial point cannot be either pole!):
			 * 
			 * This calculation uses the assumption of a spherical earth 
			 * 
			 * Formula: φ2 = asin( sin(φ1)*cos(d/R) + cos(φ1)*sin(d/R)*cos(θ) )
			 * λ2 = λ1 + atan2( sin(θ)*sin(d/R)*cos(φ1), cos(d/R)−sin(φ1)*sin(φ2) )
			 * where φ is latitude (in radians)
			 * λ is longitude (in radians)
			 * θ is the bearing (in radians, clockwise from north)
			 * d is the distance travelled (say, nautical miles)
			 * R is the earth’s radius in same units as d (say, 3443.9184665 nautical miles)
			 * (d/R is the angular distance, in radians)
			 * 
			 */
			displacement = boatSpeed * interval / 3600;
			double p2 = Math.asin(Math.sin(Math.toRadians(latitude)) * Math.cos(displacement / earthRadius) + Math.cos(Math.toRadians(latitude)) * Math.sin(displacement / earthRadius) * Math.cos(Math.toRadians(heading)));
			latitude = Math.toDegrees(p2);
			GPS.setLatitude(latitude);
			double l2 = Math.toRadians(longitude) + Math.atan2(Math.sin(Math.toRadians(heading)) * Math.sin(displacement / earthRadius) * Math.cos(Math.toRadians(latitude)), Math.cos(displacement / earthRadius) - Math.sin(Math.toRadians(latitude)) * Math.sin(p2));
			longitude = Math.toDegrees(l2);
			GPS.setLongitude(longitude);
			try {
				Thread.sleep((long) interval * 1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}