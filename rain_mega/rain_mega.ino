int flag=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(47,OUTPUT); //in1,in3
  pinMode(49,OUTPUT); //in2,in4
  pinMode(51,INPUT); //rain sensor
  
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(47,LOW);
  digitalWrite(49,LOW);

  if(digitalRead(51)==HIGH && flag==0){
    digitalWrite(49,HIGH);
    digitalWrite(47,LOW);
    delay(5000);
    flag++;
    
    }
  if(digitalRead(51)==LOW && flag==1){
    digitalWrite(47,HIGH); 
    digitalWrite(49,LOW);
    delay(5000);
    flag--;
    }
}
