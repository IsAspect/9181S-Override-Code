using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

// Drivetrain Motors
extern motor leftFront;
extern motor leftBack;
extern motor rightFront;
extern motor rightBack;

// Lift motor
extern motor lift;

// Controller

extern controller Controller1;

void  vexcodeInit( void );