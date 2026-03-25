int a, b, per, pl, flag = 0, flags = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Введите стороны прямоугольника : ");
}

void loop() {
   if (Serial.available() > 0 && flag == 0) {
    a = Serial.parseInt();
    b = Serial.parseInt();
    per=((a+b)*2);
    Serial.print("Периметр : ");
    Serial.println(per);
    pl=(a*b);
    Serial.print("Площадь : ");
    Serial.println(pl);
    flag=1;
   }
}
