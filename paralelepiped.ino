int a, b, c, ob, pl, flag = 0, flags = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Введите стороны паралелепипеда : ");
}

void loop() {
   if (Serial.available() > 0 && flag == 0) {
    a = Serial.parseInt();
    b = Serial.parseInt();
    c = Serial.parseInt();
    pl=((a*b+a*c+c*b)*2);
    ob=(a*b*c);
    Serial.print("Объём : ");
    Serial.println(ob);
    Serial.print("Площадь : ");
    Serial.println(pl);
    flag=1;
   }
}
