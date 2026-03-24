int n , m , mn , us , flag=0  , flags=0;
void setup() {
  Serial.begin(9600);
  randomSeed(A0);
}

void loop() {
if(flag==0){
  n = random(0,100);
  Serial.print("Число 1 : ");
  Serial.println(n);
  m = random(0,100);
   Serial.print("Число 2 : ");
    Serial.println(m);
     Serial.print("Ответ : ");
     flag = 1;
}
if(flag==1 && Serial.available()>0 && flags==0){
  mn=m+n;
  us = Serial.parseInt();
  if(mn=us){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, HIGH);
  }
  flags = 1;
}
}
