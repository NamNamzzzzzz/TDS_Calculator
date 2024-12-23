#include <EEPROM.h>
#include "GravityTDS.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

// Cấu hình cảm biến TDS
#define TdsSensorPin A1
#define TDS_THRESHOLD 300
GravityTDS gravityTds;

// Màn hình LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// Bluetooth (HC-06)
SoftwareSerial bluetooth(2, 3); // HC-06 TX, RX

// Biến
float temperature = 25, tdsValue = 0;

void setup() {
  Serial.begin(9600);         // Để gỡ lỗi
  bluetooth.begin(9600);      // Tốc độ baud mặc định của HC-06

  // Khởi tạo cảm biến TDS  
  gravityTds.setPin(TdsSensorPin);
  gravityTds.setAref(5.0);
  gravityTds.setAdcRange(1024);
  gravityTds.begin();

  // Khởi tạo LCD
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("TDS Value: ");
}

void loop() {
  // Đo TDS
  gravityTds.setTemperature(temperature);
  gravityTds.update();
  tdsValue = gravityTds.getTdsValue();

  // Hiển thị trên LCD
  lcd.setCursor(0, 1);
  lcd.print(tdsValue, 0);  // Hiển thị giá trị TDS (làm tròn về số nguyên)
  lcd.print(" ppm  ");    // Thêm khoảng trắng để dễ nhìn

  // Gửi giá trị TDS qua Bluetooth
  //bluetooth.print("TDS:");
  bluetooth.print(tdsValue, 0); // Gửi giá trị TDS (làm tròn về số nguyên)

  // Kiểm tra ngưỡng và hiển thị trạng thái trên LCD
  if (tdsValue > TDS_THRESHOLD) {
    lcd.print("BAD");
  } else {
    lcd.print("GOOD");
  }
  Serial.println(tdsValue, 0); 
  delay(500);  
}
