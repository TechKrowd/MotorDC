int PULSADOR=2;
int MOTOR=3;
boolean encendido=false;
int i;

void setup(){
  pinMode(PULSADOR, INPUT);
  pinMode(MOTOR, OUTPUT);
  Serial.begin(9600);
  analogWrite(MOTOR, 0);  
}

void loop(){
    while(digitalRead(PULSADOR)==LOW);
    if(encendido==false){ //motor apagado
      analogWrite(MOTOR, 255); //lo enciendo
      encendido=true;
    }else{ //motor encendido
      analogWrite(MOTOR, 0); //lo apago
      encendido=false;
    }
    while(digitalRead(PULSADOR)==HIGH);
}
