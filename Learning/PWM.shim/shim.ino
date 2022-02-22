
int led = 9;
int serv = 10;
 #include <Servo.h>
  Servo motor;




void setup() {
 
  motor.attach(10);
  
  //pinMode(9,OUTPUT);
  pinMode(serv,OUTPUT);
}

  // ШИМ на 3 пин, 1
void loop() {
  //analogWrite(led,120);
  motor.write(45);
  
}
