// to control the end-effector (Pen) positions to achieve the tasks:
    double Ceta_1, Ceta_2, CetaDot_1, CetaDot_2;
    int delayy;
     
    void EndEffector_Move_XY(double xf, double yf, int z) { 
        // Zero Paper Offset:
        xf -=  90.00;
        yf += 190.00;
        
        PositionControl_Z(z);  // Send the Value to Servo motor to move Z
        
        double x, y;
        for(int i=0; i<=1000; i+=100) {
          x = CurrentPosi_X + i/1000.0 * (xf - CurrentPosi_X);
          y = CurrentPosi_Y + i/1000.0 * (yf - CurrentPosi_Y);

          // convert the required distance to angle(Degree): [ Inverse Position Kinematics]
          Ceta_2 = acos((x*x+y*y-L1*L1-L2*L2)/(2.0*L1*L2));
          Ceta_1 = atan(y/x) - asin((L2*sin(Ceta_2))/sqrt(x*x+y*y));
          if(Ceta_1 < 0) { Ceta_1 += PI; }  // from 3rd to 1st Quad
         
          AngleControl_XY(Ceta_1,Ceta_2); // Move X,Y together
          if(i%10==0) { delay(delayy); }
        }
        
        // Sortage the New Coordinates:
        CurrentPosi_X = x;
        CurrentPosi_Y = y;
   }
