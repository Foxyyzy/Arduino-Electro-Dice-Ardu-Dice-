/*Code by Foxyyzy (GitHub: Foxyyzy) */

int buttonState = 0;
//button pin= 11
/* led pins: 2, 3, 4, 5, 6 */

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11,INPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop()
{
buttonState = digitalRead(11);
  
  if (buttonState == HIGH) {
    start();
  }
  delay(100);
}

void start()
{
  set(random(6));
}

void set(byte number)
{
 setOffAll();
 if (number == 1){
  digitalWrite(2,HIGH);
 } 
 if (number == 2){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
 } 
 if (number == 3){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
 } 
 if (number == 4){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
 } 
 if (number == 5){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
 } 
 if (number == 6){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);

 } 
}

void setOffAll()
{
digitalWrite(2,LOW); 
digitalWrite(3,LOW); 
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(6,LOW); 
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
}
