#define pinX    A1  // ось X джойстика
#define pinY    A0  // ось Y джойстика
#define ledPin  13  // светодиод на Pin 13

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  

 
}
 
void loop() {

  int X = analogRead(pinX);              // считываем значение оси Х
  int Y = analogRead(pinY);              // считываем значение оси Y

  Serial.print(X);                       // выводим в Serial Monitor
  Serial.print("\t");                    // табуляция
  Serial.println(Y);
}
