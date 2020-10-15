
// roboDanceParty.ino
// Written for CT IDD Lab 5
// Russell Bingham
// 10/14/20

#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

void setup() {
  //Initialization functions and set up the initial position for Braccio
  //All the servo motors will be positioned in the "safety" position:
  //Base (M1):90 degrees
  //Shoulder (M2): 45 degrees
  //Elbow (M3): 180 degrees
  //Wrist vertical (M4): 180 degrees
  //Wrist rotation (M5): 90 degrees
  //gripper (M6): 10 degrees
  Braccio.begin();
  Serial.begin(9600);
}

void loop() {
   Serial.println(analogRead(A5));
   if (analogRead(A5) < 800) {
      rest();
   }
   else {
      dance();
   }
   delay(1000);
}

// move arm to rest position (vertical)
void rest() {
  Braccio.ServoMovement(20,           90,  90, 90, 90, 90,  73); 
}

void dance() {
  
  Braccio.ServoMovement(20,           90,  90, 90, 90, 90,  73); 
  Braccio.ServoMovement(20,           40,  60, 135, 30, 100,  10); 
  Braccio.ServoMovement(20,           150,  120, 60, 30, 70,  73); 
  Braccio.ServoMovement(20,           100,  130, 30, 150, 120,  10); 
  Braccio.ServoMovement(20,           140,  60, 140, 60, 50,  73); 
  delay(1000);
}
