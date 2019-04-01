/*
  Semaforo: 
  Estado verde 6s
  Estado amarillo 2s- con 5 parpadeos de 0,4s
  Estado rojo 4s
  
  LED rojo pin 12
  LED amarillo pin 10
  LED verde pin 8
  Zumbador Pin 6
  
  Jose Pujol
  Octubre 2017
*/

// Declaracion de variables de tipo constante entero
const int ledRPin = 12; // LED rojo asociado al pin 12
const int ledAPin = 10; // LED amarillo asociado al pin 10
const int ledVPin = 8; // LED verde asociado al pin 8

const int zumbPin = 6; // zumbador asociado al pin 6

// la funcion set up se ejecuta una sola vez
void setup() {
  // inicializa los pines como una salida digital
  pinMode(ledRPin, OUTPUT);
  pinMode(ledAPin, OUTPUT);
  pinMode(ledVPin, OUTPUT);
  pinMode(zumbPin, OUTPUT);
}

// la funcion loop se ejecuta repetidamente de forma infinita
void loop() {
  // ESTADO SEMAFORO VERDE
  digitalWrite(ledRPin, LOW); // establece 0v en el pin del LED rojo
  digitalWrite(ledAPin, LOW); // establece 0v en el pin del LED amarillo
  digitalWrite(ledVPin, HIGH); // establece 5v en el pin del LED verde
  digitalWrite(zumbPin, LOW); // establece 0v en el pin del zumbador
  delay(6000);    // espera seis segundos

  // ESTADO SEMAFORO AMARILLO

  delay(2000);    // espera cuatro segundos
  // ESTADO SEMAFORO ROJO

  delay(4000);    // espera cuatro segundos
}
