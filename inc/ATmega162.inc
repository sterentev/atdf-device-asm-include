;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega162
;* Title             : Register/Mask/Bit Definitions for the ATmega162
;* File Name         : ATmega162.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-05 09:17:55 UTC
;
;***********************************************************************

#ifndef _ATMEGA162_INC_
#define _ATMEGA162_INC_

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
.device	ATmega162
.equ	JTAGID		= 0x0940403F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x04


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
;   XRAM
.equ	ADDR_XRAM_START			= 0x0500
.equ	ADDR_XRAM_END			= 0xFFFF
.equ	ADDR_XRAM_SIZE			= 0xFB00

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200

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
.equ	M161C		= 4		; 0x10 - ATmega161 compatibility mode
.equ	BODLEVEL_MASK	= 0x0E		;      - Brownout detector trigger level (3 bits)
.equ	BODLEVEL0	= 1		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x0E		; Brown-out detection disabled
;			0x0C		; Brown-out detection at VCC=1.8 V
;			0x06		; Brown-out detection at VCC=2.3 V
;			0x0A		; Brown-out detection at VCC=2.7 V
;			0x08		; Brown-out detection at VCC=4.3 V

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
;			0x06		; Boot Flash size=128 words start address=$1F80
;			0x04		; Boot Flash size=256 words start address=$1F00
;			0x02		; Boot Flash size=512 words start address=$1E00
;			0x00		; Boot Flash size=1024 words start address=$1C00

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB0
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 65 ms
;			0x02		; Int. RC Osc.; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x22		; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;			0x07		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms; Int. Cap.
;			0x17		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms; Int. Cap.
;			0x27		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms; Int. Cap.
;			0x06		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms; Int. Cap.
;			0x16		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms; Int. Cap.
;			0x26		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms; Int. Cap.
;			0x05		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms
;			0x15		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms
;			0x25		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms
;			0x04		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms
;			0x14		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms
;			0x24		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms
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
.equ	TCCR3A		= 0x8B		; [MEMORY MAPPED] Timer/Counter3 Control Register A
.equ	TCCR3B		= 0x8A		; [MEMORY MAPPED] Timer/Counter3 Control Register B
.equ	TCNT3		= 0x88		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3  Bytes
.equ	OCR3A		= 0x86		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Output Compare Register A  Bytes
.equ	OCR3B		= 0x84		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Output Compare Register B  Bytes
.equ	ICR3		= 0x80		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter3 Input Capture Register  Bytes
.equ	ETIMSK		= 0x7D		; [MEMORY MAPPED] Extended Timer/Counter Interrupt Mask Register
.equ	ETIFR		= 0x7C		; [MEMORY MAPPED] Extended Timer/Counter Interrupt Flag register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Enable Mask
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock prescale register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	UCSR1C		= 0x3C		; USART Control and Status Register C
.equ	UBRR1H		= 0x3C		; USART Baud Rate Register High Byte
.equ	GICR		= 0x3B		; General Interrupt Control Register
.equ	GIFR		= 0x3A		; General Interrupt Flag Register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	SPMCR		= 0x37		; Store Program Memory Control Register
.equ	EMCUCR		= 0x36		; Extended MCU Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUCSR		= 0x34		; MCU Control And Status Register
.equ	TCCR0		= 0x33		; Timer/Counter 0 Control Register
.equ	TCNT0		= 0x32		; Timer/Counter 0 Register
.equ	OCR0		= 0x31		; Timer/Counter 0 Output Compare Register
.equ	SFIOR		= 0x30		; Special Function IO Register
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; [___2 addrs___] Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; [___2 addrs___] Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1B		= 0x28		; [___2 addrs___] Timer/Counter1 Output Compare Register B  Bytes
.equ	TCCR2		= 0x27		; Timer/Counter Control Register
.equ	ASSR		= 0x26		; Asynchronous Status Register
.equ	ICR1		= 0x24		; [___2 addrs___] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT2		= 0x23		; Timer/Counter Register
.equ	OCR2		= 0x22		; Output Compare Register
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	UCSR0C		= 0x20		; USART Control and Status Register C
.equ	UBRR0H		= 0x20		; USART Baud Rate Register High Byte
.equ	EEAR		= 0x1E		; [___2 addrs___] EEPROM Address Register Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Port B Data Register
.equ	DDRB		= 0x17		; Port B Data Direction Register
.equ	PINB		= 0x16		; Port B Input Pins
.equ	PORTC		= 0x15		; Port C Data Register
.equ	DDRC		= 0x14		; Port C Data Direction Register
.equ	PINC		= 0x13		; Port C Input Pins
.equ	PORTD		= 0x12		; Port D Data Register
.equ	DDRD		= 0x11		; Port D Data Direction Register
.equ	PIND		= 0x10		; Port D Input Pins
.equ	SPDR		= 0x0F		; SPI Data Register
.equ	SPSR		= 0x0E		; SPI Status Register
.equ	SPCR		= 0x0D		; SPI Control Register
.equ	UDR0		= 0x0C		; USART I/O Data Register
.equ	UCSR0A		= 0x0B		; USART Control and Status Register A
.equ	UCSR0B		= 0x0A		; USART Control and Status Register B
.equ	UBRR0L		= 0x09		; USART Baud Rate Register Low Byte
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	PORTE		= 0x07		; Data Register, Port E
.equ	DDRE		= 0x06		; Data Direction Register, Port E
.equ	PINE		= 0x05		; Input Pins, Port E
.equ	OSCCAL		= 0x04		; Oscillator Calibration Value
.equ	OCDR		= 0x04		; On-Chip Debug Related Register in I/O Memory
.equ	UDR1		= 0x03		; USART I/O Data Register
.equ	UCSR1A		= 0x02		; USART Control and Status Register A
.equ	UCSR1B		= 0x01		; USART Control and Status Register B
.equ	UBRR1L		= 0x00		; USART Baud Rate Register Low Byte
;
; ----------	REGISTERS PAIRS			------------------------
;    Timer/Counter3  Bytes
.equ	TCNT3H		= 0x89
.equ	TCNT3L		= 0x88
;    Timer/Counter3 Output Compare Register A  Bytes
.equ	OCR3AH		= 0x87
.equ	OCR3AL		= 0x86
;    Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3BH		= 0x85
.equ	OCR3BL		= 0x84
;    Timer/Counter3 Input Capture Register  Bytes
.equ	ICR3H		= 0x81
.equ	ICR3L		= 0x80
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    Timer/Counter1  Bytes
.equ	TCNT1H		= 0x2D
.equ	TCNT1L		= 0x2C
;    Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1AH		= 0x2B
.equ	OCR1AL		= 0x2A
;    Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1BH		= 0x29
.equ	OCR1BL		= 0x28
;    Timer/Counter1 Input Capture Register  Bytes
.equ	ICR1H		= 0x25
.equ	ICR1L		= 0x24
;    EEPROM Address Register Bytes
.equ	EEARH		= 0x1F
.equ	EEARL		= 0x1E


; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TOIE1		= 7		; 0x80 - Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A		= 6		; 0x40 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	TICIE1		= 3		; 0x08 - Timer/Counter1 Input Capture Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	TOV1		= 7		; 0x80 - Timer/Counter1 Overflow Flag
.equ	OCF1A		= 6		; 0x40 - Output Compare Flag 1A
.equ	OCF1B		= 5		; 0x20 - Output Compare Flag 1B
.equ	ICF1		= 3		; 0x08 - Input Capture Flag 1

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	FOC1A		= 3		; 0x08 - Force Output Compare for Channel A
.equ	FOC1B		= 2		; 0x04 - Force Output Compare for Channel B
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR1B_WGM10	= 3		;          TCCR1B_WGM1 BIT0 position
.equ	CS1_MASK	= 0x07		;      - Clock Select1 bits (3 bits)
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

; ----------	Register ETIMSK bits		------------------------
.equ	TICIE3		= 5		; 0x20 - Timer/Counter3 Input Capture Interrupt Enable
.equ	OCIE3A		= 4		; 0x10 - Timer/Counter3 Output CompareA Match Interrupt Enable
.equ	OCIE3B		= 3		; 0x08 - Timer/Counter3 Output CompareB Match Interrupt Enable
.equ	TOIE3		= 2		; 0x04 - Timer/Counter3 Overflow Interrupt Enable

