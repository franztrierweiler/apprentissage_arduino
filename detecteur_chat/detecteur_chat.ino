
/*
 * Détecteur de chat
 */

#include <EEPROM.h>
#define RAZ_COMPTEUR

int ledPin = 13;                // choose the pin for the LED
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status
int nombre_passages_kowloon; // Nombre de fois où Kowloon est passé devant sa gamelle de croquette
int temps = 0;
char affichage[100];
int temps_lu;

void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  pinMode(7,OUTPUT);
  Serial.begin(9600);

  #ifdef RAZ_COMPTEUR
    EEPROM.write(0,0);
    EEPROM.write(1,0);
  #endif
}

void loop(){

  temps_lu = EEPROM.read(0);
  nombre_passages_kowloon = EEPROM.read(1);
  sprintf(affichage, "Kowloon a bougé à %d secondes pour la %d ème fois", temps_lu, nombre_passages_kowloon);
  Serial.println(affichage);

  val = digitalRead(inputPin);  // read input value
  //Serial.println(val);

  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;

      digitalWrite(7,HIGH);
      nombre_passages_kowloon ++;
      Serial.println(nombre_passages_kowloon);
      EEPROM.write(0, temps);
      EEPROM.write(1, nombre_passages_kowloon);
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
      digitalWrite(7,LOW);
    }
  }
  
  delay (1000);
  temps++;
}
