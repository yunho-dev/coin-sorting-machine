#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
#define ten 8
#define fifty 9
#define hundred 10
#define fivehundred 11
int sum = 0;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
void setup() {
  Serial.begin(9600);
  pinMode(ten, INPUT);
  pinMode(fifty, INPUT);
  pinMode(hundred, INPUT);
  pinMode(fivehundred, INPUT);
    lcd.begin(16,2);
    lcd.clear();
}
void loop() {
int a = digitalRead(ten);
if(a == 0){
  Serial.println("10원");
  sum=sum+10;
  count1 = count1 + 1;
  Serial.println(sum);
  Serial.println(count1);
   lcd.setCursor(0,0);
   lcd.print(sum);
    lcd.setCursor(0,1);
    lcd.print(count1);
    delay(2000);
}
int b = digitalRead(fifty);
if(b == 0){
  Serial.println("50원");
  sum=sum+50;
   count2 = count2 + 1;
  Serial.println(sum);
  Serial.println(count2);
  lcd.setCursor(0,0);
    lcd.print(sum);
    lcd.setCursor(6,1);
    lcd.print(count2);
    delay(2000);
}
int c = digitalRead(hundred);
if(c == 0){
  Serial.println("100원");
  sum=sum+100;
  count3 = count3 + 1;
  Serial.println(sum);
  Serial.println(count3);
      lcd.print(sum);
    delay(2000);
}
int d = digitalRead(fivehundred);
if(d == 0){
  Serial.println("500원");
  sum=sum+500;
  count4 = count4 + 1;
  Serial.println(sum);
  Serial.println(count4);
   lcd.print(sum);
    delay(2000);
}
} 
