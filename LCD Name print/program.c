#include<reg51.h>
sbit RS=P2^0;
sbit RW=P2^1;
sbit EN=P2^2;
void cmd(unsigned char a);
void dat(unsigned char a);
void delay();
void print(unsigned char name[],unsigned int a);
void main(){
cmd(0x38);
cmd(0x0C);
cmd(0x10);
cmd(0x01);
cmd(0x06);
cmd(0x80);
cmd(0xC0);
while(1){
	  print("Ansari",6);
	  cmd(0x01);
	  cmd(0xC0);
		print("Immortal",8);
	  cmd(0x01);
	  cmd(0xC0);
	  print("Luffy",5);
    cmd(0x01);
	  cmd(0xC0);
    print("Zoro",4);
    cmd(0x01);
	  cmd(0xC0);}}
void print(unsigned char name[],unsigned int a){
	int i;
	for(i=0;i<a;i++){
	dat(name[i]);}}
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
	for(i=0;i<30000;i++);}
