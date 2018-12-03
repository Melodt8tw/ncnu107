#define blueLed 13 
#define redLed 12


void setup() {
  pinMode(blueLed,OUTPUT);  //set mode for output
  pinMode(redLed,OUTPUT);   //set mode for output
  digitalWrite(blueLed,LOW);  //set pin to default value
  digitalWrite(redLed,LOW);   //set pin to default value
}

void loop() {
  digitalWrite(blueLed,HIGH);
  delay(1000);
  digitalWrite(redLed,HIGH);
  delay(1000);
  digitalWrite(blueLed,LOW);
  delay(1000);
  digitalWrite(redLed,LOW);
  delay(1000) ;

  
}
