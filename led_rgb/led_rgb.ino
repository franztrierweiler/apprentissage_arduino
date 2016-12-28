//
// Programme écrit par Sixtine Trierweiler pour piloter une LED RGB
//

void setup() {
  // put your setup code here, to run once:
  pinMode (7,OUTPUT); // Broche ledVert configurée en sortie
  pinMode (8,OUTPUT); // Broche ledRouge configurée en sortie
  pinMode (6,OUTPUT); // Broche ledBleu configurée en sortie

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
  delay(1000); // pause

  //---- bleu clair ---
  digitalWrite(7,HIGH); // allume la couleur voulue
  digitalWrite(6,HIGH); // allume la couleur voulue
  delay(1000); // pause
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);

}
