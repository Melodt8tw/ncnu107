#define led1 9
#define led2 10
#define led3 11

const int buttonPin = 2;
int mode=0;
int buttonState=0;

void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buttonPin, INPUT);
 

}

void loop() {
  
 buttonState = digitalRead(buttonPin);
int buttonState=mode;
 for (int mode=0 ;mode <= 2 ; mode=mode++ )
 if (mode = 0);
 digitalWrite(led1,HIGH);
 if (mode = 1);
 digitalWrite(led2,HIGH);
 if (mode = 2);
 digitalWrite(led3,HIGH);

 if (mode > 2);
 mode = 0;
  
}
