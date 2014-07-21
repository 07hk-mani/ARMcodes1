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
	
	//int a[]={0x80000000,0x40000000,0x20000000,0x10000000,0x08000000,0x04000000,0x02000000,0x01000000};
	
	PINSEL0=0X00000000;
	PINSEL1=0X00000000;
	IODIR0=0XFFFFFFFF;
	
	
	while(1)
	{
		//for(i=0;i<32;i++)
		//{
		//	IOSET0=pow(2,i);
		//	delay(100);
		//	IOCLR0=pow(2,i);
		//	
		//}
		
		
		
//	for 32 bits using bitwise shift operator	
		for(i=0;i<32;i++)
		{
		IOSET0=1<<i;
		delay(100);
		IOCLR0=1<<i;
		}
		for(i=31;i>=0;i--)
		{
		IOSET0=1<<i;
		delay(100);
		IOCLR0=1<<i;
		}
		
	//for 8 bits using array	
	//	for(i=0;i<8;i++)
	//	{
	//		IOSET0=a[i];
	//		delay(1000);
	//	}
		
	}
}
	
	



