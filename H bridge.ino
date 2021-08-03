// C++ code
//
int en1=10;
int in1=8;
int in2=7;
int en2=3;
int in3=4;
int in4=5;
 void setup()
 {
   
   pinMode(en1,OUTPUT);
   pinMode(en2,OUTPUT);
   pinMode(in1,OUTPUT); 
   pinMode(in2,OUTPUT);
   pinMode(in3,OUTPUT);
   pinMode(in4,OUTPUT);
 }
void loop()
{
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}
void directionControl()
{
  analogWrite(en1,190);
  analogWrite(en2,190);
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   digitalWrite(in3,HIGH);
   digitalWrite(in4,LOW);
  delay(2000);
  
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
   digitalWrite(in3,LOW);
   digitalWrite(in4,HIGH);
  delay(2000);
}
void speedControl()
{
  
  for(int i =0; i>= 200;i++){
     analogWrite(en1,i);
     analogWrite(en2,i);
    delay(20);
    
  }
   
  for(int i =200; i>= 0;i--){
     analogWrite(en1,i);
     analogWrite(en2,i);
    delay(20);
  }
}
   