#include<reg51.h>
sbit LED=P2^1;
sbit button=P3^0;
void delay();
void main()
{
	P2=0x00;
	P3=0x00;
	while(1){
		if(button==1){
			LED=1;
			delay();
			LED=0;
			delay();
		}}}
void delay()
{
	unsigned int i;
	for (i=1;i<35000;i++);
}