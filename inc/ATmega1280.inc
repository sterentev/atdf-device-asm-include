;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega1280
;* Title             : Register/Mask/Bit Definitions for the ATmega1280
;* File Name         : ATmega1280.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-05 09:17:53 UTC
;
;***********************************************************************

#ifndef _ATMEGA1280_INC_
#define _ATMEGA1280_INC_

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
; - FUSES and LOCKBITS in program skeleton are set to their production default values.
;
;***********************************************************************




; **********************************************************************
; ***************	DEVICE DEFINITIONS	************************
; **********************************************************************
;
.device	ATmega1280
.equ	JTAGID		= 0x0970303F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x97
.equ	SIGNATURE2	= 0x03


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
.equ	ADDR_FLASH_END			= 0x0001FFFF
.equ	ADDR_FLASH_SIZE			= 0x00020000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0x0001FC00
.equ	ADDR_BOOT_SECTION_1_END		= 0x0001FFFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0400
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0x0001F800
.equ	ADDR_BOOT_SECTION_2_END		= 0x0001FFFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0800
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0x0001F000
.equ	ADDR_BOOT_SECTION_3_END		= 0x0001FFFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x1000
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0x0001E000
.equ	ADDR_BOOT_SECTION_4_END		= 0x0001FFFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x2000

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
.equ	ADDR_MAPPED_IO_END		= 0x01FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x01E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0200
.equ	ADDR_IRAM_END			= 0x21FF
.equ	ADDR_IRAM_SIZE			= 0x2000
;   XRAM
.equ	ADDR_XRAM_START			= 0x2200
.equ	ADDR_XRAM_END			= 0xFFFF
.equ	ADDR_XRAM_SIZE			= 0xDE00

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x0FFF
.equ	ADDR_EEPROM_SIZE		= 0x1000

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0000
.equ	ADDR_OSCCAL_SIZE		= 0x0001




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
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=4.3 V

