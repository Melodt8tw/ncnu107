#define Rled 9
#define Gled 11
#define Bled 10
void setup() {

}

void loop() {
analogWrite(Gled,0);
analogWrite(Bled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Rled,i);
  delay(100);
   }
   delay(500);
   
analogWrite(Rled,0);
analogWrite(Bled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Gled,i);
  delay(100);
   }
   delay(500);

analogWrite(Rled,0);
analogWrite(Gled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Bled,i);
  delay(1000);
   }
   delay(500);
   
analogWrite(Bled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Rled,i);
 analogWrite(Gled,i);
  delay(1000);
   }
   delay(500);

analogWrite(Rled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Bled,i);
 analogWrite(Gled,i);
  delay(100);
   }
   delay(500);

analogWrite(Gled,0);
for(int i=0;i < 256;i++)
 {analogWrite(Bled,i);
 analogWrite(Rled,i);
  delay(100);
   }
   delay(500);
   
   
}

