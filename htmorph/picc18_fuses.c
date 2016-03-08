// Shane Tolmie of www.microchipC.com.
#include <pic18.h>

#if !defined(HI_TECH_C) 
  #error Incorrect compiler. PICC18 v8.35PL2 from www.htsoft.com required.
#endif
#if defined (_18F2550) || defined (_18F4550)
  #define PIC_CLK 20000000 // MUST ATTACH an external 20Mhz crystal to PICC18F4550
  #if PIC_CLK==20000000
		// copied from 20Mhz settings on CDC sample project on www.microchip.com
		// 20Mhz crystal
		// CPU core runs at 48Mhz (with PLL), generating 12MIPS (million instructions/second)
		__CONFIG(1,HSPLL & USBPLL	& PLLDIV5 & CPUDIV1 & FCMDIS & IESODIS);
		__CONFIG(2,VREGEN & PWRTDIS & BOREN & BORV20 & WDTDIS & WDTPS32K);
		__CONFIG(3,CCP2RC1 & PBADDIS & LPT1DIS & MCLREN);
		__CONFIG(4,STVREN & LVPDIS & ICPORT & XINSTDIS & DEBUGDIS);
		__CONFIG(5,UNPROTECT);
		__CONFIG(6,UNPROTECT);
		__CONFIG(7,UNPROTECT);
	#else
		#error Incorrect crystal speed.
	#endif
#else
  #error Unknown microcontroller
#endif
