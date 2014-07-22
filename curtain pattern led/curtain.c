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
		for(i=32;i>15;i--)
		{
		IOSET0=((pow(2,i))-(pow(2,(32-i))));
		delay(10);
			IOCLR0=((pow(2,i))-(pow(2,(32-i))));	
	}
	for(i=16;i<33;i++)
		{
		IOSET0=((pow(2,i))-(pow(2,(32-i))));
		delay(10);	
				IOCLR0=((pow(2,i))-(pow(2,(32-i))));	
	}
}
	}
