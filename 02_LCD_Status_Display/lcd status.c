#include<reg51.h>
sbit D4=P3^0;
sbit D5=P3^1;
sbit D6=P3^2;
sbit D7=P3^3;

sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
sbit sw=P1^0;

void cmd_init();
void cmd(unsigned char a);
void dat(unsigned char b);
void show(unsigned char *s);
void delay();

int main()
{
	sw=1;
	cmd_init();
	while(1)
	{
		if(sw==0)
		{
		
			cmd(0x80);
			show("switch status");
			cmd(0xC0);
			show("ON");
		}
		else
		{
			
			cmd(0x80);
			show("switch status");
			cmd(0xC0);
			show("OFF");
		}
	}
}
void cmd_init()
{
	cmd(0x33);
	cmd(0x32);
	cmd(0x28);
	cmd(0x0e);
	cmd(0x01);
	cmd(0x06);
	cmd(0x0C);
	cmd(0x80);
	
}
void cmd(unsigned char a)
{
	D4=(a>>4)&1; 
	D5=(a>>5)&1; 
	D6=(a>>6)&1; 
	D7=(a>>7)&1;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
	D4=(a>>0)&1; 
	D5=(a>>1)&1; 
	D6=(a>>2)&1; 
	D7=(a>>3)&1;
	rs=0; 
	rw=0; 
	en=1; 
	delay(); 
	en=0;
}
void dat(unsigned char b) 
{
D4=(b>>4)&1; 
	D5=(b>>5)&1; 
	D6=(b>>6)&1; 
	D7=(b>>7)&1;
rs=1; 
	rw=0; 
	en=1; 
	delay();
	en=0;
D4=(b>>0)&1; 
	D5=(b>>1)&1; 
	D6=(b>>2)&1; 
	D7=(b>>3)&1;
rs=1; 
	rw=0; 
	en=1; 
	delay(); 
	en=0;
}

void show(unsigned char *s)
{
	while(*s)
	{
		dat(*s++);
	
	}
}
	void delay()
	{
		unsigned int i;
			for(i=0;i<=6000;i++);
	}
