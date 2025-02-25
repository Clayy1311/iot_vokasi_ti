#include <Arduino.h>

// Definisikan pin untuk LED
int ledRed = 23;   // LED merah
int ledYellow = 22; // LED kuning
int ledGreen = 21;  // LED hijau

void setup() {
  // Inisialisasi pin LED sebagai output
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // Menyalakan LED merah
  digitalWrite(ledRed, HIGH);   // LED merah menyala
  digitalWrite(ledYellow, LOW); // LED kuning mati
  digitalWrite(ledGreen, LOW);  // LED hijau mati
  delay(1000);                  // LED merah menyala selama 1 detik

  // Menyalakan LED kuning
  digitalWrite(ledRed, LOW);    // LED merah mati
  digitalWrite(ledYellow, HIGH); // LED kuning menyala
  digitalWrite(ledGreen, LOW);  // LED hijau mati
  delay(1000);                  // LED kuning menyala selama 1 detik

  // Menyalakan LED hijau
  digitalWrite(ledRed, LOW);    // LED merah mati
  digitalWrite(ledYellow, LOW); // LED kuning mati
  digitalWrite(ledGreen, HIGH); // LED hijau menyala
  delay(1000);                  // LED hijau menyala selama 1 detik
}
