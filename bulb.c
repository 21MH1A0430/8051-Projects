#include <reg51.h>
sbit sw=P3^0;
sbit relay=P2^3;
void main(void)
{
	while(1)
	{
		if(sw==0)
		{
			relay=1;
		}else
		{
			relay=0;
		}
	}
}