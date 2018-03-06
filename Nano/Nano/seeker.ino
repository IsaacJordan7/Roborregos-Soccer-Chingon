
/*
  Funcion: Funcion que calcula la seccion en la que esta y si esta cerca o lejos
  Parametros: Recibe como parametro por referencia un byte de posicion que se modificara a 1 o a 0 dependiendo se esta cerca o lejos
  Retorno: retorna la seccion en la que esta;
*/
byte pelota(byte &posicion, byte seccion){

  //Declaracion de variables
  int direccion[10]{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int fuerza[15], maximo = 0, pos = 0;
  double distancia = 0;

  //For que lee 10 lecturas
  for(int i = 0; i < 15; i++){
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    direccion[InfraredBall.Direction]++; 
    fuerza[i] = InfraredBall.Strength;
  }

  //Quicksort al arreglo
  Quicksort(fuerza, 0, 14);
  // 0 1 2 3 {4 5 6 7 8 9 10} 11 12 13 14
  //media de las posiciones
  for(int i = 4; i < 11; i++){
  distancia += fuerza[i];
  }
  
  distancia /= 7;

  //Modificar byte de que tan lejos esta
  if(distancia < 80){
    posicion = 10;
  }
  else{
    posicion = 11;
  }

  //Buscar la posicion que mas se repita
  for(int i = 0; i < 10; i++){
   
      if(direccion[i] > maximo){
        maximo = direccion[i];
        pos = i;
      }
  }
return pos; 
}


/*
  Funcion: La funcion regresa el angulo en el que se encuentra la pelota conforme al sensor
  Parametro: Recibe como parametro un byte de direccion {Especificamente: del 1 al 9}
  Retorno: Retorna el valor del angulo de tipo entero{-120, -90, -60, -30, 0, 30, 60, 90, 120} el valor de de no detectar la pelota es de 150
*/
int DirectionAngle(byte Direction)
{
  return Direction * 30 - 150;
}


/*
  Funcion: La funcion regresa un arreglo ordenado:
  Parametro: recibe como parametro un arreglo
  Retorno: Retorna el arreglo ya ordenado
*/
void Quicksort(int* arr, int izq, int der) 
{ 
     int i = izq, j = der, tmp; 
     int p = arr[(izq + der) / 2]; 

     while (i <= j) 
     { 
          while (arr[i] < p) i++; 
          while (arr[j] > p) j--; 
          if (i <= j) 
           { 
               tmp = arr[i]; 
               arr[i] = arr[j]; 
               arr[j] = tmp; 
               i++; j--; 
          } 
     } 

     if (izq < j) 
          Quicksort(arr, izq, j); 
     if (i < der) 
          Quicksort(arr, i, der); 
} 
