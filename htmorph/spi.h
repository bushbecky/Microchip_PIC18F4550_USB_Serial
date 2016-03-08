#define SPI_FOSC_64 	0b00010010
#define MODE_11 		0b00000000


#define SMPMID 		0x80
#define SMPEND			0x00

#define OpenSPI(sync_mode, bus_mode, smp_phase) \
SSPSTAT = (bus_mode | smp_phase); \
SSPCON1 = sync_mode

extern byte ReadSPI(void);
