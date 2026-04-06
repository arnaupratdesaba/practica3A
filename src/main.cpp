// Ubicación: carpeta "src", archivo "main.cpp"
#include <Arduino.h> // <-- OBLIGATORIO EN PLATFORMIO
#include <WiFi.h>
#include <WebServer.h>
#include "pagina.h"  // <-- Incluimos nuestro archivo de la carpeta "include"

// SSID & Password
const char* ssid = "iPhone de: Arnau"; // Ingresa tu SSID aquí
const char* password = "pratde123"; // Ingresa tu contraseña aquí

WebServer server(80); // Objeto WebServer en el puerto 80

// Función para manejar la ruta raíz (/)
void handle_root() {
  server.send(200, "text/html", pagina_html);
}

void setup() {
  Serial.begin(115200);
  Serial.println("Try Connecting to ");
  Serial.println(ssid);
  
  // Conectar a tu módem wi-fi
  WiFi.begin(ssid, password);
  
  // Comprobar si está conectado a la red
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("WiFi connected successfully");
  Serial.print("Got IP: ");
  Serial.println(WiFi.localIP()); // Muestra la IP del ESP32 en el Monitor Serial
  
  server.on("/", handle_root);
  server.begin();
  Serial.println("HTTP server started");
  delay(100);
}

void loop() {
  server.handleClient();
}