#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  //start serial connection
  Serial.begin(9600);
  //configure the pins

  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(5, OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Read button pressed into the code
    int buttonPress13 = digitalRead(13);
    int buttonPress12 = digitalRead(12);
    int buttonPress11 = digitalRead(11); 
    int buttonPress10 = digitalRead(10); 
  // Print the button pressed
    Serial.println(buttonPress13);
    Serial.println(buttonPress12);
    Serial.println(buttonPress11);
    Serial.println(buttonPress10);
  // If button 13 is pressed, turn on the LED
    if (buttonPress13 == LOW) {
      digitalWrite(5, HIGH);
    }

    else if (buttonPress12 == LOW) {
      digitalWrite(5, LOW);
    }



  
}


  