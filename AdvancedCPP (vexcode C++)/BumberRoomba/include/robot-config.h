using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor LeftMotor;
extern motor RightMotor;
extern motor ClawMotor;
extern motor ArmMotor;
extern bumper backBumper;
extern bumper rightBumper;
extern bumper leftBumper;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );