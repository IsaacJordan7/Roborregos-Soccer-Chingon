#include <NewPing.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

/*
    Atras
    Trigger: 25
    Eccho: 23
    
    Derecha
    Trigger: 11
    Echo: 12
    
    Izquierda
    Trigger: 10 
    Echo: 9 
*/
/*
const int trig1 = 11;
const int trig2 = 10;

const int echo1 = 12;
const int echo2 = 9;

*/

NewPing derecha(11,12,200);
NewPing izquierda(10,9,200);

Adafruit_BNO055 bno = Adafruit_BNO055(55);
unsigned long long tiempo;
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


 int velocidad = 120;

//Motor A
const int MA1 = 44;
const int MA2 = 46;
const int EN_A = 52;
const int PWMA = 4;

//Motor B
const int MB1 = 48;
const int MB2 = 36;
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




//Leds Verificadores





const int a1 = 6;
const int a2 = 7;
const int a3 = 8;

byte seccion[2] = {0,0};
byte anterior = -1;

byte lop = 0;

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
  
  digitalWrite(EN_B,HIGH);
  digitalWrite(EN_C,HIGH);
  digitalWrite(EN_A,HIGH);
  
  pinMode(a1,INPUT);
  pinMode(a2,INPUT);
  pinMode(a3,INPUT);

/*
  pinMode(trig1, OUTPUT);                  //supersónico izquierda
  pinMode(trig2, OUTPUT);


  pinMode(echo1, INPUT);                  //supersónico izquierda
  pinMode(echo2, INPUT);
*/
 

  //Interrupcion
  pinMode(19,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(19), cont, FALLING);
}
 
void loop() 
{     
 
 if(Serial.available() ){
   Serial.readBytes(seccion,2);
  }
 gol();
 
 if (n != contador && contador > 1){   
  n = contador ;
  linea();
 }
 
 acomodoMotor(1);
    
}


void cont(){ 
    contador++;
}


