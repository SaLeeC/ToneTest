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
