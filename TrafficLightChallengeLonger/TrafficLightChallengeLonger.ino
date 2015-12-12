int yellowLength;
void setup() {
    yellowLength = 1000;
}

void loop() {
    analogWrite(10, 255);
    delay(3000);
    analogWrite(9, 255);
    delay(yellowLength);
    analogWrite(10, 0);
    delay(2000);
    analogWrite(9, 0);
    yellowLength += 500;
}
