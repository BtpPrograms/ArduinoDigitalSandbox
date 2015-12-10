void setup() {

}

void loop() {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    delay(9);

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    delay(1);
}
