// make the basics of motion: [ALL of them Incremental motion]
    void Draw_Line(double x_posi, double y_posi) {
      delayy=50;
      x_posi *= FontSize;
      y_posi *= FontSize;
      // Send the Coordinates
      EndEffector_Move_XY( CursorPosition_x+x_posi , CursorPosition_y+y_posi , PEN_DOWN );
      delay(250);
    }
    
    void Draw_None(float x_posi, float y_posi) {
      delayy=2;
      x_posi *= FontSize;
      y_posi *= FontSize;
      // Send the Coordinates
      EndEffector_Move_XY( CursorPosition_x+x_posi , CursorPosition_y+y_posi , PEN_UP );
      delay(500);
    }
    
