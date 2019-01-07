#define LAMPE 9
#define INTERRUPTEUR_LAMPE 2
#define INTERRUPTEUR_CHAUFFAGE_BLEU 4
#define INTERRUPTEUR_CHAUFFAGE_ROUGE 3
#define LED_BLEUE 53
#define LED_ROUGE 51

int etat_lampe = 0;
int etat_chauffage_rouge = 0;
int etat_chauffage_bleu = 0;
int sensorVal;

void setup() {
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(INTERRUPTEUR_LAMPE, INPUT_PULLUP);
  pinMode(INTERRUPTEUR_CHAUFFAGE_BLEU, INPUT_PULLUP);
  pinMode(INTERRUPTEUR_CHAUFFAGE_ROUGE, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(LAMPE, OUTPUT);
  pinMode(LED_BLEUE, OUTPUT);
  pinMode(LED_ROUGE, OUTPUT);
}

void loop() {
  
  // lecture de l'interrupteur de lampe
  sensorVal = digitalRead(INTERRUPTEUR_LAMPE);

  if (sensorVal == LOW) {
    delay(500);
    sensorVal = digitalRead(INTERRUPTEUR_LAMPE);
    if (sensorVal == LOW) {
      sensorVal = LOW;
    } else {
      sensorVal = HIGH;
    }
  }

  // Bouton pas appuyé
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
    if (etat_lampe == 0)
    {
      digitalWrite(LAMPE, HIGH);
      etat_lampe = 1;
    }
    else if (etat_lampe == 1)
    {
      digitalWrite(LAMPE, LOW);
      etat_lampe = 0;
    }
  }

  // lecture de l'interrupteur de chauffage bleu
  sensorVal = digitalRead(INTERRUPTEUR_CHAUFFAGE_BLEU);

  if (sensorVal == LOW) {
    delay(500);
    sensorVal = digitalRead(INTERRUPTEUR_CHAUFFAGE_BLEU);
    if (sensorVal == LOW) {
      sensorVal = LOW;
    } else {
      sensorVal = HIGH;
    }
  }

  // Bouton pas appuyé
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
    if (etat_chauffage_bleu == 0)
    {
      digitalWrite(LED_BLEUE, HIGH);
      etat_chauffage_bleu = 1;
    }
    else if (etat_chauffage_bleu == 1)
    {
      digitalWrite(LED_BLEUE, LOW);
      etat_chauffage_bleu = 0;
    }
  }

  // lecture de l'interrupteur de chauffage rouge
  sensorVal = digitalRead(INTERRUPTEUR_CHAUFFAGE_ROUGE);

  if (sensorVal == LOW) {
    delay(500);
    sensorVal = digitalRead(INTERRUPTEUR_CHAUFFAGE_ROUGE);
    if (sensorVal == LOW) {
      sensorVal = LOW;
    } else {
      sensorVal = HIGH;
    }
  }

  // Bouton pas appuyé
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
    if (etat_chauffage_rouge == 0)
    {
      digitalWrite(LED_ROUGE, HIGH);
      etat_chauffage_rouge = 1;
    }
    else if (etat_chauffage_rouge == 1)
    {
      digitalWrite(LED_ROUGE, LOW);
      etat_chauffage_rouge = 0;
    }
  }
}



