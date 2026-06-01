;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega64A
;* Title             : Register/Mask/Bit Definitions for the ATmega64A
;* File Name         : ATmega64A.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-01 12:44:52 UTC
;
;***********************************************************************

#ifndef _ATMEGA64A_INC_
#define _ATMEGA64A_INC_

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
.device	ATmega64A
.equ	JTAGID		= 0x0960203F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x96
.equ	SIGNATURE2	= 0x02


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
.equ	ADDR_FLASH_END			= 0xFFFF
.equ	ADDR_FLASH_SIZE			= 0x00010000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0xFC00
.equ	ADDR_BOOT_SECTION_1_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0400
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0xF800
.equ	ADDR_BOOT_SECTION_2_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0800
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0xF000
.equ	ADDR_BOOT_SECTION_3_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x1000
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0xE000
.equ	ADDR_BOOT_SECTION_4_END		= 0xFFFF
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
.equ	ADDR_MAPPED_IO_END		= 0x00FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x00E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0100
.equ	ADDR_IRAM_END			= 0x10FF
.equ	ADDR_IRAM_SIZE			= 0x1000
;   XRAM
.equ	ADDR_XRAM_START			= 0x1100
.equ	ADDR_XRAM_END			= 0xFFFF
.equ	ADDR_XRAM_SIZE			= 0xEF00

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x07FF
.equ	ADDR_EEPROM_SIZE		= 0x0800

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0003
.equ	ADDR_OSCCAL_SIZE		= 0x0004




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
.equ	M103C		= 1		; 0x02 - ATmega103 Compatibility Mode
.equ	WDTON		= 0		; 0x01 - Watchdog Timer always on

; ----------	Register HIGH bits		------------------------
.equ	OCDEN		= 7		; 0x80 - On-Chip Debug Enabled
.equ	JTAGEN		= 6		; 0x40 - JTAG Interface Enabled
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
.equ	CKOPT		= 4		; 0x10 - CKOPT fuse (operation dependent of CKSEL fuses)
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words Boot address=$7E00
;			0x04		; Boot Flash size=1024 words Boot address=$7C00
;			0x02		; Boot Flash size=2048 words Boot address=$7800
;			0x00		; Boot Flash size=4096 words Boot address=$7000

