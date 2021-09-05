
#include <Adafruit_NeoPixel.h>

#define PIN            53
#define NUMPIXELS      8*32

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100;
int brightness = 50; // Initial brightness

int r1 = 2; int g1 = 3; int b1 = 4; int o1 = 22;
int r2 = 5; int g2 = 6; int b2 = 7; int o2 = 23;
int r3 = 8; int g3 = 9; int b3 = 10; int o3 = 24;
int r4 = 11; int g4 = 12; int b4 = 13; int o4 = 25;
int r5 = 26; int g5 = 27; int b5 = 28;

void one(int num){
  switch(num){
    case 1: //상
      pixels.setPixelColor(218, pixels.Color(0,216,255));
      pixels.setPixelColor(219, pixels.Color(0,216,255));
      pixels.setPixelColor(220, pixels.Color(0,216,255));
      pixels.setPixelColor(221, pixels.Color(0,216,255));
      pixels.setPixelColor(222, pixels.Color(0,216,255));
      pixels.setPixelColor(228, pixels.Color(0,216,255));
      pixels.setPixelColor(236, pixels.Color(0,216,255));
      pixels.setPixelColor(212, pixels.Color(0,216,255));
      pixels.setPixelColor(204, pixels.Color(0,216,255));
      break;
    case 2: //하
      pixels.setPixelColor(218, pixels.Color(0,216,255));
      pixels.setPixelColor(219, pixels.Color(0,216,255));
      pixels.setPixelColor(220, pixels.Color(0,216,255));
      pixels.setPixelColor(221, pixels.Color(0,216,255));
      pixels.setPixelColor(222, pixels.Color(0,216,255));
      pixels.setPixelColor(236, pixels.Color(0,216,255));
      pixels.setPixelColor(226, pixels.Color(0,216,255));
      pixels.setPixelColor(210, pixels.Color(0,216,255));
      pixels.setPixelColor(204, pixels.Color(0,216,255));
      break;
    case 3: //좌
      pixels.setPixelColor(236, pixels.Color(0,216,255));
      pixels.setPixelColor(227, pixels.Color(0,216,255));
      pixels.setPixelColor(220, pixels.Color(0,216,255));
      pixels.setPixelColor(211, pixels.Color(0,216,255));
      pixels.setPixelColor(204, pixels.Color(0,216,255));
      pixels.setPixelColor(228, pixels.Color(0,216,255));
      pixels.setPixelColor(218, pixels.Color(0,216,255));
      pixels.setPixelColor(226, pixels.Color(0,216,255));
      pixels.setPixelColor(222, pixels.Color(0,216,255));
      break;
    case 4: //우
      pixels.setPixelColor(236, pixels.Color(0,216,255));
      pixels.setPixelColor(227, pixels.Color(0,216,255));
      pixels.setPixelColor(220, pixels.Color(0,216,255));
      pixels.setPixelColor(211, pixels.Color(0,216,255));
      pixels.setPixelColor(204, pixels.Color(0,216,255));
      pixels.setPixelColor(212, pixels.Color(0,216,255));
      pixels.setPixelColor(218, pixels.Color(0,216,255));
      pixels.setPixelColor(210, pixels.Color(0,216,255));
      pixels.setPixelColor(222, pixels.Color(0,216,255));
      break;              
  }
}
 
