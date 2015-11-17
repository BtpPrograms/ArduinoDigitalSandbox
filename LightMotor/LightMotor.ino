void setup() {
  // put your setup code here, to run once:
  analogWrite(3, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(1);
  analogWrite(3, light);

  for(int i = 0; i < 5; i++) {
    if(light > (51 * i)) {
      digitalWrite(i + 4, HIGH);
    }
    else {
      digitalWrite(i + 4, LOW);
    }
  }
}