; ----------	Register LOW bits		------------------------
.equ	BODLEVEL	= 7		; 0x80 - Brownout detector trigger level
.equ	BODEN		= 6		; 0x40 - Brown-out detection enabled
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x00		; Brown-out detection at VCC=4.0 V
;			0x80		; Brown-out detection at VCC=2.7 V
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 64 ms
;			0x01		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 0 ms
;			0x11		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 4 ms
;			0x21		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 64 ms
;			0x02		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 4 ms
;			0x22		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 64 ms
;			0x03		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 0 ms
;			0x13		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 4 ms
;			0x23		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 64 ms
;			0x04		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 0 ms
;			0x14		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 4 ms
;			0x24		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 64 ms
;			0x05		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 0 ms
;			0x15		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 4 ms
;			0x25		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 64 ms
;			0x35		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 6 CK + 4 ms
;			0x06		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 0 ms
;			0x16		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 4 ms
;			0x26		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 64 ms
;			0x36		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 6 CK + 4 ms
;			0x07		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 0 ms
;			0x17		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 4 ms
;			0x27		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 64 ms
;			0x37		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 6 CK + 4 ms
;			0x08		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 0 ms
;			0x18		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 4 ms
;			0x28		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 64 ms
;			0x38		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 6 CK + 4 ms
;			0x09		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4 ms
;			0x19		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 64 ms
;			0x29		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 64 ms
;			0x0A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 4 ms
;			0x1A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 64 ms
;			0x2A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 0 ms
;			0x3A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 4 ms
;			0x0B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 64 ms
;			0x1B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 0 ms
;			0x2B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 4 ms
;			0x3B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 64 ms
;			0x0C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 4 ms
;			0x1C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 64 ms
;			0x2C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 0 ms
;			0x3C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 4 ms
;			0x0D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 64 ms
;			0x1D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 0 ms
;			0x2D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 4 ms
;			0x3D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 64 ms
;			0x0E		; Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 4 ms
;			0x1E		; Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 64 ms
;			0x2E		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 0 ms
;			0x3E		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 4 ms
;			0x0F		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 64 ms
;			0x1F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 0 ms
;			0x2F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 4 ms
;			0x3F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 64 ms




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
.equ	UCSR1C		= 0x9D		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UDR1		= 0x9C		; [MEMORY MAPPED] USART I/O Data Register
.equ	UCSR1A		= 0x9B		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UCSR1B		= 0x9A		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UBRR1L		= 0x99		; [MEMORY MAPPED] USART Baud Rate Register Low Byte
.equ	UBRR1H		= 0x98		; [MEMORY MAPPED] USART Baud Rate Register High Byte
.equ	UCSR0C		= 0x95		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UBRR0H		= 0x90		; [MEMORY MAPPED] USART Baud Rate Register High Byte
.equ	ADCSRB		= 0x8E		; [MEMORY MAPPED] The ADC Control and Status register B
.equ	TCCR3C		= 0x8C		; [MEMORY MAPPED] Timer/Counter3 Control Register C
.equ	TCCR3A		= 0x8B		; [MEMORY MAPPED] Timer/Counter3 Control Register A
.equ	TCCR3B		= 0x8A		; [MEMORY MAPPED] Timer/Counter3 Control Register B
.equ	TCNT3		= 0x88		; [MEMORY MAPPED] Timer/Counter3  Bytes
.equ	OCR3A		= 0x86		; [MEMORY MAPPED] Timer/Counter3 Output Compare Register A  Bytes
.equ	OCR3B		= 0x84		; [MEMORY MAPPED] Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3C		= 0x82		; [MEMORY MAPPED] Timer/Counter3 Output compare Register C  Bytes
.equ	ICR3		= 0x80		; [MEMORY MAPPED] Timer/Counter3 Input Capture Register  Bytes
.equ	ETIMSK		= 0x7D		; [MEMORY MAPPED] Extended Timer/Counter Interrupt Mask Register
.equ	ETIFR		= 0x7C		; [MEMORY MAPPED] Extended Timer/Counter Interrupt Flag register
.equ	TCCR1C		= 0x7A		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	OCR1C		= 0x78		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register  Bytes
.equ	TWCR		= 0x74		; [MEMORY MAPPED] TWI Control Register
.equ	TWDR		= 0x73		; [MEMORY MAPPED] TWI Data register
.equ	TWAR		= 0x72		; [MEMORY MAPPED] TWI (Slave) Address register
.equ	TWSR		= 0x71		; [MEMORY MAPPED] TWI Status Register
.equ	TWBR		= 0x70		; [MEMORY MAPPED] TWI Bit Rate register
.equ	OSCCAL		= 0x6F		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	XMCRA		= 0x6D		; [MEMORY MAPPED] External Memory Control Register A
.equ	XMCRB		= 0x6C		; [MEMORY MAPPED] External Memory Control Register B
.equ	EICRA		= 0x6A		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	SPMCSR		= 0x68		; [MEMORY MAPPED] Store Program Memory Control Register
.equ	PORTG		= 0x65		; [MEMORY MAPPED] Data Register, Port G
.equ	DDRG		= 0x64		; [MEMORY MAPPED] Data Direction Register, Port G
.equ	PING		= 0x63		; [MEMORY MAPPED] Input Pins, Port G
.equ	PORTF		= 0x62		; [MEMORY MAPPED] Data Register, Port F
.equ	DDRF		= 0x61		; [MEMORY MAPPED] Data Direction Register, Port F
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	XDIV		= 0x3C		; XTAL Divide Control Register
.equ	EICRB		= 0x3A		; External Interrupt Control Register B
.equ	EIMSK		= 0x39		; External Interrupt Mask Register
.equ	EIFR		= 0x38		; External Interrupt Flag Register
.equ	TIMSK		= 0x37		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x36		; Timer/Counter Interrupt Flag register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUCSR		= 0x34		; MCU Control And Status Register
.equ	TCCR0		= 0x33		; Timer/Counter Control Register
.equ	TCNT0		= 0x32		; Timer/Counter Register
.equ	OCR0		= 0x31		; Output Compare Register
.equ	ASSR		= 0x30		; Asynchronous Status Register
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1B		= 0x28		; Timer/Counter1 Output Compare Register  Bytes
.equ	ICR1		= 0x26		; Timer/Counter1 Input Capture Register  Bytes
.equ	TCCR2		= 0x25		; Timer/Counter Control Register
.equ	TCNT2		= 0x24		; Timer/Counter Register
.equ	OCR2		= 0x23		; Output Compare Register
.equ	OCDR		= 0x22		; On-Chip Debug Related Register in I/O Memory
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	SFIOR		= 0x20		; Special Function IO Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access  Bytes
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
.equ	ADMUX		= 0x07		; The ADC multiplexer Selection Register
.equ	ADCSRA		= 0x06		; The ADC Control and Status register A
.equ	ADC		= 0x04		; ADC Data Register  Bytes
.equ	PORTE		= 0x03		; Data Register, Port E
.equ	DDRE		= 0x02		; Data Direction Register, Port E
.equ	PINE		= 0x01		; Input Pins, Port E
.equ	PINF		= 0x00		; Input Pins, Port F


; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFIOR bits		------------------------
.equ	ACME		= 3		; 0x08 - Analog Comparator Multiplexer Enable

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
;			0x80		; Reserved
;			0xC0		; Internal 2.56V Voltage Reference with external capacitor at AREF pin

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



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit

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



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
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
.equ	SM_MASK		= 0x18		;      - Sleep Mode Select (2 bits)
.equ	SM0		= 3		;          SM BIT0 position
.equ	SM2		= 2		; 0x04 - Sleep Mode Select
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable
; ::::  SM2	>>>> This is a part of CPU_SLEEP_MODE_2BITS1 enum (see complete values list below)

; ----------	Register MCUCSR bits		------------------------
.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register XMCRA bits		------------------------
.equ	SRL_MASK	= 0x70		;      - Wait state page limit (3 bits)
.equ	SRL0		= 4		;          SRL BIT0 position
.equ	SRW0_MASK	= 0x0C		;      - Wait state select bit lower page (2 bits)
.equ	SRW00		= 2		;          SRW0 BIT0 position
.equ	SRW11		= 1		; 0x02 - Wait state select bit upper page
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

; ----------	Register XMCRB bits		------------------------
.equ	XMBK		= 7		; 0x80 - External Memory Bus Keeper Enable
.equ	XMM_MASK	= 0x07		;      - External Memory High Mask (3 bits)
.equ	XMM0		= 0		;          XMM BIT0 position

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register XDIV bits		------------------------
.equ	XDIVEN		= 7		; 0x80 - XTAL Divide Enable
.equ	XDIV_MASK	= 0x7F		;      - XTAl Divide Select Bits (7 bits)
.equ	XDIV0		= 0		;          XDIV BIT0 position



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	JTAG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register OCDR bits		------------------------
.equ	OCDR_MASK	= 0xFF		;      - On-Chip Debug Register Bits (8 bits)
.equ	OCDR0		= 0		;          OCDR BIT0 position

; ----------	Register MCUCSR bits		------------------------
;.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
;.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag



; ====	MISC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFIOR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	ACME		= 3		; 0x08 - Analog Comparator Multiplexer Enable
.equ	PUD		= 2		; 0x04 - Pull Up Disable
.equ	PSR0		= 1		; 0x02 - Prescaler Reset Timer/Counter0
.equ	PSR321		= 0		; 0x01 - Prescaler Reset Timer/Counter3, Timer/Counter2, and Timer/Counter1



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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
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
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register ASSR bits		------------------------
.equ	AS0		= 3		; 0x08 - Asynchronous Timer/Counter 0
.equ	TCN0UB		= 2		; 0x04 - Timer/Counter0 Update Busy
.equ	OCR0UB		= 1		; 0x02 - Output Compare register 0 Busy
.equ	TCR0UB		= 0		; 0x01 - Timer/Counter Control Register 0 Update Busy

; ----------	Register TIMSK bits		------------------------
.equ	OCIE0		= 1		; 0x02 - Timer/Counter0 Output Compare Match Interrupt register
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF0		= 1		; 0x02 - Output Compare Flag 0
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register SFIOR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR0		= 1		; 0x02 - Prescaler Reset Timer/Counter0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1A		= 4		; 0x10 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B		= 3		; 0x08 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	TOIE1		= 2		; 0x04 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register ETIMSK bits		------------------------
.equ	OCIE1C		= 0		; 0x01 - Timer/Counter 1, Output Compare Match C Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1A		= 4		; 0x10 - Output Compare Flag 1A
.equ	OCF1B		= 3		; 0x08 - Output Compare Flag 1B
.equ	TOV1		= 2		; 0x04 - Timer/Counter1 Overflow Flag

; ----------	Register ETIFR bits		------------------------
.equ	OCF1C		= 0		; 0x01 - Timer/Counter 1, Output Compare C Match Flag

