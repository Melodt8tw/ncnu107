
#include <Bounce2.h>

#define rotate 0


#define BUTTON_PIN 2
#define RLED_PIN 9
#define GLED_PIN 11
#define BLED_PIN 10
Bounce debouncer = Bounce(); 

void setup() {

   initAll();
   Serial.begin(9600);
  // After setting up the button, setup the Bounce instance :
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms

}

void loop() {
  // Update the Bounce instance :
  debouncer.update();

  int Rvalue = analogRead (rotate);
  Rvalue = Rvalue/4;
  
  // Get the updated value :
  int value = debouncer.read();

  // Turn on or off the LED as determined by the state :
  if ( value == LOW ) {
  
     analogWrite(RLED_PIN, Rvalue);
     analogWrite(BLED_PIN, Rvalue);
     delay(2000);
  } 
  else {
    digitalWrite(RLED_PIN, LOW );
    digitalWrite(GLED_PIN, LOW );
    digitalWrite(BLED_PIN, LOW );
    
  }

}

void initAll()
{
  pinMode(BUTTON_PIN,INPUT_PULLUP);
  pinMode( RLED_PIN,OUTPUT);
  pinMode( GLED_PIN,OUTPUT);
  pinMode( BLED_PIN,OUTPUT);
  digitalWrite( RLED_PIN,LOW);
  digitalWrite( GLED_PIN,LOW);
  digitalWrite( BLED_PIN,LOW);
  
}
