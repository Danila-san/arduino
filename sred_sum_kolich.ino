int us, sum, sred, kol, flag = 0;
bool done=false;
void setup() {
  Serial.begin(9600);
  Serial.println("Введите число : ");
}

void loop() {
   if (done==false){
   if (Serial.available() > 0 && flag == 0) {
    us = Serial.parseInt();
    Serial.println(us);
    kol=kol+1;
    sum=sum+us;
    sred=sum/kol;
    if(us==0){
      done=true;
      if(sum>0){
        Serial.print("Количество : ");
        Serial.println(kol);
        Serial.print("Сумма : ");
        Serial.println(sum);
        Serial.print("Среднее арефметическое : ");
        Serial.println(sred);
      }
    }
 }}}
