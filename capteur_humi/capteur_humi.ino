// Projet de détection d'humidité dans un petit pot de fleurs.
// Fichier: capteur_humi.ino
// Lien github: https://github.com/franztrierweiler/apprentissage_arduino/capteur_humi
//
// A lire pour comprendre:
// Pour la première version du programme, le Funduino va envoyer les valeurs au PC par
// le câble USB.
// Sur ton PC, tu iras dans le menu "Outils" et tu choisiras "Moniteur série".
// Une petite fenêtre va apparaître et tu pourras voir les messages envoyés par
// le Funduino quand il mesure l'humidité dans le pot !
// Le capteur d'humidité renvoit une tension électrique qui varie en fonction de l'humidité.
// Il est composé d'un petit transistor (petit boitier noir à 3 pattes que tu vois sur la
// plaque rouge). Nous allons lire la tension avec l'entrée analogique A0. Cette entrée de
// la puce permet de transformer une tension électrique en un nombre qui sera disponible
// dans la mémoire du Funduino !

void setup() {
  

  // Initialiser la communication de données avec le câble USB vers le PC.
  // Vitesse de communication = 9600 bits par seconde
  Serial.begin(9600);
}

void loop() {

  // Variable en mémoire de type "integer" (int) qui va servir à stocker la valeur lue.
  int humi;
  
  // Une entrée analogique est utilisée pour mesurer ce que renvoit le capteur.
  // Pas besoin de l'initialiser. Elle est toujour utilisée en entrée analogique.

  // Lire la tension électrique retournée par le capteur sur la broche "A0". A veut dire Analog
  // Ranger cette valeur dans la variable humi.
  humi = analogRead(A0);

  // Maintenant que nous avons la valeur, nous allons l'envoyer vers le PC en passant
  // par le câble USB !
  Serial.print("Mesure de l'humidité:");
  Serial.println(humi);

  // On attend 5 secondes avant de recommencer
  delay(5000); 
}
