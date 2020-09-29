int Capteur_CO = A0;
int LED = 5;

void setup () {
  pinMode(Capteur_CO, INPUT);
}
void loop () {
  if(analogRead(Capteur_CO) <=500) {
  digitalWrite (LED, HIGH);
  }
}
