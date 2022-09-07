// Status Tombol
int hitung = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == HIGH) {
    delay(500); // Wait for 500 millisecond(s)
    hitung += 1;
    Serial.println(hitung);
    if (hitung == 1) {
      digitalWrite(9, HIGH);
    }
    if (hitung == 2) {
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
    }
    if (hitung == 3) {
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
    }
    if (hitung == 4) {
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
    }
  }
  if (digitalRead(2) == HIGH) {
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(12, LOW);
    hitung = 0;
    Serial.println(hitung);
  }
}