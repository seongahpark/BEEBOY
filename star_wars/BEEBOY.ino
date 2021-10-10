#include <SoftwareSerial.h>
int RX = 3;
int TX = 2;
SoftwareSerial mySerial(RX, TX); //블루투스 모듈 쓰겠다
int dir_l = 4;
int dir_r = 7;
int pwm_l = 6;
int pwm_r = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(dir_l, OUTPUT);
  pinMode(dir_r, OUTPUT);
  pinMode(pwm_l, OUTPUT);
  pinMode(pwm_r, OUTPUT);
  pinMode(9, OUTPUT); //B
  pinMode(10, OUTPUT); //G
  pinMode(11, OUTPUT); //R
      digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);  

}
char btbuf;
float temp, volt;
int analogv;
void loop() {
  // put your main code here, to run repeatedly:
  if (mySerial.available())
  {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    btbuf = mySerial.read();
    Serial.println(btbuf);
    if (btbuf < 95) {
      if ('U' == btbuf)
      {
        Serial.println("forward");
        moving(HIGH, HIGH, 180, 180);
      }
      else if ('D' == btbuf)
      {
        Serial.println("backward");
        moving(LOW, LOW, 180, 180);
      }
      else if ('L' == btbuf)
      {
        moving(HIGH, HIGH, 60, 160);
      }

      else if ('R' == btbuf)
      {
        moving(HIGH, HIGH, 160, 60);
      }
      else if ('F' == btbuf)
      {
        moving(HIGH, HIGH, 200, 200);
        digitalWrite(10, LOW);
      }
      else if ('B' == btbuf)
      {
        moving(LOW, HIGH, 180, 180); //파란색
        analogWrite(9, 0);
        analogWrite(10, 250);
        analogWrite(11, 00);
      }
      else if ('E' == btbuf) //노란색이 나옴 >> 핑크색으로 바꿈
      {
        moving(HIGH, LOW, 180, 180);
        analogWrite(9, 230);
        analogWrite(10, 50);
        analogWrite(11, 10);

      }
      else if ('S' == btbuf) //음악버튼 흰색
      {
        analogWrite(9, 200);
        analogWrite(10, 200);
        analogWrite(11, 200);
      }
      else if ('A' == btbuf || 'a' == btbuf) //빛버튼 핑크색
      {
        analogWrite(9, 127);
        analogWrite(10, 0);
        analogWrite(11, 255);
      }
      else{
        moving(LOW, LOW, 0, 0);
      }
    }
    else
    {
      moving(LOW, LOW, 0, 0);
    }
  } 
}


void moving(int dirl, int dirr, int pwml, int pwmr) {
  digitalWrite(dir_l, dirl);
  digitalWrite(dir_r, dirr);
  analogWrite(pwm_l, pwml);
  analogWrite(pwm_r, pwmr);
}