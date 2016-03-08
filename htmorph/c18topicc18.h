// C18 to PICC for Microchip CDC demo on the PIC18F4550
// Working version by Shane Tolmie BEng. (www.microchipC.com).
// Original (almost working) version by (C) 2005 Simon R. Ellwood BEng.
// Written in my own time.
// Placed in the Public Domain with NO WARRANTY.
// Retain this message in all future derived versions.
// Otherwise anything goes ;)

#define Sleep SLEEP

typedef struct
{
	unsigned URSTIF	:1;
	unsigned UERRIF	:1;
	unsigned ACTVIF	:1;
	unsigned TRNIF		:1;
	unsigned IDLEIF	:1;
	unsigned STALLIF	:1;
	unsigned SOFIF		:1;
} UIRType;

typedef struct
{
	unsigned URSTIE	:1;
	unsigned UERRIE	:1;
	unsigned ACTVIE	:1;
	unsigned TRNIE		:1;
	unsigned IDLEIE	:1;
	unsigned STALLIE	:1;
	unsigned SOFIE		:1;
} UIEType;

typedef struct
{
	unsigned PPB0		:1;
	unsigned PPB1		:1;
	unsigned FSEN		:1;
	unsigned UTRDIS	:1;
	unsigned UPUEN		:1;
	unsigned Reserved	:1;
	unsigned UOEMON	:1;
	unsigned UTEYE		:1;
} UCFGType;

typedef struct
{
	unsigned Reserved	:1;
	unsigned SUSPND	:1;
	unsigned RESUME	:1;
	unsigned USBEN		:1;
	unsigned PKTDIS	:1;
	unsigned SE0		:1;
	unsigned PPBRST	:1;
} UCONType;

typedef struct
{
	unsigned CCP2IF	:1;
	unsigned TMR3IF	:1;
	unsigned LVDIF		:1;
	unsigned BCLIF		:1;
	unsigned EEIF		:1;
	unsigned USBIF		:1;
	unsigned CMIF		:1;
	unsigned OSCFIF	:1;
} PIR2Type;

typedef struct
{
	unsigned CCP2IE	:1;
	unsigned TMR3IE	:1;
	unsigned LVDIE		:1;
	unsigned BCLIE		:1;
	unsigned EEIE		:1;
	unsigned USBIE		:1;
	unsigned CMIE		:1;
	unsigned OSCFIE	:1;
} PIE2Type;

typedef struct
{
	unsigned EPSTALL	:1;
	unsigned EPINEN	:1;
	unsigned EPOUTEN	:1;
	unsigned EPCONDIS	:1;
	unsigned EPHSHK	:1;
	unsigned Reserved :3;
} UEP0Type;
 
typedef struct
{
	unsigned EPSTALL	: 1;
	unsigned EPINEN	: 1;
	unsigned EPOUTEN	: 1;
	unsigned EPCONDIS : 1;
	unsigned EPHSHK 	: 1;
	unsigned Reserved : 3;
}
EndPointType;

typedef struct
{
	unsigned RA0 : 1;
	unsigned RA1 : 1;
	unsigned RA2 : 1;
	unsigned RA3 : 1;
	unsigned RA4 : 1;
	unsigned RA5 : 1;
	unsigned RA6 : 1;
	unsigned RA7 : 1;
}
RAType;

typedef struct
{
	unsigned RB0 : 1;
	unsigned RB1 : 1;
	unsigned RB2 : 1;
	unsigned RB3 : 1;
	unsigned RB4 : 1;
	unsigned RB5 : 1;
	unsigned RB6 : 1;
	unsigned RB7 : 1;
}
RBType;

typedef struct
{
	unsigned RC0 : 1;
	unsigned RC1 : 1;
	unsigned RC2 : 1;
	unsigned RC3 : 1;
	unsigned RC4 : 1;
	unsigned RC5 : 1;
	unsigned RC6 : 1;
	unsigned RC7 : 1;
}
RCType;

typedef struct
{
	unsigned RD0 : 1;
	unsigned RD1 : 1;
	unsigned RD2 : 1;
	unsigned RD3 : 1;
	unsigned RD4 : 1;
	unsigned RD5 : 1;
	unsigned RD6 : 1;
	unsigned RD7 : 1;
}
RDType;

typedef struct
{
	unsigned RE0 : 1;
	unsigned RE1 : 1;
	unsigned RE2 : 1;
	unsigned RE3 : 1;
	unsigned RE4 : 1;
	unsigned RE5 : 1;
	unsigned RE6 : 1;
	unsigned RE7 : 1;
}
REType;
	
typedef struct
{
	unsigned LATA0 : 1;
	unsigned LATA1 : 1;
	unsigned LATA2 : 1;
	unsigned LATA3 : 1;
	unsigned LATA4 : 1;
	unsigned LATA5 : 1;
	unsigned LATA6 : 1;
	unsigned LATA7 : 1;
}
LatAType;

