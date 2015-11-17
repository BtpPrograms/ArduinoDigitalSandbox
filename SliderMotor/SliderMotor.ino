void setup() {
  // put your setup code here, to run once:
  analogWrite(3, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int slider = analogRead(3)/4;
  analogWrite(3, slider);

  for(int i = 0; i < 5; i++) {
    if(slider > (51 * i)) {
      digitalWrite(i + 4, HIGH);
    }
    else {
      digitalWrite(i + 4, LOW);
    }
  }
}
