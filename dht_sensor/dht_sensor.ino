#include <dht.h>
#define dataPin 7
dht DHT; 
void setup() {
  Serial.begin(9600);
}
void loop() {
  int readData = DHT.read11(dataPin); 
  float t = DHT.temperature; 
  float h = DHT.humidity; 
  
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(2000); 
}
