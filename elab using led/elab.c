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
{ int i,j;
	
	PINSEL0=0X00000000;
	IODIR0=0XFFFFFFFF;
	
	while(1)
	{ //blink
		for(i=0;i<15;i++)
		{IOSET0=1<<0|1<<1|1<<2|1<<3;
		delay(1000);
		IOCLR0=1<<0|1<<1|1<<2|1<<3;
		delay(1000);
		}
		IOCLR0=1<<0|1<<1|1<<2|1<<3;
		
		//toggle
		for(i=0;i<15;i++)
		{	
			for(j=0;j<4;j++)

			{
			IOSET0=1<<j;
		delay(1000);
		IOCLR0=1<<j;
		delay(1000);
		}
	}
		//fillup
	for(i=0;i<15;i++)
		{	IOCLR0=1<<0|1<<1|1<<2|1<<3;	
			delay(1000);
			for(j=0;j<4;j++)

			{
			IOSET0=1<<j;
		delay(1000);
		}
	}
		
		
	}
	
	
	
}

