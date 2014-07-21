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
	PINSEL0=0X00000000;
	PINSEL1=0X00000000;
	IODIR0=0XFFFFFFFF;
	
	while(1)
	{
		IOSET0=0XFFFFFFFF;
		delay(100);
		
	//	IOSET0=0X00000000;
		
	IOCLR0=0xffffffff;
		delay(100);
	}
	
	
	
}

