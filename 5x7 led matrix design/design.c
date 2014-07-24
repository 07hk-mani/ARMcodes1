#include<LPC21XX.H>

void delay(unsigned int i)
{
	unsigned int m,n;
	for(m=0;m<i;m++)
	{
		for(n=0;n<1200;n++);
	}
}

int main()
{
int i,j;
int a[]={0xfdf,0x010,0x7ff,0x021,0xfaf,0x828,0xbee,0x862,0xf66,0xc64};
int b[]={0xee4,0xc6a,0xd6e,0xbbf,0x831,0x7df};
int c[]={0x7df,0xbae,0xd64,0xee4};
int d[]={0x551,0x7c5,0xab1,0x7ca};
int e[]={0x7e1,0x7ec,0xbf8,0xbe3,0xde6,0xcf0,0xee6,0xf63,0xf78,0xfac,0xf81,0xfcc};

PINSEL0=0X00000000;
IODIR0=0XFFFFFFFF;
	
	while(1)
		{
	for(i=0;i<20;i++)
		{
	IOCLR0=0XFFFFFFFF;
delay(500);
			
			for(j=0;j<12;j++)
			{
				IOSET0=e[j];
		delay(200);
		IOCLR0=e[j];
	delay(150);
			}
		}
		delay(500);			
			
				for(i=0;i<30;i++)
		{
			IOCLR0=0XFFFFFFFF;
delay(500);
		
	for(j=0;j<4;j++)
			{
				IOSET0=d[j];
		delay(100);
		IOCLR0=d[j];
delay(10);
			}			
		}
		delay(50);
		
			
	for(i=0;i<20;i++)
		{
	IOCLR0=0XFFFFFFFF;
delay(500);
			
			for(j=0;j<10;j++)
			{
				IOSET0=a[j];
		delay(120);
		IOCLR0=a[j];
	delay(20);
			}
		}
		delay(500);
			
		for(i=0;i<20;i++)
		{
			IOCLR0=0XFFFFFFFF;
delay(500);
				for(j=0;j<6;j++)
			{
				IOSET0=b[j];
		delay(80);
		IOCLR0=b[j];

			}
		}
		
		delay(500);
		IOCLR0=0XFFFFFFFF;
				for(i=0;i<30;i++)
		{
			
delay(500);
		
	for(j=0;j<4;j++)
			{
				IOSET0=c[j];
		delay(10);
		IOCLR0=c[j];

			}			
		}
		delay(50);
		
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	