//Analog Joystick Servo Example Code
//by Kreezy(KRosa) 1.12.2018

//Example Video can be found @ 

#include <Servo.h>  // includes the Servo library

Servo myservo;  // create servo object to control a servo

const int X_pin = 0; // analog pin connected to X output

int val;  // variable to read the value from the analog pin


void setup() {

 myservo.attach(9);  // attaches the servo on pin 9 to the servo object
 
 Serial.begin(9600);  // starts serial comm for debugging @ 9600baud
}

void loop() {
  {
  val = analogRead(X_pin);             // reads the value of the analog sticks X Axis (value between 0 and 1023)
  val = map(val, 0, 1023, 20, 180);    // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  Serial.println(val);
  delay(15);                           // waits for the servo to get there
}
  
}
