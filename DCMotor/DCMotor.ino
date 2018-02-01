//UP -> 190
//DOWN -> 191

const int dcMotorPin = 6;
const int a = 6;
const int b = 7;

void setup() {
  //pinMode(dcMotorPin,OUTPUT);
  pinMode(dc_a,OUTPUT);
  pinMode(dc_b,OUTPUT);
  digitalWrite(dc_a,LOW);
  digitalWrite(dc_b,LOW);
  
}

void loop() {
  analogWrite(dcMotorPin,25);
  digitalWrite(dc_a,HIGH);
  digitalWrite(dc_b,LOW);
  delay(5000);
  digitalWrite(dc_a,LOW);
  digitalWrite(dc_b,LOW);
  delay(5000);
  digitalWrite(dc_a,LOW);
  digitalWrite(dc_b,HIGH);
  delay(5000);
  digitalWrite(dc_a,LOW);
  digitalWrite(dc_b,LOW);
  delay(5000);
}