void two(int num){
  switch(num){
    case 1: //상
      pixels.setPixelColor(170, pixels.Color(0,216,255));
      pixels.setPixelColor(171, pixels.Color(0,216,255));
      pixels.setPixelColor(172, pixels.Color(0,216,255));
      pixels.setPixelColor(173, pixels.Color(0,216,255));
      pixels.setPixelColor(174, pixels.Color(0,216,255));
      pixels.setPixelColor(180, pixels.Color(0,216,255));
      pixels.setPixelColor(188, pixels.Color(0,216,255));
      pixels.setPixelColor(164, pixels.Color(0,216,255));
      pixels.setPixelColor(156, pixels.Color(0,216,255));
      break;
    case 2: //하
      pixels.setPixelColor(170, pixels.Color(0,216,255));
      pixels.setPixelColor(171, pixels.Color(0,216,255));
      pixels.setPixelColor(172, pixels.Color(0,216,255));
      pixels.setPixelColor(173, pixels.Color(0,216,255));
      pixels.setPixelColor(174, pixels.Color(0,216,255));
      pixels.setPixelColor(188, pixels.Color(0,216,255));
      pixels.setPixelColor(178, pixels.Color(0,216,255));
      pixels.setPixelColor(162, pixels.Color(0,216,255));
      pixels.setPixelColor(156, pixels.Color(0,216,255));
      break;
    case 3: //좌
      pixels.setPixelColor(188, pixels.Color(0,216,255));
      pixels.setPixelColor(179, pixels.Color(0,216,255));
      pixels.setPixelColor(172, pixels.Color(0,216,255));
      pixels.setPixelColor(163, pixels.Color(0,216,255));
      pixels.setPixelColor(156, pixels.Color(0,216,255));
      pixels.setPixelColor(180, pixels.Color(0,216,255));
      pixels.setPixelColor(170, pixels.Color(0,216,255));
      pixels.setPixelColor(178, pixels.Color(0,216,255));
      pixels.setPixelColor(174, pixels.Color(0,216,255));
      break;
    case 4: //우
      pixels.setPixelColor(188, pixels.Color(0,216,255));
      pixels.setPixelColor(179, pixels.Color(0,216,255));
      pixels.setPixelColor(172, pixels.Color(0,216,255));
      pixels.setPixelColor(163, pixels.Color(0,216,255));
      pixels.setPixelColor(156, pixels.Color(0,216,255));
      pixels.setPixelColor(170, pixels.Color(0,216,255));
      pixels.setPixelColor(164, pixels.Color(0,216,255));
      pixels.setPixelColor(162, pixels.Color(0,216,255));
      pixels.setPixelColor(174, pixels.Color(0,216,255));
      break;              
  }
}

void three(int num){
  switch(num){
    case 1: //상
      pixels.setPixelColor(85, pixels.Color(0,216,255));
      pixels.setPixelColor(84, pixels.Color(0,216,255));
      pixels.setPixelColor(83, pixels.Color(0,216,255));
      pixels.setPixelColor(82, pixels.Color(0,216,255));
      pixels.setPixelColor(81, pixels.Color(0,216,255));
      pixels.setPixelColor(91, pixels.Color(0,216,255));
      pixels.setPixelColor(99, pixels.Color(0,216,255));
      pixels.setPixelColor(75, pixels.Color(0,216,255));
      pixels.setPixelColor(67, pixels.Color(0,216,255));
      break;
    case 2: //하
      pixels.setPixelColor(85, pixels.Color(0,216,255));
      pixels.setPixelColor(84, pixels.Color(0,216,255));
      pixels.setPixelColor(83, pixels.Color(0,216,255));
      pixels.setPixelColor(82, pixels.Color(0,216,255));
      pixels.setPixelColor(81, pixels.Color(0,216,255));
      pixels.setPixelColor(99, pixels.Color(0,216,255));
      pixels.setPixelColor(93, pixels.Color(0,216,255));
      pixels.setPixelColor(77, pixels.Color(0,216,255));
      pixels.setPixelColor(67, pixels.Color(0,216,255));
      break;
    case 3: //좌
      pixels.setPixelColor(99, pixels.Color(0,216,255));
      pixels.setPixelColor(92, pixels.Color(0,216,255));
      pixels.setPixelColor(83, pixels.Color(0,216,255));
      pixels.setPixelColor(76, pixels.Color(0,216,255));
      pixels.setPixelColor(67, pixels.Color(0,216,255));
      pixels.setPixelColor(91, pixels.Color(0,216,255));
      pixels.setPixelColor(85, pixels.Color(0,216,255));
      pixels.setPixelColor(93, pixels.Color(0,216,255));
      pixels.setPixelColor(81, pixels.Color(0,216,255));
      break;
    case 4: //우
      pixels.setPixelColor(99, pixels.Color(0,216,255));
      pixels.setPixelColor(92, pixels.Color(0,216,255));
      pixels.setPixelColor(83, pixels.Color(0,216,255));
      pixels.setPixelColor(76, pixels.Color(0,216,255));
      pixels.setPixelColor(67, pixels.Color(0,216,255));
      pixels.setPixelColor(85, pixels.Color(0,216,255));
      pixels.setPixelColor(75, pixels.Color(0,216,255));
      pixels.setPixelColor(77, pixels.Color(0,216,255));
      pixels.setPixelColor(81, pixels.Color(0,216,255));
      break;              
  }
}

