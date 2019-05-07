#include <M5Stack.h>

#define CDS_Pin 35
#define Relay_Pin 26

void setup() {
  M5.begin();  
  Serial.begin(115200);
  
  M5.Lcd.fillScreen(0x0000);
  M5.Lcd.setTextColor(WHITE, BLACK);
  M5.Lcd.setTextSize(5);
  M5.Lcd.printf("Brightness\r\n");

  //disable the speak noise
  dacWrite(25, 0);

  //CDS Sensor INPUT
  pinMode(CDS_Pin, INPUT);
  pinMode(Relay_Pin, OUTPUT);
}

void loop(void) {
  int DATA = analogRead(CDS_Pin);

  if(DATA > 1200)
  {
    digitalWrite(Relay_Pin, HIGH);
    M5.Lcd.setCursor(70, 50);
    M5.Lcd.printf("Bright\r\n");
    M5.Lcd.setTextSize(3);
    M5.Lcd.printf("\r\n");
    M5.Lcd.setTextSize(5);
    M5.Lcd.printf(" Turn OFF \r\n");
  }
  else
  {
    digitalWrite(Relay_Pin, LOW);
    M5.Lcd.setCursor(70, 50);
    M5.Lcd.printf(" DARK \r\n");
    M5.Lcd.setTextSize(3);
    M5.Lcd.printf("\r\n");
    M5.Lcd.setTextSize(5);
    M5.Lcd.printf("  Turn ON  \r\n");
  }
 
  Serial.println(DATA);
  delay(1000);
}
