// Libraries:
    #include "math.h"
    
// Parameters:
  // Links Length: (mm)
    #define L1  130.0
    #define L2  170.0

// Servo Motors:
    #include <Servo.h>
    Servo servo_1, servo_2, servo_z;

    #define SERVO_MOTOR_1 2
    #define SERVO_MOTOR_2 3
    #define SERVO_MOTOR_Z 4

    #define PEN_UP      0
    #define PEN_DOWN    1
    
// Motion:
    float CursorPosition_x=0.0, CursorPosition_y=0.0;
    
    float CurrentPosi_X = CursorPosition_x;
    float CurrentPosi_Y = CursorPosition_y;
    
    float FontSize=40.0;