; ----------	Register ETIFR bits		------------------------
.equ	ICF3		= 5		; 0x20 - Input Capture Flag 3
.equ	OCF3A		= 4		; 0x10 - Output Compare Flag 3A
.equ	OCF3B		= 3		; 0x08 - Output Compare Flag 3B
.equ	TOV3		= 2		; 0x04 - Timer/Counter3 Overflow Flag

; ----------	Register TCCR3A bits		------------------------
.equ	COM3A_MASK	= 0xC0		;      - Compare Output Mode 3A, bits (2 bits)
.equ	COM3A0		= 6		;          COM3A BIT0 position
.equ	COM3B_MASK	= 0x30		;      - Compare Output Mode 3B, bits (2 bits)
.equ	COM3B0		= 4		;          COM3B BIT0 position
.equ	FOC3A		= 3		; 0x08 - Force Output Compare for Channel A
.equ	FOC3B		= 2		; 0x04 - Force Output Compare for Channel B
.equ	TCCR3A_WGM3_MASK= 0x03		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR3A_WGM30	= 0		;          TCCR3A_WGM3 BIT0 position

; ----------	Register TCCR3B bits		------------------------
.equ	ICNC3		= 7		; 0x80 - Input Capture 3 Noise Canceler
.equ	ICES3		= 6		; 0x40 - Input Capture 3 Edge Select
.equ	TCCR3B_WGM3_MASK= 0x18		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR3B_WGM30	= 3		;          TCCR3B_WGM3 BIT0 position
.equ	CS3_MASK	= 0x07		;      - Clock Select3 bits (3 bits)
.equ	CS30		= 0		;          CS3 BIT0 position
; ::::  CS3	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, CLK/16
;			0x07		; Running, CLK/32



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TCCR2 bits		------------------------
.equ	FOC2		= 7		; 0x80 - Force Output Compare
.equ	WGM20		= 6		; 0x40 - Pulse Width Modulator Select Bit 0
.equ	COM2_MASK	= 0x30		;      - Compare Match Output Mode (2 bits)
.equ	COM20		= 4		;          COM2 BIT0 position
.equ	WGM21		= 3		; 0x08 - Pulse Width Modulator Select Bit 1
.equ	CS2_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  WGM20	>>>> This is a part of WAVEFORM_GEN_MODE enum (see complete values list below)
; ::::  CS2	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register TIMSK bits		------------------------
.equ	OCIE2		= 4		; 0x10 - Timer/Counter2 Output Compare Match Interrupt Enable
.equ	TOIE2		= 2		; 0x04 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF2		= 4		; 0x10 - Output Compare Flag 2
.equ	TOV2		= 2		; 0x04 - Timer/Counter2 Overflow Flag

