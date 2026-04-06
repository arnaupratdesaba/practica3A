# Servidor Web Simple con ESP32

Este proyecto contiene el código fuente para configurar un servidor web básico utilizando un microcontrolador ESP32. El proyecto está estructurado para ser utilizado con el entorno de desarrollo **PlatformIO**.

## 📌 Descripción General

El programa conecta el ESP32 a una red Wi-Fi local y levanta un servidor HTTP en el puerto 80. Cuando un cliente (como el navegador web de tu móvil o PC) accede a la dirección IP del ESP32, la placa responde enviando una página web predefinida.

## 📂 Estructura del Proyecto

El código utiliza la estructura de directorios estándar de PlatformIO:

* **`src/main.cpp`**: Archivo principal que contiene la lógica de conexión Wi-Fi y la inicialización del servidor web.
* **`include/pagina.h`**: Archivo de cabecera (que debes crear) donde se almacena el código HTML de la página web dentro de una variable llamada `pagina_html`.

## ⚙️ Configuración y Uso

Sigue estos pasos para cargar y ejecutar el código en tu placa:

1. **Abre el proyecto** en tu editor compatible con PlatformIO (como Visual Studio Code).
2. **Configura la red Wi-Fi**: 
   Abre el archivo `src/main.cpp` y edita las siguientes líneas para colocar las credenciales de tu red:
   ```cpp
   const char* ssid = "TU_NUEVO_SSID"; 
   const char* password = "TU_NUEVA_CONTRASEÑA";
