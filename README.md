# repo_sinNombre

## Integrantes
Leibnitz Edison Andres Rojas Castillo- Programador

## Título del proyecto

## Descripción
(¿qué hace? y materiales)

## Planos

## Eléctricos o electrónicos
Esquemático y PCB - Diseñador
![esquematico](url)

## Construcción
modelo 3D y planos - Diseñador

## Código fuente 
[código de arduino](const int relay = 2;
 char message;

 void setup() {
    pinMode(relay, OUTPUT);
    Serial.begin(9600);
 }
 void loop() {
  if (Serial.available() > 0) {
    message = Serial.read();
  }

  if (message == "E"){
    digitalWrite(relay, HIGH);
  } else if (message == "A"){
    digitalWrite(relay, LOW);
  }
 }
) - Leibnitz Edison Andres Rojas Castillo
[código de app](http://ai2.appinventor.mit.edu/#6351009487650816) - Leibnitz Edison Andres Rojas Castillo
[código de fritzing](url del archivo .fzz) - diseñador
[código de FreeCAD](url del archivo .freecad) - diseñador

## Evidencias
fotos, vídeos, etc. - Constructor
