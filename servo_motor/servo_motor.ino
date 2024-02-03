#include <ESP32Servo.h>
 
Servo myservo;  // create servo object to control a servo
 
// Recommended PWM GPIO pins on the ESP32 include 2,4,12-19,21-23,25-27,32-33 
int servoPin = 13;
 
void setup() {
 


  myservo.setPeriodHertz(50); 
  myservo.attach(servoPin);
}
 
void loop() {
 
  
  myservo.write(0); 
  delay(2000);
  myservo.write(180);
  delay(2000);

}