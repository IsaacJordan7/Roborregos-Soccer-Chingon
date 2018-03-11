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



void acomodoMotor(){

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


        delay(2);
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

  digitalWrite(12,HIGH);
  

  
  switch(blanco){

      //Linea de atras : vamos al frente
      case 0:
      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,xc);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,xb);  

      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,0);
                 
      break;

      case 1:
    
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,xa);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,xb);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);
        
      break;
      
      //ENFRENTE
      case 2:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,xa);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,xc);  

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
      break;

      //ATRAS
      case 3:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,xa);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,xc); 
           
      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
       
      break;

      //Es el 1
      case 4:
      
      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,xc);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,xb);

      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,0);
      
      break;

      //Es el 2
      case 5:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,xa);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,xb);  

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);
      break;
  }
 delay(350); 
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
 
 digitalWrite(12,LOW);
 
 }

  
