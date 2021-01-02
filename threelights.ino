void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT); // red light
pinMode(4, OUTPUT); // orange light 
pinMode(5, OUTPUT); // green light
pinMode(12, INPUT);


}

int i = 0;
int red, green, orange;
void loop() {

while (i <= 11){



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
  }
}
}
