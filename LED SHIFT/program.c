#include <REGX51.H>
#define leds P2
void dely(unsigned int dly);
void main(void){
	unsigned int delay =0,i;
	while(1){
   for(i=0x01;i!=0x00;i<<=1){
		 leds =i;
		 dely(50);}
	 for(i=0x80;i!=0x00;i>>=1){
		 leds =i;
		 dely(50);}}}
		void dely (unsigned int dly){
			unsigned int loop=0,dly_led=0;
			for(loop=0;loop<dly;loop++)
			for(dly_led=0;dly_led<1000;dly_led++);}
