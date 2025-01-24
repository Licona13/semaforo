#SEMAFORO

Semáforo con Arduino
Este proyecto es una simulación de un semáforo usando 3 LEDs (rojo, amarillo y verde). 
El código hace que los LEDs se enciendan y apaguen como un semáforo real.

Componentes:
1 Arduino 
3 LEDs: Rojo, Amarillo y Verde
3 resistencias de 220 ohms
Cables jumpers y protoboard 

Conexión:
LED Rojo: se conecta al pin 13 del Arduino
LED Amarillo: se conecta al Pin 10
LED Verde: se conecta al Pin 8

Funcionamiento:
Led Verde: Se enciende 4 segundos.
Led Amarillo: Se enciende 2 segundos y luego parpadea 3 veces.
Led Rojo: Se enciende 6 segundos.
Luego se repite todo el ciclo.

Instrucciones:
Conectar el Arduino y abrir  el código en el IDE de Arduino.
Cargar el código a la placa Arduino.
Al cargarse el programa los LEDs deberían comenzar a encenderse y apagarse como un semáforo.