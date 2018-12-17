 #define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 9
#define led7 10
#define led8 11
#define led9 12
#define led10 13

const int analogInPin = A0 ;
const int analogOutPin = 9 ;
int sensorValue = 0 ;
int outputValue = 0 ;

void setup() {
  Serial.begin(9600);
  
  pinMode(led1,OUTPUT) ;
  pinMode(led2,OUTPUT) ;
  pinMode(led3,OUTPUT) ;
  pinMode(led4,OUTPUT) ;
  pinMode(led5,OUTPUT) ;
  pinMode(led6,OUTPUT) ;
  pinMode(led7,OUTPUT) ;
  pinMode(led8,OUTPUT) ;
  pinMode(led9,OUTPUT) ;
  pinMode(led10,OUTPUT) ;

  digitalWrite(led1,LOW) ;
  digitalWrite(led2,LOW) ;
  digitalWrite(led3,LOW) ;
  digitalWrite(led4,LOW) ;
  digitalWrite(led5,LOW) ;
  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;

}

void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  
  delay(2);

if(sensorValue > 900){
  digitalWrite(led1,HIGH) ;
  
  digitalWrite(led2,LOW) ;
  digitalWrite(led3,LOW) ;
  digitalWrite(led4,LOW) ;
  digitalWrite(led5,LOW) ;
  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 800 and sensorValue < 900){
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led3,LOW) ;
  digitalWrite(led4,LOW) ;
  digitalWrite(led5,LOW) ;
  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 700 and sensorValue < 800){
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;
  
  digitalWrite(led4,LOW) ;
  digitalWrite(led5,LOW) ;
  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 600 and sensorValue < 700){
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led5,LOW) ;
  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 500 and sensorValue < 600){
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led6,LOW) ;
  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 400 and sensorValue < 500){
  digitalWrite(led6,HIGH) ;
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led7,LOW) ;
  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 300 and sensorValue < 400){
  digitalWrite(led7,HIGH) ;
  digitalWrite(led6,HIGH) ;
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led8,LOW) ;
  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 200 and sensorValue < 300){
  digitalWrite(led8,HIGH) ;
  digitalWrite(led7,HIGH) ;
  digitalWrite(led6,HIGH) ;
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led9,LOW) ;
  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 100 and sensorValue < 200){
  digitalWrite(led9,HIGH) ;
  digitalWrite(led8,HIGH) ;
  digitalWrite(led7,HIGH) ;
  digitalWrite(led6,HIGH) ;
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;

  digitalWrite(led10,LOW) ;
  delay(100) ;
}

if(sensorValue > 0 and sensorValue < 100){
  digitalWrite(led10,HIGH) ;
  digitalWrite(led9,HIGH) ;
  digitalWrite(led8,HIGH) ;
  digitalWrite(led7,HIGH) ;
  digitalWrite(led6,HIGH) ;
  digitalWrite(led5,HIGH) ;
  digitalWrite(led4,HIGH) ;
  digitalWrite(led3,HIGH) ;
  digitalWrite(led2,HIGH) ;
  digitalWrite(led1,HIGH) ;
  delay(100) ;
}

}
