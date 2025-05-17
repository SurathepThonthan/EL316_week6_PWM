Lab 2
 
int EN = 9;
 
int IN1 = 7;
 
int IN2 = 6;
//POT = A0;
 
int Read = 0;
 
void setup()
 
{
 
  pinMode(EN, OUTPUT);
 
  pinMode(IN1, OUTPUT);
 
  pinMode(IN2, OUTPUT);
 
  //pinMode(POT, INPUT);
 
  analogWrite(EN,0);
 
  digitalWrite(IN1, LOW);
 
  digitalWrite(IN2, LOW);
 
  Serial.begin(9600);
 
}
 
void loop()
 
{
 
  delay(10); // Wait for 1000 millisecond(s)
 
  Read = analogRead(A0);
 
  //Read = map(Read, 0, 1023, 0, 255);
 
  Serial.println(Read);
 
  if(Read >512){
 
    digitalWrite(IN1, 0);
 
    digitalWrite(IN2, 1);
 
    //analogWrite(A0);
 
  }
 
  else if (Read < 512){
 
  	digitalWrite(IN1, 1);
 
    digitalWrite(IN2, 0);
 
    //analogWrite(A0);
 
  }
 
  else{
 
    digitalWrite(IN1, 0);
 
    digitalWrite(IN2, 0);
 
    //analogWrite(EN,0);
 
  }
 
}
 