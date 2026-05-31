;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : AT90PWM161
;* Title             : Register/Mask/Bit Definitions for the AT90PWM161
;* File Name         : AT90PWM161.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-05-31 13:22:21 UTC
;
;***********************************************************************

#ifndef _AT90PWM161_INC_
#define _AT90PWM161_INC_

;***********************************************************************
;********************* NOTES *******************************************
;***********************************************************************
;
; - Registers marked [MEMORY MAPPED] are extended I/O ports
;   and cannot be used with IN/OUT instructions
; - Register bits are specified by a bit number (for a single bit)
;   xor by mask (for bits group). In case bits in a group are placed sequentially
;   to each other (no gaps) a number for the lower bit in the group is defined also.
; - When a set of bitmask values is listed for bits group,
;   use those values without bit shifting operation
; - Some bitmasks MCU developers split on 2+ chunks and placed separately
;   (sometime in different registers). Such bitmaps are placed in
;   'EXTRA BITFIELDS VALUES' section. Refer to docs where such bits should be set.
;
;***********************************************************************




; **********************************************************************
; ***************	DEVICE DEFINITIONS	************************
; **********************************************************************
;
.device	AT90PWM161
.equ	JTAGID		= 0x948B
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x8B


; ************* CPU REGISTERS DEFINITIONS ******************************
;
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; **********************************************************************
; ***************	ADDR SPACES AND MAPPING	************************
; **********************************************************************
;
; ----------	PROG ADDRESS SPACE		------------------------
;   FLASH
.equ	ADDR_FLASH_START		= 0x0000
.equ	ADDR_FLASH_END			= 0x3FFF
.equ	ADDR_FLASH_SIZE			= 0x4000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0x3F00
.equ	ADDR_BOOT_SECTION_1_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0100
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0x3E00
.equ	ADDR_BOOT_SECTION_2_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0200
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0x3C00
.equ	ADDR_BOOT_SECTION_3_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x0400
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0x3800
.equ	ADDR_BOOT_SECTION_4_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x0800

; ----------	SIGNATURES ADDRESS SPACE	------------------------
;   SIGNATURES
.equ	ADDR_SIGNATURES_START		= 0x0000
.equ	ADDR_SIGNATURES_END		= 0x0002
.equ	ADDR_SIGNATURES_SIZE		= 0x0003

; ----------	FUSES ADDRESS SPACE		------------------------
;   FUSES
.equ	ADDR_FUSES_START		= 0x0000
.equ	ADDR_FUSES_END			= 0x0002
.equ	ADDR_FUSES_SIZE			= 0x0003

; ----------	LOCKBITS ADDRESS SPACE		------------------------
;   LOCKBITS
.equ	ADDR_LOCKBITS_START		= 0x0000
.equ	ADDR_LOCKBITS_END		= 0x0000
.equ	ADDR_LOCKBITS_SIZE		= 0x0001

