task stackCones() {
	while(true){
			//assigning lifting the arm to the upper 6-button pad.

			int stackedConeCount = 0;

		  if(vexRT[Btn7L] == 1){
		  		stackedConeCount = stackedConeCount + 100;

			}

			if(vexRT[Btn7R] == 1){
		  		stackedConeCount = stackedConeCount - 100;

			}
			if(vexRT[Btn7U] == 1) {
				startMotor(armBox, 40);
				startMotor(leftArm, 40);
				startMotor(rightArm, -40);
				wait1Msec(500);
				stopMotor(armBox);
				wait1Msec(1500);
				stopMotor(rightArm);
				stopMotor(leftArm);
				startMotor(leftArm, -40);
				startMotor(rightArm, 40);
				wait1Msec(2000 - stackedConeCount); //Change to counting system, automate entirely.
				stopMotor(leftArm);
				stopMotor(rightArm);

			}
			stopMotor(leftArm);
			stopMotor(rightArm);
	}
}
