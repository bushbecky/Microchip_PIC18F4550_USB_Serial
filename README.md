# PIC18F4550 USB Serial

*For more C sample code, see [www.MicrochipC.com](http://www.MicrochipC.com/).*

##Abstract

USB example for Microchip PIC18F4550.

Connect a USB cable directly to the pins of a PIC18F4550, add capacitor and crystal, and you have a virtual COMx serial port.

> Do you have any enhancements to share with the community? We honour 95% of pull requests within a few days!

##Introduction

Plug your PIC18F4550 into your PC using a USB cable. A virtual RS232 COM port is created, allowing your application to print RS232 messages into HyperTerminal. Allows porting of legacy code that used RS232 comms. 

This project is a modified form of the CDC (Communications Class Driver) available from [www.microchip.com](http://www.microchip.com/). The [www.htsoft.com](http://www.htsoft.com/) forum has some discussion on this code. 

Note: ensure that you read "*readme (including install notes).txt*" after download. 

## Schematic and PCB

This code runs on the [PICDEM-FS](http://www.microchip.com/Developmenttools/ProductDetails.aspx?PartNO=DM163025) board from Microchip.

This board is no longer available, but its easy to make your own circuit:

- Place a preprogrammed PIC18F4550 on a breadboard.
- Ensure that you are using a 20Mhz crystal.
- Place a 470nF capacitor on port Vusb.
- Hook the USB wires directly to the chip. 
- It should start to work straight away. Download the PICDEM-FS datasheet for the exact schematic to use with this code.

## Testing

- Start up any program which can monitor a standard serial port, such as [HyperTerminal](http://www.hilgraeve.com/hyperterminal/) or [putty](http://www.chipkin.com/using-putty-for-serial-com-connections-hyperterminal-replacement/). 
- Find the new COMx port that has been enumerated. 
- Set it to 115200,N,8,1. 
- The actual COM port speed doesn't matter, as its a virtual comm port. 
- You will see "[alive]" being continuously generated on virtual com port X over USB. 
- You can find the exact number of the virtual COM port by going into "Control Panel", then "System", then selecting the "Hardware" then "Device Manager", there will be a new COM port under "Ports (COM & LPT). You can change the number of the virtual comm port by going into properties, and selecting the new COM port.

## History

**11th Nov 2007** Tried it on Hi-Tech C v9.62, it worked. Had reports that it does not work on Hi-Tech C v9.51.

**2nd Feb 2009** Customer got it working with Hi-Tech C v9.51, it worked after some tweaks. Added instructions to v1.10 of the download.

## More C Sample Code

For more sample code, see [www.MicrochipC.com](http://www.MicrochipC.com/).

> Do you have any enhancements to share with the community? We honour 95% of pull requests within a few days!