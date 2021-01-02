void setup() {
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);

}

void loop() {
int button = digitalRead(3);  
if (button == HIGH){
  digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
    }
  
}
