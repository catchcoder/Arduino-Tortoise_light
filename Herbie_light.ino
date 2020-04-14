const int ledPower = 2; 
const int ledOnOff = 3;
const int relay = 4;
const int onOffSwitch = 5;
const int reedSwitch = 6;
const int thermal = A1;
int analogPin = A0;
int val = 0;
int countdown = 10;
boolean cooledDown = true;
boolean switchStatus = false;

void setup() {
  // put your setup code here, to run once:

pinMode(ledPower, OUTPUT);
pinMode(ledOnOff, OUTPUT);
pinMode(relay, OUTPUT);
pinMode(onOffSwitch, INPUT);
pinMode(reedSwitch, INPUT);
digitalWrite (ledPower, HIGH);
digitalWrite (relay, LOW);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(onOffSwitch) == HIGH && cooledDown == true){
    digitalWrite (ledOnOff, HIGH);
    digitalWrite (relay, HIGH);
    Serial.println ("on");
    cooledDown = false;
}
else
{
  checkcooledDown();
  
  if (cooledDown){
  digitalWrite (ledOnOff, LOW);
    digitalWrite (relay, LOW);
    Serial.println ("off");
  }
}

val = analogRead(analogPin);  // Temperature sensor
  Serial.println(val);

delay (1000);
}

void checkcooledDown(){

  }
 

}
