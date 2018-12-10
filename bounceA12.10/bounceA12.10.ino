
/* 
 DESCRIPTION
 ====================
 Simple example of the Bounce library that switches the debug LED when a button is pressed.
 */
// Include the Bounce2 library found here :
// https://github.com/thomasfredericks/Bounce2
#include <Bounce2.h>

#define rotate 0
#define buzzer 5

#define BUTTON_PIN 2
#define LED_PIN 13

// Instantiate a Bounce object
Bounce debouncer = Bounce(); 

void setup() {

   initAll();
    pinMode(BUTTON_PIN,INPUT_PULLUP);

  // After setting up the button, setup the Bounce instance :
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms

  //Setup the LED :
  pinMode(LED_PIN,OUTPUT);


}

void loop() {
  // Update the Bounce instance :
  debouncer.update();

  // Get the updated value :
  int value = debouncer.read();

  // Turn on or off the LED as determined by the state :
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
  
}

void bell(double x)
{
  digitalWrite(buzzer,HIGH);
  delay(x = 500);
  digitalWrite(buzzer,LOW);
}

double GetRotate()
{
  return (double)analogRead(rotate)/1000;
}



