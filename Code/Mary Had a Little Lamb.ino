/*
Sam Kingston, 2022-04-27

This code does not have comprehensive comments. I've simply taken the information within 
the wile statements of the main code for each note and copy and pasted them, with delays, 
in the correct order and timing in order to play Mary Had a little Lamb. Absolutely the incorrect way 
to do this, but working for the time being until I clean things up.
*/

 
int rly1 = 43;
int rly2 = 41;
int rly3 = 39;
int rly4 = 37;
int rly5 = 36;
int rly6 = 38;
int rly7 = 40;
int breathPin = 42;

int key1 = 51;
int key2 = 53;
int key3 = 52;
int key4 = 50;
int key5 = 48;
int key6 = 47;
int key7 = 46;
int key8 = 44; 

void setup() {
  
 
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
  
 digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------


  
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
  
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly5, LOW);
  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
 delay(50);
 
//------------------------------------------------------------

digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(1000);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);
//------------------------------------------------------------
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);

  
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);

digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(1000);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(1000);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);
//------------------------------------------------------------

digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------


  
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
  
  digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly5, LOW);
  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
 delay(50);
 
//------------------------------------------------------------
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------
digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
delay(50);

//------------------------------------------------------------
digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(500);

  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
  delay(50);
//------------------------------------------------------------

digitalWrite(rly5, HIGH);
  delay(25);
  digitalWrite(rly6, HIGH);
  delay(25);
  digitalWrite(rly7, HIGH);
  delay(25);
  digitalWrite(breathPin, HIGH);
delay(2000);

  digitalWrite(rly5, LOW);
  digitalWrite(rly6, LOW);
  digitalWrite(rly7, LOW);
  digitalWrite(breathPin, LOW);
 delay(50);
 
//------------------------------------------------------------
}
