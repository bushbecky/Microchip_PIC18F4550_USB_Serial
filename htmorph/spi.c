// Emulation of C18 SPI Library Functions
// Shane Tolmie of www.microchipC.com.
// Simon R. Ellwood.
#include "system\typedefs.h"

byte ReadSPI(void)
{
	SSPBUF = 0;				// Transmit a dummy byte to start reception
	while (!BF) continue;

	return SSPBUF;			// Reciece byte now in SSPBUF
}
