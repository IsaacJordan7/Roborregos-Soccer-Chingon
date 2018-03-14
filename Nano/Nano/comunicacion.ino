void mandar(){

  
  if(anterior != seccion){
    Serial.write(seccion);
    digitalWrite(posecion,HIGH);
  }
  else{
    digitalWrite(posecion,LOW);
  }



  
}
