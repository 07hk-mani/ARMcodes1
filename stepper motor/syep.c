#include <LPC214X.H>

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
	
	PINSEL0=0x00000000;
	IODIR0=0xffffffff;
	
	while(1)
	{
		for(i=15;i>=0;i--)
		{
		IOSET0=i;
		delay(2500);
		IOCLR0=i;
			delay(2500);
	
		}
	}
}


