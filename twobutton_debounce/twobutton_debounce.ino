

#include <Bounce2.h>

#define BUTTON_PIN 2
#define LED_PIN 13

#define BUTTON_PIN2 3
#define LED_PIN2 12


Bounce debouncer = Bounce(); 
Bounce debouncer2 = Bounce(); 

void setup() {

 
  pinMode(BUTTON_PIN,INPUT_PULLUP);
 pinMode(BUTTON_PIN2,INPUT_PULLUP);
  
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); 
  
  debouncer2.attach(BUTTON_PIN2);
  debouncer2.interval(5);
 
  pinMode(LED_PIN,OUTPUT);
pinMode(LED_PIN2,OUTPUT);
}

void loop() {
  // Update the Bounce instance :
  debouncer.update();
debouncer2.update();
  // Get the updated value :
  int value = debouncer.read();
int value2 = debouncer2.read();
  // Turn on or off the LED as determined by the state :
  if ( value == LOW ) {
    digitalWrite(LED_PIN, HIGH );
  } 
  else {
    digitalWrite(LED_PIN, LOW );
  }
  
  if ( value2 == LOW ) {
    digitalWrite(LED_PIN2, HIGH );
  } 
  else {
    digitalWrite(LED_PIN2, LOW );
  }

}


