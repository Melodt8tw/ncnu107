#define led1 9
#define led2 10
#define led3 11

const int buttonPin = 2;
int mode=0;
int buttonState = 0;


void setup() {
  Serial.begin(9600) ;
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);

}

void loop() {

 buttonState= digitalRead(buttonPin);
 if (buttonState == 0) 
  {
    mode ++ ;
    if (mode > 2)
    {
        mode = 0 ;
    }
  }
  
  Serial.println(mode) ;


 if (mode == 0)
 {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  }
 if (mode == 1)
 {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  }
 if (mode == 2)
 {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  }
 delay(100) ;
 }

