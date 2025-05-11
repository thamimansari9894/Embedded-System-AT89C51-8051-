#include <reg51.h>
void main(){
unsigned char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
unsigned char x;
unsigned int i;
P2=0x00;
while(1)
	{
	for(x=0;x<10;x++)
		{
P2=seg[x];
		for(i=0;i<35000;i++);
}
}
}