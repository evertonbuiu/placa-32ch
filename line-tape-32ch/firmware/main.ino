#include <WiFi.h>
void setup() {
  Serial.begin(115200);
  WiFi.begin("SSID", "PASSWORD");
  while (WiFi.status() != WL_CONNECTED) delay(500);
  Serial.println("WiFi conectado");
}
void loop() {}
