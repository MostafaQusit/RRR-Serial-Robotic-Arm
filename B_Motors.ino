// to Control the MOTORS:
    float StartPoint_1, StartPoint_2, error_1, error_2, delayTime_ms;
    
    void AngleControl_XY(double angle_1, double angle_2) {
      angle_1 *= (180.0/PI);
      angle_2 *= (180.0/PI);
      
      angle_1 = constrain(angle_1,0.0,180.0);
      angle_2 = constrain(angle_2,0.0,180.0);

      // Send the Values to Servos + set the Offsets:
      servo_1.write(angle_1+ 3.5);
      servo_2.write(angle_2+76.0);
    }
    
    void PositionControl_Z(int Pen_State) {
      delay(500);
      switch(Pen_State) {
        case PEN_UP:    servo_z.write(90);  break;
        case PEN_DOWN:
            if(servo_2.read()>80 && servo_2.read()<100) {
                servo_z.write(7); // Rapid Motion
                delay(10);
                servo_z.write(0); // Short Motion
            }
            else { servo_z.write(3); }
            break;
      }
      delay(500);
    }
