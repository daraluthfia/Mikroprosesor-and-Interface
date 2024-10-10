#define pinPotensiometer 0

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  int potensiometer ;
  potensiometer = analogRead( pinPotensiometer ) ;

  Serial.println( potensiometer ) ;
}
