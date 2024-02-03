#include <ESP32Servo.h>
Servo myservo;  // create servo object to control a servo
int servoPin = 13;
const int LED_PIN = 5; //LED pin is defined


void setup() {
  pinMode (LED_PIN, OUTPUT);  // Pin 5 is set as OUTPUT
  myservo.setPeriodHertz(50); 
  myservo.attach(servoPin);
}
void loop() {



  digitalWrite (LED_PIN, HIGH); // LED on
  delay(1000);  // delay of 1 sec
  digitalWrite (LED_PIN, LOW);  // LED off
  delay(1000);  // delay of 1 sec



  myservo.write(0); 
  delay(2000);
  myservo.write(180);
  delay(2000);

}