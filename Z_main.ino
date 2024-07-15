// main function:
void setup() {
    // Servo Motors:
      servo_1.attach(SERVO_MOTOR_1);
      servo_2.attach(SERVO_MOTOR_2);
      servo_z.attach(SERVO_MOTOR_Z);
    Serial.begin(9600);
}

void loop() {
    // Print the Text:
    char Text[]="1902339";  //  ID Code

    CursorPosition_x = 0.0;
    for(int index=0; index<7; index++) {
        Print_Character(Text[index]);       // print the Character
        CursorPosition_x += 38;             // Prepare for the Next Character
        CurrentPosi_X = CursorPosition_x;   // Update the Coordinates:
    }
}
