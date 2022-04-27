/*
*AUTOMATIC RECORDER KEYBOARD CONTROL*
Code by Sam Kingston
April 27, 2022

LEARN MORE: https://samkkingston.wixsite.com/website-2
*/


 //DECLARE RELAY OUTPUT PINS
int rly1 = 43;
int rly2 = 41;
int rly3 = 39;
int rly4 = 37;
int rly5 = 36;
int rly6 = 38;
int rly7 = 40;
int breathPin = 42;
//DECLARE KEY INPUT PINS
int key1 = 51;
int key2 = 53;
int key3 = 52;
int key4 = 50;
int key5 = 48;
int key6 = 47;
int key7 = 46;
int key8 = 44; 

void setup() {
  
  //SET ALL RELAY CONTROL PINS TO OUTPUT
  pinMode(rly1, OUTPUT); //RELAY 1
  pinMode(rly2, OUTPUT); //RELAY 2
  pinMode(rly3, OUTPUT); //RELAY 3
  pinMode(rly4, OUTPUT); //RELAY 4
  pinMode(rly5, OUTPUT); //RELAY 5
  pinMode(rly6, OUTPUT); //RELAY 6
  pinMode(rly7, OUTPUT); //RELAY 7
  pinMode(breathPin, OUTPUT); //Used for Breath-sends 12V to Vaccuum Pump.

  pinMode(key1, INPUT); //KEY 1
  pinMode(key2, INPUT); //KEY 2
  pinMode(key3, INPUT); //KEY 3
  pinMode(key4, INPUT); //KEY 4
  pinMode(key5, INPUT); //KEY 5
  pinMode(key6, INPUT); //KEY 6
  pinMode(key7, INPUT); //KEY 7
  pinMode(key8, INPUT); //KEY 8

  //SET ALL SOLENOIDS TO LOW
  digitalWrite(rly1, LOW);
  digitalWrite(rly2, LOW);
  digitalWrite(rly3, LOW);
  digitalWrite(rly4, LOW);
  digitalWrite(rly5, LOW);
  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
}


void loop() {
  
  //SET ALL SOLENOIDS LOW-WHEN KEY IS RELEASED, LOOP WILL REPEAT AND THESE LINES WILL RESET THE SOLENOIDS.
   digitalWrite(rly1, LOW);
  digitalWrite(rly2, LOW);
  digitalWrite(rly3, LOW);
  digitalWrite(rly4, LOW);
  digitalWrite(rly5, LOW);
  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);

//ALL SUBSEQUENT LINES SPELL OUT VERY SIMPLY WHAT TO DO WHILE EACH KEY IS PRESSED. 
//PRESSING KEY 1 CLOSES ALL HOLES WHICH RESULTS IN THE LOWEST NOTE
//PRESSING KEY 8 CLOSES NO HOLES WHICH RESULTS IN THE HIGHES NOTE
  //EACH KEY IS ADDING OR SUBRTACTING ONE KEY FROM THE KEYS ON EITHER SIDE
  
  //IF THERE WERE MORE HAPPENING, IT WOULD BE WIRTH GIVING EACH OF THESE THEIR OWN FUNCTION TO VISUALLY SIMPLIFY THIS SKETCH. 
  //SINCE WE'RE ONLY DEALING WITH KEYPRESSES, I CHOSE TO KEEP IT AS BASIC AS THIS.

 
 while (key1 == HIGH){

  digitalWrite(rly1, HIGH);
  delay(25);
  digitalWrite(rly2, HIGH);
  delay(25);
  digitalWrite(rly3, HIGH);
  delay(25);
  digitalWrite(rly4, HIGH);
  delay(25);
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);


 }
 while (key2 == HIGH){
  //note2();
  digitalWrite(rly1, HIGH);
  delay(25);
  digitalWrite(rly2, HIGH);
  delay(25);
  digitalWrite(rly3, HIGH);
  delay(25);
  digitalWrite(rly4, HIGH);
  delay(25);
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);


 }
 while (key3 == HIGH){
  //note3();
  digitalWrite(rly1, HIGH);
  delay(25);
  digitalWrite(rly2, HIGH);
  delay(25);
  digitalWrite(rly3, HIGH);
  delay(25);
  digitalWrite(rly4, HIGH);
  delay(25);
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);


 }
 while (key4 == HIGH){
  //note4();
  digitalWrite(rly1, HIGH);
  delay(25);
  digitalWrite(rly2, HIGH);
  delay(25);
  digitalWrite(rly3, HIGH);
  delay(25);
  digitalWrite(rly4, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);

  
  }
  
 
 while (digitalRead(key5) == HIGH){
  //note5();
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);

 
 }
 while (digitalRead(key6) == HIGH){
  //note6();
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);


 }
 while (digitalRead(key7) == HIGH){
  //note7();
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);


 }
while (digitalRead(key8) == HIGH){
  //note8();
  digitalWrite(breathPin, HIGH);

 
 }





  



 
}


