const byte input1 = 2;
const byte RL1 = 9;
const byte input2 = 3;
const byte RL2 = 8;
const byte input3 = 4;
const byte RL3 = 7;
const byte input4=5;
const byte IR=6;


void setup() {
  pinMode(input1, INPUT);
  pinMode(RL1, OUTPUT);
  
    pinMode(input2, INPUT);
  pinMode(RL2, OUTPUT);
  
    pinMode(input3, INPUT);
  pinMode(RL3, OUTPUT);
  
     pinMode(input4, INPUT);
  pinMode(IR, OUTPUT);
}

void loop() {
  if(digitalRead(input1)== HIGH)
    digitalWrite(RL1, 1);
  else
    digitalWrite(RL1, 0);

    
  if(digitalRead(input2)== HIGH)
    digitalWrite(RL2, 1);
 else
   digitalWrite(RL2, 0);

   
     if(digitalRead(input3)== HIGH)
    digitalWrite(RL3, 1);
  else
   digitalWrite(RL3, 0);

       if(digitalRead(input4)== HIGH)
    digitalWrite(IR, 1);
  else
   digitalWrite(IR, 0);

}