; ----------	Register ASSR bits		------------------------
.equ	AS2		= 3		; 0x08 - Asynchronous Timer 2
.equ	TCN2UB		= 2		; 0x04 - Timer/Counter2 Update Busy
.equ	OCR2UB		= 1		; 0x02 - Output Compare Register2 Update Busy
.equ	TCR2UB		= 0		; 0x01 - Timer/Counter Control Register2 Update Busy



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
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
.equ	URSEL0		= 7		; 0x80 - Register Select
.equ	UMSEL0		= 6		; 0x40 - USART Mode Select
.equ	UPM0_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM00		= 4		;          UPM0 BIT0 position
.equ	USBS0		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ0_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ00		= 1		;          UCSZ0 BIT0 position
.equ	UCPOL0		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL0	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
; ::::  UPM0	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS0	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UBRR0H bits		------------------------
;.equ	URSEL0		= 7		; 0x80 - Register Select
.equ	UBRR0H_UBRR0_MASK= 0x0F		;      - USART Baud Rate Register High bits (4 bits)
.equ	UBRR0H_UBRR00	= 0		;          UBRR0H_UBRR0 BIT0 position

; ----------	Register UBRR0L bits		------------------------
.equ	UBRR0L_UBRR0_MASK= 0xFF		;      - USART Baud Rate Register Low bits (8 bits)
.equ	UBRR0L_UBRR00	= 0		;          UBRR0L_UBRR0 BIT0 position

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
.equ	URSEL1		= 7		; 0x80 - Register Select
.equ	UMSEL1		= 6		; 0x40 - USART Mode Select
.equ	UPM1_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM10		= 4		;          UPM1 BIT0 position
.equ	USBS1		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ1_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ10		= 1		;          UCSZ1 BIT0 position
.equ	UCPOL1		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL1	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
; ::::  UPM1	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS1	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UBRR1H bits		------------------------
;.equ	URSEL0		= 7		; 0x80 - Register Select
.equ	UBRR1H_UBRR1_MASK= 0x0F		;      - USART Baud Rate Register High bits (4 bits)
.equ	UBRR1H_UBRR10	= 0		;          UBRR1H_UBRR1 BIT0 position

; ----------	Register UBRR1L bits		------------------------
.equ	UBRR1L_UBRR1_MASK= 0xFF		;      - USART Baud Rate Register Low bits (8 bits)
.equ	UBRR1L_UBRR10	= 0		;          UBRR1L_UBRR1 BIT0 position



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
.equ	SRE		= 7		; 0x80 - External SRAM Enable
.equ	SRW10		= 6		; 0x40 - External SRAM Wait State Select
.equ	SE		= 5		; 0x20 - Sleep Enable
.equ	SM1		= 4		; 0x10 - Sleep Mode Select
.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC1	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Any Logical Change in INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change in INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register MCUCSR bits		------------------------
.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
.equ	SM2		= 5		; 0x20 - Sleep Mode Select Bit 2
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register EMCUCR bits		------------------------
.equ	SM0		= 7		; 0x80 - Sleep mode Select Bit 0
.equ	SRL_MASK	= 0x70		;      - Wait State Sector Limit Bits (3 bits)
.equ	SRL0		= 4		;          SRL BIT0 position
.equ	SRW0_MASK	= 0x0C		;      - Wait State Select Bit 1 for Lower Sector (2 bits)
.equ	SRW00		= 2		;          SRW0 BIT0 position
.equ	SRW11		= 1		; 0x02 - Wait State Select Bit 1 for Upper Sector
.equ	ISC2		= 0		; 0x01 - Interrupt Sense Control 2
; ::::  SRL	:::: bitfield values
;			0x00		; LS = N/A, US = 0x1100 - 0xFFFF
;			0x10		; LS = 0x1100 - 0x1FFF, US = 0x2000 - 0xFFFF
;			0x20		; LS = 0x1100 - 0x3FFF, US = 0x4000 - 0xFFFF
;			0x30		; LS = 0x1100 - 0x5FFF, US = 0x6000 - 0xFFFF
;			0x40		; LS = 0x1100 - 0x7FFF, US = 0x8000 - 0xFFFF
;			0x50		; LS = 0x1100 - 0x9FFF, US = 0xA000 - 0xFFFF
;			0x60		; LS = 0x1100 - 0xBFFF, US = 0xC000 - 0xFFFF
;			0x70		; LS = 0x1100 - 0xDFFF, US = 0xE000 - 0xFFFF
; ::::  SRW0	:::: bitfield values
;			0x00		; No wait-states
;			0x04		; Wait one cycle during read/write strobe
;			0x08		; Wait two cycles during read/write strobe
;			0x0C		; Wait two cycles during read/write and wait one cycle before driving out new address

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x0F		;      - Clock Prescaler Select Bits (4 bits)
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