; ----------	Register HIGH bits		------------------------
.equ	OCDEN		= 7		; 0x80 - On-Chip Debug Enabled
.equ	JTAGEN		= 6		; 0x40 - JTAG Interface Enabled
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watchdog timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words start address=$FE00
;			0x04		; Boot Flash size=1024 words start address=$FC00
;			0x02		; Boot Flash size=2048 words start address=$F800
;			0x00		; Boot Flash size=4096 words start address=$F000

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTE7
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 65 ms
;			0x02		; Int. RC Osc.; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x22		; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;			0x03		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms
;			0x13		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 4 ms
;			0x23		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 64 ms
;			0x04		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms
;			0x14		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms
;			0x24		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms
;			0x05		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms
;			0x15		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms
;			0x25		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms
;			0x06		; Full Swing Oscillator; Start-up time: 258 CK + 4.1 ms; Ceramic res.; fast rising power
;			0x16		; Full Swing Oscillator; Start-up time: 258 CK + 65 ms; Ceramic res.; slowly rising power
;			0x26		; Full Swing Oscillator; Start-up time: 1K CK + 0 ms; Ceramic res.; BOD enable
;			0x36		; Full Swing Oscillator; Start-up time: 1K CK + 4.1 ms; Ceramic res.; fast rising power
;			0x07		; Full Swing Oscillator; Start-up time: 1K CK + 65 ms; Ceramic res.; slowly rising power
;			0x17		; Full Swing Oscillator; Start-up time: 16K CK + 0 ms; Crystal Osc.; BOD enabled
;			0x27		; Full Swing Oscillator; Start-up time: 16K CK + 4.1 ms; Crystal Osc.; fast rising power
;			0x37		; Full Swing Oscillator; Start-up time: 16K CK + 65 ms; Crystal Osc.; slowly rising power
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 65 ms




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
.equ	UDR2		= 0xD6		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR2		= 0xD4		; [MEMORY MAPPED] [___2 addrs___] USART Baud Rate Register  Bytes
.equ	UCSR2C		= 0xD2		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR2B		= 0xD1		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR2A		= 0xD0		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UDR1		= 0xCE		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR1		= 0xCC		; [MEMORY MAPPED] [___2 addrs___] USART Baud Rate Register  Bytes
.equ	UCSR1C		= 0xCA		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR1B		= 0xC9		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR1A		= 0xC8		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UDR0		= 0xC6		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR0		= 0xC4		; [MEMORY MAPPED] [___2 addrs___] USART Baud Rate Register  Bytes
.equ	UCSR0C		= 0xC2		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR0B		= 0xC1		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR0A		= 0xC0		; [MEMORY MAPPED] USART Control and Status Register A
.equ	TWAMR		= 0xBD		; [MEMORY MAPPED] TWI (Slave) Address Mask Register
.equ	TWCR		= 0xBC		; [MEMORY MAPPED] TWI Control Register
.equ	TWDR		= 0xBB		; [MEMORY MAPPED] TWI Data register
.equ	TWAR		= 0xBA		; [MEMORY MAPPED] TWI (Slave) Address register
.equ	TWSR		= 0xB9		; [MEMORY MAPPED] TWI Status Register
.equ	TWBR		= 0xB8		; [MEMORY MAPPED] TWI Bit Rate register
.equ	ASSR		= 0xB6		; [MEMORY MAPPED] Asynchronous Status Register
.equ	OCR2B		= 0xB4		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register B
.equ	OCR2A		= 0xB3		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register A
.equ	TCNT2		= 0xB2		; [MEMORY MAPPED] Timer/Counter2
.equ	TCCR2B		= 0xB1		; [MEMORY MAPPED] Timer/Counter2 Control Register B
.equ	TCCR2A		= 0xB0		; [MEMORY MAPPED] Timer/Counter2 Control Register A
.equ	OCR4C		= 0xAC		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter4 Output Compare Register B  Bytes
.equ	OCR4B		= 0xAA		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter4 Output Compare Register B  Bytes
.equ	OCR4A		= 0xA8		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter4 Output Compare Register A  Bytes
.equ	ICR4		= 0xA6		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter4 Input Capture Register  Bytes
.equ	TCNT4		= 0xA4		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter4  Bytes
.equ	TCCR4C		= 0xA2		; [MEMORY MAPPED] Timer/Counter 4 Control Register C
.equ	TCCR4B		= 0xA1		; [MEMORY MAPPED] Timer/Counter4 Control Register B
.equ	TCCR4A		= 0xA0		; [MEMORY MAPPED] Timer/Counter4 Control Register A
.equ	OCR3C		= 0x9C		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3B		= 0x9A		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3A		= 0x98		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Output Compare Register A  Bytes
.equ	ICR3		= 0x96		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Input Capture Register  Bytes
.equ	TCNT3		= 0x94		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3  Bytes
.equ	TCCR3C		= 0x92		; [MEMORY MAPPED] Timer/Counter 3 Control Register C
.equ	TCCR3B		= 0x91		; [MEMORY MAPPED] Timer/Counter3 Control Register B
.equ	TCCR3A		= 0x90		; [MEMORY MAPPED] Timer/Counter3 Control Register A
.equ	OCR1C		= 0x8C		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Output Compare Register C  Bytes
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Output Compare Register A  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter 1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register
.equ	DIDR2		= 0x7D		; [MEMORY MAPPED] Digital Input Disable Register
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register A
.equ	ADC		= 0x78		; [MEMORY MAPPED] [___2 addrs___] ADC Data Register  Bytes
.equ	XMCRB		= 0x75		; [MEMORY MAPPED] External Memory Control Register B
.equ	XMCRA		= 0x74		; [MEMORY MAPPED] External Memory Control Register A
.equ	TIMSK5		= 0x73		; [MEMORY MAPPED] Timer/Counter5 Interrupt Mask Register
.equ	TIMSK4		= 0x72		; [MEMORY MAPPED] Timer/Counter4 Interrupt Mask Register
.equ	TIMSK3		= 0x71		; [MEMORY MAPPED] Timer/Counter3 Interrupt Mask Register
.equ	TIMSK2		= 0x70		; [MEMORY MAPPED] Timer/Counter Interrupt Mask register
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter1 Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK2		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRB		= 0x6A		; [MEMORY MAPPED] External Interrupt Control Register B
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR1		= 0x65		; [MEMORY MAPPED] Power Reduction Register1
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register0
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] 
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	EIND		= 0x3C		; Extended Indirect Register
.equ	RAMPZ		= 0x3B		; RAM Page Z Select Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	OCDR		= 0x31		; On-Chip Debug Related Register in I/O Memory
.equ	ACSR		= 0x30		; Analog Comparator Control And Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0B		= 0x25		; Timer/Counter Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter  Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; [___2 addrs___] EEPROM Address Register Low Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR5		= 0x1A		; Timer/Counter5 Interrupt Flag register
.equ	TIFR4		= 0x19		; Timer/Counter4 Interrupt Flag register
.equ	TIFR3		= 0x18		; Timer/Counter3 Interrupt Flag register
.equ	TIFR2		= 0x17		; Timer/Counter Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter1 Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PORTG		= 0x14		; Data Register, Port G
.equ	DDRG		= 0x13		; Data Direction Register, Port G
.equ	PING		= 0x12		; Input Pins, Port G
.equ	PORTF		= 0x11		; Data Register, Port F
.equ	DDRF		= 0x10		; Data Direction Register, Port F
.equ	PINF		= 0x0F		; Input Pins, Port F
.equ	PORTE		= 0x0E		; Data Register, Port E
.equ	DDRE		= 0x0D		; Data Direction Register, Port E
.equ	PINE		= 0x0C		; Input Pins, Port E
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins
.equ	UDR3		= 0x0136	; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR3		= 0x0134	; [MEMORY MAPPED] [___2 addrs___] USART Baud Rate Register  Bytes
.equ	UCSR3C		= 0x0132	; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR3B		= 0x0131	; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR3A		= 0x0130	; [MEMORY MAPPED] USART Control and Status Register A
.equ	OCR5C		= 0x012C	; [MEMORY MAPPED] [___2 addrs___] Timer/Counter5 Output Compare Register B  Bytes
.equ	OCR5B		= 0x012A	; [MEMORY MAPPED] [___2 addrs___] Timer/Counter5 Output Compare Register B  Bytes
.equ	OCR5A		= 0x0128	; [MEMORY MAPPED] [___2 addrs___] Timer/Counter5 Output Compare Register A  Bytes
.equ	ICR5		= 0x0126	; [MEMORY MAPPED] [___2 addrs___] Timer/Counter5 Input Capture Register  Bytes
.equ	TCNT5		= 0x0124	; [MEMORY MAPPED] [___2 addrs___] Timer/Counter5  Bytes
.equ	TCCR5C		= 0x0122	; [MEMORY MAPPED] Timer/Counter 5 Control Register C
.equ	TCCR5B		= 0x0121	; [MEMORY MAPPED] Timer/Counter5 Control Register B
.equ	TCCR5A		= 0x0120	; [MEMORY MAPPED] Timer/Counter5 Control Register A
.equ	PORTL		= 0x010B	; [MEMORY MAPPED] PORT L Data Register
.equ	DDRL		= 0x010A	; [MEMORY MAPPED] PORT L Data Direction Register
.equ	PINL		= 0x0109	; [MEMORY MAPPED] PORT L Input Pins
.equ	PORTK		= 0x0108	; [MEMORY MAPPED] PORT K Data Register
.equ	DDRK		= 0x0107	; [MEMORY MAPPED] PORT K Data Direction Register
.equ	PINK		= 0x0106	; [MEMORY MAPPED] PORT K Input Pins
.equ	PORTJ		= 0x0105	; [MEMORY MAPPED] PORT J Data Register
.equ	DDRJ		= 0x0104	; [MEMORY MAPPED] PORT J Data Direction Register
.equ	PINJ		= 0x0103	; [MEMORY MAPPED] PORT J Input Pins
.equ	PORTH		= 0x0102	; [MEMORY MAPPED] PORT H Data Register
.equ	DDRH		= 0x0101	; [MEMORY MAPPED] PORT H Data Direction Register
.equ	PINH		= 0x0100	; [MEMORY MAPPED] PORT H Input Pins
;
; ----------	REGISTERS PAIRS			------------------------
;    USART Baud Rate Register  Bytes
.equ	UBRR2H		= 0xD5
.equ	UBRR2L		= 0xD4
;    USART Baud Rate Register  Bytes
.equ	UBRR1H		= 0xCD
.equ	UBRR1L		= 0xCC
;    USART Baud Rate Register  Bytes
.equ	UBRR0H		= 0xC5
.equ	UBRR0L		= 0xC4
;    Timer/Counter4 Output Compare Register B  Bytes
.equ	OCR4CH		= 0xAD
.equ	OCR4CL		= 0xAC
;    Timer/Counter4 Output Compare Register B  Bytes
.equ	OCR4BH		= 0xAB
.equ	OCR4BL		= 0xAA
;    Timer/Counter4 Output Compare Register A  Bytes
.equ	OCR4AH		= 0xA9
.equ	OCR4AL		= 0xA8
;    Timer/Counter4 Input Capture Register  Bytes
.equ	ICR4H		= 0xA7
.equ	ICR4L		= 0xA6
;    Timer/Counter4  Bytes
.equ	TCNT4H		= 0xA5
.equ	TCNT4L		= 0xA4
;    Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3CH		= 0x9D
.equ	OCR3CL		= 0x9C
;    Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3BH		= 0x9B
.equ	OCR3BL		= 0x9A
;    Timer/Counter3 Output Compare Register A  Bytes
.equ	OCR3AH		= 0x99
.equ	OCR3AL		= 0x98
;    Timer/Counter3 Input Capture Register  Bytes
.equ	ICR3H		= 0x97
.equ	ICR3L		= 0x96
;    Timer/Counter3  Bytes
.equ	TCNT3H		= 0x95
.equ	TCNT3L		= 0x94
;    Timer/Counter1 Output Compare Register C  Bytes
.equ	OCR1CH		= 0x8D
.equ	OCR1CL		= 0x8C
;    Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1BH		= 0x8B
.equ	OCR1BL		= 0x8A
;    Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1AH		= 0x89
.equ	OCR1AL		= 0x88
;    Timer/Counter1 Input Capture Register  Bytes
.equ	ICR1H		= 0x87
.equ	ICR1L		= 0x86
;    Timer/Counter1  Bytes
.equ	TCNT1H		= 0x85
.equ	TCNT1L		= 0x84
;    ADC Data Register  Bytes
.equ	ADCH		= 0x79
.equ	ADCL		= 0x78
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    EEPROM Address Register Low Bytes
.equ	EEARH		= 0x22
.equ	EEARL		= 0x21
;    USART Baud Rate Register  Bytes
.equ	UBRR3H		= 0x0135
.equ	UBRR3L		= 0x0134
;    Timer/Counter5 Output Compare Register B  Bytes
.equ	OCR5CH		= 0x012D
.equ	OCR5CL		= 0x012C
;    Timer/Counter5 Output Compare Register B  Bytes
.equ	OCR5BH		= 0x012B
.equ	OCR5BL		= 0x012A
;    Timer/Counter5 Output Compare Register A  Bytes
.equ	OCR5AH		= 0x0129
.equ	OCR5AL		= 0x0128
;    Timer/Counter5 Input Capture Register  Bytes
.equ	ICR5H		= 0x0127
.equ	ICR5L		= 0x0126
;    Timer/Counter5  Bytes
.equ	TCNT5H		= 0x0125
.equ	TCNT5L		= 0x0124


; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADCSRB bits		------------------------
.equ	ACME		= 6		; 0x40 - Analog Comparator Multiplexer Enable

; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACBG		= 6		; 0x40 - Analog Comparator Bandgap Select
.equ	ACO		= 5		; 0x20 - Analog Compare Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACIC		= 2		; 0x04 - Analog Comparator Input Capture Enable
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge

; ----------	Register DIDR1 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UCSR0A bits		------------------------
.equ	RXC0		= 7		; 0x80 - USART Receive Complete
.equ	TXC0		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE0		= 5		; 0x20 - USART Data Register Empty
.equ	FE0		= 4		; 0x10 - Framing Error
.equ	DOR0		= 3		; 0x08 - Data overRun
.equ	UPE0		= 2		; 0x04 - Parity Error
.equ	U2X0		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM0		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR0B bits		------------------------
.equ	RXCIE0		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE0		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE0		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN0		= 4		; 0x10 - Receiver Enable
.equ	TXEN0		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ02		= 2		; 0x04 - Character Size
.equ	RXB80		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB80		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR0C bits		------------------------
.equ	UMSEL0_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL00		= 6		;          UMSEL0 BIT0 position
.equ	UPM0_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM00		= 4		;          UPM0 BIT0 position
.equ	USBS0		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ0_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ00		= 1		;          UCSZ0 BIT0 position
.equ	UCPOL0		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL0	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0xC0		; Master SPI
; ::::  UPM0	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS0	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UCSR1A bits		------------------------
.equ	RXC1		= 7		; 0x80 - USART Receive Complete
.equ	TXC1		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE1		= 5		; 0x20 - USART Data Register Empty
.equ	FE1		= 4		; 0x10 - Framing Error
.equ	DOR1		= 3		; 0x08 - Data overRun
.equ	UPE1		= 2		; 0x04 - Parity Error
.equ	U2X1		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM1		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR1B bits		------------------------
.equ	RXCIE1		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE1		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE1		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN1		= 4		; 0x10 - Receiver Enable
.equ	TXEN1		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ12		= 2		; 0x04 - Character Size
.equ	RXB81		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB81		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR1C bits		------------------------
.equ	UMSEL1_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL10		= 6		;          UMSEL1 BIT0 position
.equ	UPM1_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM10		= 4		;          UPM1 BIT0 position
.equ	USBS1		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ1_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ10		= 1		;          UCSZ1 BIT0 position
.equ	UCPOL1		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL1	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0xC0		; Master SPI
; ::::  UPM1	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS1	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UCSR2A bits		------------------------
.equ	RXC2		= 7		; 0x80 - USART Receive Complete
.equ	TXC2		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE2		= 5		; 0x20 - USART Data Register Empty
.equ	FE2		= 4		; 0x10 - Framing Error
.equ	DOR2		= 3		; 0x08 - Data overRun
.equ	UPE2		= 2		; 0x04 - Parity Error
.equ	U2X2		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM2		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR2B bits		------------------------
.equ	RXCIE2		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE2		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE2		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN2		= 4		; 0x10 - Receiver Enable
.equ	TXEN2		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ22		= 2		; 0x04 - Character Size
.equ	RXB82		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB82		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR2C bits		------------------------
.equ	UMSEL2_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL20		= 6		;          UMSEL2 BIT0 position
.equ	UPM2_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM20		= 4		;          UPM2 BIT0 position
.equ	USBS2		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ2_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ20		= 1		;          UCSZ2 BIT0 position
.equ	UCPOL2		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL2	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0xC0		; Master SPI
; ::::  UPM2	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS2	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UCSR3A bits		------------------------
.equ	RXC3		= 7		; 0x80 - USART Receive Complete
.equ	TXC3		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE3		= 5		; 0x20 - USART Data Register Empty
.equ	FE3		= 4		; 0x10 - Framing Error
.equ	DOR3		= 3		; 0x08 - Data overRun
.equ	UPE3		= 2		; 0x04 - Parity Error
.equ	U2X3		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM3		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR3B bits		------------------------
.equ	RXCIE3		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE3		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE3		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN3		= 4		; 0x10 - Receiver Enable
.equ	TXEN3		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ32		= 2		; 0x04 - Character Size
.equ	RXB83		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB83		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR3C bits		------------------------
.equ	UMSEL3_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL30		= 6		;          UMSEL3 BIT0 position
.equ	UPM3_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM30		= 4		;          UPM3 BIT0 position
.equ	USBS3		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ3_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ30		= 1		;          UCSZ3 BIT0 position
.equ	UCPOL3		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL3	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0xC0		; Master SPI
; ::::  UPM3	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS3	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWAMR bits		------------------------
.equ	TWAM_MASK	= 0xFE		;      -  (7 bits)
.equ	TWAM0		= 1		;          TWAM BIT0 position

