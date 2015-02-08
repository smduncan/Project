/* Demonstrates simple single sensor line following
* 08/02/15 - Stuart Duncan
*/


#define LEFT_WHEEL motorA
#define RIGHT_WHEEL motorD
#define LIGHT S3

task main () {

	while (true) {

		setMotorSpeed (LEFT_WHEEL, 20);
		setMotorSpeed (RIGHT_WHEEL, 20);

		while (getColorReflected (LIGHT) < 25) {}

		setMotorSpeed (RIGHT_WHEEL, 0);
		delay (1);


	}
}
