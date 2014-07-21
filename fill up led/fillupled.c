#include <LPC214X.H>
#include <math.h>

void delay(unsigned int i)
{
	unsigned int m,n;
	for(m=0;m<i;m++)
	{
		for(n=0;n<1000;n++);
	}
}

int main()
{
	 int i;
  PINSEL0=0X00000000;
	PINSEL1=0X00000000;
	IODIR0=0XFFFFFFFF;
	
	
	while(1)
	{
		//for(i=1;i<33;i++)
		//{
		//	IOSET0=((pow(2,i))-1);
		//	delay(1000);
		//	
		//}
		//delay(1000);
		//for(i=32;i>=0;i--)
		//{
		//	IOCLR0=((pow(2,32))-(pow(2,i)));
		//	delay(1000);
		//}
		
		
		
//	for 32 bits using bitwise shift operator	
		for(i=0;i<32;i++)
		{
		IOSET0=1<<i;
		delay(100);
		
		}
		delay(1000);
		for(i=31;i>=0;i--)
		{
		IOCLR0=1<<i;
		delay(100);
		
		}
		
	
		
	}
}
	
	



