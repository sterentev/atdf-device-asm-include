;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny26
;* Title             : Register/Mask/Bit Definitions for the ATtiny26
;* File Name         : ATtiny26.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-01 12:44:39 UTC
;
;***********************************************************************

#ifndef _ATTINY26_INC_
#define _ATTINY26_INC_

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
.device	ATtiny26
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x91
.equ	SIGNATURE2	= 0x09


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
.equ	ADDR_FLASH_END			= 0x07FF
.equ	ADDR_FLASH_SIZE			= 0x0800

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
.equ	ADDR_IRAM_END			= 0x00DF
.equ	ADDR_IRAM_SIZE			= 0x0080

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x007F
.equ	ADDR_EEPROM_SIZE		= 0x0080

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
.equ	RSTDISBL	= 4		; 0x10 - Reset Disabled (Enable PB7 as i/o pin)
.equ	SPIEN		= 3		; 0x08 - Serial program downloading (SPI) enabled
.equ	EESAVE		= 2		; 0x04 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL	= 1		; 0x02 - Brownout detector trigger level
.equ	BODEN		= 0		; 0x01 - Brown-out detection enabled
; ::::  BODLEVEL	:::: bitfield values
;			0x00		; Brown-out detection at VCC=4.0 V
;			0x02		; Brown-out detection at VCC=2.7 V

; ----------	Register LOW bits		------------------------
.equ	CKOPT		= 6		; 0x40 - CKOPT fuse (operation dependent of CKSEL fuses)
.equ	PLLCK_SUT_CKSEL_MASK= 0xBF		;      - Select Clock Source (7 bits)
; ::::  PLLCK_SUT_CKSEL	:::: bitfield values
;			0x01		; PLL Clock; Start-up time: 1K CK + 0 ms
;			0x11		; PLL Clock; Start-up time: 1K CK + 4 ms
;			0x21		; PLL Clock; Start-up time: 1K CK + 64 ms
;			0x31		; PLL Clock; Start-up time: 16K CK + 64 ms
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
; ::::  LB	:::: bitfield values
;			0x00		; Further programming and verification disabled
;			0x02		; Further programming disabled
;			0x03		; No memory lock features enabled




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	TCCR0		= 0x33		; Timer/Counter0 Control Register
.equ	TCNT0		= 0x32		; Timer Counter 0
.equ	OSCCAL		= 0x31		; Status Register
.equ	TCCR1A		= 0x30		; Timer/Counter Control Register A
.equ	TCCR1B		= 0x2F		; Timer/Counter Control Register B
.equ	TCNT1		= 0x2E		; Timer/Counter Register
.equ	OCR1A		= 0x2D		; Output Compare Register
.equ	OCR1B		= 0x2C		; Output Compare Register
.equ	OCR1C		= 0x2B		; Output Compare Register
.equ	PLLCSR		= 0x29		; PLL Control and Status Register
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Port B Data Register
.equ	DDRB		= 0x17		; Port B Data Direction Register
.equ	PINB		= 0x16		; Port B Input Pins
.equ	USIDR		= 0x0F		; USI Data Register
.equ	USISR		= 0x0E		; USI Status Register
.equ	USICR		= 0x0D		; USI Control Register
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	ADMUX		= 0x07		; The ADC multiplexer Selection Register
.equ	ADCSR		= 0x06		; The ADC Control and Status register
.equ	ADC		= 0x04		; ADC Data Register  Bytes


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AVCC
;			0x40		; AREF
;			0x80		; Internal Voltage Reference
;			0xC0		; Internal Voltage Reference With External Capacitor at AREF Pin.

; ----------	Register ADCSR bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADFR		= 5		; 0x20 - ADC  Free Running Select
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



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACBG		= 6		; 0x40 - Analog Comparator Bandgap Select
.equ	ACO		= 5		; 0x20 - Analog Compare Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACME		= 2		; 0x04 - Analog Comparator Multiplexer Enable
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge



; ====	USI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register USISR bits		------------------------
.equ	USISIF		= 7		; 0x80 - Start Condition Interrupt Flag
.equ	USIOIF		= 6		; 0x40 - Counter Overflow Interrupt Flag
.equ	USIPF		= 5		; 0x20 - Stop Condition Flag
.equ	USIDC		= 4		; 0x10 - Data Output Collision
.equ	USICNT_MASK	= 0x0F		;      - USI Counter Value Bits (4 bits)
.equ	USICNT0		= 0		;          USICNT BIT0 position

