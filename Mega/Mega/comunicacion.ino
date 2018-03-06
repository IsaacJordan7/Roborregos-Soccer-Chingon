
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


void gol(){
  int op = seccion[0];
  switch(op){

      /*case 0:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,90);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,93);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
*/
      
      break;

    /* case 1:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,240);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,240);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,80);  
     break;
     //Aparentemente ya quedo
     //Caso: -105
     case 2:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,200);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,200);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,93);    
     break;

     //Aparentemente ya quedo
     //Caso: -60°
     case 3:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,200);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,200);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,200);
     
     break;

     //Aparentemente ya quedo
     //Caso de -30°
     */
     
     case 4: 
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,90);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,180);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,HIGH);
      analogWrite(PWMB,90);
      
      break; 
<<<<<<< HEAD
        /*  
=======
          
<<<<<<< HEAD
      
>>>>>>> a93d18c104dbdeb730b1b0e7db5579dcfd9809c0
=======
>>>>>>> 86310898aef8fac6a6b0617b4ab8e19d31eda96b
      //Aparentemente ya quedo
      case 5:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,90);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,95);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
<<<<<<< HEAD
      analogWrite(PWMB,0);
=======
      analogWrite(PWMB,xb);
<<<<<<< HEAD
      
>>>>>>> a93d18c104dbdeb730b1b0e7db5579dcfd9809c0
=======
>>>>>>> 86310898aef8fac6a6b0617b4ab8e19d31eda96b
      break;
      
      //Aparentemente ya quedo
      //Caso de 30°
      case 6:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,80);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,80);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,240);
      
      break;

      //Aparentemente ya quedo
      //Caso de 60
      case 7:
      digitalWrite(MA1,HIGH);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,200);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,HIGH);
      analogWrite(PWMC,200);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,200);
      break;

      //Ya quedo
      //Caso de 105
      case 8:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,200);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,200);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,93);
      break;
      
      //Ya quedo
      //Caso de 150
      case 9:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,240);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,240);

      digitalWrite(MB1,HIGH);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,80);
      break;*/

      default:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,HIGH);
      analogWrite(PWMA,0);

      digitalWrite(MC1,HIGH);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
      break;
    
  }
  
}
