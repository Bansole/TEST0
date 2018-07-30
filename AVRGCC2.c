#include<avr/io.h>
#define F_CPU 1000000UL
int ADCinit(int x)
{



  ADMUX=(1<<REFS0)|(0<<REFS1);
  ADCSRA|=(1<<ADEN);
  ADMUX|=x;//chose value from 0 to 7 to chose adc pin accordingly
  ADCSRA|=(1<<ADEN);
  ADCSRA|=(1<<ADSC);
 while(ADCSRA&(1<<ADSC));
 return ADC;
}

int main (void)
{
	DDRB=0b11111111;
	int x ,y;
	
while(1)
{	y=0;
	x=ADCinit(y);
	if (x==1023)
	{
		PORTB=0b00000001;
	}
	if (x>500&&x<700)
	{
		PORTB=0b00000010;
	}
	}	
	
}
