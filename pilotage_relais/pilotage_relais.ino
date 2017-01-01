// pilotage_relais
// Sixtine Trierweiler

void setup() {
   pinMode(6, OUTPUT); //6 est une sortie
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH);
  delay(5000);
  digitalWrite(6,LOW);
  delay(1000);
  
}
