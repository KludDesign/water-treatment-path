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
  // read from the button pin
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);
  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6);

  if (button1==HIGH && cycle==0){
  cycle = 1;
  digitalWrite(ledPin1,HIGH);
  }
  
  if (button2==HIGH && cycle==1){
  cycle = 2;
  digitalWrite(ledPin2,HIGH);
  }
  
  if (button3==HIGH && cycle==2){
  cycle = 3;
  digitalWrite(ledPin3,HIGH);
  }
  
  if (button4==HIGH && cycle==3){
  cycle = 4;
  digitalWrite(ledPin4,HIGH);
  }
  
  if (button5==HIGH && cycle==4){
  cycle = 5;
  digitalWrite(ledPin5,HIGH);
  }
  
  if (button6==HIGH && cycle==5){
  cycle = 6;
  digitalWrite(ledPin6,HIGH);
  }
  
  if (cycle==6){
  delay(5000);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  cycle = 0;
  }
}
