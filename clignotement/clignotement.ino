/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int etat_bouton;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode (7, OUTPUT); // Pin 7 est une sortie.
  pinMode (8, OUTPUT); // Pin 8 est une sortie.
  pinMode (6, OUTPUT); // Pin 6 est une sortie.
  pinMode (5, OUTPUT); // Pin 5 est une sortie.
  pinMode (4, INPUT); // Pin 4 est une entrée.
}

// the loop function runs over and over again forever
void loop() {
  

  etat_bouton= digitalRead (4);// Lire la broche 4
  if (etat_bouton == HIGH)
  {
    digitalWrite (8, HIGH); // Tournez la LED sur la broche 8.
    delay (100); // Attendre 2000 millisecondes.
    digitalWrite (8, LOW); // Tournez la LED sur la broche 8.
    
    digitalWrite (7, HIGH); // Tournez la LED sur une Broche 7.
    delay(100); // Attendre 2000 millisecondes.
    digitalWrite (7, LOW); // Tournez la LED sur Broche 7.
    
    digitalWrite (6, HIGH);// Tournez la LED sur broche 6.
    delay(100);
    digitalWrite (6, LOW); // Tournez la LED sur broche 6.
    
    digitalWrite (5, HIGH); // Tournez la LED sur une Broche 5.
    delay(100); // Attendre 2000 millisecondes.
    digitalWrite (5, LOW); // Tournez la LED sur Broche 5.

  
  }
  
  
}
