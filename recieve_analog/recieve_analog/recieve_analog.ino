void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A3);
  if ( val < 300) {
    Serial.print(val);
    Serial.println(" Low");

  }
  else if (val >= 300 and val <= 700 ) {
    Serial.print(val);
    Serial.println(" Normal");
  }
  else {
    Serial.print(val);
    Serial.print(" High");
  }



}
