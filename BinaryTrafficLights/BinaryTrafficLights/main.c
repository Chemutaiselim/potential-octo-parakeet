/*
 * BinaryTrafficLights.c
 *
 * Created: 27/05/2021 04:50:00
 * Author : Default
 */ 

#define F_CPU 8000000UL
 // Defining the clock speed which we will use for the uC

#include <avr/io.h>
 // including header file for input and output definitions

#include <util/delay.h> 
// including header file for the delay function


int main(void)
//including the main method 

{
    DDRB = 0b00000111;
	//Making Pins 1,2 and 3 output pins 
	
    while (1)
	/*
	 Adding a loop
	 the code inside while (1) loop will is set to be executed forever
	 unless until terminated 
	 */
	 
	  {

		PORTB = 0b00000001;
		_delay_ms(700);
		//setting pin logic of PR1 to be high for 7 seconds  
		//The red LED will be on 
		
		PORTB=0b00000011;
		_delay_ms(500);
		//setting the pin logic of PR1 and PR2 to be high for 5 seconds 
		//The yellow and Red LED will be on 
		
		PORTB=0b00000100;
		_delay_ms(300);
		//setting the pin logic of PR3 to be high for 3 seconds
		//The yellow LED will be on 
		
   }
}

