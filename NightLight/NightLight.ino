int dark;

void setup() {
    dark = 10;
    Serial.begin(9600);
}

void loop() {
    Serial.println(A1);
    if(analogRead(A1) <= dark) {
        digitalWrite(4, HIGH);
        digitalWrite(8, HIGH);
    }
    else {
        digitalWrite(4, LOW);
        digitalWrite(8, LOW);
    }
    delay(100);
}