; ----------	Register SFIOR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	XMBK		= 6		; 0x40 - External Memory Bus Keeper Enable
.equ	XMM_MASK	= 0x38		;      - External Memory High Mask Bits (3 bits)
.equ	XMM0		= 3		;          XMM BIT0 position
.equ	PUD		= 2		; 0x04 - Pull-up Disable
.equ	PSR2		= 1		; 0x02 - Prescaler Reset Timer/Counter2
.equ	PSR310		= 0		; 0x01 - Prescaler Reset Timer/Counter3, Timer/Counter1 and Timer/Counter0



; ====	JTAG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register OCDR bits		------------------------
.equ	OCDR_MASK	= 0xFF		;      - On-Chip Debug Register Bits (8 bits)
.equ	OCDR0		= 0		;          OCDR BIT0 position

; ----------	Register MCUCSR bits		------------------------
;.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
;.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEAR bits		------------------------
.equ	EEAR_MASK	= 0x01FF	;      - EEPROM Address Register bits (9 bits)
.equ	EEAR0		= 0		;          EEAR BIT0 position

; ----------	Register EEDR bits		------------------------
.equ	EEDR_MASK	= 0xFF		;      - EEPROM Data Register bits (8 bits)
.equ	EEDR0		= 0		;          EEDR BIT0 position

; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0 bits		------------------------
.equ	FOC0		= 7		; 0x80 - Force Output Compare
.equ	WGM00		= 6		; 0x40 - Waveform Generation Mode 0
.equ	COM0_MASK	= 0x30		;      - Compare Match Output Modes (2 bits)
.equ	COM00		= 4		;          COM0 BIT0 position
.equ	WGM01		= 3		; 0x08 - Waveform Generation Mode 1
.equ	CS0_MASK	= 0x07		;      - Clock Selects (3 bits)
.equ	CS00		= 0		;          CS0 BIT0 position
; ::::  WGM00	>>>> This is a part of WAVEFORM_GEN_MODE enum (see complete values list below)
; ::::  CS0	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TIMSK bits		------------------------
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0		= 0		; 0x01 - Timer/Counter0 Output Compare Match Interrupt register

; ----------	Register TIFR bits		------------------------
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag
.equ	OCF0		= 0		; 0x01 - Output Compare Flag 0



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
.equ	WDP_MASK	= 0x07		;      - Watch Dog Timer Prescaler bits (3 bits)
.equ	WDP0		= 0		;          WDP BIT0 position
; ::::  WDP	:::: bitfield values
;			0x00		; Oscillator Cycles 16K
;			0x01		; Oscillator Cycles 32K
;			0x02		; Oscillator Cycles 64K
;			0x03		; Oscillator Cycles 128K
;			0x04		; Oscillator Cycles 256K
;			0x05		; Oscillator Cycles 512K
;			0x06		; Oscillator Cycles 1024K
;			0x07		; Oscillator Cycles 2048K



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
;.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 Bits (2 bits)
;.equ	ISC10		= 2		;          ISC1 BIT0 position
;.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 Bits (2 bits)
;.equ	ISC00		= 0		;          ISC0 BIT0 position
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

; ----------	Register EMCUCR bits		------------------------
;.equ	ISC2		= 0		; 0x01 - Interrupt Sense Control 2

