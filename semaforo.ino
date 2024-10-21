//aqui se declaran las variables correspondientes a cada led 
//y se les asigna el numero de salida que tienen en el arduino
int rojo = 13;
int amarillo = 10;
int verde = 8;


void setup() {
  // put your setup code here, to run once:
  //se configura cada pin para que sea de salida
  pinMode (rojo, OUTPUT);
  pinMode (amarillo, OUTPUT);
  pinMode (verde, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

   //led verde 
  //el led verde enciende, se queda encendido por 4000 milisegundos y se apaga
  digitalWrite(verde, HIGH);
  delay(4000);
  digitalWrite(verde, LOW);
  

  //led amarillo
  //el led amarillo enciende, permanece encendido 2000 milisegundos y se apaga
  digitalWrite(amarillo, HIGH);
  delay(2000);
  digitalWrite(amarillo, LOW);

  //con el ciclo for, el led amarillo parpadea 3 veces
  //enciende, permanece encendido 300 milisegundos, se apaga y permanece 
  //apagado 300 milisegundos y se repite el ciclo tres veces
  for(int i=0; i<3; i++){
  digitalWrite(amarillo, HIGH);
  delay(300);
  digitalWrite(amarillo, LOW);
  delay(300);
  digitalWrite(amarillo, LOW);
  }
  
  //led rojo
  //El led rojo enciende, permanece encendido 6000 milisegundos y se apaga
  digitalWrite(rojo, HIGH);
  delay(6000);
  digitalWrite(rojo, LOW);
  
}
