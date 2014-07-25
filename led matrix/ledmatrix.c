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
	int i;
	PINSEL0=0X00000000;
	IODIR0=0XFFFFFFFF;
	
	while(1)
		
	{	
		
			for(i=0;i<10;i++)
		{
			//:)
		IOSET0=0x7e3c;
		delay(30);
		IOCLR0=0x7e3c;
		//delay(30);
   IOSET0=0xc381;
	delay(30);	
	IOCLR0=0xc381;
	//delay(30);
				IOSET0=0xbd42;
		delay(30);
		IOCLR0=0xbd42;
		//delay(30);
   IOSET0=0xdb14;
	delay(30);	
	IOCLR0=0xedb14;
	//delay(30);
			  IOSET0=0xe720;
	delay(30);	
	IOCLR0=0xe720;
	//delay(30);
		
		}
	delay(1000);
		
			for(i=0;i<10;i++)
		{
	//a
	IOSET0=0x8111;
		delay(30);
		IOCLR0=0x8111;
		delay(30);
   IOSET0=0x7efe;
	delay(30);	
	IOCLR0=0x7efe;
	delay(30);
		}
		delay(1000);
		
			for(i=0;i<10;i++)
		{
		//b
	IOSET0=0x0189;
		delay(30);
		IOCLR0=0x0189;
		delay(30);
   IOSET0=0x7fff;
	delay(30);	
	IOCLR0=0x7fff;
		delay(30);	
		 IOSET0=0xfe76;
	delay(30);	
	IOCLR0=0xfe76;
	delay(30);
		}
		delay(1000);
	
		for(i=0;i<10;i++)
		{
	//c
	IOSET0=0x7f7e;
		delay(30);
		IOCLR0=0x7f7e;
		delay(30);
   IOSET0=0x8081;
	delay(30);	
	IOCLR0=0x8081;
	delay(30);
		}
		delay(1000);
		
			for(i=0;i<10;i++)
		{
		//d
	IOSET0=0xbfff;
		delay(30);
		IOCLR0=0xbfff;
		delay(30);
   IOSET0=0x0381;
	delay(30);	
	IOCLR0=0x0381;
		delay(30);	
		 IOSET0=0xfe3c;
	delay(30);	
	IOCLR0=0xfe3c;
	delay(30);
			 IOSET0=0xfd42;
	delay(30);	
	IOCLR0=0xfd42;
	delay(30);
		}
		delay(1000);
		
		for(i=0;i<10;i++)
		{
	//e
	IOSET0=0x0081;
		delay(30);
		IOCLR0=0x0081;
		delay(30);
   IOSET0=0x7fff;
	delay(30);	
	IOCLR0=0x7fff;
	delay(30);
			IOSET0=0x0308;
	delay(30);	
	IOCLR0=0x0308;
	delay(30);
			
		}
		delay(1000);
		
				for(i=0;i<10;i++)
		{
	//f
	IOSET0=0x0001;
		delay(30);
		IOCLR0=0x0001;
		delay(30);
   IOSET0=0x7fff;
	delay(30);	
	IOCLR0=0x7fff;
	delay(30);
			IOSET0=0x0308;
	delay(30);	
	IOCLR0=0x0308;
	delay(30);
			
		}
		delay(1000);
		
					for(i=0;i<10;i++)
		{
	//g
	IOSET0=0x8181;
		delay(30);
		IOCLR0=0x8181;
	//	delay(30);
   IOSET0=0x7f7e;
	delay(30);	
	IOCLR0=0x7f7e;
	//delay(30);
			IOSET0=0xfe70;
	delay(30);	
	IOCLR0=0xfe70;
	//delay(30);
				IOSET0=0xe108;
	delay(30);	
	IOCLR0=0xe108;
	//delay(30);
				IOSET0=0xef38;
	delay(30);	
	IOCLR0=0xef38;
	//delay(30);
					}
		delay(1000);
		
		
		for(i=0;i<10;i++)
		{//h
		IOSET0=0x0008;
		delay(30);
		IOCLR0=0x0008;
		delay(30);
   IOSET0=0x7eff;
	delay(30);	
	IOCLR0=0x7eff;
	delay(30);	
		}
		
		delay(1000);
		
		for(i=0;i<10;i++)
		{
		//i
		IOSET0=0x0081;
		delay(30);
		IOCLR0=0x0081;
		delay(30);
   IOSET0=0xf7ff;
	delay(30);	
	IOCLR0=0xf7ff;
	delay(30);
		}
		
	delay(1000);
	
		
				for(i=0;i<10;i++)
		{
		//j
		IOSET0=0x0001;
		delay(30);
		IOCLR0=0x0001;
		delay(30);
   IOSET0=0xf77f;
	delay(30);	
	IOCLR0=0xf77f;
	delay(30);
				IOSET0=0xcf80;
		delay(30);
		IOCLR0=0xcf80;
		delay(30);
   IOSET0=0xbf70;
	delay(30);	
	IOCLR0=0xbf70;
	delay(30);
		}
	delay(1000);
		

				for(i=0;i<10;i++)
		{
		//k
		IOSET0=0x3fff;
		delay(30);
		IOCLR0=0x3fff;
	//	delay(30);
   IOSET0=0xdf14;
	delay(30);	
	IOCLR0=0xdf14;
	//delay(30);
				IOSET0=0xef22;
		delay(30);
		IOCLR0=0xef22;
		//delay(30);
   IOSET0=0xf741;
	delay(30);	
	IOCLR0=0xf741;
	delay(30);
			IOSET0=0xfb80;
	delay(30);	
	IOCLR0=0xfb80;
	delay(30);
		}
	delay(1000);

		
	for(i=0;i<10;i++)
		{
	//l
	IOSET0=0x0080;
		delay(30);
		IOCLR0=0x0080;
		delay(30);
   IOSET0=0x7fff;
	delay(30);	
	IOCLR0=0x7fff;
	delay(30);
		}
		delay(1000);

				for(i=0;i<10;i++)
		{
		//m
		IOSET0=0x7dff;
		delay(30);
		IOCLR0=0x7dff;
		delay(30);
   IOSET0=0xbb02;
	delay(30);	
	IOCLR0=0xbb02;
	delay(30);
				IOSET0=0xd704;
		delay(30);
		IOCLR0=0xd704;
		delay(30);
   IOSET0=0xef08;
	delay(30);	
	IOCLR0=0xef08;
	delay(30);
		
		}
	delay(1000);

		
						for(i=0;i<10;i++)
		{
		//n
		IOSET0=0x3cff;
		delay(30);
		IOCLR0=0x3cff;
	//	delay(30);
   IOSET0=0xdf02;
	delay(30);	
	IOCLR0=0xdf02;
	//delay(30);
				IOSET0=0xef04;
		delay(30);
		IOCLR0=0xef04;
		//delay(30);
   IOSET0=0xf708;
	delay(30);	
	IOCLR0=0xf708;
	//delay(30);
			IOSET0=0xfb10;
	delay(30);	
	IOCLR0=0xfb10;
	//delay(30);
		}
	delay(1000);
		
						for(i=0;i<10;i++)
		{
		//o
		IOSET0=0x8181;
		delay(30);
		IOCLR0=0x8181;
		delay(30);
   IOSET0=0x7e7e;
	delay(30);	
	IOCLR0=0x7e7e;
	delay(30);
				
		}
	delay(1000);
		
						for(i=0;i<10;i++)
		{
		//p
		IOSET0=0x7fff;
		delay(30);
		IOCLR0=0x7fff;
		delay(30);
   IOSET0=0x0111;
	delay(30);	
	IOCLR0=0x0111;
	delay(30);
				IOSET0=0xfe0e;
		delay(30);
		IOCLR0=0xfe0e;
		delay(30);
   
		}
	delay(1000);
		
		for(i=0;i<10;i++)
		{
		//q
		IOSET0=0x7e3e;
		delay(30);
		IOCLR0=0x7e3e;
	//	delay(30);
   IOSET0=0x08141;
	delay(30);	
	IOCLR0=0x8141;
	//delay(30);
				IOSET0=0xf710;
		delay(30);
		IOCLR0=0xf710;
		//delay(30);
			
			IOSET0=0xfb20;
		delay(30);
		IOCLR0=0xfb20;
		//delay(30);
			IOSET0=0xfd80;
		delay(30);
		IOCLR0=0xfd80;
	//	delay(30);
   
		}
	delay(1000);
		
						for(i=0;i<10;i++)
		{
		//r
		IOSET0=0x7fff;
		delay(30);
		IOCLR0=0x7fff;
		//delay(30);
   IOSET0=0x0111;
	delay(30);	
	IOCLR0=0x0111;
	//delay(30);
				IOSET0=0xfe0e;
		delay(30);
		IOCLR0=0xfe0e;
		//delay(30);
   IOSET0=0xfd80;
	delay(30);	
	IOCLR0=0xfd80;
//	delay(30);
			IOSET0=0xfb40;
	delay(30);	
	IOCLR0=0xfb40;
	//delay(30);
	IOSET0=0xf720;
	delay(30);	
	IOCLR0=0xf720;
	//delay(30);
		}
	delay(1000);
		
			for(i=0;i<10;i++)
		{
		//s
	IOSET0=0x8109;
		delay(30);
		IOCLR0=0x8109;
		delay(30);
   IOSET0=0x7f06;
	delay(30);	
	IOCLR0=0x7f06;
	delay(30);	
			IOSET0=0xfe70;
	delay(30);	
	IOCLR0=0xfe70;
	delay(30);
			IOSET0=0x0180;
	delay(30);	
	IOCLR0=0x0180;
	delay(30);
			
		}	
			delay(1000);
		

		
		for(i=0;i<10;i++)
		{
		//t
	IOSET0=0x0001;
		delay(30);
		IOCLR0=0x0001;
		delay(30);
   IOSET0=0xf7ff;
	delay(30);	
	IOCLR0=0xf7ff;
	delay(30);	
		}	
			delay(1000);
		
			for(i=0;i<10;i++)
		{
		//u
	IOSET0=0x7e7f;
		delay(30);
		IOCLR0=0x7e7f;
		delay(30);
   IOSET0=0x8180;
	delay(30);	
	IOCLR0=0x8180;
	delay(30);	
		}	
			delay(1000);
		
		for(i=0;i<10;i++)
		{
		//v
	IOSET0=0xbb3f;
		delay(30);
		IOCLR0=0xbb3f;
		delay(30);
   IOSET0=0xd740;
	delay(30);	
	IOCLR0=0xd740;
	delay(30);	
			IOSET0=0xef80;
	delay(30);	
	IOCLR0=0xef80;
	delay(30);
		}	
			delay(1000);
			
	}}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	