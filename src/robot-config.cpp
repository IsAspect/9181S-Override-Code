#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

// Drivetrain motors - Change ports later
motor leftFront = motor(PORT1, ratio6_1, false);
motor leftBack = motor(PORT2, ratio6_1, true);
motor rightFront = motor(PORT3, ratio6_1, false);
motor rightBack = motor(PORT4, ratio6_1, true);

// Lift motor

motor lift = motor(PORT5, ratio36_1, false);

// Controller

controller Controller1 = controller();

void vexcodeInit( void ) {
  // nothing to initialize
}