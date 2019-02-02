/* 
 Arduino Dice :)
 This example shows how to simulate throwing a dice with 6 LEDs
 By Esther van der Stappen
 */

// 6 consecutive digital pins for the LEDs
int first=13;
int second=12;
int third=11;
int fourth=10;
int fifth=9;
int sixth=8;

int pace=100;

int myLED[6]={13, 12, 11, 10, 9, 8};

// pin for the button switch
int button=7; 
// value to check state of button switch
int pressed;

void setup() {
  // set all LED pins to OUTPUT
  
  pinMode(first, OUTPUT);
  pinMode(second, OUTPUT);
  pinMode(third, OUTPUT);
  pinMode(fourth, OUTPUT);
  pinMode(fifth, OUTPUT);
  pinMode(sixth, OUTPUT);
  // set buttin pin to INPUT
  pinMode(button, INPUT);
  digitalWrite(button, HIGH);

  // initialize random seed by noise from analog pin 0 (should be unconnected)
  randomSeed(analogRead(0));
}

void loop() {
  // if button is pressed - throw the dice
  pressed = digitalRead(button);

  if (pressed == LOW) {
    // remove previous number to LOW
    digitalWrite(first,LOW);
    digitalWrite(second,LOW);
    digitalWrite(third,LOW);
    digitalWrite(fourth,LOW);
    digitalWrite(fifth,LOW);
    digitalWrite(sixth,LOW);
    
    // get a random number in the range [1,6]
    int numLights=random(1,7);    
    //write IF statements to light up the lights
    digitalWrite(first, HIGH);
    

    
    if (numLights==1) {
    digitalWrite(myLED[0],HIGH);  
    }    
    if (numLights==2) {
      digitalWrite(myLED[0],HIGH);
      delay(pace);
      digitalWrite(myLED[1],HIGH);
    }
    if (numLights==3) {
      digitalWrite(myLED[0],HIGH);
      delay(pace);
      digitalWrite(myLED[1],HIGH);
      delay(pace);
      digitalWrite(myLED[2],HIGH);
    }
 if (numLights==4) {
      digitalWrite(myLED[0],HIGH);
      delay(pace);
      digitalWrite(myLED[1],HIGH);
      delay(pace);
      digitalWrite(myLED[2],HIGH);
      delay(pace);
      digitalWrite(myLED[3],HIGH);
    }
if (numLights==5) {
      digitalWrite(myLED[0],HIGH);
      delay(pace);
      digitalWrite(myLED[1],HIGH);
      delay(pace);
      digitalWrite(myLED[2],HIGH);
      delay(pace);
      digitalWrite(myLED[3],HIGH);
      delay(pace);
      digitalWrite(myLED[4],HIGH);
    }
   if (numLights==6) {
      digitalWrite(myLED[0],HIGH);
      delay(pace);
      digitalWrite(myLED[1],HIGH);
      delay(pace);
      digitalWrite(myLED[2],HIGH);
      delay(pace);
      digitalWrite(myLED[3],HIGH);
      delay(pace);
      digitalWrite(myLED[4],HIGH);
      delay(pace);
      digitalWrite(myLED[5],HIGH);
    }   
  } 
}
