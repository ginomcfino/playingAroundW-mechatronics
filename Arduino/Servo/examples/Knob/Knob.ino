/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo arm3;

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  arm3.attach(10);
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  int pos1 = map(val, 100, 1000, 100, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(pos1);                  // sets the servo position according to the scaled value
  delay(10);
  int pos2 = map(val, 100, 1000, 0, 180);
  arm3.write(pos2);
  delay(20);                           // waits for the servo to get there
}
