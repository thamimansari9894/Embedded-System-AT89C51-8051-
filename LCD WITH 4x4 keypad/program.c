#include <REGX51.H>
sbit R1=P1^0;
sbit R2=P1^1;
sbit R3=P1^2;
sbit R4=P1^3;
sbit C1=P1^4;
sbit C2=P1^5;
sbit C3=P1^6;
sbit C4=P1^7;
sbit RS=P2^0;
sbit RW=P2^1;
sbit EN=P2^2;
void cmd(unsigned char a);
void dat(unsigned char a);
void delay();
void RF1();
void RF2();
void RF3();
void RF4();
void main(){
cmd(0x38);
cmd(0x0C);
cmd(0x10);
cmd(0x01);
cmd(0x06);
cmd(0x80);
cmd(0xC0);
while(1){
	C1=C2=C3=C4=1;
	R1=R2=R3=R4=0;
	if(C1==0)
	RF1();
	if(C2==0)
	RF2();
	if(C3==0)
	RF3();
	if(C4==0)
	RF4();
cmd(0x0C);}}
void RF1(){
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
		dat('7');
	if(R2==0)
		dat('4');
	if(R3==0)
		dat('1');
	if(R4==0)
	  cmd(0x01);
    cmd(0x0C);}
void RF2(){
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
		dat('8');
	if(R2==0)
		dat('5');
	if(R3==0)
		dat('2');
	if(R4==0)
    dat('0');
    cmd(0x0C);}
void RF3(){
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
		dat('9');
	if(R2==0)
		dat('6');
	if(R3==0)
		dat('3');
	if(R4==0)
		dat('=');
    cmd(0x0C);}
void RF4(){
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
		dat('/');
	if(R2==0)
		dat('x');
	if(R3==0)
		dat('-');
	if(R4==0)
		dat('+');
    cmd(0x0C);}
void cmd(unsigned char a){
	P3=a;
	RS=0;
	RW=0;
	EN=1;
	delay();
	EN=0;}
void dat(unsigned char a){
	P3=a;
	RS=1;
	RW=0;
	EN=1;
	delay();
	EN=0;}
void delay(){
	unsigned int i;
	for(i=0;i<25000;i++);}