typedef struct
{
	unsigned LATB0 : 1;
	unsigned LATB1 : 1;
	unsigned LATB2 : 1;
	unsigned LATB3 : 1;
	unsigned LATB4 : 1;
	unsigned LATB5 : 1;
	unsigned LATB6 : 1;
	unsigned LATB7 : 1;
}
LatBType;

typedef struct
{
	unsigned LATC0 : 1;
	unsigned LATC1 : 1;
	unsigned LATC2 : 1;
	unsigned LATC3 : 1;
	unsigned LATC4 : 1;
	unsigned LATC5 : 1;
	unsigned LATC6 : 1;
	unsigned LATC7 : 1;
}
LatCType;

typedef struct
{
	unsigned LATD0 : 1;
	unsigned LATD1 : 1;
	unsigned LATD2 : 1;
	unsigned LATD3 : 1;
	unsigned LATD4 : 1;
	unsigned LATD5 : 1;
	unsigned LATD6 : 1;
	unsigned LATD7 : 1;
}
LatDType;

typedef struct
{
	unsigned LATE0 : 1;
	unsigned LATE1 : 1;
	unsigned LATE2 : 1;
	unsigned LATE3 : 1;
	unsigned LATE4 : 1;
	unsigned LATE5 : 1;
	unsigned LATE6 : 1;
	unsigned LATE7 : 1;
}
LatEType;

typedef struct
{
	unsigned TRISA0 : 1;
	unsigned TRISA1 : 1;
	unsigned TRISA2 : 1;
	unsigned TRISA3 : 1;
	unsigned TRISA4 : 1;
	unsigned TRISA5 : 1;
	unsigned TRISA6 : 1;
	unsigned TRISA7 : 1;
}
TrisAType;

typedef struct
{
	unsigned TRISB0 : 1;
	unsigned TRISB1 : 1;
	unsigned TRISB2 : 1;
	unsigned TRISB3 : 1;
	unsigned TRISB4 : 1;
	unsigned TRISB5 : 1;
	unsigned TRISB6 : 1;
	unsigned TRISB7 : 1;
}
TrisBType;

typedef struct
{
	unsigned TRISC0 : 1;
	unsigned TRISC1 : 1;
	unsigned TRISC2 : 1;
	unsigned TRISC3 : 1;
	unsigned TRISC4 : 1;
	unsigned TRISC5 : 1;
	unsigned TRISC6 : 1;
	unsigned TRISC7 : 1;
}
TrisCType;

typedef struct
{
	unsigned TRISD0 : 1;
	unsigned TRISD1 : 1;
	unsigned TRISD2 : 1;
	unsigned TRISD3 : 1;
	unsigned TRISD4 : 1;
	unsigned TRISD5 : 1;
	unsigned TRISD6 : 1;
	unsigned TRISD7 : 1;
}
TrisDType;

typedef struct
{
	unsigned TRISE0 : 1;
	unsigned TRISE1 : 1;
	unsigned TRISE2 : 1;
	unsigned TRISE3 : 1;
	unsigned TRISE4 : 1;
	unsigned TRISE5 : 1;
	unsigned TRISE6 : 1;
	unsigned TRISE7 : 1;
}
TrisEType;

static volatile near UIRType		UIRbits		@ 0xF68;
static volatile near UIEType		UIEbits		@ 0xF69;
static volatile near UCONType		UCONbits		@ 0xF6D;
static volatile near	UCFGType		UCFGbits		@ 0xF6F;
static volatile near	UEP0Type		UEP0bits		@ 0xF70;
static volatile near PIE2Type		PIE2bits		@ 0xFA0;
static volatile near PIR2Type		PIR2bits		@ 0xFA1;

static volatile near RAType		PORTAbits	@ 0xF80;
static volatile near RBType		PORTBbits	@ 0xF81;
static volatile near RCType		PORTCbits	@ 0xF82;
static volatile near RDType		PORTDbits	@ 0xF83;
static volatile near REType		PORTEbits	@ 0xF84;

static volatile near LatAType		LATAbits 	@ 0xF89;
static volatile near LatBType		LATBbits 	@ 0xF8A;
static volatile near LatCType		LATCbits 	@ 0xF8B;
static volatile near LatDType		LATDbits 	@ 0xF8C;
static volatile near LatEType		LATEbits 	@ 0xF8D;

static volatile near TrisAType	TRISAbits	@ 0xF92;
static volatile near TrisBType	TRISBbits	@ 0xF93;
static volatile near TrisCType	TRISCbits	@ 0xF94;
static volatile near TrisDType	TRISDbits	@ 0xF95;
static volatile near TrisEType	TRISEbits	@ 0xF96;
