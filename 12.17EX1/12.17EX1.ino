#define ALED 13
#define BLED 12
#define CLED 11
#define DLED 10
#define ELED 9


void setup() {
  // put your setup code here, to run once:
  pinMode(ALED, OUTPUT);
  pinMode(BLED, OUTPUT);
  pinMode(CLED, OUTPUT);
  pinMode(DLED, OUTPUT);
  pinMode(ELED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ALED, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000); 
   digitalWrite(CLED, HIGH);// wait for a second
   digitalWrite(ALED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);
   digitalWrite(BLED, HIGH);// wait for a second
   digitalWrite(CLED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);
   digitalWrite(DLED, HIGH);// wait for a second
   digitalWrite(BLED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);
   digitalWrite(ELED, HIGH);// wait for a second
   digitalWrite(DLED, LOW);    // turn the LED off by making the voltage LOW
   delay(1000);
   digitalWrite(ELED, LOW); 

   digitalWrite(ALED, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500); 
   digitalWrite(CLED, HIGH);// wait for a second
   digitalWrite(ALED, LOW);    // turn the LED off by making the voltage LOW
   delay(250);
   digitalWrite(BLED, HIGH);// wait for a second
   digitalWrite(CLED, LOW);    // turn the LED off by making the voltage LOW
   delay(250);
   digitalWrite(DLED, HIGH);// wait for a second
   digitalWrite(BLED, LOW);    // turn the LED off by making the voltage LOW
   delay(250);
   digitalWrite(ELED, HIGH);// wait for a second
   digitalWrite(DLED, LOW);    // turn the LED off by making the voltage LOW
   delay(250);
   digitalWrite(ELED, LOW); 

}