void four(int num){
  switch(num){
    case 1: //상
      pixels.setPixelColor(37, pixels.Color(0,216,255));
      pixels.setPixelColor(36, pixels.Color(0,216,255));
      pixels.setPixelColor(35, pixels.Color(0,216,255));
      pixels.setPixelColor(34, pixels.Color(0,216,255));
      pixels.setPixelColor(33, pixels.Color(0,216,255));
      pixels.setPixelColor(51, pixels.Color(0,216,255));
      pixels.setPixelColor(43, pixels.Color(0,216,255));
      pixels.setPixelColor(27, pixels.Color(0,216,255));
      pixels.setPixelColor(19, pixels.Color(0,216,255));
      break;
    case 2: //하
      pixels.setPixelColor(37, pixels.Color(0,216,255));
      pixels.setPixelColor(36, pixels.Color(0,216,255));
      pixels.setPixelColor(35, pixels.Color(0,216,255));
      pixels.setPixelColor(34, pixels.Color(0,216,255));
      pixels.setPixelColor(33, pixels.Color(0,216,255));
      pixels.setPixelColor(51, pixels.Color(0,216,255));
      pixels.setPixelColor(45, pixels.Color(0,216,255));
      pixels.setPixelColor(29, pixels.Color(0,216,255));
      pixels.setPixelColor(19, pixels.Color(0,216,255));
      break;
    case 3: //좌
      pixels.setPixelColor(51, pixels.Color(0,216,255));
      pixels.setPixelColor(44, pixels.Color(0,216,255));
      pixels.setPixelColor(35, pixels.Color(0,216,255));
      pixels.setPixelColor(28, pixels.Color(0,216,255));
      pixels.setPixelColor(19, pixels.Color(0,216,255));
      pixels.setPixelColor(45, pixels.Color(0,216,255));
      pixels.setPixelColor(33, pixels.Color(0,216,255));
      pixels.setPixelColor(43, pixels.Color(0,216,255));
      pixels.setPixelColor(37, pixels.Color(0,216,255));
      break;
    case 4: //우
      pixels.setPixelColor(51, pixels.Color(0,216,255));
      pixels.setPixelColor(44, pixels.Color(0,216,255));
      pixels.setPixelColor(35, pixels.Color(0,216,255));
      pixels.setPixelColor(28, pixels.Color(0,216,255));
      pixels.setPixelColor(19, pixels.Color(0,216,255));
      pixels.setPixelColor(37, pixels.Color(0,216,255));
      pixels.setPixelColor(27, pixels.Color(0,216,255));
      pixels.setPixelColor(29, pixels.Color(0,216,255));
      pixels.setPixelColor(33, pixels.Color(0,216,255));
      break;              
  }
}
void one_clr(){
    pixels.setPixelColor(218, pixels.Color(140,140,140));
    pixels.setPixelColor(228, pixels.Color(140,140,140));
    pixels.setPixelColor(236, pixels.Color(140,140,140));
    pixels.setPixelColor(226, pixels.Color(140,140,140));
    pixels.setPixelColor(222, pixels.Color(140,140,140));
    pixels.setPixelColor(210, pixels.Color(140,140,140));
    pixels.setPixelColor(204, pixels.Color(140,140,140));
    pixels.setPixelColor(212, pixels.Color(140,140,140));
    pixels.show();
}
 
