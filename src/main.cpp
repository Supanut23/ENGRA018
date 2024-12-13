#include <Arduino.h>
int L1 = 23;
int L2 = 19;
int L3 = 18;
int L4 = 5;
int L5 = 17;
int L6 = 16;
int L7 = 4;
int L8 = 0;
int potPin = 36;
void setup(){
    pinMode (L1,OUTPUT);
    pinMode (L2,OUTPUT);
    pinMode (L3,OUTPUT);
    pinMode (L4,OUTPUT);
    pinMode (L5,OUTPUT);
    pinMode (L6,OUTPUT);
    pinMode (L7,OUTPUT);
    pinMode (L8,OUTPUT);
}
void loop() {
    int potValue = analogRead(potPin); // อ่านค่าจาก potentiometer
    int range = map(potValue, 0, 4095, 0, 4000); // แปลงค่าจาก potentiometer เป็นช่วง 0-4000

    // ปิดไฟทั้งหมดก่อน
    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    digitalWrite(L5, LOW);
    digitalWrite(L6, LOW);
    digitalWrite(L7, LOW);
    digitalWrite(L8, LOW);

    // เปิดไฟตามค่า range
    if (range >= 0 && range < 500) {
        digitalWrite(L1, HIGH);
    }
    else if (range >= 500 && range < 1000) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
    }
    else if (range >= 1000 && range < 1500) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
    }
    else if (range >= 1500 && range < 2000) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
        digitalWrite(L4, HIGH);
    }
    else if (range >= 2000 && range < 2500) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
        digitalWrite(L4, HIGH);
        digitalWrite(L5, HIGH);
    }
    else if (range >= 2500 && range < 3000) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
        digitalWrite(L4, HIGH);
        digitalWrite(L5, HIGH);
        digitalWrite(L6, HIGH);
    }
    else if (range >= 3000 && range < 3500) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
        digitalWrite(L4, HIGH);
        digitalWrite(L5, HIGH);
        digitalWrite(L6, HIGH);
        digitalWrite(L7, HIGH);
    }
    else if (range >= 3500 && range <= 4000) {
        digitalWrite(L1, HIGH);
        digitalWrite(L2, HIGH);
        digitalWrite(L3, HIGH);
        digitalWrite(L4, HIGH);
        digitalWrite(L5, HIGH);
        digitalWrite(L6, HIGH);
        digitalWrite(L7, HIGH);
        digitalWrite(L8, HIGH);
    }

    delay(10); // ปรับความเร็วในการเปลี่ยนแปลง
}