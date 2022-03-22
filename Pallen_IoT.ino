#include <Servo.h>

Servo myservo; 
unsigned long timepoint; 

int redPin = 13;
int greenPin = 15;
int bluePin = 0;
int buttonPin = 12; 
const int hallPin = 2;
int hallState = 0; 

void setup()
{
  myservo.attach(14); 
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT):
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(hallPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin); 

  if (buttonState == LOW) {
    setColor(255, 051, 153);
    myservo.write(50); 
    delay(2000);

    pillDepensed = 1; 
    while (digitalRead(hallPin) == LOW) {
      int i;
      i++; 
    }
  }

  if (pillDespensed == 1) {
    hallState = digitalRead(hallPin); 
    if (hallState == LOW) {
      setColor(0, 0, 0);
      myservo.write(0);
      delay(1500);
      pillDepensed = 0; 
    }
  }
}

void setColor (int red, int green, int blue) {
  #ifdef COMMON_ANODE 
  red = 255 - red; 
  green = 255 - green;
  blue = 255 - blue; 
  #endif 
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
