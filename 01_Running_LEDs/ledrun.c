#include<reg51.h>
#define led P2;
void delay();
void main()
{
while(1)
{
    P2 = 0xFE;  delay();  
    P2 = 0xFD;  delay();  
    P2 = 0xFB;  delay();  
    P2 = 0xF7;  delay(); 
    P2 = 0xEF;  delay();  
    P2 = 0xDF;  delay();  
    P2 = 0xBF;  delay();  
    P2 = 0x7F;  delay(); 
	}
	}
	void delay()
	{
	unsigned int i;
	for(i=0;i<30000;i++);
	}