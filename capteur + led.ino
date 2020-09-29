int Capteur_CO = A0;
int LED = 5;

void setup () {
  pinMode(Capteur_CO, INPUT);
  pinMode(LED, OUTPUT);
  serial.begin(9600);
}
void loop () {
  if(analogRead(Capteur_CO) <500) {
  digitalWrite (LED, LOW);
  }
  delay(1000);
  if(analogRead(Capteur_CO) >500 <1000) {
  digitalWrite (LED, HIGH);
  }
  if(analogRead(Capteur_CO) >=1000) {
  serial.println("Sortir de la maison/appartement immédiatement");
  }
}
