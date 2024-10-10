#include <Servo.h>

int potensio = A0;   
int resistansi = 0;    
float voltage = 0;

Servo DaraLola;

void setup() {

  Serial.begin(9600);
  DaraLola.attach(3);

}

void loop() {

  resistansi = analogRead(potensio);
  

  int angle = map(resistansi, 0, 1023, 0, 180);
  
  DaraLola.write(angle);
 
  delay(100);
}
