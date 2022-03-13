char serialData;
int pin = 13;
int pin2 = 12;
int pin3 = 11;
int pin4 = 10;
int pin5 = 9;

void setup() {
    pinMode(pin, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    //mira si vienen los datos del serial
    if(Serial.available() > 0) {
      
      serialData = Serial.read();
      Serial.println(serialData);
      
      // si es un 1, enciende el LED
      if(serialData == '1') {
        digitalWrite(pin, HIGH);
      }

      // si es un 0, apaga el LED
      if(serialData == '0') {
        digitalWrite(pin, LOW);
      }

      if(serialData == '0') {
        digitalWrite(pin2, HIGH);
      }
      if(serialData == '1') {
        digitalWrite(pin2, LOW);
      }
      if(serialData == '1') {
        digitalWrite(pin3, HIGH);
      }
      if(serialData == '0') {
        digitalWrite(pin3, LOW);
      }
      if(serialData == '0') {
        digitalWrite(pin4, HIGH);
      }
      if(serialData == '1') {
        digitalWrite(pin4, LOW);
      }
      if(serialData == '1') {
        digitalWrite(pin5, HIGH);
      }
      if(serialData == '0') {
        digitalWrite(pin5, LOW);
      }                        
    }
}
