void mandar(){

  if(seccion == 5 && dis > 138){
    digitalWrite(posecion,HIGH);
    seccion = 6;
  }
  else{
    digitalWrite(posecion,LOW);
  }
  
  if(anterior != seccion){
    
    Serial.write(seccion);
  }
}
