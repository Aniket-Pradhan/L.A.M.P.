//PROGRAM MADE BY:
//  -ANIKET PRADHAN
//  -AAYUSH GUPTA
//  -ARAV MALIK
//  -SAI SANTOSH
//
//THE PROGRAM IS MADE FOR THE IED MINI PROJECT, I.E. THE SMART LAMP.
//IT USES VARIOUS SENSORS AND MOTORS FOR ITS WORKING.
//TO LOOK AT THE PROJECT FILES, HERE'S THE LINK: XXXXXXXXXXX

//HEADER FILES
#include <Servo.h>

//PIN INFO
//LED -> 3
//LDR -> A0
//SERVO -> 9

//GLOBAL VARIABLES
int ledpin = 3;
int ldrpin = A0;
int value = 0;
Servo myservo;
int t=0;
int trigPin = 2;
int echoPin = 4;
//int bluetoothTx = 1;
//int ledPin = 13;
//int bluetoothRx = 0;
//SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

//SETUP CODE
void setup() {
  myservo.attach(9);
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(echoPin,INPUT);    //Echo
  pinMode(trigPin,OUTPUT);    //Trigger
  digitalWrite(ledpin,LOW);
  digitalWrite(trigPin,LOW);
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
  value = analogRead(ldrpin);
  value = constrain(value,900,1010);
  value = map(value,900,1010,255,0);
  Serial.println(value);
  analogWrite(ledpin, value);
//  delay(30);
  
  //Add code for Switch
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
      digitalWrite(ledpin,HIGH);
      t=0;
    }
    else{
      digitalWrite(ledpin,LOW);
      t=1;
    }
  }
//  delay(150);
}

//TO-DO
//Test run on arduino
//Check delay
