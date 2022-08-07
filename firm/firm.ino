void setup() {
  // put your setup code here, to run once:
  PORTB = (1<<PB0)|(1<<PB1)|(1<<PB2)|(1<<PB3);
  DDRB = (1<<PB4);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t total = 0;
  total += digitalRead(0);
  total += digitalRead(1);
  total += digitalRead(2);
  total += digitalRead(3);

  if(total%2 == 0){
    //even number of switches on
    digitalWrite(4, HIGH);
  }
  else{
    //odd number of switches on
    digitalWrite(4, LOW);
  }
}
