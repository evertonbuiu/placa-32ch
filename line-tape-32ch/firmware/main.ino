#include <WiFi.h>

// TODO: include Art-Net and LED driver libraries, e.g. ArtnetWifi and FastLED

void setup() {
  Serial.begin(115200);
  WiFi.begin("SSID", "PASSWORD");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  Serial.println("WiFi conectado");
  // TODO: initialize Art-Net receiver and 32 WS2811 outputs
}

void loop() {
  // TODO: receive Art-Net packets and update LED channels
}
