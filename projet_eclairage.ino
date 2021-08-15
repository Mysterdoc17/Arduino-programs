// déclaration pin capteur photo
int capteur_photo = A0;
int valcap = 0;
// déclaration pin led
int led = 7;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(capteur_photo, INPUT);
}

void loop() {
  // test luminosité
  valcap = analogRead(capteur_photo);
  // si luminosité inférieure à 400, allumer la led :
  if (valcap < 400) {
    digitalWrite(led, HIGH);
  }
  // sinon, éteindre la led :
  else {
    digitalWrite(led, LOW);
  }
}
