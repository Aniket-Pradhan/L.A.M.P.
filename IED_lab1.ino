int led =13;
int t=0;
int trigPin = 2;
int echoPin = 4;
void setup() {
pinMode(led,OUTPUT);
pinMode(echoPin,INPUT);    //Echo
pinMode(trigPin,OUTPUT);    //Trigger
digitalWrite(led,LOW);
Serial.begin(9600);
digitalWrite(trigPin,LOW);
}
void loop() {
  int time2,tim;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin,LOW); 
  time2 = pulseIn(echoPin,HIGH);
  tim = time2/2;
  int dist = 0.034*tim;
  Serial.println(dist);
  if (dist<20 && dist>0){
    if (t==1){
      digitalWrite(led,HIGH);
      t=0;
    }
    else{
      digitalWrite(led,LOW);
      t=1;
    }
  }
  delay(150);
}
