// C++ code
#define soil_moist A4

#define motor1a 11
#define motor1b 10


void setup()
{
  Serial.begin(9600);
  pinMode(soil_moist,INPUT);
  
  pinMode(motor1a,OUTPUT);
  pinMode(motor1b,OUTPUT);
  
}

void loop()
{
  int moist=analogRead(soil_moist);
  Serial.println(moist);
  if(moist>100){
     digitalWrite(motor1a,HIGH);
     digitalWrite(motor1b,LOW);
    
  }
  else{
      digitalWrite(motor1a,LOW);
      digitalWrite(motor1b,LOW);
  }
  delay(10);
}
