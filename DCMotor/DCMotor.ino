//UP -> 190
//DOWN -> 191

const int pwm = 3;
const int a = 6;
const int b = 7;

void setup() {
  //pinMode(pwm,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  
}

void loop() {
  analogWrite(pwm,25);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  delay(5000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  delay(5000);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(5000);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  delay(5000);
}
