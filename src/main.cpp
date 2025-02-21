#include <Arduino.h>




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
  int scoreStart = 501;
  int score13 = 13;
  int score12 = 12;
  int score11 = 11;
  int score10 = 10;
  int scoreInput = 0 + score13 + score12 + score11 + score10;
  int scoreRemaining = scoreRemaining - scoreInput;

    
    
  // Print the button pressed
   
  // If button 13 is pressed, turn on the LED
    if (buttonPress10 == LOW) {
      digitalWrite(5, HIGH);
      scoreRemaining = scoreRemaining - scoreInput;
      //serial.println = met enter, serial.print = zonder enter
      Serial.println(scoreRemaining);
      delay(1000);
    }

    else
    {
      return;
    }

    if (buttonPress13 == LOW) {
      digitalWrite(5, HIGH);
      scoreRemaining = scoreRemaining - scoreInput;
      //serial.println = met enter, serial.print = zonder enter
      Serial.println(scoreRemaining);
      delay(1000);
    }

    else
    {
      return;
    }

    if (buttonPress12 == LOW) {
      digitalWrite(5, HIGH);
      //scoreRemaining = scoreRemaining - score12;
      //serial.println = met enter, serial.print = zonder enter
      //Serial.println(scoreRemaining);
      delay(1000);
    }
    
    else
    {
      return;
    }


    if (buttonPress11 == LOW) {
      digitalWrite(5, LOW);
      //scoreRemaining = scoreStart;
      //Serial.println(scoreRemaining)
      delay(1000);
    }
    
    else
    {
      return;
    }
  return;
}


  