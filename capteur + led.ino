int Capteur_CO = A0;
int LED = 5;

void setup () {
  pinMode(Capteur_CO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop () {
  if(analogRead(Capteur_CO) <500) {
    digitalWrite (LED, LOW);
    Serial.print("ok");
  }
  delay(1000);
  if(analogRead(Capteur_CO) >500 <1000) {
    digitalWrite (LED, HIGH);
  }
  if(analogRead(Capteur_CO) >=1000) {
  Serial.print("Sortir de la maison/appartement immédiatement");
    digitalWrite(LED,HIGH);
    delay(100);
    digitalWrite(LED,LOW);
    delay(100);
  }
}
