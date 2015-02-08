/*****************************
*  GyroStraightLine.c
*  08/02/2015 - Stuart Duncan
*  Use the gyro to keep the
*  robot traveling in a straight
*  line
*****************************/


//Set up ports
#define LEFT_WHEEL motorA
#define RIGHT_WHEEL motorD
#define GYRO S2

// RobotC doesn't have a move steering function
// but we can just make one.
// This is similar to a "My Block"

void moveSteering (int dir, int pwr) {
	setMotorSpeed (LEFT_WHEEL, pwr/dir);
	setMotorSpeed (RIGHT_WHEEL, pwr);

}

 // Tasks are like start blocks
 // We can have many of these
 // We must have a main task

task main() {
	resetGyro (GYRO);
	while (true) {  //Starts in infinite loop
		int gyro = getGyroDegrees (GYRO);
		moveSteering (gyro, 75);

		while (getGyroDegrees (GYRO) < 10 && getGyroDegrees (GYRO) > -10) {
			// This empty loop acts as a wait block
		}


	}
}
