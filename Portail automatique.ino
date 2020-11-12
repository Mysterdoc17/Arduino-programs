int BP_INT = 3; // Bouton poussoir intérieur
int capteur_inf = 4; // capteur infrarouge
int moteur1 = 5; // sens 1 du moteur
int FDC_OUV = 6; // capteur pour indiquer que le portail est totalement ouvert
int FDC_FER = 7; // capteur pour indiquer que le portail est totalement fermé
int moteur2 = 2; // sens 2 du moteur

void setup () {
  Serial.begin(9600);
  pinMode(BP_INT, INPUT);
  pinMode(capteur_inf, INPUT);
  pinMode(moteur1, OUTPUT);
  pinMode(moteur2, OUTPUT);
  pinMode(FDC_OUV, INPUT);
  pinMode(FDC_FER, INPUT);
}

void loop () {
  while (FDC_OUV != HIGH) {
    digitalWrite(moteur1, HIGH);
    digitalWrite(moteur2, LOW);
  }
}
