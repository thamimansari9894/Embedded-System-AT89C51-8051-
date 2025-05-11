#include <REGX51.H>
#define seg =  P1;
#define Light1=P2;
#define Light2=P3;
sbit d1 =P0^0;
sbit d2 =P0^1;
void delay();
void Time1();
void Time2();
void main(){
	P1=0x00;
  P2=0x00;
  P3=0x00;
	while(1){
	P2=0x14;
	P3=0x11;
	Time1();
	P2=0X22;
	Time2();
	P2=0X41;
	Time1();
	P2=0X21;
	P3=0X12;
	Time2();
	P2=0X11;
	P3=0X14;
	Time1();
	P3=0X22;
	Time2();
	P3=0X41;
	Time1();
	P3=0x21;
	P2=0x12;
  Time2();}}
  void Time1(){
  unsigned char HEX[10]={0X3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  unsigned int i=0,j=0;
		for(i=0;i<21;i++){
			j=i%10;
			d1=1;
			d2=0;
			P1=HEX[j];
			delay();
			j=i/10;
			d1=0;
			d2=1;
			P1=HEX[j];
			delay();}}
  void Time2(){
  unsigned char HEX[10]={0X3F,0x06,0x5B,0x4F,0x66,0x6D};
  unsigned int i=0,j=0;
		for(i=0;i<6;i++){
			j=i%10;
			d1=1;
			d2=0;
			P1=HEX[j];
			delay();
			j=i/10;
			d1=0;
			d2=1;
			P1=HEX[j];
			delay();}}
  void delay(){
	unsigned int i;
	for(i=0;i<30000;i++);}