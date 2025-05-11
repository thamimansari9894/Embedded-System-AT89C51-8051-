#include <REGX51.H>
sbit IN1=P2^0;
sbit IN2=P2^1;
sbit EN1=P2^2;
sbit IN3=P2^3;
sbit IN4=P2^4;
void delay();
void main(){
	while(1){
		IN1=1;
		IN2=0;
		delay();
		IN2=1;
		IN1=0;
  delay();}}
void delay(){
	unsigned int i;
	for(i=0;i<50;i++);}
	
	