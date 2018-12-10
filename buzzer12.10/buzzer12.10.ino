#define buzzer 5
void setup() {
  // put your setup code here, to run once:
 initAll();
 bell(1);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void initAll()
{
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
}

void bell(double x)
{
  digitalWrite(buzzer,HIGH);
  delay(x = 1000);
  digitalWrite(buzzer,LOW);
}


