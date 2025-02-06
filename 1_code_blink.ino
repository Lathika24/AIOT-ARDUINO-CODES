//Blinking LED youtube-- https://www.youtube.com/watch?v=EJEz6t5SpMw
int led1 = 7;  

void setup() {
  pinMode(7, OUTPUT); 
}

void loop() {
  digitalWrite(led1, HIGH);       //To make led glow
  delay(500);                    //We need to see wether led is switched on or not, se we are giving delay, 1000 miliseconds approx 1 sec.     
  digitalWrite(led1, LOW);        //To switch Off led
  delay(500);  
}