int flag=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,OUTPUT); //in1,in3
  pinMode(13,OUTPUT); //in2,in4
  pinMode(4,INPUT); //rain sensor
  
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);

  if(digitalRead(4)==HIGH && flag==0){
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    delay(5000);
    flag++;
    
    }
  if(digitalRead(4)==LOW && flag==1){
    digitalWrite(12,HIGH); 
    digitalWrite(13,LOW);
    delay(5000);
    flag--;
    }
}
