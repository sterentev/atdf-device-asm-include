;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega16A
;* Title             : Register/Mask/Bit Definitions for the ATmega16A
;* File Name         : ATmega16A.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-05-27 14:43:36 UTC
;
;***********************************************************************

#ifndef _ATMEGA16A_INC_
#define _ATMEGA16A_INC_

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
.device	ATmega16A
.equ	JTAGID		= 0x0940303F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
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
.equ	ADDR_FUSES_END			= 0x0001
.equ	ADDR_FUSES_SIZE			= 0x0002

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
.equ	ADDR_MAPPED_IO_END		= 0x005F
.equ	ADDR_MAPPED_IO_SIZE		= 0x0040
;   IRAM
.equ	ADDR_IRAM_START			= 0x0060
.equ	ADDR_IRAM_END			= 0x045F
.equ	ADDR_IRAM_SIZE			= 0x0400

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0003
.equ	ADDR_OSCCAL_SIZE		= 0x0004




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
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
;			0x06		; Boot Flash size=128 words start address=$1F80
;			0x04		; Boot Flash size=256 words start address=$1F00
;			0x02		; Boot Flash size=512 words start address=$1E00
;			0x00		; Boot Flash size=1024 words start address=$1C00

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
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	OCR0		= 0x3C		; Output Compare 0 Register
.equ	GICR		= 0x3B		; General Interrupt Control Register
.equ	GIFR		= 0x3A		; General Interrupt Flag Register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	TWCR		= 0x36		; TWI Control Register
.equ	MCUCR		= 0x35		; General Interrupt Control Register
.equ	MCUCSR		= 0x34		; MCU Control And Status Register
.equ	TCCR0		= 0x33		; Timer/Counter Control Register
.equ	TCNT0		= 0x32		; Timer/Counter 0 Register
.equ	OSCCAL		= 0x31		; Oscillator Calibration Value
.equ	OCDR		= 0x31		; On-Chip Debug Related Register in I/O Memory
.equ	SFIOR		= 0x30		; Special Function IO Register
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; Timer/Counter1 Bytes
.equ	OCR1A		= 0x2A		; Timer/Counter1 Output Compare Register Bytes
.equ	OCR1B		= 0x28		; Timer/Counter1 Output Compare Register Bytes
.equ	ICR1		= 0x26		; Timer/Counter1 Input Capture Register Bytes
.equ	TCCR2		= 0x25		; Timer/Counter2 Control Register
.equ	TCNT2		= 0x24		; Timer/Counter2
.equ	OCR2		= 0x23		; Timer/Counter2 Output Compare Register
.equ	ASSR		= 0x22		; Asynchronous Status Register
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	UCSRC		= 0x20		; USART Control and Status Register C
.equ	UBRRH		= 0x20		; USART Baud Rate Register
.equ	EEAR		= 0x1E		; EEPROM Address Register Bytes
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
.equ	UDR		= 0x0C		; USART I/O Data Register
.equ	UCSRA		= 0x0B		; USART Control and Status Register A
.equ	UCSRB		= 0x0A		; USART Control and Status Register B
.equ	UBRRL		= 0x09		; USART Baud Rate Register
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	ADMUX		= 0x07		; The ADC multiplexer Selection Register
.equ	ADCSRA		= 0x06		; The ADC Control and Status register
.equ	ADC		= 0x04		; ADC Data Register Bytes
.equ	TWDR		= 0x03		; TWI Data register
.equ	TWAR		= 0x02		; TWI (Slave) Address register
.equ	TWSR		= 0x01		; TWI Status Register
.equ	TWBR		= 0x00		; TWI Bit Rate register


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

; ----------	Register TCNT0 bits		------------------------
.equ	TCNT0_MASK	= 0xFF		;      - Timer/Counter 0 bits (8 bits)
.equ	TCNT00		= 0		;          TCNT0 BIT0 position

; ----------	Register OCR0 bits		------------------------
.equ	OCR0_MASK	= 0xFF		;      - Output Compare bits (8 bits)
.equ	OCR00		= 0		;          OCR0 BIT0 position

; ----------	Register TIMSK bits		------------------------
.equ	OCIE0		= 1		; 0x02 - Timer/Counter0 Output Compare Match Interrupt register
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF0		= 1		; 0x02 - Output Compare Flag 0
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register SFIOR bits		------------------------
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1A		= 4		; 0x10 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B		= 3		; 0x08 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	TOIE1		= 2		; 0x04 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1A		= 4		; 0x10 - Output Compare Flag 1A
.equ	OCF1B		= 3		; 0x08 - Output Compare Flag 1B
.equ	TOV1		= 2		; 0x04 - Timer/Counter1 Overflow Flag

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	FOC1A		= 3		; 0x08 - Force Output Compare 1A
.equ	FOC1B		= 2		; 0x04 - Force Output Compare 1B
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

