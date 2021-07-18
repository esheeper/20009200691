#include <MsTimer2.h>

//本来想尝试使用外部中断控制内部中断的，去网上查资料，找不到，所以只能将就一下，有些许误差，望老师理解。

int ge = 0;
int shi = 0;
int i,tem;
void showContent();
void onTimer();

void showContent()
{
	for(i = 2;i < 6;i++)
    {
      tem = ge;
      digitalWrite(i,((tem>>(i-2))%2));
    }
	for(i = 8;i < 12;i++)
    {
      tem = shi;
      digitalWrite(i,((tem>>(i-8))%2));
    }
}


void onTimer()
{
    ge++;
    if(ge == 10)
    {
        shi++;
        ge = 0;
       if(shi == 10)
       {
             shi = 0;
       }
      }
     showContent();
}


void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
  Serial.begin(9600);
}
  
 void loop()
{
  if(digitalRead(6))
  {
	ge = 0;
	shi = 0;
   	showContent();
    	delay(200);
  }
}

