#include<reg51.h>
sbit LED=P2^0;
void delay();
void main()
	{
  while(1)
	{
		P2=0x01;
		delay();
		P2=0x00;
		delay();
	}
}
void delay()
{
	unsigned int i;
	for(i=0;i<35000;i++);
}

	