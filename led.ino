char serialData;
int pin = 13;

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
       else if(serialData == '0') {
        digitalWrite(pin, LOW);
      }
    }
}
