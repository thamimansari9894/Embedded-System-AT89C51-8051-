#include<reg51.h>
#define Motor P2;
sbit C1=P1^0;
sbit C2=P1^1;
sbit C3=P1^2;
sbit R1=P1^3;
sbit R2=P1^4;
sbit R3=P1^5;
sbit R4=P1^6;
void halfwave();
void fullwave();
void wave();
void delay();
void main(){
P1=0x00;
P2=0x00;
while(1){
  R1=0;
	C1=C2=C3=1;
  if(C1==0){
  halfwave();
  delay();}
  if(C2==0){
  fullwave();
  delay();}
  if(C3==0){
  wave();
  delay();}}}
void halfwave(unsigned int i){
  unsigned char a[10]={0x00,0x08,0x0C,0x04,0x06,0x02,0x03,0x01,0x09};
  for(i=0;i<10;i++){
  P2=a[i];
  delay();}}
void fullwave(unsigned int i){
  unsigned char a[6]={0x00,0x0C,0x06,0x03,0x09};
  for(i=0;i<6;i++){
  P2=a[i];
  delay();}}
void wave(unsigned int i){
  unsigned char a[6]={0x00,0x08,0x04,0x02,0x01};
  for(i=0;i<6;i++){
  P2=a[i];
  delay();}}
void delay(){
  unsigned int i;
  for(i=0;i<35000;i++);}