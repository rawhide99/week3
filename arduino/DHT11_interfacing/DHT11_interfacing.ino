#include <DHT.h>
#define DHTTYPE DHT11
#define DHTPIN 13
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");
}
void loop()
{
  short humidity = dht.readHumidity();
  short temp = dht.readTemperature();
  Serial.print("HUMIDITY = ");
  Serial.print(humidity );
  Serial.print("\t\t");
  
  Serial.print("TEMPERATURE = ");
  Serial.print(temp);
  Serial.print("% *c");
  Serial.print("\n");
  delay(3000);
}