const int buzzer = 3; 
const int sensor = 13;

int state; // 0 close - 1 open wwitch

void setup()
{
  pinMode(sensor, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop()
{
  state = digitalRead(sensor);
  
  if (state == HIGH){
    //tone(buzzer, 1);
    Serial.println("OPEN");
} 
  }
  else{
   // noTone(buzzer);
    Serial.println("CLOSE");
  }
  delay(500);
}
