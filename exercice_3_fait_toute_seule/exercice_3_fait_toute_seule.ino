void setup() {
  // put your setup code here, to run once:
  pinMode (8, OUTPUT); // Pin 8 est une sortie.
  pinMode (7, OUTPUT); // Pin 7 est une sortie.
  pinMode (6, OUTPUT); // Pin 6 est une sortie.
  pinMode (5, OUTPUT); // Pin 5 est une sortie.
  pinMode (4, OUTPUT); // Pin 4 est une sortie.
  pinMode (3, OUTPUT); // Pin 3 est une sortie.
}

void loop() {
  // put your main code here, to run repeatedly:
  //---- violet ---
  digitalWrite(8,HIGH); // allume la couleur voulue
  digitalWrite(6,HIGH); // allume la couleur voulue
  delay(1000); // pause
  digitalWrite(8,LOW);
  digitalWrite(6,LOW);

  //---- bleu ---
  digitalWrite(6,HIGH); // allume la couleur voulue
  delay(1000); // pause
  digitalWrite(6,LOW); // éteint la couleur voulue
  

  //---- bleu clair ---
  digitalWrite(7,HIGH); // allume la couleur voulue
  digitalWrite(6,HIGH); // allume la couleur voulue
  delay(1000); // pause
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  
   
  digitalWrite (5, HIGH); // Tournez la LED sur une Broche 7.
  delay(400); // Attendre 2000 millisecondes.
  digitalWrite (5, LOW);// Tournez la LED sur broche 6.
  delay(100);

   
  digitalWrite (4, HIGH); // Tournez la LED sur une Broche 7.
  delay(400); // Attendre 2000 millisecondes.
  digitalWrite (4, LOW);// Tournez la LED sur broche 6.
  delay(100); 

   
  digitalWrite (3, HIGH); // Tournez la LED sur une Broche 7.
  delay(400); // Attendre 2000 millisecondes.
  digitalWrite (3, LOW);// Tournez la LED sur broche 6.
  delay(100);
}