; ----------	Register TCNT1 bits		------------------------
.equ	TCNT1_MASK	= 0xFFFF	;      - Timer/Counter1 bits (16 bits)
.equ	TCNT10		= 0		;          TCNT1 BIT0 position

; ----------	Register OCR1A bits		------------------------
.equ	OCR1A_MASK	= 0xFFFF	;      - Timer/Counter1 Output Compare A bits (16 bits)
.equ	OCR1A0		= 0		;          OCR1A BIT0 position

; ----------	Register OCR1B bits		------------------------
.equ	OCR1B_MASK	= 0xFFFF	;      - Timer/Counter1 Output Compare B bits (16 bits)
.equ	OCR1B0		= 0		;          OCR1B BIT0 position

; ----------	Register ICR1 bits		------------------------
.equ	ICR1_MASK	= 0xFFFF	;      - Timer/Counter1 Input Capture bits (16 bits)
.equ	ICR10		= 0		;          ICR1 BIT0 position



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GICR bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	INT1		= 7		; 0x80 - External Interrupt Request 1 Enable
.equ	INT2		= 5		; 0x20 - External Interrupt Request 2 Enable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register GIFR bits		------------------------
.equ	INTF_MASK	= 0xC0		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 6		;          INTF BIT0 position
.equ	INTF2		= 5		; 0x20 - External Interrupt Flag 2

; ----------	Register MCUCR bits		------------------------
.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 Bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
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

; ----------	Register MCUCSR bits		------------------------
.equ	ISC2		= 6		; 0x40 - Interrupt Sense Control 2



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEAR bits		------------------------
.equ	EEAR_MASK	= 0x01FF	;      - EEPROM Address bits (9 bits)
.equ	EEAR0		= 0		;          EEAR BIT0 position

; ----------	Register EEDR bits		------------------------
.equ	EEDR_MASK	= 0xFF		;      - EEPROM Data bits (8 bits)
.equ	EEDR0		= 0		;          EEDR BIT0 position

; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



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
.equ	SM_MASK		= 0xB0		;      - Sleep Mode Select (3 bits)
.equ	SE		= 6		; 0x40 - Sleep Enable
;.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 Bits (2 bits)
;.equ	ISC10		= 2		;          ISC1 BIT0 position
;.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 Bits (2 bits)
;.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x10		; ADC Noise Reduction (If Available)
;			0x20		; Power Down
;			0x30		; Power Save
;			0x00		; Reserved
;			0x10		; Reserved
;			0x20		; Standby
;			0x30		; Extended Standby
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
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register SFIOR bits		------------------------
.equ	PUD		= 2		; 0x04 - Pull-up Disable
.equ	PSR2		= 1		; 0x02 - Prescaler reset
;.equ	PSR10		= 0		; 0x01 - Prescaler reset



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TIMSK bits		------------------------
.equ	OCIE2		= 7		; 0x80 - Timer/Counter2 Output Compare Match Interrupt Enable
.equ	TOIE2		= 6		; 0x40 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF2		= 7		; 0x80 - Output Compare Flag 2
.equ	TOV2		= 6		; 0x40 - Timer/Counter2 Overflow Flag

; ----------	Register TCCR2 bits		------------------------
.equ	FOC2		= 7		; 0x80 - Force Output Compare
.equ	WGM20		= 6		; 0x40 - Waveform Generation Mode
.equ	COM2_MASK	= 0x30		;      - Compare Output Mode bits (2 bits)
.equ	COM20		= 4		;          COM2 BIT0 position
.equ	WGM21		= 3		; 0x08 - Waveform Generation Mode
.equ	CS2_MASK	= 0x07		;      - Clock Select bits (3 bits)
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

; ----------	Register TCNT2 bits		------------------------
.equ	TCNT2_MASK	= 0xFF		;      - Timer/Counter2 (8 bits)
.equ	TCNT20		= 0		;          TCNT2 BIT0 position

; ----------	Register OCR2 bits		------------------------
.equ	OCR2_MASK	= 0xFF		;      - Timer/Counter2 Output Compare bits (8 bits)
.equ	OCR20		= 0		;          OCR2 BIT0 position

; ----------	Register ASSR bits		------------------------
.equ	AS2		= 3		; 0x08 - Asynchronous Timer/counter2
.equ	TCN2UB		= 2		; 0x04 - Timer/Counter2 Update Busy
.equ	OCR2UB		= 1		; 0x02 - Output Compare Register2 Update Busy
.equ	TCR2UB		= 0		; 0x01 - Timer/counter Control Register2 Update Busy

; ----------	Register SFIOR bits		------------------------
;.equ	PSR2		= 1		; 0x02 - Prescaler Reset Timer/Counter2



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPDR bits		------------------------
.equ	SPDR_MASK	= 0xFF		;      - SPI Data bits (8 bits)
.equ	SPDR0		= 0		;          SPDR BIT0 position

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



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UDR bits		------------------------
.equ	UDR_MASK	= 0xFF		;      - USART I/O Data bits (8 bits)
.equ	UDR0		= 0		;          UDR BIT0 position

