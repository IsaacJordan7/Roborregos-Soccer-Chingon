void mandar(){

  
  if(anterior != seccion || dis > 128){
    Serial.write(seccion);
    Serial.write(dis);
  }
 



  
}
