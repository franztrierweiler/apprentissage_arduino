void setup() {
  // put your setup code here, to run once:
  pinMode (7, OUTPUT); // Pin 7 est une sortie.
  pinMode (6, OUTPUT); // Pin 6 est une sortie.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (6, HIGH); // Allumez la LED sur la Broche 6.
   digitalWrite (7, HIGH);// Allumez le buzzer sur la broche 7.
    delay(1000);
    digitalWrite (6, LOW); // Eteindre la LED sur la Broche 6.
   digitalWrite (7, LOW);// Eteindre le buzzer sur la broche 7
    delay(60000);
  

  

}
