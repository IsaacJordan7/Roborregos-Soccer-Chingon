#include <SoftwareSerial.h>
#include <Wire.h>
#include <HTInfraredSeeker.h>


byte seccion = 0;
byte posicion = 0;
byte anterior = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  InfraredSeeker::Initialize();
}

void loop() {

  //Llamar a funcion de pelota
  anterior = seccion;
  seccion = pelota(posicion, seccion);
  
  mandar();
}
