/*
        Movimiento de motores y direcciones

        Motor A:

        Motor B:
            MOVIMIENTO IZQUIERDA
            *MB1 LOW
            *MB2 HIGH

            Movimiento Derecha
            *MB1 HIGH
            *MB2 LOW
        
        Motor C:
        
*/



void acomodoMotor(int retardo){

double angulo = acomodoAngular(), angulo2 = angulo;

//Falta ver si en algun punto te da angulos negativos
  
   if(angulo > 15 && angulo < 345){
        if(angulo <= 180)
        {
         
          
            digitalWrite(MA1,LOW);
            digitalWrite(MA2,HIGH);
            analogWrite(PWMA,xa);

            digitalWrite(MB1,HIGH);
            digitalWrite(MB2,LOW);
            analogWrite(PWMB,xb);

            digitalWrite(MC1,LOW);
            digitalWrite(MC2,HIGH);
            analogWrite(PWMC,xc);

            
           
           
         
        }
        else{
          
            digitalWrite(MA1,HIGH);
            digitalWrite(MA2,LOW);
            analogWrite(PWMA,xa);

            digitalWrite(MB1,LOW);
            digitalWrite(MB2,HIGH);
            analogWrite(PWMB,xb);

            digitalWrite(MC1,HIGH);
            digitalWrite(MC2,LOW);
            analogWrite(PWMC,xc);
          
        }


        delay(retardo);
        digitalWrite(MA1,LOW);
        digitalWrite(MA2,LOW);
        analogWrite(PWMA,xa);

        digitalWrite(MB1,LOW);
        digitalWrite(MB2,LOW);
        analogWrite(PWMB,xb);

        digitalWrite(MC1,LOW);
        digitalWrite(MC2,LOW);
        analogWrite(PWMC,xc);
  
    }

   
  
}


void lineamotor(int blanco){
digitalWrite(cal,HIGH);
 //double der = 0, izq = 0;
 /*digitalWrite(cal,HIGH);
 digitalWrite(MA1,LOW);
 digitalWrite(MA2,LOW);
 analogWrite(PWMA,0);

 digitalWrite(MB1,LOW);
 digitalWrite(MB2,LOW);
 analogWrite(PWMB,0);

 digitalWrite(MC1,LOW);
 digitalWrite(MC2,LOW);
 analogWrite(PWMC,0);
 delay(5);
*/

 acomodoMotor(5);
/*
 if(blanco != 1 && blanco != 4){
  if(porderecha){
    if(blanco < 3){
      blanco = 2;
    }
    else{
        blanco = 3; 
     }
  }
  else if(porizquierda){
    if(blanco < 3){
        blanco = 0;
        
    }
    else{
        blanco = 5;
        
    }
  }
 }
 */
 
/*
 der = derecha.ping_cm();
 izq = izquierda.ping_cm();
 
 if((der + izq) >= 140 && (blanco != 1 && blanco != 4)){
  if(der < izq){
    if(blanco < 3){
      blanco = 2;
    }
    else{
        blanco = 3; 
     }
  }
  else{
      if(blanco < 3){
        blanco = 0;
        
      }
      else{
        blanco = 5;
        
      }
  
  }
  
 }
 */
 switch(blanco){

  
    case 0:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,0);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,velocidad);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,velocidad);
      break;


      case 1:
    
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,velocidad);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,velocidad);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
        
      break;
 
     
     
      case 2:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,velocidad);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,velocidad);
      break;

      //ATRAS
      case 3:
      
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,0);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,velocidad);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,velocidad);
      break;

      //Es el 1
      case 4:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,velocidad);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,velocidad);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);

      analogWrite(PWMB,0);
      
      
      
      
      break;

      //Es el 2
      case 5:
      
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,velocidad);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,velocidad);
      break;
     
  }
delay(130);
digitalWrite(cal,LOW);
tiempo = millis();
while(millis() < tiempo + 400){
  if (n != contador){   
  n = contador ;
  linea();
 
 }
}
 //Apagado de todos los motores
 digitalWrite(MA1,LOW);
 digitalWrite(MA2,LOW);
 analogWrite(PWMA,0);
 


 digitalWrite(MB1,LOW);
 digitalWrite(MB2,LOW);
 analogWrite(PWMB,0);

 digitalWrite(MC1,LOW);
 digitalWrite(MC2,LOW);
 analogWrite(PWMC,0);
 
 }

/*
void gps(){
  double der = 0, izq = 0; 
  
    
  der = derecha.ping_cm();
  izq = izquierda.ping_cm();

  if((der + izq) >= 140 && (der + izq) <= 200){

    if(izq <= 75){
      porderecha = false;
      porenfrente = false;
      porizquierda = true;
    }
    else if(der <= 75){
      porderecha = true;
      porenfrente = false;
      porizquierda = false;
    }
    else{
      porderecha = false;
      porenfrente = true;
      porizquierda = false;
    }
  }
}
  */
