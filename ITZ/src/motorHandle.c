#include "main.h"
#include "motorhandle.h"

void handleMotor(uint8_t joystick, uint8_t motor, uint8_t button)
{
	if(joystickGetDigital(joystick, button, JOY_UP)) {
		motorSet(motor, 127);
	}
	else if(joystickGetDigital(joystick, button, JOY_DOWN)) {
		motorSet(motor, -127);
	}
	else {
		motorSet(motor, 0);
	}
}
