void setup() {

}

void loop() {
    analogWrite(5, 0);
    delay(1000);
    analogWrite(5, 64);
    delay(1000);
    analogWrite(5, 128);
    delay(1000);
    analogWrite(5, 192);
    delay(1000);
    analogWrite(5, 255);
}
