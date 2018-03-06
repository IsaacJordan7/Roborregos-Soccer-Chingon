int sensor1[4];
int sensor2[4];
int sensor3[4];
int sensor4[4];
int sensor5[4];
int sensor6[4];

void linea(){

  int resultados[6] {0,0,0,0,0,0};
  
  for(int i = 0; i < 4; i++){
    sensor1[i] = analogRead(FR1);
    sensor2[i] = analogRead(FR2);
    sensor3[i] = analogRead(FR3);
    sensor4[i] = analogRead(FR4);
    sensor5[i] = analogRead(FR5);
    sensor6[i] = analogRead(FR6);
  }
 
  Quicksort(sensor1,0,3);
  Quicksort(sensor2,0,3);
  Quicksort(sensor3,0,3);
  Quicksort(sensor4,0,3);
  Quicksort(sensor5,0,3);
  Quicksort(sensor6,0,3);

  /*resultados[0] = (sensor1[1] + sensor1[2])/2;
  resultados[1] = (sensor2[1] + sensor2[2])/2;
  resultados[2] = (sensor3[1] + sensor3[2])/2;
  resultados[3] = (sensor4[1] + sensor4[2])/2;
  resultados[4] = (sensor5[1] + sensor5[2])/2;
  resultados[5] = (sensor6[1] + sensor6[2])/2;
*/
 
 

 for(int i = 0; i < 6; i++){
 
  if(resultados[i] <= 750){
   lineamotor(i);
    break;
  }
 }
 
 
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
