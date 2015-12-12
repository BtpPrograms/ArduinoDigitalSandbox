void setup() {

}

void loop() {
    for(int x = 4; x <= 8; x++) {
        digitalWrite(x, HIGH);
    }
    delay(3);
    for(int x = 4; x<= 8; x++) {
        delay(4);
        digitalWrite(x, LOW);
    }
}
