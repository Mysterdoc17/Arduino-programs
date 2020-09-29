int Capteur_CO = A0;
int LED = 5;

void setup () {
  pinMode(Capteur_CO, INPUT);
  pinMode(LED, OUTPUT);
}
void loop () {
  if(analogRead(Capteur_CO) <500) {
  digitalWrite (LED, LOW);
  }
  delay(1000);
  if(analogRead(Capteur_CO) >500) {
  digitalWrite (LED, HIGH);
  }
}
