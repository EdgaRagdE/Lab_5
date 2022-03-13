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

      if(serialData == '3') {
        digitalWrite(pin2, HIGH);
      }
      if(serialData == '2') {
        digitalWrite(pin2, LOW);
      }
      if(serialData == '5') {
        digitalWrite(pin3, HIGH);
      }
      if(serialData == '4') {
        digitalWrite(pin3, LOW);
      }
      if(serialData == '7') {
        digitalWrite(pin4, HIGH);
      }
      if(serialData == '6') {
        digitalWrite(pin4, LOW);
      }
      if(serialData == '9') {
        digitalWrite(pin5, HIGH);
      }
      if(serialData == '8') {
        digitalWrite(pin5, LOW);
      }   
      if(serialData == 'H') {
        digitalWrite(pin, HIGH);
        digitalWrite(pin2, HIGH);
        digitalWrite(pin3, HIGH);
        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
      }
      if(serialData == 'L') {
        digitalWrite(pin, LOW);
        digitalWrite(pin2, LOW);
        digitalWrite(pin3, LOW);
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
      }                              
    }
}
