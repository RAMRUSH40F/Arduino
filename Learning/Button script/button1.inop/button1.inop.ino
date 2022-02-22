void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
}
bool flag = false;
void loop() {
  // читаем инвертированное значение для удобства
  bool btnState = !digitalRead(3);
  if (btnState && !flag) {  // обработчик нажатия
    flag = true;
    Serial.println("press");
  }
  if (!btnState && flag) {  // обработчик отпускания
    flag = false;  
    //Serial.println("release");
  }
}
