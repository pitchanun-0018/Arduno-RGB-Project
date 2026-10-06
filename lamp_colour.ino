const int buttonPin = 2;
const int RLEDPin = 3;
const int GLEDPin = 4;
const int BLEDPin = 5;

int buttonState = 0;
int ledcolor = 0;

bool ButtonPressed = false;
String currentcolor= "led";

void setup() {
  pinMode(RLEDPin, OUTPUT);
  pinMode(GLEDPin, OUTPUT);
  pinMode(BLEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.print("Current Color: ");
  Serial.println(currentcolor);

  if(buttonState == LOW && !ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
  }
  if(buttonState == HIGH && ButtonPressed){
    ButtonPressed = false;
  }
  if(ledcolor == 0){
    currentcolor= "LED off";
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, HIGH);
  }
  else if(ledcolor == 1){
    currentcolor= "LED off";
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 2){
    currentcolor= "Red";
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 3){
    currentcolor= "Green";
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 4){
    currentcolor= "Blue";
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, HIGH); 
  }
  else if(ledcolor == 5){
    currentcolor= "Yellow";
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, HIGH);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 6){
    currentcolor= "Purple";
    digitalWrite(RLEDPin, HIGH);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, LOW); 
  }
  else if(ledcolor == 7){
    currentcolor= "White";
    digitalWrite(RLEDPin, LOW);
    digitalWrite(GLEDPin, LOW);
    digitalWrite(BLEDPin, LOW); 
  }
   else if(ledcolor == 8){
    ledcolor =0;
   }

}