#include <REGX51.H>
#define seg = P1;
sbit R1= P2^0;
sbit Y1= P2^1;
sbit G1= P2^2;
sbit R2= P2^3;
sbit Y2= P2^4;
sbit G2= P2^5;
sbit R3= P3^0;
sbit Y3= P3^1;
sbit G3= P3^2;
sbit R4= P3^3;
sbit Y4= P3^4;
sbit G4= P3^5;
sbit d1= P3^6;
sbit d2= P3^7;
void delay();
void Time1();
void Time2();
void main(){
	P1=0x00;
  P2=0x00;
  P3=0x00;
	while(1){
G1=1;Y1=0;R2=1;R3=1;R4=1;
Time1();
R1=0;G1=0;Y1=1;Y2=1;R2=0;
Time2();
R1=1;G2=1;Y1=0;Y2=0;R2=0;
Time1();
G1=0;G2=0;Y3=1;Y2=1;R3=0;
Time2();
G3=1;Y2=0;Y1=0;Y3=0;R2=1;R3=0;
Time1();
G3=0;Y1=0;Y3=1;Y4=1;R3=0;R4=0;
Time2();
G4=1;Y3=0;Y4=0;R1=1;R2=1;R3=1;
Time1();
G4=0;Y1=1;Y4=1;R1=0;R2=1;R3=1;
Time2();
		
getch();}}
  void Time1(){
  unsigned char HEX[10]={0X3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  unsigned int i,j;
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
  unsigned int i=0,j;
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
	for(i=0;i<32000;i++);}