void two_clr(){
    pixels.setPixelColor(170, pixels.Color(140,140,140));
    pixels.setPixelColor(180, pixels.Color(140,140,140));
    pixels.setPixelColor(188, pixels.Color(140,140,140));
    pixels.setPixelColor(178, pixels.Color(140,140,140));
    pixels.setPixelColor(174, pixels.Color(140,140,140));
    pixels.setPixelColor(162, pixels.Color(140,140,140));
    pixels.setPixelColor(156, pixels.Color(140,140,140));
    pixels.setPixelColor(164, pixels.Color(140,140,140));
    pixels.show();
}

void three_clr(){
    pixels.setPixelColor(85, pixels.Color(140,140,140));
    pixels.setPixelColor(91, pixels.Color(140,140,140));
    pixels.setPixelColor(99, pixels.Color(140,140,140));
    pixels.setPixelColor(93, pixels.Color(140,140,140));
    pixels.setPixelColor(81, pixels.Color(140,140,140));
    pixels.setPixelColor(77, pixels.Color(140,140,140));
    pixels.setPixelColor(67, pixels.Color(140,140,140));
    pixels.setPixelColor(75, pixels.Color(140,140,140));
    pixels.show();
}

void four_clr(){
    pixels.setPixelColor(37, pixels.Color(140,140,140));
    pixels.setPixelColor(43, pixels.Color(140,140,140));
    pixels.setPixelColor(51, pixels.Color(140,140,140));
    pixels.setPixelColor(45, pixels.Color(140,140,140));
    pixels.setPixelColor(33, pixels.Color(140,140,140));
    pixels.setPixelColor(29, pixels.Color(140,140,140));
    pixels.setPixelColor(19, pixels.Color(140,140,140));
    pixels.setPixelColor(27, pixels.Color(140,140,140));
    pixels.show();
}

void start(){
      //s
      pixels.setPixelColor(245, pixels.Color(140,140,140));
      pixels.setPixelColor(234, pixels.Color(140,140,140));
      pixels.setPixelColor(229, pixels.Color(140,140,140));
      pixels.setPixelColor(218, pixels.Color(140,140,140));
      pixels.setPixelColor(251, pixels.Color(140,140,140));
      pixels.setPixelColor(243, pixels.Color(140,140,140));
      pixels.setPixelColor(236, pixels.Color(140,140,140));
      pixels.setPixelColor(227, pixels.Color(140,140,140));
      pixels.setPixelColor(221, pixels.Color(140,140,140));
      pixels.setPixelColor(254, pixels.Color(140,140,140));
      pixels.setPixelColor(241, pixels.Color(140,140,140));
      pixels.setPixelColor(238, pixels.Color(140,140,140));
      pixels.setPixelColor(225, pixels.Color(140,140,140));

      //t
      pixels.setPixelColor(202, pixels.Color(140,140,140));
      pixels.setPixelColor(197, pixels.Color(140,140,140));
      pixels.setPixelColor(186, pixels.Color(140,140,140));
      pixels.setPixelColor(181, pixels.Color(140,140,140));
      pixels.setPixelColor(170, pixels.Color(140,140,140));
      pixels.setPixelColor(187, pixels.Color(140,140,140));
      pixels.setPixelColor(188, pixels.Color(140,140,140));
      pixels.setPixelColor(189, pixels.Color(140,140,140));
      pixels.setPixelColor(190, pixels.Color(140,140,140));

      //a
      pixels.setPixelColor(138, pixels.Color(140,140,140));
      pixels.setPixelColor(148, pixels.Color(140,140,140));
      pixels.setPixelColor(132, pixels.Color(140,140,140));
      pixels.setPixelColor(156, pixels.Color(140,140,140));
      pixels.setPixelColor(124, pixels.Color(140,140,140));
      pixels.setPixelColor(157, pixels.Color(140,140,140));
      pixels.setPixelColor(146, pixels.Color(140,140,140));
      pixels.setPixelColor(141, pixels.Color(140,140,140));
      pixels.setPixelColor(130, pixels.Color(140,140,140));     
      pixels.setPixelColor(125, pixels.Color(140,140,140));
      pixels.setPixelColor(158, pixels.Color(140,140,140));
      pixels.setPixelColor(126, pixels.Color(140,140,140));

      //r
      pixels.setPixelColor(85, pixels.Color(140,140,140));
      pixels.setPixelColor(74, pixels.Color(140,140,140));
      pixels.setPixelColor(69, pixels.Color(140,140,140));
      pixels.setPixelColor(58, pixels.Color(140,140,140));
      pixels.setPixelColor(84, pixels.Color(140,140,140));
      pixels.setPixelColor(83, pixels.Color(140,140,140));
      pixels.setPixelColor(82, pixels.Color(140,140,140));
      pixels.setPixelColor(81, pixels.Color(140,140,140));
      pixels.setPixelColor(76, pixels.Color(140,140,140));     
      pixels.setPixelColor(67, pixels.Color(140,140,140));
      pixels.setPixelColor(60, pixels.Color(140,140,140));
      pixels.setPixelColor(52, pixels.Color(140,140,140)); 
      pixels.setPixelColor(51, pixels.Color(140,140,140));   
      pixels.setPixelColor(61, pixels.Color(140,140,140)); 
      pixels.setPixelColor(49, pixels.Color(140,140,140));    

      //t
      pixels.setPixelColor(37, pixels.Color(140,140,140));
      pixels.setPixelColor(26, pixels.Color(140,140,140));
      pixels.setPixelColor(21, pixels.Color(140,140,140));
      pixels.setPixelColor(10, pixels.Color(140,140,140));
      pixels.setPixelColor(5, pixels.Color(140,140,140));
      pixels.setPixelColor(20, pixels.Color(140,140,140));
      pixels.setPixelColor(19, pixels.Color(140,140,140));
      pixels.setPixelColor(18, pixels.Color(140,140,140));
      pixels.setPixelColor(17, pixels.Color(140,140,140));      
}

