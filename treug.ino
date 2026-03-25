int a, b, c, abc, flag = 0, flags = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Ввудите стороны треугольника : ");
}

void loop() {
   if (Serial.available() > 0 && flag == 0) {
    a = Serial.parseInt();
    b = Serial.parseInt();
    c = Serial.parseInt();
    
    if(a<(c+b) && b<(a+c) && c<(a+b) && flags==0){
      Serial.println("Верно");
      flags=1;
      flag=1;
    }else{
      Serial.println("Не верно");
      flags=1;
      flag=1;
    }
   }
}