; ----------	Register SFIOR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR321		= 0		; 0x01 - Prescaler Reset, T/C3, T/C2, T/C1

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	COM1C_MASK	= 0x0C		;      - Compare Output Mode 1C, bits (2 bits)
.equ	COM1C0		= 2		;          COM1C BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Waveform Generation Mode Bits (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
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

; ----------	Register TCCR1C bits		------------------------
.equ	FOC1A		= 7		; 0x80 - Force Output Compare for channel A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare for channel B
.equ	FOC1C		= 5		; 0x20 - Force Output Compare for channel C

; ----------	Register ETIMSK bits		------------------------
.equ	TICIE3		= 5		; 0x20 - Timer/Counter3 Input Capture Interrupt Enable
.equ	OCIE3A		= 4		; 0x10 - Timer/Counter3 Output CompareA Match Interrupt Enable
.equ	OCIE3B		= 3		; 0x08 - Timer/Counter3 Output CompareB Match Interrupt Enable
.equ	TOIE3		= 2		; 0x04 - Timer/Counter3 Overflow Interrupt Enable
.equ	OCIE3C		= 1		; 0x02 - Timer/Counter3, Output Compare Match Interrupt Enable

; ----------	Register ETIFR bits		------------------------
.equ	ICF3		= 5		; 0x20 - Input Capture Flag 3
.equ	OCF3A		= 4		; 0x10 - Output Compare Flag 3A
.equ	OCF3B		= 3		; 0x08 - Output Compare Flag 3B
.equ	TOV3		= 2		; 0x04 - Timer/Counter3 Overflow Flag
.equ	OCF3C		= 1		; 0x02 - Timer/Counter3 Output Compare C Match Flag

; ----------	Register SFIOR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR321		= 0		; 0x01 - Prescaler Reset, T/C3, T/C2, T/C1

; ----------	Register TCCR3A bits		------------------------
.equ	COM3A_MASK	= 0xC0		;      - Compare Output Mode 3A, bits (2 bits)
.equ	COM3A0		= 6		;          COM3A BIT0 position
.equ	COM3B_MASK	= 0x30		;      - Compare Output Mode 3B, bits (2 bits)
.equ	COM3B0		= 4		;          COM3B BIT0 position
.equ	COM3C_MASK	= 0x0C		;      - Compare Output Mode 3C, bits (2 bits)
.equ	COM3C0		= 2		;          COM3C BIT0 position
.equ	TCCR3A_WGM3_MASK= 0x03		;      - Waveform Generation Mode Bits (2 bits)
.equ	TCCR3A_WGM30	= 0		;          TCCR3A_WGM3 BIT0 position

; ----------	Register TCCR3B bits		------------------------
.equ	ICNC3		= 7		; 0x80 - Input Capture 3  Noise Canceler
.equ	ICES3		= 6		; 0x40 - Input Capture 3 Edge Select
.equ	TCCR3B_WGM3_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
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
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR3C bits		------------------------
.equ	FOC3A		= 7		; 0x80 - Force Output Compare for channel A
.equ	FOC3B		= 6		; 0x40 - Force Output Compare for channel B
.equ	FOC3C		= 5		; 0x20 - Force Output Compare for channel C



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR2 bits		------------------------
.equ	FOC2		= 7		; 0x80 - Force Output Compare
.equ	WGM20		= 6		; 0x40 - Waveform Generation Mode
.equ	COM2_MASK	= 0x30		;      - Compare Match Output Mode (2 bits)
.equ	COM20		= 4		;          COM2 BIT0 position
.equ	WGM21		= 3		; 0x08 - Waveform Generation Mode
.equ	CS2_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  WGM20	>>>> This is a part of WAVEFORM_GEN_MODE enum (see complete values list below)
; ::::  CS2	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TIFR bits		------------------------
.equ	OCF2		= 7		; 0x80 - Output Compare Flag 2
.equ	TOV2		= 6		; 0x40 - Timer/Counter2 Overflow Flag

; ----------	Register TIMSK bits		------------------------
.equ	OCIE2		= 7		; 0x80 - 
.equ	TOIE2		= 6		; 0x40 - 



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
; ::::  CPU_SLEEP_MODE_2BITS1	:::: values
;			0b000		; Idle
;			0b010		; ADC Noise Reduction (If Available)
;			0b100		; Power Down
;			0b110		; Power Save
;			0b101		; Standby
;			0b111		; Extended Standby
; ::::  WAVEFORM_GEN_MODE	:::: values
;			0b00		; Normal
;			0b10		; PWM, Phase Correct
;			0b01		; CTC
;			0b11		; Fast PWM



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 35
.equ	INT_VECTORS_SIZE	= 0x46
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	INT2		; External Interrupt Request 2
;	4	INT3		; External Interrupt Request 3
;	5	INT4		; External Interrupt Request 4
;	6	INT5		; External Interrupt Request 5
;	7	INT6		; External Interrupt Request 6
;	8	INT7		; External Interrupt Request 7
;	9	TIMER2_COMP	; Timer/Counter2 Compare Match
;	10	TIMER2_OVF	; Timer/Counter2 Overflow
;	11	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	12	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	13	TIMER1_COMPB	; Timer/Counter Compare Match B
;	14	TIMER1_OVF	; Timer/Counter1 Overflow
;	15	TIMER0_COMP	; Timer/Counter0 Compare Match
;	16	TIMER0_OVF	; Timer/Counter0 Overflow
;	17	SPI_STC		; SPI Serial Transfer Complete
;	18	USART0_RX	; USART0, Rx Complete
;	19	USART0_UDRE	; USART0 Data Register Empty
;	20	USART0_TX	; USART0, Tx Complete
;	21	ADC		; ADC Conversion Complete
;	22	EE_READY	; EEPROM Ready
;	23	ANALOG_COMP	; Analog Comparator
;	24	TIMER1_COMPC	; Timer/Counter1 Compare Match C
;	25	TIMER3_CAPT	; Timer/Counter3 Capture Event
;	26	TIMER3_COMPA	; Timer/Counter3 Compare Match A
;	27	TIMER3_COMPB	; Timer/Counter3 Compare Match B
;	28	TIMER3_COMPC	; Timer/Counter3 Compare Match C
;	29	TIMER3_OVF	; Timer/Counter3 Overflow
;	30	USART1_RX	; USART1, Rx Complete
;	31	USART1_UDRE	; USART1, Data Register Empty
;	32	USART1_TX	; USART1, Tx Complete
;	33	TWI		; 2-wire Serial Interface
;	34	SPM_READY	; Store Program Memory Read



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega64A.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  & ~(1 <<M103C) \
;#				  & ~(0 <<WDTON)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=2048 words Boot address=$7800
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<OCDEN) \
;#				  & ~(1 <<JTAGEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST) \
;#				  & ~(0 <<CKOPT)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x21	; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 64 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<BODLEVEL) \
;#				  & ~(0 <<BODEN) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	BLB0		= 0x0C	; No lock on SPM and LPM in Application Section
;#	.set	BLB1		= 0x30	; No lock on SPM and LPM in Boot Section
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB) \
;#				  &  (~BLB0_MASK | BLB0) \
;#				  &  (~BLB1_MASK | BLB1)
;#	.message "====================="
;#	.message "=====  Fuses  ======="
;#	.message "EXTENDED	", FUSES_EXTENDED
;#	.message "HIGH		", FUSES_HIGH
;#	.message "LOW		", FUSES_LOW
;#	.message "===== Lockbits ======"
;#	.message " LOCKBIT	", LOCKBITS_LOCKBIT
;#	.message "====================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		reti			; INT4		 - External Interrupt Request 4
;#		reti			; INT5		 - External Interrupt Request 5
;#		reti			; INT6		 - External Interrupt Request 6
;#		reti			; INT7		 - External Interrupt Request 7
;#		reti			; TIMER2_COMP	 - Timer/Counter2 Compare Match
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMP	 - Timer/Counter0 Compare Match
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART0_RX	 - USART0, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data Register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		reti			; TIMER1_COMPC	 - Timer/Counter1 Compare Match C
;#		reti			; TIMER3_CAPT	 - Timer/Counter3 Capture Event
;#		reti			; TIMER3_COMPA	 - Timer/Counter3 Compare Match A
;#		reti			; TIMER3_COMPB	 - Timer/Counter3 Compare Match B
;#		reti			; TIMER3_COMPC	 - Timer/Counter3 Compare Match C
;#		reti			; TIMER3_OVF	 - Timer/Counter3 Overflow
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1, Data Register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; TWI		 - 2-wire Serial Interface
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

#endif /* _ATMEGA64A_INC_ */

; ************************ END OF FILE *********************************

