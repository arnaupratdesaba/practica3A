// Ubicación: carpeta "include", archivo "pagina.h"
#pragma once // Buena práctica en C++ para evitar que se cargue dos veces
#include <Arduino.h> // Obligatorio en PlatformIO para usar PROGMEM

const char pagina_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ESP32 Web Server</title>
    <style>
        body { font-family: Arial, sans-serif; text-align: center; margin-top: 50px; }
        h1 { color: #333366; }
    </style>
</head>
<body>
    <h1>Mi Primera Pagina con ESP32 - Station Mode &#128522;</h1>
    <p>El código HTML ahora vive separado gracias a PlatformIO.</p>
</body>
</html>
)rawliteral";