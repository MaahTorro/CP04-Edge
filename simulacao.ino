int trigger = 11;
int echo = 10;
int dist = 0;

void setup(){
 pinMode(trigger, OUTPUT);
 pinMode(echo, INPUT);
 Serial.begin(9600);
  
}

void loop(){
 digitalWrite(trigger, LOW);
 delayMicroseconds(5);
 digitalWrite(trigger, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger, LOW);
  
  dist = pulseIn(echo, HIGH);
  dist = dist / 58;
  Serial.println(dist);
 
}
