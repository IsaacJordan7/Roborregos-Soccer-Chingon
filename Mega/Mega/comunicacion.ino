
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
  int op = (int)seccion[0];
  switch(op){

      
      case 0:
     
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
      
      
      

     case 1:
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
     
     //Aparentemente ya quedo
     //Caso: -105
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
     
     //Aparentemente ya quedo
     //Caso: -60°
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

     //Aparentemente ya quedo
     //Caso de -30°
    
     case 4: 
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

       

          

      

      //Aparentemente ya quedo
      case 5:
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
      
      //Aparentemente ya quedo
      //Caso de 30°
      case 6:
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

      //Aparentemente ya quedo
      //Caso de 60
      case 7:
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

      //Ya quedo
      //Caso de 105
      case 8:
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
      
      //Ya quedo
      //Caso de 150
      case 9:
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

      default:
      digitalWrite(MA1,LOW);
      digitalWrite(MA2,LOW);
      analogWrite(PWMA,0);

      digitalWrite(MC1,LOW);
      digitalWrite(MC2,LOW);
      analogWrite(PWMC,0);

      digitalWrite(MB1,LOW);
      digitalWrite(MB2,LOW);
      analogWrite(PWMB,0);
      break;
    
  }
  
}