; ----------	Register USICR bits		------------------------
.equ	USISIE		= 7		; 0x80 - Start Condition Interrupt Enable
.equ	USIOIE		= 6		; 0x40 - Counter Overflow Interrupt Enable
.equ	USIWM_MASK	= 0x30		;      - USI Wire Mode Bits (2 bits)
.equ	USIWM0		= 4		;          USIWM BIT0 position
.equ	USICS_MASK	= 0x0C		;      - USI Clock Source Select Bits (2 bits)
.equ	USICS0		= 2		;          USICS BIT0 position
.equ	USICLK		= 1		; 0x02 - Clock Strobe
.equ	USITC		= 0		; 0x01 - Toggle Clock Port Pin
; ::::  USIWM	:::: bitfield values
;			0x00		; Normal Operation
;			0x10		; Three-Wire Mode
;			0x20		; Two-Wire Mode
;			0x30		; Two-Wire Mode Held Low



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



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
.equ	PUD		= 6		; 0x40 - Pull-up Disable
.equ	SE		= 5		; 0x20 - Sleep Enable
.equ	SM_MASK		= 0x18		;      - Sleep Mode Select Bits (2 bits)
.equ	SM0		= 3		;          SM BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x08		; ADC Noise Reduction (If Available)
;			0x10		; Power Down
;			0x18		; Standby
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change in INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-On Reset Flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0 bits		------------------------
.equ	PSR0		= 3		; 0x08 - Prescaler Reset Timer/Counter0
.equ	CS0_MASK	= 0x07		;      - Clock Select0 bits (3 bits)
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

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Comparator A Output Mode Bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Comparator B Output Mode Bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	FOC1A		= 3		; 0x08 - Force Output Compare Match 1A
.equ	FOC1B		= 2		; 0x04 - Force Output Compare Match 1B
.equ	PWM1A		= 1		; 0x02 - Pulse Width Modulator A Enable
.equ	PWM1B		= 0		; 0x01 - Pulse Width Modulator B Enable
; ::::  COM1A	:::: bitfield values
;			0x00		; Disconnected from OCn/PWMn
;			0x40		; Toggle OCn/PWMn output line
;			0x80		; Clear OCn/PWMn output line
;			0xC0		; set OCn/PWMn output line
; ::::  COM1B	:::: bitfield values
;			0x00		; Disconnected from OCn/PWMn
;			0x10		; Toggle OCn/PWMn output line
;			0x20		; Clear OCn/PWMn output line
;			0x30		; set OCn/PWMn output line

; ----------	Register TCCR1B bits		------------------------
.equ	CTC1		= 7		; 0x80 - Clear Timer/Counter on Compare Match
.equ	PSR1		= 6		; 0x40 - Prescaler Reset Timer/Counter1
.equ	CS1_MASK	= 0x0F		;      - Clock Select Bits (4 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  CS1	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/2
;			0x03		; Running, CLK/4
;			0x04		; Running, CLK/8
;			0x05		; Running, CLK/16
;			0x06		; Running, CLK/32
;			0x07		; Running, CLK/64
;			0x08		; Running, CLK/128
;			0x09		; Running, CLK/256
;			0x0A		; Running, CLK/512
;			0x0B		; Running, CLK/1024
;			0x0C		; Running, CLK/2048
;			0x0D		; Running, CLK/4096
;			0x0E		; Running, CLK/8192
;			0x0F		; Running, CLK/16384

; ----------	Register TIMSK bits		------------------------
.equ	OCIE1A		= 6		; 0x40 - Timer/Counter1 Output Compare Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - Timer/Counter1 Output Compare Interrupt Enable
.equ	TOIE1		= 2		; 0x04 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF1A		= 6		; 0x40 - Timer/Counter1 Output Compare Flag 1A
.equ	OCF1B		= 5		; 0x20 - Timer/Counter1 Output Compare Flag 1B
.equ	TOV1		= 2		; 0x04 - Timer/Counter1 Overflow Flag

; ----------	Register PLLCSR bits		------------------------
.equ	PCKE		= 2		; 0x04 - PCK Enable
.equ	PLLE		= 1		; 0x02 - PLL Enable
.equ	PLOCK		= 0		; 0x01 - PLL Lock Detector



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE_MASK	= 0x30		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF		= 5		; 0x20 - Pin Change Interrupt Flag




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 12
.equ	INT_VECTORS_SIZE	= 0x18
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	IO_PINS		; External Interrupt Request 0
;	3	TIMER1_CMPA	; Timer/Counter1 Compare Match 1A
;	4	TIMER1_CMPB	; Timer/Counter1 Compare Match 1B
;	5	TIMER1_OVF1	; Timer/Counter1 Overflow
;	6	TIMER0_OVF0	; Timer/Counter0 Overflow
;	7	USI_STRT	; USI Start
;	8	USI_OVF		; USI Overflow
;	9	EE_RDY		; EEPROM Ready
;	10	ANA_COMP	; Analog Comparator
;	11	ADC		; ADC Conversion Complete



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny26.inc"
;#	
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(0 <<BODLEVEL) \
;#				  & ~(0 <<BODEN)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	PLLCK_SUT_CKSEL	= 
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<CKOPT) \
;#				  &  (~PLLCK_SUT_CKSEL_MASK | PLLCK_SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
;#	.message "====================="
;#	.message "=====  Fuses  ======="
;#	.message "HIGH		", FUSES_HIGH
;#	.message "LOW		", FUSES_LOW
;#	.message "===== Lockbits ======"
;#	.message " LOCKBIT	", LOCKBITS_LOCKBIT
;#	.message "====================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt 0
;#		reti			; IO_PINS	 - External Interrupt Request 0
;#		reti			; TIMER1_CMPA	 - Timer/Counter1 Compare Match 1A
;#		reti			; TIMER1_CMPB	 - Timer/Counter1 Compare Match 1B
;#		reti			; TIMER1_OVF1	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF0	 - Timer/Counter0 Overflow
;#		reti			; USI_STRT	 - USI Start
;#		reti			; USI_OVF	 - USI Overflow
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY26_INC_ */

; ************************ END OF FILE *********************************

