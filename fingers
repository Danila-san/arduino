int us, flag=0 ;
void setup() {
  Serial.begin(9600);
}

void loop() {
   us = Serial.parseInt();
  if(flag==0){
  Serial.println("Введите номер пальца руки : ");
  flag=1;
  }
  if(us>0){
  if(us==1){
    Serial.println("мезинец");
  }else if(us==2){
    Serial.println("безымянный");
    }else if(us==3){
      Serial.println("средний");
    }else if(us==4){
      Serial.println("указательный");
    }else if(us==5){
      Serial.println("большой");
    }else {
      Serial.println("на руке 5 пальцев");
    }
  }
}
