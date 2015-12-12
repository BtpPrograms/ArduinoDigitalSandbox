void setup() {

}

void loop() {
    analogWrite(10, 255);
    delay(3000);
    analogWrite(9, 255);
    delay(1000);
    analogWrite(10, 0);
    delay(2000);
    analogWrite(9, 0);
}
