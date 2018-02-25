armUp();
	wait1Msec(500);
	mogoDownAuton();
	moveForwardAuton();
	wait1Msec(2150);
	stopAllMotorsAuton();

	//-----------------

	mogoUpAuton();
	wait1Msec(500);
	armDown();
	wait1Msec(1000);
	stopAllMotorsAuton();
	openClaw();
	armUp();
	wait1Msec(250);
	stopAllMotorsAuton();

	moveBackwardAuton();
	wait1Msec(2200);
	stopAllMotorsAuton();

	//new part
	turnRightAuton();
	wait1Msec(1700);
	stopAllMotorsAuton();
	armUp();
	wait1Msec(400);
	stopAllMotorsAuton();
	moveForwardAuton();
	wait1Msec(600);
	stopAllMotorsAuton();
	mogoDownAuton();
	moveBackwardAuton();
	wait1Msec(600);
	stopAllMotorsAuton();
	mogoUpAuton();
	armDown();
	wait1Msec(600);
	stopAllMotorsAuton();

