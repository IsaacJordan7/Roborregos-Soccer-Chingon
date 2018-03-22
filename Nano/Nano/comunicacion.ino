void mandar(){

  

  
  
  
  if(anterior != seccion || estadoanterior != estado){
    Serial.write(seccion);
    Serial.write(dis);
    estadoanterior = estado;
    anterior = seccion;
  }
 



  
}
