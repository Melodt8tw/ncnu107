
#include <Bounce2.h>

#define rotate 0
#define buzzer 5

#define BUTTON_PIN 2
#define LED_PIN 13


Bounce debouncer = Bounce(); 

void setup() {

   initAll();
}

void loop() {
 
  debouncer.update();

  int value = debouncer.read();

  
  if ( value == LOW ) {
    digitalWrite(LED_PIN, HIGH );
    bell(GetRotate());
  } 
  else {
    digitalWrite(LED_PIN, LOW );
  }

}

void initAll()
{
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  pinMode(BUTTON_PIN,INPUT_PULLUP);

 
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); 


  pinMode(LED_PIN,OUTPUT);
}

void bell(double x)
{
  digitalWrite(buzzer,HIGH);
  delay(x*1000);
  digitalWrite(buzzer,LOW);
}

double GetRotate()
{
  return (double)analogRead(rotate)/1000;
}



