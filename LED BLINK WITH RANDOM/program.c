#include <REGX51.H>
#define leds P2
void dely(unsigned int dly);
void main(){
	unsigned int delay =0;
	while(1){
   leds=0x55;
   dely(50);
   leds=0xAA;
   dely(50);}}
		  void dely (unsigned int dly){
			unsigned int loop=0,dly_led =0;
			for(loop=0;loop<dly;loop++){
			for(dly_led=0;dly_led<800;dly_led++);}}
