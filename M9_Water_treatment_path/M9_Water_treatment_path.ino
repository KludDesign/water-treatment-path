int ledPin1 = 0;
int ledPin2 = 1;
int ledPin3 = 2;
int ledPin4 = 3;
int ledPin5 = 4;
int ledPin6 = 5;
int buttonPin1 = 13;
int buttonPin2 = 12;
int buttonPin3 = 11;
int buttonPin4 = 10;
int buttonPin5 = 9;
int buttonPin6 = 8;

int cycle = 0;

unsigned long previousMillis = 0;

// Change the value (in ms) if you whant a higher temporisation when user stop the the path in the middle.
const long interval = 10000; 

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
}

void loop(){
  unsigned long currentMillis = millis();
  
  // read from the button pin
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);
  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6);

  if (button1==HIGH && cycle==0){
  cycle = 1;
  previousMillis = currentMillis;
  digitalWrite(ledPin1,HIGH);
  }
  
  if (button2==HIGH && cycle==1){
  cycle = 2;
  previousMillis = currentMillis;
  digitalWrite(ledPin2,HIGH);
  }
  
  if (button3==HIGH && cycle==2){
  cycle = 3;
  previousMillis = currentMillis;
  digitalWrite(ledPin3,HIGH);
  }
  
  if (button4==HIGH && cycle==3){
  cycle = 4;
  previousMillis = currentMillis;
  digitalWrite(ledPin4,HIGH);
  }
  
  if (button5==HIGH && cycle==4){
  cycle = 5;
  previousMillis = currentMillis;
  digitalWrite(ledPin5,HIGH);
  }
  
  if (button6==HIGH && cycle==5){
  cycle = 6;
  previousMillis = currentMillis;
  digitalWrite(ledPin6,HIGH);
  }
  
  if (cycle==6){
  // Change value (in ms) if you whant higher temporitation at the end of the path
  delay(8000);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  cycle = 0;
  }

  if (currentMillis - previousMillis >= interval) {
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  cycle = 0;
  }
}
