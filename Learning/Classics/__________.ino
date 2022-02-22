int trigPin = 8; // назначаем имя для Pin8
int echoPin = 9; // назначаем имя для Pin9
#define gr 2
#define med 3
#define red 5


 
void setup() { 
  Serial.begin (9600); // подключаем монитор порта
  pinMode(trigPin, OUTPUT); // назначаем trigPin (Pin8), как выход
  pinMode(echoPin, INPUT); // назначаем echoPin (Pin9), как вход
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
} 
 
void loop() { 
  int duration, cm; // назначаем переменную "cm" и "duration" для показаний датчика
  digitalWrite(trigPin, LOW); // изначально датчик не посылает сигнал
  delayMicroseconds(2); // ставим задержку в 2 ммикросекунд

  digitalWrite(trigPin, HIGH); // посылаем сигнал
  delayMicroseconds(10); // ставим задержку в 10 микросекунд
  digitalWrite(trigPin, LOW); // выключаем сигнал

  duration = pulseIn(echoPin, HIGH); // включаем прием сигнала

  cm = duration / 58; // вычисляем расстояние в сантиметрах



  if ( cm >70){
  digitalWrite(gr, HIGH);
  delay(300);
  digitalWrite(gr, LOW);
    }

  if (cm <70 and cm > 50){
  digitalWrite(med, HIGH);
  delay(300);
  digitalWrite(med, LOW);
    
    }
  if (cm<50){
  digitalWrite(red, HIGH);
  delay(300);
  digitalWrite(red, LOW);
    
    }
  
  
  
  Serial.print(cm); // выводим расстояние в сантиметрах
  Serial.println(" cm");
  delay(1000); // ставим паузу в 1 секунду
}
