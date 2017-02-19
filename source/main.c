/** 
* Lab 1 - GPIO Blinky
* - Drive an LED by GPIO
* - Developer - Adam Audycki 
* - Date - 
* 
*/
#include "gpio.h"

// Write a function that will delay for n loops
// to satisfy timing constraints given in lab. 
// ....beware compiler optimization....
void delay(uint32_t count)
{
	//((5.2*10^8)/(80*4))
	uint32_t index = 0;
	while(index <= count)
	{
		index++;
	}
}
    //GPIO24 is 9. Red Wire
	//GND is 6 or 3
int main()
{
	// Select output mode and which pin to drive
	gpio[GPFSEL2]=0x1000;

    while (1)
    {       
        //toggle clear register for the chosen pin. Turns it off.
        gpio[GPCLR0]=0x1000000;
        
		//Apply a delay
		delay(1625000);
        
        //toggle set register for the chosen pin. Turns it on.
        gpio[GPSET0]=0x1000000;
        
		//Apply a delay
		delay(1625000);
    }
    
    return 0;
}
