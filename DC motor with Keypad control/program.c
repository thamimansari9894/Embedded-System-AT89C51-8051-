#include <REGX51.H>
#define seg P0;
sbit R1=P1^3;
sbit R2=P1^4;
sbit R3=P1^5;
sbit R4=P1^6;
sbit C1=P1^0;
sbit C2=P1^1;
sbit C3=P1^2;
sbit RS=P2^5;
sbit RW=P2^6;
sbit EN=P2^7;
sbit IN1=P2^0;
sbit IN2=P2^1;
sbit IN3=P2^3;
sbit IN4=P2^4;
sbit EN1=P2^2;
sbit EN2=P1^7;
void cmd(unsigned char a);
void dat(unsigned char a);
void print(unsigned char name[],unsigned int a);
void RF1();
void RF2();
void RF3(); 
void delay();
void main(){ 
P0=0X00;
P1=0x00;
P2=0x00;
P2=0x00;
EN1=1;
EN2=1;
cmd(0x38);
cmd(0x0C);
cmd(0x10);
cmd(0x01);
cmd(0x06);
cmd(0x80);
cmd(0xC0);
while(1){
	C1=C2=C3=1;
	R1=R2=R3=R4=0;
	if(C1==0)
	RF1();
	if(C2==0)
	RF2();
	if(C3==0)
	RF3();
  cmd(0x0C);}}
void RF1(){
	R1=R2=R3=R4=1;
	C1=C2=C3=0;
	if(R1==0){
	P0=(0x06);
	IN1=1;
	IN2=0;
	IN3=0;
	IN4=0;
  delay();
	cmd(0x01);
  print("M1Forw",6);
	cmd(0xC0);}
	if(R2==0){
	P0=(0x66);
	IN1=0;
	IN2=0;
	IN3=0;
	IN4=1;
  delay();
	cmd(0x01);
	print("M2Rev",5);
	cmd(0xC0);}
	if(R3==0){
  P0=(0x07);		
	IN1=1;
	IN2=0;
	IN3=0;
	IN4=1;
	delay();
	cmd(0x01);
	print("M1ForwM2Rev",11);
  cmd(0x0C);}}
void RF2(){
	R1=R2=R3=R4=1;{
	C1=C2=C3=0;
	if(R1==0){
	P0=(0x5B);
	IN1=0;
	IN2=1;
	IN3=0;
	IN4=0;
	delay();
	cmd(0x01);
	print("M1Rev",5);
  cmd(0x0C);}
	if(R2==0){
	P0=(0x6D);
	IN1=1;
	IN2=0;
	IN3=1;
	IN4=0;
	delay();
	cmd(0x01);
	print("M1 M2Forw",9);
  cmd(0x0C);
	delay();}
	if(R3==0){
	P0=(0x7F);
	IN1=0;
	IN2=1;
	IN3=1;
	IN4=0;
	delay();
	cmd(0x01);
	print("M1Rev M2Forw",12);
  cmd(0x0C);}}}
void RF3(){
	R1=R2=R3=R4=1;
	C1=C2=C3=0;
	if(R1==0){
	P0=(0x4F);
	IN1=0;
	IN2=0;
	IN3=1;
	IN4=0;
	delay();
	cmd(0x01);
	print("M2Forw",6);
  cmd(0x0C);}
	if(R2==0){
	P0=(0x7D);
	IN1=0;
	IN2=1;
	IN3=0;
	IN4=1;
	delay();
	cmd(0x01);
	print("M1 M2Rev",8);
  cmd(0x0C);}
	if(R3==0){
	P0=(0x6F);
	IN1=0;
	IN2=0;
  IN3=0;
	IN4=0;
	delay();
	cmd(0x01);
	print("All Off",7);
  cmd(0x0C);}}
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
	for(i=0;i<20000;i++);}