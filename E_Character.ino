// Convert the Letters to Drawing:
void Print_Character(char character) {
  switch(character) {
        case '0': { // 00
            Draw_None(0.23,0.00);
            Draw_Line(0.45,0.00);
            Draw_Line(0.68,0.38);
            Draw_Line(0.68,1.13);
            Draw_Line(0.45,1.50);
            Draw_Line(0.23,1.50);
            Draw_Line(0.00,1.13);
            Draw_Line(0.00,0.38);
            Draw_Line(0.23,0.00);
            break; }
        case '1': { // 01
            Draw_None(0.00,0.90);
            Draw_Line(0.18,1.20);
            Draw_Line(0.33,1.50);
            Draw_Line(0.33,1.20);
            Draw_Line(0.33,0.90);
            Draw_Line(0.33,0.60);
            Draw_Line(0.33,0.30);
            Draw_Line(0.33,0.00);
            break; }
        case '2': { // 02
            Draw_None(0.00,1.20);
            Draw_Line(0.23,1.50);
            Draw_Line(0.45,1.50);
            Draw_Line(0.68,1.20);
            Draw_Line(0.68,0.90);
            Draw_Line(0.00,0.30);
            Draw_Line(0.00,0.00);
            Draw_Line(0.75,0.00);
            break; }
        case '3': { // 03
            Draw_None(0.00,1.00);
            Draw_Line(0.00,1.25);
            Draw_Line(0.23,1.50);
            Draw_Line(0.45,1.50);
            Draw_Line(0.68,1.25);
            Draw_Line(0.68,1.00);
            Draw_Line(0.45,0.75);
            Draw_Line(0.23,0.75);
            Draw_Line(0.45,0.75);
            Draw_Line(0.68,0.50);
            Draw_Line(0.68,0.25);
            Draw_Line(0.45,0.00);
            Draw_Line(0.23,0.00);
            Draw_Line(0.00,0.25);
            Draw_Line(0.00,0.50);
            break; }
        case '9': { // 09
            Draw_None(0.00,0.00);
            Draw_Line(0.45,0.00);
            Draw_Line(0.68,0.30);
            Draw_Line(0.68,1.20);
            Draw_Line(0.45,1.50);
            Draw_Line(0.23,1.50);
            Draw_Line(0.00,1.20);
            Draw_Line(0.00,0.90);
            Draw_Line(0.23,0.60);
            Draw_Line(0.45,0.60);
            Draw_Line(0.68,0.90);
            break; }
  }
  PositionControl_Z(PEN_UP); // Pen Up
}
