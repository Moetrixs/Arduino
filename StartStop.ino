int buttonStop = 2;     // Tombol STOP pin 2
int buttonStart = 3;    // Tombol START pin 3
int led =  13;          // led pin 13/ledBuiltin

// variables will change:
int ledState = 0;       // variabel status Led

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buttonStop, INPUT);
  pinMode(buttonStart, INPUT);
}

void loop() {
  if (digitalRead(buttonStop)= HIGH) {
    ledState == 0;}
  else (digitalRead(buttonStart)= HIGH){
    ledState == 1;
  }

  if (ledState == 1) {
    digitalWrite(led, 1);   // Led Menyala
  } else {
    digitalWrite(led, 0);   // Led Padam
  }
}
