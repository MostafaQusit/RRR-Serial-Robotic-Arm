# RRR-Serial-Robotic-Arm
### 3-DOF (RRR) Serial Robotic Arm for writing numbers

- A CNC M/C capable of drawing 2D pictures and writing using a pen (3 DOF).
- Was implemented using 3 Servo motors: 2 motors for horizontal motion and a motor for vertical motion (Pen UP & Down)
- This coding project cover the closed loop case by programming the following tasks:
  - controlling the the 3 Servo motors.
  - applying inverse kinematics to convert the desired point of end-effetor to the actuators motion.
  - create the required draw patterns for writing (line).
  - study the numbers and store their shapes as connected paths.
