// Test del comado tone()
//Il codice esegue un too di frequenza Tono1 e durata TTono1
//sul piedino Sirea (pin 8 dove la Maker Uno ha collegato il buzzer)

//Il programma ci forisce la lettura del timer intero della scheda
//espresso in millisecondi rispettivamente:
// quando inizia il prgramma
// ogni volta che fa il ciclo della loop()

//La velocità di comunicazione della seriale è VelocitaSeriale


#define VelocitaSeriale 9600

#define Sirena 8

#define Tono1 1000
#define TTono1 5000

void setup() 
{
  Serial.begin(VelocitaSeriale);
  Serial.print("Inizio a ");
  Serial.println(millis());
}

void loop() 
{
  tone(Sirena,Tono1, TTono1);
  Serial.print("Ciclo ");
  Serial.println(millis());
}