; ----------	DATA ADDRESS SPACE		------------------------
;   REGISTERS
.equ	ADDR_REGISTERS_START		= 0x0000
.equ	ADDR_REGISTERS_END		= 0x001F
.equ	ADDR_REGISTERS_SIZE		= 0x0020
;   MAPPED_IO
.equ	ADDR_MAPPED_IO_START		= 0x0020
.equ	ADDR_MAPPED_IO_END		= 0x00FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x00E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0100
.equ	ADDR_IRAM_END			= 0x04FF
.equ	ADDR_IRAM_SIZE			= 0x0400

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0001
.equ	ADDR_OSCCAL_SIZE		= 0x0002




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	EXTENDED	= 0x02
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EXTENDED bits		------------------------
.equ	PSC2RB		= 7		; 0x80 - PSC2 Reset Behavior
.equ	PSC2RBA		= 6		; 0x40 - PSC2 Reset Behavior for 22 and 23
.equ	PSC0RB		= 5		; 0x20 - PSC0 Reset Behavior
.equ	PSCRV		= 4		; 0x10 - PSC Reset Value
.equ	PSCINRB		= 3		; 0x08 - PSC2 and PSC0 input Reset Behavior
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector Trigger Level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x03		; Brown-out detection at VCC=2.3 V
;			0x02		; Brown-out detection at VCC=2.2 V
;			0x01		; Brown-out detection at VCC=1.9 V
;			0x00		; Brown-out detection at VCC=2.0 V

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PE0 as I/O pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Select Reset Vector
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=128 words Boot address=$0F80
;			0x04		; Boot Flash size=256 words Boot address=$0F00
;			0x02		; Boot Flash size=512 words Boot address=$0E00
;			0x00		; Boot Flash size=1024 words Boot address=$0C00

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTD1
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. CK; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0000 SUT=00]
;			0x10		; Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+4.1 ms; [CKSEL=0000 SUT=01]
;			0x20		; Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+65 ms; [CKSEL=0000 SUT=10]
;			0x02		; RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0010 SUT=00]
;			0x12		; RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+4.1 ms; [CKSEL=0010 SUT=01]
;			0x22		; RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+65 ms;  [CKSEL=0010 SUT=10]
;			0x08		; XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1000 SUT=00]
;			0x18		; XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1000 SUT=01]
;			0x28		; XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1000 SUT=10]
;			0x38		; XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1000 SUT=11]
;			0x09		; XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1001 SUT=00]
;			0x19		; XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1001 SUT=01]
;			0x29		; XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1001 SUT=10]
;			0x39		; XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1001 SUT=11]
;			0x0A		; XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1010 SUT=00]
;			0x1A		; XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1010 SUT=01]
;			0x2A		; XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1010 SUT=10]
;			0x3A		; XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1010 SUT=11]
;			0x0B		; XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms;  [CKSEL=1011 SUT=00]
;			0x1B		; XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1011 SUT=01]
;			0x2B		; XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1011 SUT=10]
;			0x3B		; XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1011 SUT=11]
;			0x0C		; XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+4.1 ms; [CKSEL=1100 SUT=00]
;			0x1C		; XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+65 ms;  [CKSEL=1100 SUT=01]
;			0x2C		; XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=1100 SUT=10]
;			0x3C		; XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1100 SUT=11]
;			0x0D		; XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+65 ms;  [CKSEL=1101 SUT=00
;			0x1D		; XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=1101 SUT=01]
;			0x2D		; XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1101 SUT=10]
;			0x3D		; XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+65 ms;  [CKSEL=1101 SUT=11]
;			0x0E		; XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1110 SUT=00]
;			0x1E		; XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms;  [CKSEL=1110 SUT=01]
;			0x2E		; XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1110 SUT=10]
;			0x3E		; XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1110 SUT=11]
;			0x0F		; XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1111 SUT=00]
;			0x1F		; XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1111 SUT=01]
;			0x2F		; XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1111 SUT=10]
;			0x3F		; XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1111 SUT=11]
;			0x03		; WD128 KHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0011 SUT=00]
;			0x13		; WD128 KHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0011 SUT=01]
;			0x23		; WD128 KHz; SUT: 1KCK/14CK+65 ms; [CKSEL=0011 SUT=10]
;			0x33		; WD128 KHz; SUT: 16KCK/14CK+0 ms; [CKSEL=0011 SUT=11]
;			0x01		; PLL/4; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=0001 SUT=00]
;			0x11		; PLL/4; PLLin: RC8; SUT: 1KCK/14CK+4 ms;   [CKSEL=0001 SUT=01]
;			0x21		; PLL/4; PLLin: RC8; SUT: 1KCK/14CK+64 ms;   [CKSEL=0001 SUT=10]
;			0x05		; PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+0 ms; [CKSEL=0101 SUT=00]
;			0x15		; PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+4 ms; [CKSEL=0101 SUT=01]
;			0x25		; PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+4 ms; [CKSEL=0101 SUT=10]
;			0x35		; PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+64 ms; [CKSEL=0101 SUT=11]
;			0x04		; PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=0100 SUT=00]
;			0x14		; PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+4 ms; [CKSEL=0100 SUT=01]
;			0x24		; PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+64 ms; [CKSEL=0100 SUT=10]
;			0x34		; PLL/4; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=0100 SUT=11]
;			0x06		; RC 1 MHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0110 SUT=00]
;			0x16		; RC 1 MHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0110 SUT=01]
;			0x26		; RC 1 MHz; SUT: 1KCK/14CK+65 ms;  [CKSEL=0110 SUT=10]




; **********************************************************************
; ***************	LOCKBITS REGISTERS	************************
; **********************************************************************
;
.equ	LOCKBIT		= 0x00


