int a, b, flag = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Введите м/с : ");
}

void loop() {
   if (Serial.available() > 0 && flag == 0) {
    a = Serial.parseInt();
    b=(a*3.6);
    Serial.print("В км/ч : ");
    Serial.println(b);
    flag=1;
   }
}
