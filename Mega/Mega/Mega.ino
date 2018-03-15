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
const int MA1 = 52;
const int MA2 = 53;
const int EN_A = 47;
const int PWMA = 2;

//Motor B
const int MB1 = 48;
const int MB2 = 49;
const int EN_B = 44;
const int PWMB = 3;

//Motor C
const int MC1 = 36;
const int MC2 = 37;
const int EN_C = 30;
const int PWMC = 4;

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



const int a1 = 8;
const int a2 = 9;
const int a3 = 10;

byte seccion[2] = {0,0};

void setup() 
{
  Serial.begin(9600);
  Serial.println("Orientation Sensor Test"); 
  Serial.println("");
  
  //Initialise the sensor 
  if(!bno.begin())
  {
    //* There was a problem detecting the BNO055 ... check your connections */
    Serial.println("J");
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

  pinMode(12,OUTPUT);
  
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

 /*
    Linea
 */
 

 if (n != contador){   
  linea();
  n = contador ;
 }

 
  acomodoMotor(1);

   
  
}

void cont(){ 
    contador++;
}

