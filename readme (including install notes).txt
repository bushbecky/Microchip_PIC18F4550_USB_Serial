Release Notes for PICDEM(TM) FS USB Starter Kit,
Microchip Technology Inc.

11 June 2005

Install notes:

- Project requires MPLab v7.10 or greater, with Hi-Tech C v8.35PL3 or greater 
	(see www.htsoft.com).
- This project *must* initially be installed in C:\MCHPFSUSB PICC18\. Unzip this 
	file into the root of C:\ 
- To open the project, open "C:\MCHPFSUSB PICC18\fw\Cdc\HitUSB.mcp".
- To install in a different directory, MPlab select "Project>>Build Options>>Project", 
	and change the "Build Path" to point to your new directory.
- The successful project will print "[alive]" on the new COM port when executed.
- Note that you may have to exit HyperTerminal, and re-enter, when searching for
the new COM port.
- You can change the the default COM port (from COM3 to say COM8) by selecting 
  "Windows Start>>Control Panel>>System>>Hardware>>Device Manager>>Ports (COM&LPT)>>
  Right Click on the new COMx port>>Properties>>Port Settings>>Advanced>>COM port 
  number".

19 March 2005

Modified to work with Hi-Tech C v8.35PL2 by Shane Tolmie of (www.microchipC.com)
and Simon Simon R. Ellwood

19 November 2004

Original release

----------------------------------------------------------------------
Directory:
----------------------------------------------------------------------

Documents:

 - PIC18F2455/2550/4455/4550 Data Sheet

 - Application Notes
   > AN950, AN956, ...

 - PICDEM(TM) FS USB Demonstration Board User's Guide

----------------------------------------------------------------------

fw: Firmware Reference Projects

 - _factory_hex
   > Original hex file image as shipped from factory

 - Boot
   > USB Bootloader to be used in Boot Mode with PDFSUSB.exe

 - CDC
   > CDC RS-232 Emulation Reference Project, see AN956

 - Demo
   > Demo Firmware to be used in Demo Mode with PDFSUSB.exe

 - Demo02
   > Example code of how to write a program to work with the
     bootloader

 - HID
   > HID Reference Project, this program emulates a mouse moving
     computer screen cursor in a circle, press S3 on the PICDEM(TM) FS
     USB Demo Board to enable/disable the cursor movement.
     Works with Windows, Macintosh(R), and Linux(R) Operating Systems.

----------------------------------------------------------------------

PC: Microchip General Purpose USB Windows(R) Driver and Demo Applications

 - MCHPUSB Driver
   > Binary driver file, mchpusb.sys, and example inf file

 - MPUSBAPI Library
   > DLL library to be used with your Windows project
   > Example Programs

 - PDFSUSB 
   > PICDEM FS USB Demo Tool Application, PDFSUSB.exe

----------------------------------------------------------------------

Tools:

 - C18 Compiler and MPLAB(R) IDE, download from www.microchip.com
----------------------------------------------------------------------