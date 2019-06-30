/*

*/

const int ledAmarelo = 8;
const int ledVerde = 7;
const int ledVermelha = 9;
const int ledVermelhaDireita = 10;
const int ledVermelhaEsquerda = 11;
const int buzzRobo = 6;
const int buzzSensor = A0;
const int limiteSom = 100;

int leituraSensor = 0;      
int estadoLuzes = LOW;


void setup() {
  pinMode(ledAmarelo,OUTPUT); 
  pinMode(ledVerde,OUTPUT); 
  pinMode(ledVermelha,OUTPUT); 
  pinMode(ledVermelhaDireita,OUTPUT); 
  pinMode(ledVermelhaEsquerda,OUTPUT); 
  pinMode(buzzRobo,OUTPUT); 
 // pinMode(buzzSensor,INPUT); 

  Serial.begin(9600);       // use the serial port
}

void loop() {
  leituraSensor = analogRead(buzzSensor);

  // if the sensor reading is greater than the threshold:
  if (leituraSensor >= limiteSom) {
    // toggle the status of the ledPin:
    estadoLuzes = !estadoLuzes;
    // update the LED pin itself:
    digitalWrite(ledVermelhaDireita, estadoLuzes);
    digitalWrite(ledVermelhaEsquerda, estadoLuzes);
    
    // send the string "Knock!" back to the computer, followed by newline
    Serial.println("Alguém em casa?");
  }
  delay(100);  // delay to avoid overloading the serial port buffer
  
}
