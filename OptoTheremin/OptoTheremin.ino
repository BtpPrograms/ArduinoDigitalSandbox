void setup() {

}

void loop() {
    if(digitalRead(2)) {
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        tone(3, map(analogRead(1), 0, 60, 440, 880));
        delay(5 + analogRead(3));
    }
    else {
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        noTone(3);
    }
}
