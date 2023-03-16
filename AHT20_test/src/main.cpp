#include "AHT20.h"

AHT20 AHT;

void setup() {
  Serial.begin(9600);
  AHT.begin();
}

void loop() {
  float humidity, temperature;
  int ret = AHT.getSensor(&humidity, &temperature);

  if (ret) {
    Serial.print("\nĐộ ẩm: ");
    Serial.print(humidity * 100);
    Serial.print("%\nNhiệt độ: ");
    Serial.println(temperature);
  } else {
    Serial.println("Lấy dữ liệu từ cảm biến AHT20 thất bại!");
  }

  delay(100);
}