; ----------	Register TWCR bits		------------------------
.equ	TWINT		= 7		; 0x80 - TWI Interrupt Flag
.equ	TWEA		= 6		; 0x40 - TWI Enable Acknowledge Bit
.equ	TWSTA		= 5		; 0x20 - TWI Start Condition Bit
.equ	TWSTO		= 4		; 0x10 - TWI Stop Condition Bit
.equ	TWWC		= 3		; 0x08 - TWI Write Collision Flag
.equ	TWEN		= 2		; 0x04 - TWI Enable Bit
.equ	TWIE		= 0		; 0x01 - TWI Interrupt Enable

; ----------	Register TWSR bits		------------------------
.equ	TWS_MASK	= 0xF8		;      - TWI Status (5 bits)
.equ	TWS0		= 3		;          TWS BIT0 position
.equ	TWPS_MASK	= 0x03		;      - TWI Prescaler (2 bits)
.equ	TWPS0		= 0		;          TWPS BIT0 position
; ::::  TWPS	:::: bitfield values
;			0x00		; 1
;			0x01		; 4
;			0x02		; 16
;			0x03		; 64

; ----------	Register TWAR bits		------------------------
.equ	TWA_MASK	= 0xFE		;      - TWI (Slave) Address register Bits (7 bits)
.equ	TWA0		= 1		;          TWA BIT0 position
.equ	TWGCE		= 0		; 0x01 - TWI General Call Recognition Enable Bit



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



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare B
.equ	WGM02		= 3		; 0x08 - 
.equ	CS0_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS00		= 0		;          CS0 BIT0 position
; ::::  CS0	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode, Phase Correct PWM Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode, Fast PWm (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TIMSK2 bits		------------------------
.equ	OCIE2B		= 2		; 0x04 - Timer/Counter2 Output Compare Match B Interrupt Enable
.equ	OCIE2A		= 1		; 0x02 - Timer/Counter2 Output Compare Match A Interrupt Enable
.equ	TOIE2		= 0		; 0x01 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR2 bits		------------------------
.equ	OCF2B		= 2		; 0x04 - Output Compare Flag 2B
.equ	OCF2A		= 1		; 0x02 - Output Compare Flag 2A
.equ	TOV2		= 0		; 0x01 - Timer/Counter2 Overflow Flag

; ----------	Register TCCR2A bits		------------------------
.equ	COM2A_MASK	= 0xC0		;      - Compare Output Mode bits (2 bits)
.equ	COM2A0		= 6		;          COM2A BIT0 position
.equ	COM2B_MASK	= 0x30		;      - Compare Output Mode bits (2 bits)
.equ	COM2B0		= 4		;          COM2B BIT0 position
.equ	WGM2_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM20		= 0		;          WGM2 BIT0 position

; ----------	Register TCCR2B bits		------------------------
.equ	FOC2A		= 7		; 0x80 - Force Output Compare A
.equ	FOC2B		= 6		; 0x40 - Force Output Compare B
.equ	WGM22		= 3		; 0x08 - Waveform Generation Mode
.equ	CS2_MASK	= 0x07		;      - Clock Select bits (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  CS2	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register ASSR bits		------------------------
.equ	EXCLK		= 6		; 0x40 - Enable External Clock Input
.equ	AS2		= 5		; 0x20 - Asynchronous Timer/Counter2
.equ	TCN2UB		= 4		; 0x10 - Timer/Counter2 Update Busy
.equ	OCR2AUB		= 3		; 0x08 - Output Compare Register2 Update Busy
.equ	OCR2BUB		= 2		; 0x04 - Output Compare Register 2 Update Busy
.equ	TCR2AUB		= 1		; 0x02 - Timer/Counter Control Register2 Update Busy
.equ	TCR2BUB		= 0		; 0x01 - Timer/Counter Control Register2 Update Busy

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRASY		= 1		; 0x02 - Prescaler Reset Timer/Counter2



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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR5A bits		------------------------
.equ	COM5A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM5A0		= 6		;          COM5A BIT0 position
.equ	COM5B_MASK	= 0x30		;      - Compare Output Mode 5B, bits (2 bits)
.equ	COM5B0		= 4		;          COM5B BIT0 position
.equ	COM5C_MASK	= 0x0C		;      - Compare Output Mode 5C, bits (2 bits)
.equ	COM5C0		= 2		;          COM5C BIT0 position
.equ	TCCR5A_WGM5_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR5A_WGM50	= 0		;          TCCR5A_WGM5 BIT0 position

; ----------	Register TCCR5B bits		------------------------
.equ	ICNC5		= 7		; 0x80 - Input Capture 5 Noise Canceler
.equ	ICES5		= 6		; 0x40 - Input Capture 5 Edge Select
.equ	TCCR5B_WGM5_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR5B_WGM50	= 3		;          TCCR5B_WGM5 BIT0 position
.equ	CS5_MASK	= 0x07		;      - Prescaler source of Timer/Counter 5 (3 bits)
.equ	CS50		= 0		;          CS5 BIT0 position
; ::::  CS5	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR5C bits		------------------------
.equ	FOC5A		= 7		; 0x80 - Force Output Compare 5A
.equ	FOC5B		= 6		; 0x40 - Force Output Compare 5B
.equ	FOC5C		= 5		; 0x20 - Force Output Compare 5C

; ----------	Register TIMSK5 bits		------------------------
.equ	ICIE5		= 5		; 0x20 - Timer/Counter5 Input Capture Interrupt Enable
.equ	OCIE5C		= 3		; 0x08 - Timer/Counter5 Output Compare C Match Interrupt Enable
.equ	OCIE5B		= 2		; 0x04 - Timer/Counter5 Output Compare B Match Interrupt Enable
.equ	OCIE5A		= 1		; 0x02 - Timer/Counter5 Output Compare A Match Interrupt Enable
.equ	TOIE5		= 0		; 0x01 - Timer/Counter5 Overflow Interrupt Enable

; ----------	Register TIFR5 bits		------------------------
.equ	ICF5		= 5		; 0x20 - Input Capture Flag 5
.equ	OCF5C		= 3		; 0x08 - Output Compare Flag 5C
.equ	OCF5B		= 2		; 0x04 - Output Compare Flag 5B
.equ	OCF5A		= 1		; 0x02 - Output Compare Flag 5A
.equ	TOV5		= 0		; 0x01 - Timer/Counter5 Overflow Flag

; ----------	Register TCCR4A bits		------------------------
.equ	COM4A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM4A0		= 6		;          COM4A BIT0 position
.equ	COM4B_MASK	= 0x30		;      - Compare Output Mode 4B, bits (2 bits)
.equ	COM4B0		= 4		;          COM4B BIT0 position
.equ	COM4C_MASK	= 0x0C		;      - Compare Output Mode 4C, bits (2 bits)
.equ	COM4C0		= 2		;          COM4C BIT0 position
.equ	TCCR4A_WGM4_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR4A_WGM40	= 0		;          TCCR4A_WGM4 BIT0 position

; ----------	Register TCCR4B bits		------------------------
.equ	ICNC4		= 7		; 0x80 - Input Capture 4 Noise Canceler
.equ	ICES4		= 6		; 0x40 - Input Capture 4 Edge Select
.equ	TCCR4B_WGM4_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR4B_WGM40	= 3		;          TCCR4B_WGM4 BIT0 position
.equ	CS4_MASK	= 0x07		;      - Prescaler source of Timer/Counter 4 (3 bits)
.equ	CS40		= 0		;          CS4 BIT0 position
; ::::  CS4	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR4C bits		------------------------
.equ	FOC4A		= 7		; 0x80 - Force Output Compare 4A
.equ	FOC4B		= 6		; 0x40 - Force Output Compare 4B
.equ	FOC4C		= 5		; 0x20 - Force Output Compare 4C

; ----------	Register TIMSK4 bits		------------------------
.equ	ICIE4		= 5		; 0x20 - Timer/Counter4 Input Capture Interrupt Enable
.equ	OCIE4C		= 3		; 0x08 - Timer/Counter4 Output Compare C Match Interrupt Enable
.equ	OCIE4B		= 2		; 0x04 - Timer/Counter4 Output Compare B Match Interrupt Enable
.equ	OCIE4A		= 1		; 0x02 - Timer/Counter4 Output Compare A Match Interrupt Enable
.equ	TOIE4		= 0		; 0x01 - Timer/Counter4 Overflow Interrupt Enable

; ----------	Register TIFR4 bits		------------------------
.equ	ICF4		= 5		; 0x20 - Input Capture Flag 4
.equ	OCF4C		= 3		; 0x08 - Output Compare Flag 4C
.equ	OCF4B		= 2		; 0x04 - Output Compare Flag 4B
.equ	OCF4A		= 1		; 0x02 - Output Compare Flag 4A
.equ	TOV4		= 0		; 0x01 - Timer/Counter4 Overflow Flag

; ----------	Register TCCR3A bits		------------------------
.equ	COM3A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM3A0		= 6		;          COM3A BIT0 position
.equ	COM3B_MASK	= 0x30		;      - Compare Output Mode 3B, bits (2 bits)
.equ	COM3B0		= 4		;          COM3B BIT0 position
.equ	COM3C_MASK	= 0x0C		;      - Compare Output Mode 3C, bits (2 bits)
.equ	COM3C0		= 2		;          COM3C BIT0 position
.equ	TCCR3A_WGM3_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR3A_WGM30	= 0		;          TCCR3A_WGM3 BIT0 position

; ----------	Register TCCR3B bits		------------------------
.equ	ICNC3		= 7		; 0x80 - Input Capture 3 Noise Canceler
.equ	ICES3		= 6		; 0x40 - Input Capture 3 Edge Select
.equ	TCCR3B_WGM3_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR3B_WGM30	= 3		;          TCCR3B_WGM3 BIT0 position
.equ	CS3_MASK	= 0x07		;      - Prescaler source of Timer/Counter 3 (3 bits)
.equ	CS30		= 0		;          CS3 BIT0 position
; ::::  CS3	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR3C bits		------------------------
.equ	FOC3A		= 7		; 0x80 - Force Output Compare 3A
.equ	FOC3B		= 6		; 0x40 - Force Output Compare 3B
.equ	FOC3C		= 5		; 0x20 - Force Output Compare 3C

; ----------	Register TIMSK3 bits		------------------------
.equ	ICIE3		= 5		; 0x20 - Timer/Counter3 Input Capture Interrupt Enable
.equ	OCIE3C		= 3		; 0x08 - Timer/Counter3 Output Compare C Match Interrupt Enable
.equ	OCIE3B		= 2		; 0x04 - Timer/Counter3 Output Compare B Match Interrupt Enable
.equ	OCIE3A		= 1		; 0x02 - Timer/Counter3 Output Compare A Match Interrupt Enable
.equ	TOIE3		= 0		; 0x01 - Timer/Counter3 Overflow Interrupt Enable

; ----------	Register TIFR3 bits		------------------------
.equ	ICF3		= 5		; 0x20 - Input Capture Flag 3
.equ	OCF3C		= 3		; 0x08 - Output Compare Flag 3C
.equ	OCF3B		= 2		; 0x04 - Output Compare Flag 3B
.equ	OCF3A		= 1		; 0x02 - Output Compare Flag 3A
.equ	TOV3		= 0		; 0x01 - Timer/Counter3 Overflow Flag

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	COM1C_MASK	= 0x0C		;      - Compare Output Mode 1C, bits (2 bits)
.equ	COM1C0		= 2		;          COM1C BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1B_WGM10	= 3		;          TCCR1B_WGM1 BIT0 position
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

; ----------	Register TCCR1C bits		------------------------
.equ	FOC1A		= 7		; 0x80 - Force Output Compare 1A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare 1B
.equ	FOC1C		= 5		; 0x20 - Force Output Compare 1C

; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1C		= 3		; 0x08 - Timer/Counter1 Output Compare C Match Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1C		= 3		; 0x08 - Output Compare Flag 1C
.equ	OCF1B		= 2		; 0x04 - Output Compare Flag 1B
.equ	OCF1A		= 1		; 0x02 - Output Compare Flag 1A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag



; ====	JTAG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	JTD		= 7		; 0x80 - JTAG Interface Disable

; ----------	Register MCUSR bits		------------------------
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC3_MASK	= 0xC0		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC30		= 6		;          ISC3 BIT0 position
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC3	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x40		; Any Logical Change of INTX
;			0x80		; Falling Edge of INTX
;			0xC0		; Rising Edge of INTX
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

; ----------	Register EICRB bits		------------------------
.equ	ISC7_MASK	= 0xC0		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC70		= 6		;          ISC7 BIT0 position
.equ	ISC6_MASK	= 0x30		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC60		= 4		;          ISC6 BIT0 position
.equ	ISC5_MASK	= 0x0C		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC50		= 2		;          ISC5 BIT0 position
.equ	ISC4_MASK	= 0x03		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC40		= 0		;          ISC4 BIT0 position
; ::::  ISC7	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x40		; Any Logical Change of INTX
;			0x80		; Falling Edge of INTX
;			0xC0		; Rising Edge of INTX
; ::::  ISC6	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x10		; Any Logical Change of INTX
;			0x20		; Falling Edge of INTX
;			0x30		; Rising Edge of INTX
; ::::  ISC5	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Any Logical Change of INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
; ::::  ISC4	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change of INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0xFF		;      - External Interrupt Request 7 Enable (8 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0xFF		;      - External Interrupt Flags (8 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCMSK2 bits		------------------------
.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable bits (8 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable bits (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable bits (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x07		;      - Pin Change Interrupt Flags (3 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x07		;      - Pin Change Interrupt Enables (3 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position



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
;.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
;.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register XMCRA bits		------------------------
.equ	SRE		= 7		; 0x80 - External SRAM Enable
.equ	SRL_MASK	= 0x70		;      - Wait state page limit (3 bits)
.equ	SRL0		= 4		;          SRL BIT0 position
.equ	SRW1_MASK	= 0x0C		;      - Wait state select bit upper page (2 bits)
.equ	SRW10		= 2		;          SRW1 BIT0 position
.equ	SRW0_MASK	= 0x03		;      - Wait state select bit lower page (2 bits)
.equ	SRW00		= 0		;          SRW0 BIT0 position
; ::::  SRL	:::: bitfield values
;			0x00		; LS = N/A, US = 0x1100 - 0xFFFF
;			0x10		; LS = 0x2200 - 0x1FFF, US = 0x2000 - 0xFFFF
;			0x20		; LS = 0x2200 - 0x3FFF, US = 0x4000 - 0xFFFF
;			0x30		; LS = 0x2200 - 0x5FFF, US = 0x6000 - 0xFFFF
;			0x40		; LS = 0x2200 - 0x7FFF, US = 0x8000 - 0xFFFF
;			0x50		; LS = 0x2200 - 0x9FFF, US = 0xA000 - 0xFFFF
;			0x60		; LS = 0x2200 - 0xBFFF, US = 0xC000 - 0xFFFF
;			0x70		; LS = 0x2200 - 0xDFFF, US = 0xE000 - 0xFFFF
; ::::  SRW1	:::: bitfield values
;			0x00		; No wait-states
;			0x04		; Wait one cycle during read/write strobe
;			0x08		; Wait two cycles during read/write strobe
;			0x0C		; Wait two cycles during read/write and wait one cycle before driving out new address
; ::::  SRW0	:::: bitfield values
;			0x00		; No wait-states
;			0x01		; Wait one cycle during read/write strobe
;			0x02		; Wait two cycles during read/write strobe
;			0x03		; Wait two cycles during read/write and wait one cycle before driving out new address

; ----------	Register XMCRB bits		------------------------
.equ	XMBK		= 7		; 0x80 - External Memory Bus Keeper Enable
.equ	XMM_MASK	= 0x07		;      - External Memory High Mask (3 bits)
.equ	XMM0		= 0		;          XMM BIT0 position

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
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Extended Standby

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

; ----------	Register PRR1 bits		------------------------
.equ	PRTIM5		= 5		; 0x20 - Power Reduction Timer/Counter5
.equ	PRTIM4		= 4		; 0x10 - Power Reduction Timer/Counter4
.equ	PRTIM3		= 3		; 0x08 - Power Reduction Timer/Counter3
.equ	PRUSART3	= 2		; 0x04 - Power Reduction USART3
.equ	PRUSART2	= 1		; 0x02 - Power Reduction USART2
.equ	PRUSART1	= 0		; 0x01 - Power Reduction USART1

; ----------	Register PRR0 bits		------------------------
.equ	PRTWI		= 7		; 0x80 - Power Reduction TWI
.equ	PRTIM2		= 6		; 0x40 - Power Reduction Timer/Counter2
.equ	PRTIM0		= 5		; 0x20 - Power Reduction Timer/Counter0
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART0
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal Vref turned off
;			0x40		; AVCC with external capacitor at AREF pin
;			0x80		; Internal 1.1V Voltage Reference with external capacitor at AREF pin
;			0xC0		; Internal 2.56V Voltage Reference with external capacitor at AREF pin
; ::::  MUX	>>>> This is a part of ADC_MUX_DIFF6 enum (see complete values list below)

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC  Auto Trigger Enable
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC  Prescaler Select Bits (3 bits)
.equ	ADPS0		= 0		;          ADPS BIT0 position
; ::::  ADPS	:::: bitfield values
;			0x00		; 2
;			0x01		; 2
;			0x02		; 4
;			0x03		; 8
;			0x04		; 16
;			0x05		; 32
;			0x06		; 64
;			0x07		; 128

; ----------	Register ADCSRB bits		------------------------
;.equ	ACME		= 6		; 0x40 - 
.equ	MUX5		= 3		; 0x08 - Analog Channel and Gain Selection Bits
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Source bits (3 bits)
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

; ----------	Register DIDR2 bits		------------------------
.equ	ADC15D		= 7		; 0x80 - 
.equ	ADC14D		= 6		; 0x40 - 
.equ	ADC13D		= 5		; 0x20 - 
.equ	ADC12D		= 4		; 0x10 - 
.equ	ADC11D		= 3		; 0x08 - 
.equ	ADC10D		= 2		; 0x04 - 
.equ	ADC9D		= 1		; 0x02 - 
.equ	ADC8D		= 0		; 0x01 - 

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - 
.equ	ADC6D		= 6		; 0x40 - 
.equ	ADC5D		= 5		; 0x20 - 
.equ	ADC4D		= 4		; 0x10 - 
.equ	ADC3D		= 3		; 0x08 - 
.equ	ADC2D		= 2		; 0x04 - 
.equ	ADC1D		= 1		; 0x02 - 
.equ	ADC0D		= 0		; 0x01 - 



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
; ::::  ADC_MUX_DIFF6	:::: values
;			0b000000	; ADC Single Ended Input pin 0
;			0b000001	; ADC Single Ended Input pin 1
;			0b000010	; ADC Single Ended Input pin 2
;			0b000011	; ADC Single Ended Input pin 3
;			0b000100	; ADC Single Ended Input pin 4
;			0b000101	; ADC Single Ended Input pin 5
;			0b000110	; ADC Single Ended Input pin 6
;			0b000111	; ADC Single Ended Input pin 7
;			0b001000	; ADC Differential Inputs Positive pin 0 Negative pin 0 10x Gain
;			0b001001	; ADC Differential Inputs Positive pin 1 Negative pin 0 10x Gain
;			0b001010	; ADC Differential Inputs Positive pin 0 Negative pin 0 200x Gain
;			0b001011	; ADC Differential Inputs Positive pin 1 Negative pin 0 200x Gain
;			0b001100	; ADC Differential Inputs Positive pin 2 Negative pin 2 10x Gain
;			0b001101	; ADC Differential Inputs Positive pin 3 Negative pin 2 10x Gain
;			0b001110	; ADC Differential Inputs Positive pin 2 Negative pin 2 200x Gain
;			0b001111	; ADC Differential Inputs Positive pin 3 Negative pin 2 200x Gain
;			0b010000	; ADC Differential Inputs Positive pin 0 Negative pin 1 1x Gain
;			0b010001	; ADC Differential Inputs Positive pin 1 Negative pin 1 1x Gain
;			0b010010	; ADC Differential Inputs Positive pin 2 Negative pin 1 1x Gain
;			0b010011	; ADC Differential Inputs Positive pin 3 Negative pin 1 1x Gain
;			0b010100	; ADC Differential Inputs Positive pin 4 Negative pin 1 1x Gain
;			0b010101	; ADC Differential Inputs Positive pin 5 Negative pin 1 1x Gain
;			0b010110	; ADC Differential Inputs Positive pin 6 Negative pin 1 1x Gain
;			0b010111	; ADC Differential Inputs Positive pin 7 Negative pin 1 1x Gain
;			0b011000	; ADC Differential Inputs Positive pin 0 Negative pin 2 1x Gain
;			0b011001	; ADC Differential Inputs Positive pin 1 Negative pin 2 1x Gain
;			0b011010	; ADC Differential Inputs Positive pin 2 Negative pin 2 1x Gain
;			0b011011	; ADC Differential Inputs Positive pin 3 Negative pin 2 1x Gain
;			0b011100	; ADC Differential Inputs Positive pin 4 Negative pin 2 1x Gain
;			0b011101	; ADC Differential Inputs Positive pin 5 Negative pin 2 1x Gain
;			0b011110	; Internal Reference (VBG)
;			0b011111	; 0V (GND)
;			0b100000	; ADC Single Ended Input pin 8
;			0b100001	; ADC Single Ended Input pin 9
;			0b100010	; ADC Single Ended Input pin 10
;			0b100011	; ADC Single Ended Input pin 11
;			0b100100	; ADC Single Ended Input pin 12
;			0b100101	; ADC Single Ended Input pin 13
;			0b100110	; ADC Single Ended Input pin 14
;			0b100111	; ADC Single Ended Input pin 15
;			0b101000	; ADC Differential Inputs Positive pin 8 Negative pin 8 10x Gain
;			0b101001	; ADC Differential Inputs Positive pin 9 Negative pin 8 10x Gain
;			0b101010	; ADC Differential Inputs Positive pin 8 Negative pin 8 200x Gain
;			0b101011	; ADC Differential Inputs Positive pin 9 Negative pin 8 200x Gain
;			0b101100	; ADC Differential Inputs Positive pin 10 Negative pin 10 10x Gain
;			0b101101	; ADC Differential Inputs Positive pin 11 Negative pin 10 10x Gain
;			0b101110	; ADC Differential Inputs Positive pin 10 Negative pin 10 200x Gain
;			0b101111	; ADC Differential Inputs Positive pin 11 Negative pin 10 200x Gain
;			0b110000	; ADC Differential Inputs Positive pin 8 Negative pin 9 1x Gain
;			0b110001	; ADC Differential Inputs Positive pin 9 Negative pin 9 1x Gain
;			0b110010	; ADC Differential Inputs Positive pin 10 Negative pin 9 1x Gain
;			0b110011	; ADC Differential Inputs Positive pin 11 Negative pin 9 1x Gain
;			0b110100	; ADC Differential Inputs Positive pin 12 Negative pin 9 1x Gain
;			0b110101	; ADC Differential Inputs Positive pin 13 Negative pin 9 1x Gain
;			0b110110	; ADC Differential Inputs Positive pin 14 Negative pin 9 1x Gain
;			0b110111	; ADC Differential Inputs Positive pin 15 Negative pin 9 1x Gain
;			0b111000	; ADC Differential Inputs Positive pin 8 Negative pin 10 1x Gain
;			0b111001	; ADC Differential Inputs Positive pin 9 Negative pin 10 1x Gain
;			0b111010	; ADC Differential Inputs Positive pin 10 Negative pin 10 1x Gain
;			0b111011	; ADC Differential Inputs Positive pin 11 Negative pin 10 1x Gain
;			0b111100	; ADC Differential Inputs Positive pin 12 Negative pin 10 1x Gain
;			0b111101	; ADC Differential Inputs Positive pin 13 Negative pin 10 1x Gain



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 57
.equ	INT_VECTORS_SIZE	= 0x72
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	INT2		; External Interrupt Request 2
;	4	INT3		; External Interrupt Request 3
;	5	INT4		; External Interrupt Request 4
;	6	INT5		; External Interrupt Request 5
;	7	INT6		; External Interrupt Request 6
;	8	INT7		; External Interrupt Request 7
;	9	PCINT0		; Pin Change Interrupt Request 0
;	10	PCINT1		; Pin Change Interrupt Request 1
;	11	PCINT2		; Pin Change Interrupt Request 2
;	12	WDT		; Watchdog Time-out Interrupt
;	13	TIMER2_COMPA	; Timer/Counter2 Compare Match A
;	14	TIMER2_COMPB	; Timer/Counter2 Compare Match B
;	15	TIMER2_OVF	; Timer/Counter2 Overflow
;	16	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	17	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	18	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	19	TIMER1_COMPC	; Timer/Counter1 Compare Match C
;	20	TIMER1_OVF	; Timer/Counter1 Overflow
;	21	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	22	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	23	TIMER0_OVF	; Timer/Counter0 Overflow
;	24	SPI_STC		; SPI Serial Transfer Complete
;	25	USART0_RX	; USART0, Rx Complete
;	26	USART0_UDRE	; USART0 Data register Empty
;	27	USART0_TX	; USART0, Tx Complete
;	28	ANALOG_COMP	; Analog Comparator
;	29	ADC		; ADC Conversion Complete
;	30	EE_READY	; EEPROM Ready
;	31	TIMER3_CAPT	; Timer/Counter3 Capture Event
;	32	TIMER3_COMPA	; Timer/Counter3 Compare Match A
;	33	TIMER3_COMPB	; Timer/Counter3 Compare Match B
;	34	TIMER3_COMPC	; Timer/Counter3 Compare Match C
;	35	TIMER3_OVF	; Timer/Counter3 Overflow
;	36	USART1_RX	; USART1, Rx Complete
;	37	USART1_UDRE	; USART1 Data register Empty
;	38	USART1_TX	; USART1, Tx Complete
;	39	TWI		; 2-wire Serial Interface
;	40	SPM_READY	; Store Program Memory Read
;	41	TIMER4_CAPT	; Timer/Counter4 Capture Event
;	42	TIMER4_COMPA	; Timer/Counter4 Compare Match A
;	43	TIMER4_COMPB	; Timer/Counter4 Compare Match B
;	44	TIMER4_COMPC	; Timer/Counter4 Compare Match C
;	45	TIMER4_OVF	; Timer/Counter4 Overflow
;	46	TIMER5_CAPT	; Timer/Counter5 Capture Event
;	47	TIMER5_COMPA	; Timer/Counter5 Compare Match A
;	48	TIMER5_COMPB	; Timer/Counter5 Compare Match B
;	49	TIMER5_COMPC	; Timer/Counter5 Compare Match C
;	50	TIMER5_OVF	; Timer/Counter5 Overflow
;	51	USART2_RX	; USART2, Rx Complete
;	52	USART2_UDRE	; USART2 Data register Empty
;	53	USART2_TX	; USART2, Tx Complete
;	54	USART3_RX	; USART3, Rx Complete
;	55	USART3_UDRE	; USART3 Data register Empty
;	56	USART3_TX	; USART3, Tx Complete



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega1280.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODLEVEL	= 0x07	; Brown-out detection disabled
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=2048 words start address=$F800
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<OCDEN) \
;#				  & ~(1 <<JTAGEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x22	; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	BLB0		= 0x0C	; No lock on SPM and LPM in Application Section
;#	.set	BLB1		= 0x30	; No lock on SPM and LPM in Boot Section
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB) \
;#				  &  (~BLB0_MASK | BLB0) \
;#				  &  (~BLB1_MASK | BLB1)
;#	.message "===================="
;#	.message "-----  Fuses  ------"
;#	.message "EXTENDED        ", FUSES_EXTENDED
;#	.message "HIGH            ", FUSES_HIGH
;#	.message "LOW             ", FUSES_LOW
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		reti			; INT4		 - External Interrupt Request 4
;#		reti			; INT5		 - External Interrupt Request 5
;#		reti			; INT6		 - External Interrupt Request 6
;#		reti			; INT7		 - External Interrupt Request 7
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER2_COMPA	 - Timer/Counter2 Compare Match A
;#		reti			; TIMER2_COMPB	 - Timer/Counter2 Compare Match B
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_COMPC	 - Timer/Counter1 Compare Match C
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART0_RX	 - USART0, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; TIMER3_CAPT	 - Timer/Counter3 Capture Event
;#		reti			; TIMER3_COMPA	 - Timer/Counter3 Compare Match A
;#		reti			; TIMER3_COMPB	 - Timer/Counter3 Compare Match B
;#		reti			; TIMER3_COMPC	 - Timer/Counter3 Compare Match C
;#		reti			; TIMER3_OVF	 - Timer/Counter3 Overflow
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1 Data register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; TWI		 - 2-wire Serial Interface
;#		reti			; SPM_READY	 - Store Program Memory Read
;#		reti			; TIMER4_CAPT	 - Timer/Counter4 Capture Event
;#		reti			; TIMER4_COMPA	 - Timer/Counter4 Compare Match A
;#		reti			; TIMER4_COMPB	 - Timer/Counter4 Compare Match B
;#		reti			; TIMER4_COMPC	 - Timer/Counter4 Compare Match C
;#		reti			; TIMER4_OVF	 - Timer/Counter4 Overflow
;#		reti			; TIMER5_CAPT	 - Timer/Counter5 Capture Event
;#		reti			; TIMER5_COMPA	 - Timer/Counter5 Compare Match A
;#		reti			; TIMER5_COMPB	 - Timer/Counter5 Compare Match B
;#		reti			; TIMER5_COMPC	 - Timer/Counter5 Compare Match C
;#		reti			; TIMER5_OVF	 - Timer/Counter5 Overflow
;#		reti			; USART2_RX	 - USART2, Rx Complete
;#		reti			; USART2_UDRE	 - USART2 Data register Empty
;#		reti			; USART2_TX	 - USART2, Tx Complete
;#		reti			; USART3_RX	 - USART3, Rx Complete
;#		reti			; USART3_UDRE	 - USART3 Data register Empty
;#		reti			; USART3_TX	 - USART3, Tx Complete
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA1280_INC_ */

; ************************ END OF FILE *********************************

