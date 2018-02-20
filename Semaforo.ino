/*El siguiente codigo representa la funcionalodad de dos semaforos
 * Un semaforo de peatones y un semaforo para los carros o para 
 * controlar el trafico, una de las funciones que desempeña es que 
 * al momento de apretar el pulsador, cambia el estado de los semaforos
 * para secerle el paso al peaton, por un determinado tiempo, y una vez 
 * concluido, regresa al ciclo definido desde un principo.
 * 
 */

int pulsador=1;// Se decalran los pines que se van a utilizar mediante unas variables
int semaforo1=2;
int semaforo2=3;
int semaforo3=4;
int semaforo4=5;
int semaforo5=6;
int estado=0;//En esta variable se ara la comparacion al momento de pulsar el boton
int valor=0;//En esta variable se declara para asignarle el valor del potenciometro 




void setup() {
  //En esta parte se inicializan todas las variables que se utilizaran y de que tipo son
  //Ya sean entradas o salidas.
  pinMode(semaforo1,OUTPUT);
  pinMode(semaforo2,OUTPUT);
  pinMode(semaforo3,OUTPUT);
  pinMode(semaforo4,OUTPUT);
  pinMode(semaforo5,OUTPUT);
  pinMode(pulsador, INPUT);
  
}

void loop() {
  valor=analogRead(A1);//En esta instruccion lee el valor del puerto analogico A1 que es el valor del potenciometro 

  //Se realiza la comparacion al momento de pulsar el boton y la variable cambia de valor 
  if(digitalRead(pulsador)==HIGH){
     estado==1;   
    }else{
     estado==0;
  }

  //En esta comparacion se realiza el cambio de las luces del semaforo, de acuerdo a la variable estado
  if(estado==1){
      //En esta seccion entra cuando se pulso el boton, y realiza el cambio de las luces mediante el digitalWrite
      //En el cual prendemos y apagamos los leds en un cierto tiempo y cambiando la combinacion de cuales encienden o apagan
      //La variable "valor", es la cual controla el tiempo en que se realiza la secuencia, mediante el cambio de valor del potenciometro 
      digitalWrite(semaforo4, LOW);
      digitalWrite(semaforo1, LOW);
      delay(valor);
      digitalWrite(semaforo1, HIGH);
      for(int a=0; a<3; a++){ //Controla el parpadeo de la luz amarilla para darle mas relismo a su funcion
      digitalWrite(semaforo2, HIGH);
      delay(valor);
      digitalWrite(semaforo2, LOW);
      delay(valor);
      }
      digitalWrite(semaforo4, HIGH);
      digitalWrite(semaforo5, LOW);
      digitalWrite(semaforo3, LOW);
      delay(valor);
      digitalWrite(semaforo3, HIGH);
      digitalWrite(semaforo5, HIGH);
    }else{//En caso de no pulsar el boton esta secuencia se realizara
          //al igual cuando el arduino enciende entra en esta secuencia por default 
      digitalWrite(semaforo4, HIGH);
      digitalWrite(semaforo1, HIGH);
      delay(valor);
      digitalWrite(semaforo1, LOW);
      for(int a=0; a<3; a++){ 
      digitalWrite(semaforo2, HIGH);
      delay(valor);
      digitalWrite(semaforo2, LOW);
      delay(valor);
      }
      digitalWrite(semaforo4, LOW);
      digitalWrite(semaforo5, HIGH);
      digitalWrite(semaforo3, HIGH);
      delay(valor);
      digitalWrite(semaforo3, LOW);
      digitalWrite(semaforo5, LOW);
      
      }
           
}
  
  
      
  

