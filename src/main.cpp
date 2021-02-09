#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define RELAY_PIN 2

void setup() {
  pinMode(RELAY_PIN, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("   5V Relay Module  ");

  lcd.setCursor(0, 2);
  lcd.print("Relay: ");
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH);
  lcd.setCursor(7, 2);
  lcd.print("OPEN  ");
  delay(2000);

  digitalWrite(RELAY_PIN, LOW);
  lcd.setCursor(7, 2);
  lcd.print("CLOSED");
  delay(2000);
}