// Emulation of C18 SPI Library Functions
// Shane Tolmie of www.microchipC.com.
// Simon R. Ellwood.
#include "system\typedefs.h"

void putsUSART(char* in)
{
	while (*in) 
	{
		while (TXIF == 0) continue;
		TXREG =*in++;
	}
}
