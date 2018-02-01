int ledpin = 11;
int ldrpin = A1;
int value = 0;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(ldrpin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  value = analogRead(ldrpin);
  value = constrain(value,0,255);
  value = map(value,0,255,255,50);

  Serial.println(value);
//  Serial.println("1");
//  Serial.println(value1);
//  Serial.println("2");
//  Serial.println(value2);
  analogWrite(ledpin, value);

  delay(500);
}

