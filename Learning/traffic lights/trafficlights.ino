/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
#define gr1 2
#define gr2 4
#define gr3 6
#define wh1 3
int wh2 = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(gr1, HIGH);
  digitalWrite(gr2, HIGH);
  digitalWrite(gr3, HIGH);// turn the LED on (HIGH is the voltage level)
  delay(900) ;  

  digitalWrite(gr1,LOW);
  
  digitalWrite(gr2, LOW);
  digitalWrite(gr3, LOW);
  delay(100);

  digitalWrite(wh1,HIGH);
  digitalWrite(wh2,HIGH);
  delay(900);
  
  
  digitalWrite(wh1,LOW);
  digitalWrite(wh2,LOW);

  

 delay(100);

   digitalWrite(gr1,HIGH);
   digitalWrite(gr2,HIGH);
   digitalWrite(gr3,HIGH);
   digitalWrite(wh1,HIGH);
   digitalWrite(wh2,HIGH);


        
  digitalWrite(wh1, LOW);
  digitalWrite(wh2, LOW);
  digitalWrite(gr1, LOW);
  digitalWrite(gr2, LOW);
  digitalWrite(gr3, LOW);
  
  
  
  
  
  // wait for a second
}
