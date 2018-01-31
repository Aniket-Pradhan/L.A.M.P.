//HEADER FILES
#include <Servo.h>

//GLOBAL VARIABLES
Servo myservo;
int bluetoothTx = 1;
//int ledPin = 13;
int bluetoothRx = 0;
//SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

//SETUP CODE
void setup() {
  myservo.attach(9);
  Serial.begin(9600);
//  pinMode(ledPin, OUTPUT);
//  bluetooth.begin(9600);
}

//LOOPING CODE
void loop() {
  if(Serial.available() > 0){
    int toSend = Serial.read();
    if(toSend == 190){
      //Move dc motor UP
    }
    if(toSend == 191){
      //Move dc motor down
    }
    if(toSend == 192){
      //Move dc motor to default location
    }
    Serial.print(toSend);
    Serial.print("\n");
    myservo.write(toSend);
  }
  //Add code for LDR
  //Add code for Switch
}
