#include <REGX51.H>
#define seg P3
sbit d1 = P2^0;
sbit d2 = P2^1;
void delay();
void main(){
	unsigned char a[10]={0X3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  unsigned int i,j;
	while(1){
		for(i=0;i<100;i++){
			j=i%10;
			d1=1;
			d2=0;
			seg=a[j];
			delay();
			j=i/10;
			d1=0;
			d2=1;
			seg=a[j];
			delay();}}}
  void delay(){
	unsigned int i;
	for(i=0;i<20000;i++);}