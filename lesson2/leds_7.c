// C++ code
//
int data = 0;
int i;
int array[9][8] = {{6,2,3,4,5,6,7},{2,3,4},{5,2,3,5,6,8},{5,2,3,4,5,8},{4,3,4,7,8},{5,2,4,5,7,8},{6,2,4,5,6,7,8},{3,2,3,4},{7,2,3,4,5,6,7,8}};

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
 {
	data = Serial.read()-48;
if(data <= 8 && data >= 0 )
{
	for(i = 2;i<10;i++)
	{
		digitalWrite(i,LOW);	
	}
		for(i = 1;i <= array[data][0];i++)
	{
		digitalWrite(array[data][i],HIGH);	
	} 
}

 }

}
