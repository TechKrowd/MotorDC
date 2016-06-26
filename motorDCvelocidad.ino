int MOTOR=3;
int i;

void setup(){
  pinMode(MOTOR, OUTPUT);
  Serial.begin(9600);
  analogWrite(MOTOR, 0);  
}

void loop(){
    for(i=0; i<=255; i++){
      analogWrite(MOTOR, i);
      Serial.println(i);
      delay(500);
    }

    for(i=255; i>=0; i--){
      analogWrite(MOTOR, i);
      Serial.println(i);
      delay(500);
    }
}