void good(){
    //g
    pixels.setPixelColor(229, pixels.Color(29,219,22));
    pixels.setPixelColor(218, pixels.Color(29,219,22));
    pixels.setPixelColor(213, pixels.Color(29,219,22));
    pixels.setPixelColor(235, pixels.Color(29,219,22));
    pixels.setPixelColor(236, pixels.Color(29,219,22));
    pixels.setPixelColor(237, pixels.Color(29,219,22));
    pixels.setPixelColor(225, pixels.Color(29,219,22));
    pixels.setPixelColor(222, pixels.Color(29,219,22));
    pixels.setPixelColor(220, pixels.Color(29,219,22));
    pixels.setPixelColor(211, pixels.Color(29,219,22));
    pixels.setPixelColor(204, pixels.Color(29,219,22));
    pixels.setPixelColor(205, pixels.Color(29,219,22));
    pixels.setPixelColor(206, pixels.Color(29,219,22));  

    //o
    pixels.setPixelColor(181, pixels.Color(29,219,22));
    pixels.setPixelColor(170, pixels.Color(29,219,22));
    pixels.setPixelColor(165, pixels.Color(29,219,22));
    pixels.setPixelColor(187, pixels.Color(29,219,22));
    pixels.setPixelColor(188, pixels.Color(29,219,22));
    pixels.setPixelColor(189, pixels.Color(29,219,22));
    pixels.setPixelColor(177, pixels.Color(29,219,22));
    pixels.setPixelColor(174, pixels.Color(29,219,22));
    pixels.setPixelColor(161, pixels.Color(29,219,22));
    pixels.setPixelColor(157, pixels.Color(29,219,22));
    pixels.setPixelColor(156, pixels.Color(29,219,22));
    pixels.setPixelColor(155, pixels.Color(29,219,22));   

    //o
    pixels.setPixelColor(90, pixels.Color(29,219,22));
    pixels.setPixelColor(85, pixels.Color(29,219,22));
    pixels.setPixelColor(74, pixels.Color(29,219,22));
    pixels.setPixelColor(100, pixels.Color(29,219,22));
    pixels.setPixelColor(99, pixels.Color(29,219,22));
    pixels.setPixelColor(98, pixels.Color(29,219,22));
    pixels.setPixelColor(94, pixels.Color(29,219,22));
    pixels.setPixelColor(81, pixels.Color(29,219,22));
    pixels.setPixelColor(78, pixels.Color(29,219,22));
    pixels.setPixelColor(66, pixels.Color(29,219,22));
    pixels.setPixelColor(67, pixels.Color(29,219,22));
    pixels.setPixelColor(68, pixels.Color(29,219,22));


    //d
    pixels.setPixelColor(53, pixels.Color(29,219,22));
    pixels.setPixelColor(42, pixels.Color(29,219,22));
    pixels.setPixelColor(37, pixels.Color(29,219,22));
    pixels.setPixelColor(26, pixels.Color(29,219,22));
    pixels.setPixelColor(52, pixels.Color(29,219,22));
    pixels.setPixelColor(51, pixels.Color(29,219,22));
    pixels.setPixelColor(50, pixels.Color(29,219,22));
    pixels.setPixelColor(49, pixels.Color(29,219,22));
    pixels.setPixelColor(46, pixels.Color(29,219,22));
    pixels.setPixelColor(33, pixels.Color(29,219,22));
    pixels.setPixelColor(30, pixels.Color(29,219,22));
    pixels.setPixelColor(20, pixels.Color(29,219,22));      
    pixels.setPixelColor(19, pixels.Color(29,219,22));   
    pixels.setPixelColor(18, pixels.Color(29,219,22));          
}

