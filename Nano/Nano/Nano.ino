#include <SoftwareSerial.h>
#include <Wire.h>
#include <HTInfraredSeeker.h>

const int cerca = 9;
const int lejos = 10;
const int gol = 7;

const int posecion = 5;

byte seccion = 0;
byte posicion = 0;
byte anterior = 0;

byte dis = 0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  InfraredSeeker::Initialize();
  pinMode(cerca,OUTPUT);
  pinMode(lejos,OUTPUT);
  pinMode(gol,OUTPUT);
  pinMode(posecion,OUTPUT);
  digitalWrite(posecion,LOW);
  
}

void loop() {

  //Llamar a funcion de pelota
  anterior = seccion;
  seccion = pelota(posicion, seccion);
  
  mandar();
  
}