; ====	LOCKBIT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LOCKBIT bits		------------------------
.equ	LB_MASK		= 0x03		;      - Memory Lock (2 bits)
.equ	LB0		= 0		;          LB BIT0 position
.equ	BLB0_MASK	= 0x0C		;      - Boot Loader Protection Mode (2 bits)
.equ	BLB00		= 2		;          BLB0 BIT0 position
.equ	BLB1_MASK	= 0x30		;      - Boot Loader Protection Mode (2 bits)
.equ	BLB10		= 4		;          BLB1 BIT0 position
; ::::  LB	:::: bitfield values
;			0x00		; Further programming and verification disabled
;			0x02		; Further programming disabled
;			0x03		; No memory lock features enabled
; ::::  BLB0	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Application Section
;			0x04		; LPM prohibited in Application Section
;			0x08		; SPM prohibited in Application Section
;			0x0C		; No lock on SPM and LPM in Application Section
; ::::  BLB1	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Boot Section
;			0x10		; LPM prohibited in Boot Section
;			0x20		; SPM prohibited in Boot Section
;			0x30		; No lock on SPM and LPM in Boot Section




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	ICR1		= 0x8C		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	EICRA		= 0x89		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	OSCCAL		= 0x88		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PLLCSR		= 0x87		; [MEMORY MAPPED] PLL Control And Status Register
.equ	PRR		= 0x86		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKSELR		= 0x85		; [MEMORY MAPPED] 
.equ	CLKCSR		= 0x84		; [MEMORY MAPPED] 
.equ	CLKPR		= 0x83		; [MEMORY MAPPED] 
.equ	WDTCSR		= 0x82		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	BGCCR		= 0x81		; [MEMORY MAPPED] BandGap Current Calibration Register
.equ	BGCRR		= 0x80		; [MEMORY MAPPED] BandGap Resistor Calibration Register
.equ	AC3CON		= 0x7F		; [MEMORY MAPPED] Analog Comparator3 Control Register
.equ	AC2CON		= 0x7E		; [MEMORY MAPPED] Analog Comparator 2 Control Register
.equ	AC1CON		= 0x7D		; [MEMORY MAPPED] Analog Comparator 1 Control Register
.equ	AC3ECON		= 0x7C		; [MEMORY MAPPED] 
.equ	AC2ECON		= 0x7B		; [MEMORY MAPPED] 
.equ	AC1ECON		= 0x7A		; [MEMORY MAPPED] 
.equ	AMP0CSR		= 0x79		; [MEMORY MAPPED] 
.equ	DIDR1		= 0x78		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	DIDR0		= 0x77		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	DACON		= 0x76		; [MEMORY MAPPED] DAC Control Register
.equ	PASDLY2		= 0x71		; [MEMORY MAPPED] Analog Synchronization Delay Register
.equ	PCNFE2		= 0x70		; [MEMORY MAPPED] PSC 2 Enhanced Configuration Register
.equ	POM2		= 0x6F		; [MEMORY MAPPED] PSC 2 Output Matrix
.equ	PSOC2		= 0x6E		; [MEMORY MAPPED] PSC2 Synchro and Output Configuration
.equ	PICR2H		= 0x6D		; [MEMORY MAPPED] PSC 2 Input Capture Register High
.equ	PICR2L		= 0x6C		; [MEMORY MAPPED] PSC 2 Input Capture Register Low
.equ	PSOC0		= 0x6A		; [MEMORY MAPPED] PSC0 Synchro and Output Configuration
.equ	PICR0		= 0x68		; [MEMORY MAPPED] PSC 0 Input Capture Register 
.equ	PFRC2B		= 0x67		; [MEMORY MAPPED] PSC 2 Input B Control
.equ	PFRC2A		= 0x66		; [MEMORY MAPPED] PSC 2 Input B Control
.equ	OCR2SA		= 0x64		; [MEMORY MAPPED] Output Compare SA Register 
.equ	PFRC0B		= 0x63		; [MEMORY MAPPED] PSC 0 Input B Control
.equ	PFRC0A		= 0x62		; [MEMORY MAPPED] PSC 0 Input A Control
.equ	OCR0SA		= 0x60		; [MEMORY MAPPED] Output Compare SA Register 
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	TCNT1		= 0x3A		; Timer/Counter1  Bytes
.equ	DACH		= 0x39		; DAC Data Register High Byte
.equ	DACL		= 0x38		; DAC Data Register Low Byte
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	SPDR		= 0x36		; SPI Data Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	OCR2RA		= 0x2E		; Output Compare RA Register 
.equ	ADC		= 0x2C		; ADC Data Register  Bytes
.equ	OCR0RA		= 0x2A		; Output Compare RA Register 
.equ	OCR2RB		= 0x28		; Output Compare RB Register 
.equ	OCR2SB		= 0x26		; Output Compare SB Register 
.equ	OCR0RB		= 0x24		; Output Compare RB Register 
.equ	OCR0SB		= 0x22		; Output Compare SB Register 
.equ	EIMSK		= 0x21		; External Interrupt Mask Register
.equ	EIFR		= 0x20		; External Interrupt Flag Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access  Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	GPIOR2		= 0x1B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x1A		; General Purpose IO Register 1
.equ	GPIOR0		= 0x19		; General Purpose IO Register 0
.equ	SPSR		= 0x18		; SPI Status Register
.equ	SPCR		= 0x17		; SPI Control Register
.equ	PCTL2		= 0x16		; PSC 2 Control Register
.equ	PCNF2		= 0x15		; PSC 2 Configuration Register
.equ	PIFR2		= 0x14		; PSC2 Interrupt Flag Register
.equ	PIM2		= 0x13		; PSC2 Interrupt Mask Register
.equ	PCTL0		= 0x12		; PSC 0 Control Register
.equ	PCNF0		= 0x11		; PSC 0 Configuration Register
.equ	PIFR0		= 0x10		; PSC0 Interrupt Flag Register
.equ	PIM0		= 0x0F		; PSC0 Interrupt Mask Register
.equ	PORTE		= 0x0E		; Port E Data Register
.equ	DDRE		= 0x0D		; Port E Data Direction Register
.equ	PINE		= 0x0C		; Port E Input Pins
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	ADMUX		= 0x08		; The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x07		; ADC Control and Status Register B
.equ	ADCSRA		= 0x06		; The ADC Control and Status register
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	TIFR1		= 0x02		; Timer/Counter Interrupt Flag register
.equ	TIMSK1		= 0x01		; Timer/Counter Interrupt Mask Register
.equ	ACSR		= 0x00		; Analog Comparator Status Register


; ====	DAC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DACH bits		------------------------
.equ	DACH_MASK	= 0xFF		;      - DAC Data Register High Byte Bits (8 bits)
.equ	DACH0		= 0		;          DACH BIT0 position

; ----------	Register DACL bits		------------------------
.equ	DACL_MASK	= 0xFF		;      - DAC Data Register Low Byte Bits (8 bits)
.equ	DACL0		= 0		;          DACL BIT0 position

