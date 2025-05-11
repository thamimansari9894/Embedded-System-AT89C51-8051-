#include <reg51.h>
void delay (){
 volatile long i;
for(i=0;i<50000;i++);}
void main(){
	P2=0x00;
	while(1){
		for(unsigned char i=1i<=255;i++)
		delay();}}
	