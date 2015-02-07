#define LEFT_WHEEL motorA
#define RIGHT_WHEEL motorD
#define SONAR S1

task main() {

	setMotorSpeed (LEFT_WHEEL, 100);
	setMotorSpeed (RIGHT_WHEEL, 100);

	while (getUSDistance(SONAR) > 5) {
	}

	setMotorSpeed (LEFT_WHEEL, 0);
	setMotorSpeed (RIGHT_WHEEL, 0);

}
