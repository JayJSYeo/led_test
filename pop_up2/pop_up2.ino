
int pinNumber=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pinNumber, HIGH);   
  delay(1000);                     
  digitalWrite(pinNumber, LOW);    
  delay(1000);   
     
}
