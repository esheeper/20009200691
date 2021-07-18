// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);pinMode(3, OUTPUT);pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);pinMode(6, OUTPUT);pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);pinMode(9, OUTPUT);
}

void loop()
{
  int i = 2;
  for(; i < 10;i++)
  {
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
  }
}