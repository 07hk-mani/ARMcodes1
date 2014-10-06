#include<lpc21xx.h>

void delay(int n)
{
 unsigned int i,j;
	for(i=0;i<n;i++)
	{
	 for(j=0;j<=1000;j++);
	}
}


int main()
{
 PINSEL0=0X00000000;
 IODIR0=0XFFFFFFFF;
 
	while(1)
	{
		IOSET0=0xfffe;
		delay(10);
		IOCLR0=0Xfffe;
	
		IOSET0=0X01bd;
		delay(10);
		IOCLR0=0X01bd;
		
		IOSET0=0Xff7f;
		delay(10);
		IOCLR0=0xff7f;
		
		IOSET0=0X02db;
		delay(10);
		IOCLR0=0X02db;
		
		IOSET0=0X04e7;
		delay(10);
		IOCLR0=0X04e7;
	
		delay(500);
		
		IOSET0=0X01de;
		delay(10);
		IOCLR0=0X01de;
		
		IOSET0=0X02ed;
		delay(10);
		IOCLR0=0X02ed;
		
		IOSET0=0X04f3;
		delay(10);
		IOCLR0=0X04f3;
		
		IOSET0=0Xffbf;
		delay(10);
		IOCLR0=0xffbf;
		
		delay(500);
		IOSET0=0X01ef;
		delay(10);
		IOCLR0=0X01ef;
		
		IOSET0=0X02f6;
		delay(10);
		IOCLR0=0X02f6;
		
		IOSET0=0X04f9;
		delay(10);
		IOCLR0=0X04f9;
		
		IOSET0=0Xffdf;
		delay(10);
		IOCLR0=0xffdf;
		

		delay(500);
		IOSET0=0X01f7;
		delay(10);
		IOCLR0=0X01f7;
		
		IOSET0=0X02fb;
		delay(10);
		IOCLR0=0X02fb;
		
		IOSET0=0X04fc;
		delay(10);
		IOCLR0=0X04fc;
		
		IOSET0=0Xffef;
		delay(10);
		IOCLR0=0xffef;
		

		delay(500);

		IOSET0=0X01fb;
		delay(10);
		IOCLR0=0X01fb;
		
		IOSET0=0X02fd;
		delay(10);
		IOCLR0=0X02fd;
		
		IOSET0=0X04fe;
		delay(10);
		IOCLR0=0X04fe;
		
		IOSET0=0Xfff7;
		delay(10);
		IOCLR0=0xfff7;
		

		delay(500);

		IOSET0=0X01fd;
		delay(10);
		IOCLR0=0X01fd;
		
		IOSET0=0X02fe;
		delay(10);
		IOCLR0=0X02fe;
		
		
		IOSET0=0Xfffb;
		delay(10);
		IOCLR0=0xfffb;
		

		delay(500);


		IOSET0=0X01fe;
		delay(10);
		IOCLR0=0X01fe;
		
		
		
		IOSET0=0Xfffd;
		delay(10);
		IOCLR0=0xfffd;
		

		delay(500);

IOSET0=0Xfffe;
		delay(10);
		IOCLR0=0xfffe;
		
delay(500);
		 
}	
}
	