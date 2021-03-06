/** @file auto.c
 * @brief File for autonomous code
 *
 * This file should contain the user autonomous() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"

/*
 * Runs the user autonomous code. This function will be started in its own task with the default
 * priority and stack size whenever the robot is enabled via the Field Management System or the
 * VEX Competition Switch in the autonomous mode. If the robot is disabled or communications is
 * lost, the autonomous task will be stopped by the kernel. Re-enabling the robot will restart
 * the task, not re-start it from where it left off.
 *
 * Code running in the autonomous task cannot access information from the VEX Joystick. However,
 * the autonomous function can be invoked from another task if a VEX Competition Switch is not
 * available, and it can access joystick information if called in this way.
 *
 * The autonomous task may exit, unlike operatorControl() which should never exit. If it does
 * so, the robot will await a switch to another mode or disable/enable cycle.
 */
void autonomous() {
  motorSet(8, -127);
  motorSet(9, -127);
  delay(1000);
  motorSet(8, 0);
  motorSet(9, 0);


    motorSet(2, 101);
    motorSet(3, 101);
    motorSet(1, 101);
    motorSet(5, -127);
    motorSet(4, -127);
    motorSet(10, -127);
  delay(1450);//drive
  motorSet(2, 0);
  motorSet(3, 0);
  motorSet(1, 0);
  motorSet(5, 0);
  motorSet(4, 0);
  motorSet(10,0);
  delay(200);
  motorSet(8, 127);
  motorSet(9, 127);
  delay(1000);
  motorSet(8, 0);
  motorSet(9, 0);

  motorSet(2, -50);
  motorSet(3, -50);
  motorSet(1, -50);
  motorSet(5, 127);
  motorSet(4, 127);
  motorSet(10, 127);
  delay(1500);//drive
  motorSet(2, 0);
  motorSet(3, 0);
  motorSet(1, 0);
  motorSet(5, 0);
  motorSet(4, 0);
  motorSet(10, 0);

    motorSet(2, 0);
    motorSet(3, 0);
    motorSet(1, 0);
    motorSet(5, 127);
    motorSet(4, 127);
    motorSet(10, 127);
  delay(1100); //drive
  motorSet(2, 0);
  motorSet(3, 0);
  motorSet(1, 0);
  motorSet(5, 0);
  motorSet(4, 0);
  motorSet(10,0);

    motorSet(2, 127);
    motorSet(3, 127);
    motorSet(1, 127);
    motorSet(5, -127);
    motorSet(4, -127);
    motorSet(10, -127);
  delay(760); //drive
  motorSet(2, 0);
  motorSet(3, 0);
  motorSet(1, 0);
  motorSet(5, 0);
  motorSet(4, 0);
  motorSet(10,0);

  motorSet(8, -127);
  motorSet(9, -127);
  delay(1000);
  motorSet(8, 0);
  motorSet(9, 0);
delay(200);
motorSet(8, 127);
motorSet(9, 127);
delay(1000);
motorSet(8, 0);
motorSet(9, 0);
    motorSet(2, -50);
    motorSet(3, -50);
    motorSet(1, -50);
    motorSet(5, 50);
    motorSet(4, 50);
    motorSet(10, 50);
  delay(500);
    motorSet(2, 50);
    motorSet(3, 50);
    motorSet(1, 50);
    motorSet(5, -50);
    motorSet(4, -50);
    motorSet(10, -50);
 delay(500);
    motorSet(2, -127);
    motorSet(3, -127);
    motorSet(1, -127);
    motorSet(5, 127);
    motorSet(4, 127);
    motorSet(10, 127);
delay(750);
motorSet(2, 0);
motorSet(3, 0);
motorSet(1, 0);
motorSet(5, 0);
motorSet(4, 0);
motorSet(10, 0);

    motorSet(2, 50);
    motorSet(3, 50);
    motorSet(1, 50);
    motorSet(5, 50);
    motorSet(4, 50);
    motorSet(10, 50);
 delay(1500);//flip
  motorSet(2, 0);
  motorSet(3, 0);
  motorSet(1, 0);
  motorSet(5, 0);
  motorSet(4, 0);
  motorSet(10, 0);
}
