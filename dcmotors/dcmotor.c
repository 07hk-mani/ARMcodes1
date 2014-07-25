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
	PINSEL0=1<<10|1<<11;
	IODIR0=1<<10|1<<11;
	
	while(1)
	{
		
		{
		IOSET0=1<<10;
		IOCLR0=1<<11;
		delay(10000);
		IOCLR0=1<<10;
		IOSET0=1<<11;
		delay(10000);
		}
	
	}
	
	
}

