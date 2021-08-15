//déclaration de la pin de la pompe
int pompe = 3;

//déclaration de la pin du capteur d'hygrométrie
int capteur_hygro = A0;

void setup() {
  //initialisation du port série
  Serial.begin(9600);
  //déclaration de la pompe en sortie
  pinMode(pompe,OUTPUT);
  //déclaration du capteur en entrée
  pinMode(capteur_hygro,INPUT);
}

void loop() {
  // si hygrométrie inférieure à 500, on allume la pompe
  if ((analogRead(capteur_hygro)) < 500){
    digitalWrite(pompe, HIGH);
    }
    
  // sinon, on éteint la pompe
  else {
    digitalWrite(pompe,LOW);
  }
}
