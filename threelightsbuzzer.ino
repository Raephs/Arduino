void setup() {
  // put your setup code here, to run once

pinMode(2, OUTPUT); // white ight  
pinMode(3, OUTPUT); // red light
pinMode(4, OUTPUT); // orange light 
pinMode(5, OUTPUT); // green light
pinMode(7, OUTPUT); // buzzer

}
// variables | d= delay d1s = delay one second
int d1s = 1000;
int d10s = 10000;
int d50s = 50000;
int i = 0;

void basic_loop() {
  while (i <= 11){

noTone(7);

  if (i==1){
  digitalWrite(3, 1);
  }
  
 else if (i == 5){
  digitalWrite(4, 1);}
  
  else if (i == 10){
  digitalWrite(5, 1);
  }
 i++;
 delay (1000); 
  if (i > 10){
  i = 0;
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(2, 1);
  delay(500);
  digitalWrite(2, 0);
  tone(7, 900);
  delay(500);
  }
  } 
  }

void greenlighton(){
  digitalWrite(5,HIGH);
  }

void redlighton(){
  digitalWrite(3, HIGH);
  }

void orangelighton(){
  digitalWrite(4, HIGH);
}

void greenlightoff(){
  digitalWrite(5,LOW);
}

void orangelightoff(){
  digitalWrite(4, LOW);
}

void redlightoff(){
  digitalWrite(3, LOW);
}



void flash(){

  redlighton();
  delay(d1s);
  redlightoff();
  delay(d1s);
  
  }

  
void loop() {
flash();
}
