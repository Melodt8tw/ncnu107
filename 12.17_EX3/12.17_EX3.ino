/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
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

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  digitalWrite(led10, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
  
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

if (sensorValue > 500)
{
  digitalWrite(led10, LOW);
  digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, LOW);
digitalWrite(led4, LOW);
digitalWrite(led3, LOW);
digitalWrite(led2, LOW);
digitalWrite(led1, LOW);

}

if (sensorValue > 450 and sensorValue < 500 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, LOW);
digitalWrite(led4, LOW);
digitalWrite(led3, LOW);
digitalWrite(led2, LOW);
digitalWrite(led1, HIGH);

}

if(sensorValue > 400 and sensorValue < 450 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, LOW);
digitalWrite(led4, LOW);
digitalWrite(led3, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}
delay(1000);
if (sensorValue > 350 and sensorValue < 400 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, LOW);
digitalWrite(led4, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if (sensorValue > 300 and sensorValue < 350 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, LOW);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if(sensorValue > 250 and sensorValue < 300 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if(sensorValue > 200 and sensorValue < 250 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, LOW);
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if(sensorValue > 150 and sensorValue < 200 )
{
  digitalWrite(led10, LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, LOW);
digitalWrite(led7, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if (sensorValue > 100 and sensorValue < 150 )
{
  digitalWrite(led10,LOW);
digitalWrite(led9, LOW);
digitalWrite(led8, HIGH);
digitalWrite(led7, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

if( sensorValue < 100 and sensorValue > 50)
{
  digitalWrite(led10, LOW);
digitalWrite(led9, HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led7, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);  

}

if( sensorValue < 50 )
{
  digitalWrite(led10, HIGH);
digitalWrite(led9, HIGH);
digitalWrite(led8, HIGH);
digitalWrite(led7, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);

}

digitalWrite(led10, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
 delay(100);
}
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  

