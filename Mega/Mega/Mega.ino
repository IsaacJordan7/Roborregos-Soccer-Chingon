#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>


Adafruit_BNO055 bno = Adafruit_BNO055(55);

/*
  Ultrasonicos
  
  derecha 
  Echo = 8
  Triguer = 9;

  Izquierda 
  echo = 7
  triguer = 6
*/

volatile int contador = 0;
int n = contador;


 int velocidad = 115;

//Motor A
const int MA1 = 44;
const int MA2 = 46;
const int EN_A = 52;
const int PWMA = 4;

//Motor B
const int MB1 = 36;
const int MB2 = 48;
const int EN_B = 50;
const int PWMB = 5;

//Motor C
const int MC1 = 22;
const int MC2 = 30;
const int EN_C = 32;
const int PWMC = 3;

int xa = 150;
int xb = 150;
int xc = 150;
//Fotorresistencias

const int FR1 = A1;
const int FR2 = A2;
const int FR3 = A3;
const int FR4 = A4; //Enfrente
const int FR5 = A5; //
const int FR6 = A6;



//Leds Verificadores

const int prueba = 11;



const int a1 = 6;
const int a2 = 7;
const int a3 = 8;

byte seccion[2] = {0,0};
byte anterior = -1;

void setup() 
{
  Serial.begin(9600);

  //Initialise the sensor 
  if(!bno.begin())
  {
    //* There was a problem detecting the BNO055 ... check your connections */

  }
  
  delay(1000);
    
  bno.setExtCrystalUse(true);

  // MotorA
  pinMode(MA1,OUTPUT);
  pinMode(MA2,OUTPUT);
  pinMode(EN_A,OUTPUT);
  pinMode(PWMA,OUTPUT);

  //MotorB
  pinMode(MB1,OUTPUT);
  pinMode(MB2,OUTPUT);
  pinMode(EN_B,OUTPUT);
  pinMode(PWMB,OUTPUT);
  
  //MotorC
  pinMode(MC1,OUTPUT);
  pinMode(MC2,OUTPUT);
  pinMode(EN_C,OUTPUT);
  pinMode(PWMC,OUTPUT);

  //Fotorresistencias
  pinMode(FR1,INPUT);
  pinMode(FR2,INPUT);
  pinMode(FR3,INPUT);
  pinMode(FR4,INPUT); 
  pinMode(FR5,INPUT);
  pinMode(FR6,INPUT);

  pinMode(23,OUTPUT);
  
  digitalWrite(EN_B,HIGH);
  digitalWrite(EN_C,HIGH);
  digitalWrite(EN_A,HIGH);

  pinMode(a1,INPUT);
  pinMode(a2,INPUT);
  pinMode(a3,INPUT);


  pinMode(prueba,HIGH);
  digitalWrite(prueba,LOW);
  //Interrupcion
  pinMode(19,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(19), cont, FALLING);
}
 
void loop() 
{     
  
  if(Serial.available() ){
    Serial.readBytes(seccion,1);
  }
 
 gol();
 
 if (n != contador && contador > 1){   
  linea();
  n = contador ;
 }
  acomodoMotor(1);
    
}

void cont(){ 
    contador++;
}


// PORTERO
