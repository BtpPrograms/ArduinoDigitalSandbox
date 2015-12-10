int fade;
void setup() {
    fade = 0;
}

void loop() {
    analogWrite(5, fade);
    delay(500);
    if(fade >= 255) 
        fade = 0;
    else
        fade += 1;
}
