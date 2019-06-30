/*

*/

const int ledAmarelo = 8;
const int ledVerde = 7;
const int ledVermelho = 9;
const int ledVermelhoDireita = 10;
const int ledVermelhoEsquerda = 11;
const int buzzRobo = 6;
const int buzzSensor = A0;


void setup() {
  pinMode(ledAmarelo,OUTPUT); 
  pinMode(ledVerde,OUTPUT); 
  pinMode(ledVermelho,OUTPUT); 
  pinMode(ledVermelhoDireita,OUTPUT); 
  pinMode(ledVermelhoEsquerda,OUTPUT); 
  pinMode(buzzRobo,OUTPUT); 
  pinMode(buzzSensor,OUTPUT); 
}

void loop() {
  digitalWrite(ledVermelho,HIGH);
  delay(500);
  
  digitalWrite(ledVermelho,LOW);   
  digitalWrite(ledAmarelo,HIGH);
  delay(500);
  
  digitalWrite(ledAmarelo,LOW);  
  digitalWrite(ledVerde,HIGH);
  delay(500); 
  
  digitalWrite(ledVerde,LOW);  
  digitalWrite(ledVermelhoDireita,HIGH);
  digitalWrite(ledVermelhoEsquerda,HIGH);
  delay(500);
  
  digitalWrite(ledVermelhoDireita,LOW);
  digitalWrite(ledVermelhoEsquerda,LOW); 

  delay(300);
/*   tone(buzzRobo, 300, 300);   tone(buzzSensor, 300, 300);*/
  
}
