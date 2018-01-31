#include <SoftwareSerial.h>
SoftwareSerial mySerial(0,1); 
int ledpin=13; 
int Data;
int Sensorvalue; 
void setup() 
{
  mySerial.begin(9600);
  pinMode(ledpin,OUTPUT);
}
void loop()
{
  //Read on Bluetooth
  if (mySerial.available())
  {
    Data=mySerial.read();
    if(Data=='1')
    {  
      digitalWrite(ledpin,HIGH);
      //mySerial.println("LED On! ");
    }
    else  if (Data=='0')
    {
      digitalWrite(ledpin,LOW); 
      //mySerial.println("LED Off! ");
    }
  }

  //Write on Bluetooth
  Sensorvalue = analogRead(A0);
  mySerial.println(Sensorvalue);
  mySerial.flush();
  delay(100);
  
}