; ----------	Register UCSRA bits		------------------------
.equ	RXC		= 7		; 0x80 - USART Receive Complete
.equ	TXC		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE		= 5		; 0x20 - USART Data Register Empty
.equ	FE		= 4		; 0x10 - Framing Error
.equ	DOR		= 3		; 0x08 - Data Overrun
.equ	UPE		= 2		; 0x04 - Parity Error
.equ	U2X		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSRB bits		------------------------
.equ	RXCIE		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN		= 4		; 0x10 - Receiver Enable
.equ	TXEN		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ2		= 2		; 0x04 - Character Size
.equ	RXB8		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB8		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSRC bits		------------------------
.equ	URSEL		= 7		; 0x80 - Register Select
.equ	UMSEL		= 6		; 0x40 - USART Mode Select
.equ	UPM_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM0		= 4		;          UPM BIT0 position
.equ	USBS		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ0		= 1		;          UCSZ BIT0 position
.equ	UCPOL		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
; ::::  UPM	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UBRRL bits		------------------------
.equ	UBRRL_UBRR_MASK	= 0xFF		;      - USART Baud Rate bits (8 bits)
.equ	UBRRL_UBRR0	= 0		;          UBRRL_UBRR BIT0 position

; ----------	Register UBRRH bits		------------------------
;.equ	URSEL		= 7		; 0x80 - Register Select
.equ	UBRRH_UBRR_MASK	= 0x0F		;      - USART Baud Rate bits (4 bits)
.equ	UBRRH_UBRR0	= 0		;          UBRRH_UBRR BIT0 position



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWBR bits		------------------------
.equ	TWBR_MASK	= 0xFF		;      - TWI Bit Rate bits (8 bits)
.equ	TWBR0		= 0		;          TWBR BIT0 position

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

; ----------	Register TWDR bits		------------------------
.equ	TWD_MASK	= 0xFF		;      - TWI Data bits (8 bits)
.equ	TWD0		= 0		;          TWD BIT0 position

; ----------	Register TWAR bits		------------------------
.equ	TWA_MASK	= 0xFE		;      - TWI (Slave) Address register Bits (7 bits)
.equ	TWA0		= 1		;          TWA BIT0 position
.equ	TWGCE		= 0		; 0x01 - TWI General Call Recognition Enable Bit



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
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC Prescaler Select Bits (3 bits)
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

; ----------	Register ADC bits		------------------------
.equ	ADC_MASK	= 0x03FF	;      - ADC Data Bits (10 bits)
.equ	ADC0		= 0		;          ADC BIT0 position
; ::::  ADC	:::: bitfield values
;			0x00		; 2
;			0x01		; 2
;			0x02		; 4
;			0x03		; 8
;			0x04		; 16
;			0x05		; 32
;			0x06		; 64
;			0x07		; 128

; ----------	Register SFIOR bits		------------------------
.equ	ADTS_MASK	= 0xE0		;      - ADC Auto Trigger Sources (3 bits)
.equ	ADTS0		= 5		;          ADTS BIT0 position



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
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDTOE		= 4		; 0x10 - RW
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
; ::::  WAVEFORM_GEN_MODE	:::: values
;			0b00		; Normal
;			0b10		; PWM, Phase Correct
;			0b01		; CTC
;			0b11		; Fast PWM
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



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 21
.equ	INT_VECTORS_SIZE	= 0x2A
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	TIMER2_COMP	; Timer/Counter2 Compare Match
;	4	TIMER2_OVF	; Timer/Counter2 Overflow
;	5	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	6	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	7	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	8	TIMER1_OVF	; Timer/Counter1 Overflow
;	9	TIMER0_OVF	; Timer/Counter0 Overflow
;	10	SPI_STC		; Serial Transfer Complete
;	11	USART_RXC	; USART, Rx Complete
;	12	USART_UDRE	; USART Data Register Empty
;	13	USART_TXC	; USART, Tx Complete
;	14	ADC		; ADC Conversion Complete
;	15	EE_RDY		; EEPROM Ready
;	16	ANA_COMP	; Analog Comparator
;	17	TWI		; 2-wire Serial Interface
;	18	INT2		; External Interrupt Request 2
;	19	TIMER0_COMP	; Timer/Counter0 Compare Match
;	20	SPM_RDY		; Store Program Memory Ready


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	INT_RESET	; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;#		rjmp	INT_INT0	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; TIMER2_COMP	 - Timer/Counter2 Compare Match
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - Serial Transfer Complete
;#		reti			; USART_RXC	 - USART, Rx Complete
;#		reti			; USART_UDRE	 - USART Data Register Empty
;#		reti			; USART_TXC	 - USART, Tx Complete
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	INT_EE_RDY	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; TWI		 - 2-wire Serial Interface
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; TIMER0_COMP	 - Timer/Counter0 Compare Match
;#		reti			; SPM_RDY	 - Store Program Memory Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	INT_RESET:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA16A_INC_ */

; ************************ END OF FILE *********************************

