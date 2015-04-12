//@Author: NAlomary
int sensorPin = 4;//pin A4
int red = 4;
int sensorVal = 0;

void setup(){
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
  if(sensorVal >2){
    digitalWrite(red, HIGH);
  }
  else{
    digitalWrite(red, LOW);
  }
}
