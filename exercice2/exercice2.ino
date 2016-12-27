void setup() {
  // put your setup code here, to run once:
  pinMode (6, OUTPUT); // Pin 6 est une sortie.
  pinMode (7, OUTPUT); // Pin 7 est une sortie.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (6, HIGH);// Tournez la LED sur broche 6.
  digitalWrite (7, HIGH); // Tournez la LED sur une Broche 7.
  delay(40000); // Attendre 2000 millisecondes.
  digitalWrite (6, LOW);// Tournez la LED sur broche 6.
  digitalWrite (7, LOW); // Tournez la LED sur une Broche 7.
   delay(1000); 
}
    
    

