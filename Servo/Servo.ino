#include <Servo.h>

Servo myservo;
int bluetoothTx = 1;
int ledPin = 13;
int bluetoothRx = 0;

//SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

int i = 90;

void setup() {
  pinMode(ledPin, OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);
//  bluetooth.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    int toSend = Serial.read();
//    if(toSend == 0){
////      toSend = 180;
//      digitalWrite(ledPin,LOW);
//    }
//    else if(toSend == 1){
//      digitalWrite(ledPin,HIGH);
////      toSend = 30;
//    }
    Serial.print(toSend);
    Serial.print("\n");
    myservo.write(toSend);
  }    
}
