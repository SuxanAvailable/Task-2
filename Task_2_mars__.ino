#include <LiquidCrystal_I2C.h>


#include  <Wire.h>
LiquidCrystal_I2C lcd(0x27,  16, 2);
const int ir_pin = 2;

int objectcount = 0;
int sensorstate = 0;
int latesensorstate = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(ir_pin, INPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = digitalRead(ir_pin);
lcd.setCursor(1,0);
    lcd.print("object count:");
    lcd.setCursor(7,1);
    lcd.print(objectcount);
  

  if(sensorstate == HIGH){
    objectcount++;
    Serial.print("object is detected!! count:");
    Serial.println(objectcount);
    
    lcd.setCursor(1,0);
    lcd.print("object count:");
    lcd.setCursor(7,1);
    lcd.print(objectcount);
    delay(1000);

  }
}