; ----------	Register DACON bits		------------------------
.equ	DAATE		= 7		; 0x80 - DAC Auto Trigger Enable Bit
.equ	DATS_MASK	= 0x70		;      - DAC Trigger Selection Bits (3 bits)
.equ	DATS0		= 4		;          DATS BIT0 position
.equ	DALA		= 2		; 0x04 - DAC Left Adjust
.equ	DAEN		= 0		; 0x01 - DAC Enable Bit
; ::::  DATS	:::: bitfield values
;			0x00		; Analog Comparator 0
;			0x10		; Analog Comparator 1
;			0x20		; External Interrupt Request 0
;			0x30		; Timer/Counter0 Compare Match A
;			0x40		; Timer/Counter0 Overflow
;			0x50		; Timer/Counter1 Compare Match B
;			0x60		; Timer/Counter1 Overflow
;			0x70		; Timer/Counter1 Capture Event



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPCR bits		------------------------
.equ	SPIE		= 7		; 0x80 - SPI Interrupt Enable
.equ	SPE		= 6		; 0x40 - SPI Enable
.equ	DORD		= 5		; 0x20 - Data Order
.equ	MSTR		= 4		; 0x10 - Master/Slave Select
.equ	CPOL		= 3		; 0x08 - Clock polarity
.equ	CPHA		= 2		; 0x04 - Clock Phase
.equ	SPR_MASK	= 0x03		;      - SPI Clock Rate Selects (2 bits)
.equ	SPR0		= 0		;          SPR BIT0 position
; ::::  SPR	>>>> This is a part of COMM_SCK_RATE_3BIT enum (see complete values list below)

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
.equ	WDIF		= 7		; 0x80 - Watchdog Timeout Interrupt Flag
.equ	WDIE		= 6		; 0x40 - Watchdog Timeout Interrupt Enable
.equ	WDP_MASK	= 0x27		;      - Watchdog Timer Prescaler Bits (4 bits)
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
; ::::  WDP	:::: bitfield values
;			0x00		; Oscillator Cycles 2K
;			0x01		; Oscillator Cycles 4K
;			0x02		; Oscillator Cycles 8K
;			0x03		; Oscillator Cycles 16K
;			0x04		; Oscillator Cycles 32K
;			0x05		; Oscillator Cycles 64K
;			0x06		; Oscillator Cycles 128K
;			0x07		; Oscillator Cycles 256K
;			0x20		; Oscillator Cycles 512K
;			0x21		; Oscillator Cycles 1024K



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC2	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x10		; Any Logical Change of INTX
;			0x20		; Falling Edge of INTX
;			0x30		; Rising Edge of INTX
; ::::  ISC1	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Any Logical Change of INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change of INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0x07		;      - External Interrupt Request 2 Enable (3 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x07		;      - External Interrupt Flags (3 bits)
.equ	INTF0		= 0		;          INTF BIT0 position



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal Vref turned off
;			0x40		; AVCC with external capacitor at AREF pin
;			0x80		; Reserved
;			0xC0		; Internal 2.56V Voltage Reference with external capacitor at AREF pin

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC  Prescaler Select Bits (3 bits)
.equ	ADPS0		= 0		;          ADPS BIT0 position

; ----------	Register ADCSRB bits		------------------------
.equ	ADHSM		= 7		; 0x80 - ADC High Speed Mode
.equ	ADNCDIS		= 6		; 0x40 - ADC Noise Canceller Disable
.equ	ADSSEN		= 4		; 0x10 - ADC Single Shot Enable on PSC's Synchronisation Signals
.equ	ADTS_MASK	= 0x0F		;      - ADC Auto Trigger Sources (4 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position
; ::::  ADTS	:::: bitfield values
;			0x00		; Free Running mode
;			0x01		; Analog Comparator
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter0 Compare Match A
;			0x04		; Timer/Counter0 Overflow
;			0x05		; Timer/Counter1 Compare Match B
;			0x06		; Timer/Counter1 Overflow
;			0x07		; Timer/Counter1 Capture Event
;			0x08		; PSC0ASY Event
;			0x09		; PSC1ASY Event
;			0x0A		; PSC2ASY Event
;			0x0B		; Analog comparator 1
;			0x0C		; Analog comparator 2

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - 
.equ	ADC6D		= 6		; 0x40 - ADC7 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable

; ----------	Register DIDR1 bits		------------------------
.equ	ACMP1MD		= 3		; 0x08 - 
.equ	AMP0POSD	= 2		; 0x04 - 
.equ	ADC10D		= 1		; 0x02 - 
.equ	ADC9D		= 0		; 0x01 - 

; ----------	Register AMP0CSR bits		------------------------
.equ	AMP0EN		= 7		; 0x80 - 
.equ	AMP0IS		= 6		; 0x40 - 
.equ	AMP0G_MASK	= 0x30		;      -  (2 bits)
.equ	AMP0G0		= 4		;          AMP0G BIT0 position
.equ	AMP0GS		= 3		; 0x08 - 
.equ	AMP0TS_MASK	= 0x03		;      -  (2 bits)
.equ	AMP0TS0		= 0		;          AMP0TS BIT0 position



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register AC3CON bits		------------------------
.equ	AC3EN		= 7		; 0x80 - Analog Comparator3 Enable Bit
.equ	AC3IE		= 6		; 0x40 - Analog Comparator 3 Interrupt Enable Bit
.equ	AC3IS_MASK	= 0x30		;      - Analog Comparator 3  Interrupt Select Bit (2 bits)
.equ	AC3IS0		= 4		;          AC3IS BIT0 position
.equ	AC3OEA		= 3		; 0x08 - Analog Comparator 3 Alternate Output Enable
.equ	AC3M_MASK	= 0x07		;      - Analog Comparator 3 Multiplexer Register (3 bits)
.equ	AC3M0		= 0		;          AC3M BIT0 position

; ----------	Register AC1CON bits		------------------------
.equ	AC1EN		= 7		; 0x80 - Analog Comparator 1 Enable Bit
.equ	AC1IE		= 6		; 0x40 - Analog Comparator 1 Interrupt Enable Bit
.equ	AC1IS_MASK	= 0x30		;      - Analog Comparator 1  Interrupt Select Bit (2 bits)
.equ	AC1IS0		= 4		;          AC1IS BIT0 position
.equ	AC1M_MASK	= 0x07		;      - Analog Comparator 1 Multiplexer Register (3 bits)
.equ	AC1M0		= 0		;          AC1M BIT0 position
; ::::  AC1IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register AC2CON bits		------------------------
.equ	AC2EN		= 7		; 0x80 - Analog Comparator 2 Enable Bit
.equ	AC2IE		= 6		; 0x40 - Analog Comparator 2 Interrupt Enable Bit
.equ	AC2IS_MASK	= 0x30		;      - Analog Comparator 2  Interrupt Select Bit (2 bits)
.equ	AC2IS0		= 4		;          AC2IS BIT0 position
.equ	AC2M_MASK	= 0x07		;      - Analog Comparator 2 Multiplexer Register (3 bits)
.equ	AC2M0		= 0		;          AC2M BIT0 position
; ::::  AC2IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register ACSR bits		------------------------
.equ	AC3IF		= 7		; 0x80 - Analog Comparator 3 Interrupt Flag Bit
.equ	AC2IF		= 6		; 0x40 - Analog Comparator 2 Interrupt Flag Bit
.equ	AC1IF		= 5		; 0x20 - Analog Comparator 1  Interrupt Flag Bit
.equ	AC3O		= 3		; 0x08 - Analog Comparator 3 Output Bit
.equ	AC2O		= 2		; 0x04 - Analog Comparator 2 Output Bit
.equ	AC1O		= 1		; 0x02 - Analog Comparator 1 Output Bit

; ----------	Register AC3ECON bits		------------------------
.equ	AC3OI		= 5		; 0x20 - Analog Comparator Output Invert
.equ	AC3OE		= 4		; 0x10 - Analog Comparator Output Enable
.equ	AC3H_MASK	= 0x07		;      - Analog Comparator Hysteresis Select (3 bits)
.equ	AC3H0		= 0		;          AC3H BIT0 position

; ----------	Register AC2ECON bits		------------------------
.equ	AC2OI		= 5		; 0x20 - Analog Comparator Output Invert
.equ	AC2OE		= 4		; 0x10 - Analog Comparator Output Enable
.equ	AC2H_MASK	= 0x07		;      - Analog Comparator Hysteresis Select (3 bits)
.equ	AC2H0		= 0		;          AC2H BIT0 position

; ----------	Register AC1ECON bits		------------------------
.equ	AC1OI		= 5		; 0x20 - Analog Comparator Output Invert
.equ	AC1OE		= 4		; 0x10 - Analog Comparator Output Enable
.equ	AC1ICE		= 3		; 0x08 - Analog Comparator Interrupt Capture Enable
.equ	AC1H_MASK	= 0x07		;      - Analog Comparator Hysteresis Select (3 bits)
.equ	AC1H0		= 0		;          AC1H BIT0 position



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SREG bits		------------------------
.equ	SREG_I		= 7		; 0x80 - Global Interrupt Enable
.equ	SREG_T		= 6		; 0x40 - Bit Copy Storage
.equ	SREG_H		= 5		; 0x20 - Half Carry Flag
.equ	SREG_S		= 4		; 0x10 - Sign Bit
.equ	SREG_V		= 3		; 0x08 - Two's Complement Overflow Flag
.equ	SREG_N		= 2		; 0x04 - Negative Flag
.equ	SREG_Z		= 1		; 0x02 - Zero Flag
.equ	SREG_C		= 0		; 0x01 - Carry Flag

; ----------	Register MCUCR bits		------------------------
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	RSTDIS		= 3		; 0x08 - Reset Pin Disable
.equ	CKRC81		= 2		; 0x04 - Frequency Selection of the Calibrated RC Oscillator
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - 
.equ	CLKPS_MASK	= 0x0F		;      -  (4 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position
; ::::  CLKPS	:::: bitfield values
;			0x00		; 1
;			0x01		; 2
;			0x02		; 4
;			0x03		; 8
;			0x04		; 16
;			0x05		; 32
;			0x06		; 64
;			0x07		; 128
;			0x08		; 256

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Reserved
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Reserved

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 2 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR1 bits		------------------------
;.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 1 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR07		= 7		; 0x80 - General Purpose IO Register 0 bit 7
.equ	GPIOR06		= 6		; 0x40 - General Purpose IO Register 0 bit 6
.equ	GPIOR05		= 5		; 0x20 - General Purpose IO Register 0 bit 5
.equ	GPIOR04		= 4		; 0x10 - General Purpose IO Register 0 bit 4
.equ	GPIOR03		= 3		; 0x08 - General Purpose IO Register 0 bit 3
.equ	GPIOR02		= 2		; 0x04 - General Purpose IO Register 0 bit 2
.equ	GPIOR01		= 1		; 0x02 - General Purpose IO Register 0 bit 1
.equ	GPIOR00		= 0		; 0x01 - General Purpose IO Register 0 bit 0

; ----------	Register PLLCSR bits		------------------------
.equ	PLLF_MASK	= 0x3C		;      -  (4 bits)
.equ	PLLF0		= 2		;          PLLF BIT0 position
.equ	PLLE		= 1		; 0x02 - PLL Enable
.equ	PLOCK		= 0		; 0x01 - PLL Lock Detector

; ----------	Register PRR bits		------------------------
.equ	PRPSC2		= 7		; 0x80 - Power Reduction PSC2
.equ	PRPSCR		= 5		; 0x20 - Power Reduction PSC0
.equ	PRTIM1		= 4		; 0x10 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register CLKCSR bits		------------------------
.equ	CLKCCE		= 7		; 0x80 - Clock Control Change Enable
.equ	CLKRDY		= 4		; 0x10 - Clock Ready Flag
.equ	CLKC_MASK	= 0x0F		;      - Clock Control (4 bits)
.equ	CLKC0		= 0		;          CLKC BIT0 position

; ----------	Register CLKSELR bits		------------------------
.equ	COUT		= 6		; 0x40 - Clock OUT
.equ	CSUT_MASK	= 0x30		;      - Clock Start up Time (2 bits)
.equ	CSUT0		= 4		;          CSUT BIT0 position
.equ	CKSEL_MASK	= 0x0F		;      - Clock Source Select (4 bits)
.equ	CKSEL0		= 0		;          CKSEL BIT0 position

; ----------	Register BGCCR bits		------------------------
.equ	BGCC_MASK	= 0x0F		;      -  (4 bits)
.equ	BGCC0		= 0		;          BGCC BIT0 position

; ----------	Register BGCRR bits		------------------------
.equ	BGCR_MASK	= 0x0F		;      -  (4 bits)
.equ	BGCR0		= 0		;          BGCR BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	NVMBSY		= 7		; 0x80 - None Volatile Busy Memory Busy
.equ	EEPAGE		= 6		; 0x40 - EEPROM Page Access
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	PSC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PFRC0B bits		------------------------
.equ	PCAE0B		= 7		; 0x80 - PSC 0 Capture Enable Input Part B
.equ	PISEL0B		= 6		; 0x40 - PSC 0 Input Select for Part B
.equ	PELEV0B		= 5		; 0x20 - PSC 0 Edge Level Selector on Input Part B
.equ	PFLTE0B		= 4		; 0x10 - PSC 0 Filter Enable on Input Part B
.equ	PRFM0B_MASK	= 0x0F		;      - PSC 0 Retrigger and Fault Mode for Part B (4 bits)
.equ	PRFM0B0		= 0		;          PRFM0B BIT0 position

; ----------	Register PFRC0A bits		------------------------
.equ	PCAE0A		= 7		; 0x80 - PSC 0 Capture Enable Input Part A
.equ	PISEL0A		= 6		; 0x40 - PSC 0 Input Select for Part A
.equ	PELEV0A		= 5		; 0x20 - PSC 0 Edge Level Selector on Input Part A
.equ	PFLTE0A		= 4		; 0x10 - PSC 0 Filter Enable on Input Part A
.equ	PRFM0A_MASK	= 0x0F		;      - PSC 0 Retrigger and Fault Mode for Part A (4 bits)
.equ	PRFM0A0		= 0		;          PRFM0A BIT0 position

; ----------	Register PCTL0 bits		------------------------
.equ	PPRE0_MASK	= 0xC0		;      - PSC 0 Prescaler Selects (2 bits)
.equ	PPRE00		= 6		;          PPRE0 BIT0 position
.equ	PBFM0_MASK	= 0x24		;      - PSC 0 Balance Flank Width Modulation (2 bits)
.equ	PAOC0B		= 4		; 0x10 - PSC 0 Asynchronous Output Control B
.equ	PAOC0A		= 3		; 0x08 - PSC 0 Asynchronous Output Control A
.equ	PCCYC0		= 1		; 0x02 - PSC0 Complete Cycle
.equ	PRUN0		= 0		; 0x01 - PSC 0 Run

; ----------	Register PCNF0 bits		------------------------
.equ	PFIFTY0		= 7		; 0x80 - PSC 0 Fifty
.equ	PALOCK0		= 6		; 0x40 - PSC 0 Autolock
.equ	PLOCK0		= 5		; 0x20 - PSC 0 Lock
.equ	PMODE0_MASK	= 0x18		;      - PSC 0 Mode (2 bits)
.equ	PMODE00		= 3		;          PMODE0 BIT0 position
.equ	POP0		= 2		; 0x04 - PSC 0 Output Polarity
.equ	PCLKSEL0	= 1		; 0x02 - PSC 0 Input Clock Select

; ----------	Register PSOC0 bits		------------------------
.equ	PISEL0A1	= 7		; 0x80 - PSC Input Select
.equ	PISEL0B1	= 6		; 0x40 - PSC Input Select
.equ	PSYNC0_MASK	= 0x30		;      - Synchronisation out for ADC selection (2 bits)
.equ	PSYNC00		= 4		;          PSYNC0 BIT0 position
.equ	POEN0B		= 2		; 0x04 - PSCOUT01 Output Enable
.equ	POEN0A		= 0		; 0x01 - PSCOUT00 Output Enable

; ----------	Register PIM0 bits		------------------------
.equ	PEVE0B		= 4		; 0x10 - External Event B Interrupt Enable
.equ	PEVE0A		= 3		; 0x08 - External Event A Interrupt Enable
.equ	PEOEPE0		= 1		; 0x02 - End of Enhanced Cycle Enable
.equ	PEOPE0		= 0		; 0x01 - End of Cycle Interrupt Enable

; ----------	Register PIFR0 bits		------------------------
.equ	POAC0B		= 7		; 0x80 - PSC 0 Output A Activity
.equ	POAC0A		= 6		; 0x40 - PSC 0 Output A Activity
.equ	PEV0B		= 4		; 0x10 - External Event B Interrupt
.equ	PEV0A		= 3		; 0x08 - External Event A Interrupt
.equ	PRN0_MASK	= 0x06		;      - Ramp Number (2 bits)
.equ	PRN00		= 1		;          PRN0 BIT0 position
.equ	PEOP0		= 0		; 0x01 - End of PSC0 Interrupt

; ----------	Register PICR2H bits		------------------------
.equ	PCST2		= 7		; 0x80 - PSC 2 Capture Software Trigger Bit
.equ	PICR21_MASK	= 0x0C		;      -  (2 bits)
.equ	PICR210		= 2		;          PICR21 BIT0 position
.equ	PICR2_MASK	= 0x03		;      -  (2 bits)
.equ	PICR20		= 0		;          PICR2 BIT0 position

; ----------	Register PFRC2B bits		------------------------
.equ	PCAE2B		= 7		; 0x80 - PSC 2 Capture Enable Input Part B
.equ	PISEL2B		= 6		; 0x40 - PSC 2 Input Select for Part B
.equ	PELEV2B		= 5		; 0x20 - PSC 2 Edge Level Selector on Input Part B
.equ	PFLTE2B		= 4		; 0x10 - PSC 2 Filter Enable on Input Part B
.equ	PRFM2B_MASK	= 0x0F		;      - PSC 2 Retrigger and Fault Mode for Part B (4 bits)
.equ	PRFM2B0		= 0		;          PRFM2B BIT0 position

; ----------	Register PFRC2A bits		------------------------
.equ	PCAE2A		= 7		; 0x80 - PSC 2 Capture Enable Input Part A
.equ	PISEL2A		= 6		; 0x40 - PSC 2 Input Select for Part A
.equ	PELEV2A		= 5		; 0x20 - PSC 2 Edge Level Selector on Input Part A
.equ	PFLTE2A		= 4		; 0x10 - PSC 2 Filter Enable on Input Part A
.equ	PRFM2A_MASK	= 0x0F		;      - PSC 2 Retrigger and Fault Mode for Part A (4 bits)
.equ	PRFM2A0		= 0		;          PRFM2A BIT0 position

; ----------	Register PCTL2 bits		------------------------
.equ	PPRE2_MASK	= 0xC0		;      - PSC 2 Prescaler Selects (2 bits)
.equ	PPRE20		= 6		;          PPRE2 BIT0 position
.equ	PBFM2		= 5		; 0x20 - Balance Flank Width Modulation
.equ	PAOC2B		= 4		; 0x10 - PSC 2 Asynchronous Output Control B
.equ	PAOC2A		= 3		; 0x08 - PSC 2 Asynchronous Output Control A
.equ	PARUN2		= 2		; 0x04 - PSC2 Auto Run
.equ	PCCYC2		= 1		; 0x02 - PSC2 Complete Cycle
.equ	PRUN2		= 0		; 0x01 - PSC 2 Run

; ----------	Register PCNF2 bits		------------------------
.equ	PFIFTY2		= 7		; 0x80 - PSC 2 Fifty
.equ	PALOCK2		= 6		; 0x40 - PSC 2 Autolock
.equ	PLOCK2		= 5		; 0x20 - PSC 2 Lock
.equ	PMODE2_MASK	= 0x18		;      - PSC 2 Mode (2 bits)
.equ	PMODE20		= 3		;          PMODE2 BIT0 position
.equ	POP2		= 2		; 0x04 - PSC 2 Output Polarity
.equ	PCLKSEL2	= 1		; 0x02 - PSC 2 Input Clock Select
.equ	POME2		= 0		; 0x01 - PSC 2 Output Matrix Enable

; ----------	Register PCNFE2 bits		------------------------
.equ	PASDLK2_MASK	= 0xE0		;      -  (3 bits)
.equ	PASDLK20	= 5		;          PASDLK2 BIT0 position
.equ	PBFM21		= 4		; 0x10 - 
.equ	PELEV2A1	= 3		; 0x08 - 
.equ	PELEV2B1	= 2		; 0x04 - 
.equ	PISEL2A1	= 1		; 0x02 - 
.equ	PISEL2B1	= 0		; 0x01 - 

; ----------	Register POM2 bits		------------------------
.equ	POMV2B_MASK	= 0xF0		;      - Output Matrix Output B Ramps (4 bits)
.equ	POMV2B0		= 4		;          POMV2B BIT0 position
.equ	POMV2A_MASK	= 0x0F		;      - Output Matrix Output A Ramps (4 bits)
.equ	POMV2A0		= 0		;          POMV2A BIT0 position

; ----------	Register PSOC2 bits		------------------------
.equ	POS2_MASK	= 0xC0		;      - PSC 2 Output 23 Select (2 bits)
.equ	POS20		= 6		;          POS2 BIT0 position
.equ	PSYNC2_MASK	= 0x30		;      - Synchronization Out for ADC Selection (2 bits)
.equ	PSYNC20		= 4		;          PSYNC2 BIT0 position
.equ	POEN2D		= 3		; 0x08 - PSCOUT23 Output Enable
.equ	POEN2B		= 2		; 0x04 - PSCOUT21 Output Enable
.equ	POEN2C		= 1		; 0x02 - PSCOUT22 Output Enable
.equ	POEN2A		= 0		; 0x01 - PSCOUT20 Output Enable

; ----------	Register PIM2 bits		------------------------
.equ	PSEIE2		= 5		; 0x20 - PSC 2 Synchro Error Interrupt Enable
.equ	PEVE2B		= 4		; 0x10 - External Event B Interrupt Enable
.equ	PEVE2A		= 3		; 0x08 - External Event A Interrupt Enable
.equ	PEOEPE2		= 1		; 0x02 - End of Enhanced Cycle Interrupt Enable
.equ	PEOPE2		= 0		; 0x01 - End of Cycle Interrupt Enable

; ----------	Register PIFR2 bits		------------------------
.equ	POAC2B		= 7		; 0x80 - PSC 2 Output A Activity
.equ	POAC2A		= 6		; 0x40 - PSC 2 Output A Activity
.equ	PSEI2		= 5		; 0x20 - PSC 2 Synchro Error Interrupt
.equ	PEV2B		= 4		; 0x10 - External Event B Interrupt
.equ	PEV2A		= 3		; 0x08 - External Event A Interrupt
.equ	PRN2_MASK	= 0x06		;      - Ramp Number (2 bits)
.equ	PRN20		= 1		;          PRN2 BIT0 position
.equ	PEOP2		= 0		; 0x01 - End of PSC2 Interrupt



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	WGM13		= 4		; 0x10 - Waveform Generation Mode
.equ	CS1_MASK	= 0x07		;      - Prescaler source of Timer/Counter 1 (3 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  CS1	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	SIGRD		= 5		; 0x20 - Signature Row Read
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  COMM_SCK_RATE_3BIT	:::: values
;			0b000		; fosc/4
;			0b001		; fosc/16
;			0b010		; fosc/64
;			0b011		; fosc/128
;			0b100		; fosc/2
;			0b101		; fosc/8
;			0b110		; fosc/32
;			0b111		; fosc/64



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 20
.equ	INT_VECTORS_SIZE	= 0x28
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;	1	PSC2_CAPT	; PSC2 Capture Event
;	2	PSC2_EC		; PSC2 End Cycle
;	3	PSC2_EEC	; PSC2 End Of Enhanced Cycle
;	4	PSC0_CAPT	; PSC0 Capture Event
;	5	PSC0_EC		; PSC0 End Cycle
;	6	PSC0_EEC	; PSC0 End Of Enhanced Cycle
;	7	ANALOG_COMP_1	; Analog Comparator 1
;	8	ANALOG_COMP_2	; Analog Comparator 2
;	9	ANALOG_COMP_3	; Analog Comparator 3
;	10	INT0		; External Interrupt Request 0
;	11	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	12	TIMER1_OVF	; Timer/Counter1 Overflow
;	13	ADC		; ADC Conversion Complete
;	14	INT1		; External Interrupt Request 1
;	15	SPI_STC		; SPI Serial Transfer Complet
;	16	INT2		; External Interrupt Request 2
;	17	WDT		; Watchdog Timeout Interrupt
;	18	EE_READY	; EEPROM Ready
;	19	SPM_READY	; Store Program Memory Read


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;#		reti			; PSC2_CAPT	 - PSC2 Capture Event
;#		reti			; PSC2_EC	 - PSC2 End Cycle
;#		reti			; PSC2_EEC	 - PSC2 End Of Enhanced Cycle
;#		reti			; PSC0_CAPT	 - PSC0 Capture Event
;#		reti			; PSC0_EC	 - PSC0 End Cycle
;#		reti			; PSC0_EEC	 - PSC0 End Of Enhanced Cycle
;#		reti			; ANALOG_COMP_1	 - Analog Comparator 1
;#		reti			; ANALOG_COMP_2	 - Analog Comparator 2
;#		reti			; ANALOG_COMP_3	 - Analog Comparator 3
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; ADC		 - ADC Conversion Complete
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; SPI_STC	 - SPI Serial Transfer Complet
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM_READY	 - Store Program Memory Read
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _AT90PWM161_INC_ */

; ************************ END OF FILE *********************************

