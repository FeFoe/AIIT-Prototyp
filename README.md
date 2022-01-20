# Projekt: Anwendungen der Industriellen Informatik
Prototyp für das Projekt Anwendungen der Industriellen Informationstechnik  
*Status: Entwurf (wird aktuell dran gearbeitet)*
Entwicklung eines digitalen Zwillingskonzept und -prototyp zur Überwachung von medizinischen Geräten und einem Medizingerätewagen. 


# Virtueller Prototyp
Für den Virtuellen Prototyp ist eine eigene Platine geplant. Hierrauf verankert sind ein ESP32-Dev-Board, ein MPU-6050-Kombisensormodul und ein Lautsprechermodul.  
Für den virtuellen Prototyp wurden verschiedene Diagramme im UML-Syntax erstellt. Außerdem existieren die Schaltpläne und Fertigungsdateien für die Platine.

# Physischer Prototyp
*Status: Entwurf (Quellcode und Dateien folgen)*
## Überblick
Der physische Prototyp wird im Rahmen des Projektes tatsächlich produziert. Abweichend vom virutellen Prototyp befindet sich auf der selbstzusammengelöteten Platine noch ein RGB-LED-Modul und anstelle des Lautsprechers wird ein Piezo-Buzzer genutzt.

## Ziel
- Senden von Beschleunigungsmesswerten per MQTT an Server
- Auslösen von Buzzer-Ton und Anschalten von LED via MQTT

## Hardware
- ESP32-Developmentboard
- MPU6050-Modul
- Piezo-Buzzer
- RGB-LED (Modul)
Der Schaltplan befindet sich im Rep.