void ready1(){
  //r
  pixels.setPixelColor(250, pixels.Color(255,0,127));
  pixels.setPixelColor(245, pixels.Color(255,0,127));
  pixels.setPixelColor(234, pixels.Color(255,0,127));
  pixels.setPixelColor(229, pixels.Color(255,0,127));
  pixels.setPixelColor(251, pixels.Color(255,0,127));
  pixels.setPixelColor(219, pixels.Color(255,0,127));
  pixels.setPixelColor(252, pixels.Color(255,0,127));
  pixels.setPixelColor(243, pixels.Color(255,0,127));
  pixels.setPixelColor(236, pixels.Color(255,0,127));
  pixels.setPixelColor(227, pixels.Color(255,0,127));
  pixels.setPixelColor(253, pixels.Color(255,0,127));
  pixels.setPixelColor(254, pixels.Color(255,0,127));
  pixels.setPixelColor(226, pixels.Color(255,0,127));
  pixels.setPixelColor(222, pixels.Color(255,0,127));

  //e
  pixels.setPixelColor(202, pixels.Color(255,0,127));
  pixels.setPixelColor(197, pixels.Color(255,0,127));
  pixels.setPixelColor(186, pixels.Color(255,0,127));
  pixels.setPixelColor(181, pixels.Color(255,0,127));
  pixels.setPixelColor(170, pixels.Color(255,0,127));
  pixels.setPixelColor(203, pixels.Color(255,0,127));
  pixels.setPixelColor(204, pixels.Color(255,0,127));
  pixels.setPixelColor(205, pixels.Color(255,0,127));
  pixels.setPixelColor(206, pixels.Color(255,0,127));
  pixels.setPixelColor(195, pixels.Color(255,0,127));
  pixels.setPixelColor(188, pixels.Color(255,0,127));
  pixels.setPixelColor(179, pixels.Color(255,0,127));
  pixels.setPixelColor(172, pixels.Color(255,0,127));
  pixels.setPixelColor(193, pixels.Color(255,0,127));
  pixels.setPixelColor(190, pixels.Color(255,0,127)); 
  pixels.setPixelColor(177, pixels.Color(255,0,127));    
  pixels.setPixelColor(174, pixels.Color(255,0,127));   

  //a
  pixels.setPixelColor(138, pixels.Color(255,0,127));
  pixels.setPixelColor(148, pixels.Color(255,0,127));
  pixels.setPixelColor(132, pixels.Color(255,0,127));
  pixels.setPixelColor(156, pixels.Color(255,0,127));
  pixels.setPixelColor(124, pixels.Color(255,0,127));
  pixels.setPixelColor(157, pixels.Color(255,0,127));
  pixels.setPixelColor(146, pixels.Color(255,0,127));
  pixels.setPixelColor(141, pixels.Color(255,0,127));
  pixels.setPixelColor(130, pixels.Color(255,0,127));     
  pixels.setPixelColor(125, pixels.Color(255,0,127));
  pixels.setPixelColor(158, pixels.Color(255,0,127));
  pixels.setPixelColor(126, pixels.Color(255,0,127));  

  //D
  pixels.setPixelColor(85, pixels.Color(255,0,127));
  pixels.setPixelColor(74, pixels.Color(255,0,127));
  pixels.setPixelColor(69, pixels.Color(255,0,127));
  pixels.setPixelColor(58, pixels.Color(255,0,127));
  pixels.setPixelColor(84, pixels.Color(255,0,127));
  pixels.setPixelColor(83, pixels.Color(255,0,127));
  pixels.setPixelColor(82, pixels.Color(255,0,127));
  pixels.setPixelColor(81, pixels.Color(255,0,127));
  pixels.setPixelColor(78, pixels.Color(255,0,127));     
  pixels.setPixelColor(65, pixels.Color(255,0,127));
  pixels.setPixelColor(62, pixels.Color(255,0,127));
  pixels.setPixelColor(52, pixels.Color(255,0,127));    
  pixels.setPixelColor(51, pixels.Color(255,0,127)); 
  pixels.setPixelColor(50, pixels.Color(255,0,127)); 

  //y
  pixels.setPixelColor(37, pixels.Color(255,0,127));
  pixels.setPixelColor(36, pixels.Color(255,0,127));
  pixels.setPixelColor(28, pixels.Color(255,0,127));
  pixels.setPixelColor(19, pixels.Color(255,0,127));
  pixels.setPixelColor(12, pixels.Color(255,0,127));
  pixels.setPixelColor(4, pixels.Color(255,0,127));
  pixels.setPixelColor(5, pixels.Color(255,0,127));
  pixels.setPixelColor(18, pixels.Color(255,0,127));
  pixels.setPixelColor(17, pixels.Color(255,0,127));     
}