; ----------	Register GICR bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	INT1		= 7		; 0x80 - External Interrupt Request 1 Enable
.equ	INT2		= 5		; 0x20 - External Interrupt Request 2 Enable
.equ	PCIE_MASK	= 0x18		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 3		;          PCIE BIT0 position
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register GIFR bits		------------------------
.equ	INTF_MASK	= 0xC0		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 6		;          INTF BIT0 position
.equ	INTF2		= 5		; 0x20 - External Interrupt Flag 2
.equ	PCIF_MASK	= 0x18		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 3		;          PCIF BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT_MASK	= 0xFF		;      - Pin Change Interrupt mask bits (8 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Interrupt mask bits (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  WAVEFORM_GEN_MODE	:::: values
;			0b00		; Normal
;			0b10		; PWM, Phase Correct
;			0b01		; CTC
;			0b11		; Fast PWM
; ::::  COMM_SCK_RATE_3BIT	:::: values
;			0b000		; fosc/4
;			0b001		; fosc/16
;			0b010		; fosc/64
;			0b011		; fosc/128
;			0b100		; fosc/2
;			0b101		; fosc/8
;			0b110		; fosc/32
;			0b111		; fosc/64
; ::::  WAVEFORM_GEN_MODE	:::: values
;			0b00		; Normal
;			0b10		; PWM, Phase Correct
;			0b01		; CTC
;			0b11		; Fast PWM



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 28
.equ	INT_VECTORS_SIZE	= 0x38
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	INT2		; External Interrupt Request 2
;	4	PCINT0		; Pin Change Interrupt Request 0
;	5	PCINT1		; Pin Change Interrupt Request 1
;	6	TIMER3_CAPT	; Timer/Counter3 Capture Event
;	7	TIMER3_COMPA	; Timer/Counter3 Compare Match A
;	8	TIMER3_COMPB	; Timer/Counter3 Compare Match B
;	9	TIMER3_OVF	; Timer/Counter3 Overflow
;	10	TIMER2_COMP	; Timer/Counter2 Compare Match
;	11	TIMER2_OVF	; Timer/Counter2 Overflow
;	12	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	13	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	14	TIMER1_COMPB	; Timer/Counter Compare Match B
;	15	TIMER1_OVF	; Timer/Counter1 Overflow
;	16	TIMER0_COMP	; Timer/Counter0 Compare Match
;	17	TIMER0_OVF	; Timer/Counter0 Overflow
;	18	SPI_STC		; SPI Serial Transfer Complete
;	19	USART0_RXC	; USART0, Rx Complete
;	20	USART1_RXC	; USART1, Rx Complete
;	21	USART0_UDRE	; USART0 Data register Empty
;	22	USART1_UDRE	; USART1, Data register Empty
;	23	USART0_TXC	; USART0, Tx Complete
;	24	USART1_TXC	; USART1, Tx Complete
;	25	EE_RDY		; EEPROM Ready
;	26	ANA_COMP	; Analog Comparator
;	27	SPM_RDY		; Store Program Memory Read



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega162.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODLEVEL	= 0x0E	; Brown-out detection disabled
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  & ~(0 <<M161C) \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=512 words start address=$1E00
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
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; TIMER3_CAPT	 - Timer/Counter3 Capture Event
;#		reti			; TIMER3_COMPA	 - Timer/Counter3 Compare Match A
;#		reti			; TIMER3_COMPB	 - Timer/Counter3 Compare Match B
;#		reti			; TIMER3_OVF	 - Timer/Counter3 Overflow
;#		reti			; TIMER2_COMP	 - Timer/Counter2 Compare Match
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMP	 - Timer/Counter0 Compare Match
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART0_RXC	 - USART0, Rx Complete
;#		reti			; USART1_RXC	 - USART1, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data register Empty
;#		reti			; USART1_UDRE	 - USART1, Data register Empty
;#		reti			; USART0_TXC	 - USART0, Tx Complete
;#		reti			; USART1_TXC	 - USART1, Tx Complete
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; SPM_RDY	 - Store Program Memory Read
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA162_INC_ */

; ************************ END OF FILE *********************************

