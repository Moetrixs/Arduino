const int button = 2;            // PIN 2 for the button
const int led =13;               // PIN 13 for the LED
int ledflag=0;                   // LED status flag

void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);         // define button as an input 
  pinMode(led,OUTPUT);           // define LED as an output
  digitalWrite(led,LOW);         // turn output off just in case
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button)==HIGH){ // if button is pressed
    if (ledflag==0) {             // and the status flag is LOW
      ledflag=1;                  // make status flag HIGH
      digitalWrite(led,HIGH);     // and turn on the LED
      }
    else {                        // otherwise...
      ledflag=0;                  // make status flag LOW
      digitalWrite(led,LOW);      // and turn off the LED
      }
  }
}
