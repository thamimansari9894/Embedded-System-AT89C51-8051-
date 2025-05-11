#include<reg51.h>
sbit S1=P3^0;
sbit S2=P3^1;
sbit S3=P3^2;
sbit S4=P3^3;
sbit LED1=P2^0;
sbit LED2=P2^1;
sbit LED3=P2^2;
void main(){
	P3=0x00;
	P2=0x00;
	while (1){
		if(S1==1){
			LED1=1;}
			if (S2==1){
				LED1=0;
			  LED2=1;}
				if (S3==1){
					LED2=0;
				LED3=1;}
				if (S4==1){
					LED3=0;
				}}}				