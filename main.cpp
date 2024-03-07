#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include <WiFi.h>


AsyncWebServer server(80);


const char* ssid = "NomDuWiFi";
const char* password = "MotDePasseWiFi";



// put function declarations here:


void setup() {
  // put your setup code here, to run once:

server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
  request->send(200, "text/plain", "Bienvenue sur le serveur!");


  WiFi.begin(ssid, password);

  server.begin();
});

}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:

