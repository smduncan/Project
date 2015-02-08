#define LEFT_WHEEL motorA
#define RIGHT_WHEEL motorD
#define GYRO S2

void moveSteering (int dir, int pwr) {
	setMotorSpeed (LEFT_WHEEL, pwr/dir);
	setMotorSpeed (RIGHT_WHEEL, pwr);
}

task main() {
	moveSteering (0, 75);
  delay (500);

}