void setColor1(int red, int green, int blue) //상
{
  analogWrite(r1, red);
  analogWrite(g1, green);
  analogWrite(b1, blue); 
}

void setColor2(int red, int green, int blue)//하
{
  analogWrite(r2, red);
  analogWrite(g2, green);
  analogWrite(b2, blue); 
}

void setColor3(int red, int green, int blue)//좌
{
  analogWrite(r3, red);
  analogWrite(g3, green);
  analogWrite(b3, blue); 
}

void setColor4(int red, int green, int blue)//우
{
  analogWrite(r4, red);
  analogWrite(g4, green);
  analogWrite(b4, blue); 
}

void setColor5(int red, int green, int blue)//우
{
  analogWrite(r5, red);
  analogWrite(g5, green);
  analogWrite(b5, blue); 
}

void setOff(){
    setColor1(255, 255, 255); // yellow
    setColor2(255, 255, 255); // yellow
    setColor3(255, 255, 255); // yellow
    setColor4(255, 255, 255); // yellow
    setColor5(255, 255, 255); // yellow
}
void setup() {
  // put your setup code here, to run once: 
  Serial.begin(115200);
  pixels.begin();
   for(int i=22; i<26; i++){ //적외선 근접센서
    pinMode(i, INPUT);
   }
   for(int i=2 ; i<14; i++){ //led
    pinMode(i, OUTPUT);
   }
   for(int i=37; i<40; i++){
    pinMode(i, OUTPUT);
   }
   pixels.clear();
   pixels.show();
}
int chk = 0;
int count = 1;
void loop() {
  Serial.print("chk : ");
  Serial.println(chk);
  Serial.print("count");
  Serial.println(count);
  delay(500);
  setOff();
  if(chk >= 2){
    if(count == 1){
      pixels.clear();
      start();
      pixels.show();
      delay(1000);
      pixels.clear();
      pixels.show();
      count++;
    }else if(count <= 10){
      pixels.clear();
      pixels.show();      
      int ran[4] = { random(1,5), random(1,5), random(1,5), random(1,5) };
        one(ran[0]);
        two(ran[1]);
        three(ran[2]);
        four(ran[3]);
        pixels.show() ;
        delay(500);
      for(int i=0; i<4; i++){
        boolean clr = false;
            while(!clr){
              if(ran[i] == 1){ //상
                if(LOW == digitalRead(o1)){ //상
                  setColor1(0, 0, 255); // yellow
                  clr = true;
                  if(i==0){
                    one_clr();
                  }else if(i==1){
                    two_clr();
                  }else if(i==2){
                    three_clr();
                  }else if(i==3){
                    four_clr();
                  }
                  delay(500);
                }else if(LOW == digitalRead(o2)){ //하
                  setColor2(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o3)){ //우
                  setColor3(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o4)){ //좌
                  setColor4(0, 255, 255); // red
                  delay(500);
                }else{                
                  setOff();
                }
              }else if(ran[i] == 2){ //하
                if(LOW == digitalRead(o1)){ //상
                  setColor1(0, 255, 255); // yellow
                  delay(500);
                }else if(LOW == digitalRead(o2)){ //하
                  setColor2(0, 0, 255); // red
                  clr = true;
                  if(i==0){
                    one_clr();
                  }else if(i==1){
                    two_clr();
                  }else if(i==2){
                    three_clr();
                  }else if(i==3){
                    four_clr();
                  }                  
                  delay(500);
                }else if(LOW == digitalRead(o3)){ //우
                  setColor3(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o4)){ //좌
                  setColor4(0, 255, 255); // red
                  delay(500);
                }else{
                  setOff();
                }                
              }else if(ran[i] == 3){ //좌
                if(LOW == digitalRead(o1)){ //상
                  setColor1(0, 255, 255); // yellow
                  delay(500);
                }else if(LOW == digitalRead(o2)){ //하
                  setColor2(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o3)){ //우
                  setColor3(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o4)){ //좌
                  setColor4(0, 0, 255); // red
                  clr = true;
                  if(i==0){
                    one_clr();
                  }else if(i==1){
                    two_clr();
                  }else if(i==2){
                    three_clr();
                  }else if(i==3){
                    four_clr();
                  }                  
                  delay(500);
                }else{
                  setOff();
                }                 
              }else{ //우
                if(LOW == digitalRead(o1)){ //상
                  setColor1(0, 255, 255); // yellow
                  delay(500);
                }else if(LOW == digitalRead(o2)){ //하
                  setColor2(0, 255, 255); // red
                  delay(500);
                }else if(LOW == digitalRead(o3)){ //우
                  setColor3(0, 0, 255); // red
                  clr = true;
                  if(i==0){
                    one_clr();
                  }else if(i==1){
                    two_clr();
                  }else if(i==2){
                    three_clr();
                  }else if(i==3){
                    four_clr();
                  }                  
                  delay(500);
                }else if(LOW == digitalRead(o4)){ //좌
                  setColor4(0, 255, 255); // red
                  delay(500);
                }else{
                  setOff();
                }                    
              }
            }
      }
      count++;
    }else if(count > 10){
      pixels.clear();
      good();
      pixels.show();
      delay(2000);
      pixels.clear();
      pixels.show();
      chk = 0;
      count = 1;
    }
  }else{
    if(LOW == digitalRead(o1)){ //상
      setColor1(0, 0, 255); // yellow
      Serial.println("ready");
      ready1();
      pixels.show();
      chk++;
      delay(1000);
    }    
  }
}
