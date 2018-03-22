

void linea(){
   int b1 = digitalRead(a1);
   int b2 = digitalRead(a2);
   int b3 = digitalRead(a3);

  if(b3 == 0 && b2 == 0 && b1 ==0){
    lineamotor(0);
    
  }
  else if(b3 == 0 && b2 == 0 && b1 ==1){
    lineamotor(1);
  }
  else if(b3 == 0 && b2 == 1 && b1 ==0){
    lineamotor(2);
    
  }
  else if(b3 == 0 && b2 == 1 && b1 ==1){
    lineamotor(3);
    
  }
  else if(b3 == 1 && b2 == 0 && b1 ==0){
    lineamotor(4);
  }
  else{
    lineamotor(5);
  }

}

