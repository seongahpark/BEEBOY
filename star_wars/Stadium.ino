int ledRed1 = 13;
int ledGreen1 = 12;
int ledBlue1 = 11;

int ledRed2 = 10;
int ledGreen2 = 9;
int ledBlue2 = 8;

int ledRed3 = 7;
int ledGreen3 = 6;
int ledBlue3 = 5;

int ledRed4 = 4;
int ledGreen4 = 3;
int ledBlue4 = 2;


void setup() {
  pinMode(ledRed1, OUTPUT);
  pinMode(ledGreen1, OUTPUT);
  pinMode(ledBlue1, OUTPUT);
    pinMode(ledRed2, OUTPUT);
  pinMode(ledGreen2, OUTPUT);
  pinMode(ledBlue2, OUTPUT);
    pinMode(ledRed3, OUTPUT);
  pinMode(ledGreen3, OUTPUT);
  pinMode(ledBlue3, OUTPUT);
    pinMode(ledRed4, OUTPUT);
  pinMode(ledGreen4, OUTPUT);
  pinMode(ledBlue4, OUTPUT);
}


void LED1(){
  int a;

  a=random(20); 0부터 19사이의 랜덤한 숫자를 고름

  if(a==0){
    경고사인
    analogWrite(ledRed1, 255);
    analogWrite(ledBlue1, 0);
    analogWrite(ledGreen1, 0); 빨
  }
  else if(a0 && a=10){
    analogWrite(ledRed1, 10);
    analogWrite(ledBlue1, 250);
    analogWrite(ledGreen1, 200); 파랑
  }
    else if(a17){
    analogWrite(ledRed1, 255);
    analogWrite(ledBlue1, 127);
    analogWrite(ledGreen1, 0); (핑크)
  }
    else if(a19){
    analogWrite(ledRed1, 200);
    analogWrite(ledBlue1, 0);
    analogWrite(ledGreen1, 200); 노
  }
    else{
    analogWrite(ledRed1, 255);
    analogWrite(ledBlue1, 255);
    analogWrite(ledGreen1, 255); 흰
  }
}

void LED2(){
  int a;

  a=random(20); 0부터 19사이의 랜덤한 숫자 고름

  if(a==0){
    경고사인
    analogWrite(ledRed2, 255);
    analogWrite(ledBlue2, 0);
    analogWrite(ledGreen2, 0);
  }
  else if(a0 && a=10){
    analogWrite(ledRed2, 10);
    analogWrite(ledBlue2, 250);
    analogWrite(ledGreen2, 200);
  }
    else if(a17){
    analogWrite(ledRed2, 255);
    analogWrite(ledBlue2, 127);
    analogWrite(ledGreen2, 0);
  }
    else if(a19){
    analogWrite(ledRed2, 200);
    analogWrite(ledBlue2, 0);
    analogWrite(ledGreen2, 200);
  }
    else{
    analogWrite(ledRed2, 255);
    analogWrite(ledBlue2, 255);
    analogWrite(ledGreen2, 255);
  }
}

void LED3(){
  int a;

  a=random(20); 0부터 19사이의 랜덤한 숫자 고름

  if(a==0){
    경고사인
    analogWrite(ledRed3, 255);
    analogWrite(ledBlue3, 0);
    analogWrite(ledGreen3, 0);
  }
  else if(a0 && a=10){
 analogWrite(ledRed3, 10);
    analogWrite(ledBlue3, 250);
    analogWrite(ledGreen3, 200);
  }
    else if(a17){
    analogWrite(ledRed3, 255);
    analogWrite(ledBlue3, 127);
    analogWrite(ledGreen3, 0);
  }
    else if(a19){
    analogWrite(ledRed3, 200);
    analogWrite(ledBlue3, 0);
    analogWrite(ledGreen3, 200);
  }
    else{
    analogWrite(ledRed3, 255);
    analogWrite(ledBlue3, 255);
    analogWrite(ledGreen3, 255);
  }
}

void LED4(){
  int a;

  a=random(20); 0부터 19사이의 랜덤한 숫자 고름

  if(a==0){
    경고사인
    analogWrite(ledRed4, 255);
    analogWrite(ledBlue4, 0);
    analogWrite(ledGreen4, 0);
  }
  else if(a0 && a=10){
    analogWrite(ledRed4, 10);
    analogWrite(ledBlue4, 250);
    analogWrite(ledGreen4, 200);
  }
    else if( a10 && a17){
    analogWrite(ledRed4, 255);
    analogWrite(ledBlue4, 127);
    analogWrite(ledGreen4, 0);
  }  
    else if(a==17  a==18){
    analogWrite(ledRed4, 200);
    analogWrite(ledBlue4, 0);
    analogWrite(ledGreen4, 200);
  } 
    else{
    analogWrite(ledRed4, 255);
    analogWrite(ledBlue4, 255);
    analogWrite(ledGreen4, 255);
  }
}
void loop() {
   put your main code here, to run repeatedly
  LED1(); LED2(); LED3(); LED4();
  delay(3000);
  
  analogWrite(ledRed1, 0);
  analogWrite(ledGreen1, 0);
  analogWrite(ledBlue1, 0);
  analogWrite(ledRed2, 0);
  analogWrite(ledGreen2, 0);
  analogWrite(ledBlue2, 0);
  analogWrite(ledRed3, 0);
  analogWrite(ledGreen3, 0);
  analogWrite(ledBlue3, 0);
  analogWrite(ledRed4, 0);
  analogWrite(ledGreen4, 0);
  analogWrite(ledBlue4, 0);
  delay(1000);
}