#include <reg51.h>
void delay(unsigned int i);
void main(void)
{
	while(1)
	{
		//unsigned int i;
		P2=0x05;//0000 0101 -2motors(clk wise)--robot front
		delay(10);
		P2=0x00;//0000 0000 -2motors stops--robot stops
		P2=0x0A;//0000 1010-2motors(anti-clk wsie)--robot back
		delay(10);
		P2=0x00;//0000 0000 -2motors stops--robot stops
		P2=0x09;//0000 1001-2motors-1 clock 1 anti clk-robot left
		delay(10);
		P2=0x00;//0000 0000 -2motors stops--robot stops
		P2=0x06;//0000 0110-2motors-1 anticlock 1 clk-robot right
		delay(10);
		P2=0x00;//0000 0000 -2motors stops--robot stops
	}
	
}
void delay(unsigned int i)
{
	unsigned int a,b;
	for(a=0;a<i;a++)
	{
		for(b=0;b<4000;b++);
	}
}