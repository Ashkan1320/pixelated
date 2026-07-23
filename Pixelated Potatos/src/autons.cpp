#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "lift.h"
#include "util.h"
#include "autons.h"

using namespace vex;

drive Chassis(3.25, 1.0, leftDrive, rightDrive, PORT1);

void rightAuton() {
  /*start infront of the toggle
  toggle at the beggining
  score yellow in alliance
  */

  Chassis.driveDistance(24);
}

void leftAuton() {
  
  
  //Use functions to create an auton for the left side of the field

}

void skillsAuton() {
  
  //Use functions to create a programming skills routine
  
}