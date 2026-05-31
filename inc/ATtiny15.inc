;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny15
;* Title             : Register/Mask/Bit Definitions for the ATtiny15
;* File Name         : ATtiny15.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-05-31 13:22:18 UTC
;
;***********************************************************************

#ifndef _ATTINY15_INC_
#define _ATTINY15_INC_

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
.device	ATtiny15
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x90
.equ	SIGNATURE2	= 0x06


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
.equ	ADDR_FLASH_END			= 0x03FF
.equ	ADDR_FLASH_SIZE			= 0x0400

; ----------	SIGNATURES ADDRESS SPACE	------------------------
;   SIGNATURES
.equ	ADDR_SIGNATURES_START		= 0x0000
.equ	ADDR_SIGNATURES_END		= 0x0002
.equ	ADDR_SIGNATURES_SIZE		= 0x0003

; ----------	FUSES ADDRESS SPACE		------------------------
;   FUSES
.equ	ADDR_FUSES_START		= 0x0000
.equ	ADDR_FUSES_END			= 0x0000
.equ	ADDR_FUSES_SIZE			= 0x0001

; ----------	LOCKBITS ADDRESS SPACE		------------------------
;   LOCKBITS
.equ	ADDR_LOCKBITS_START		= 0x0000
.equ	ADDR_LOCKBITS_END		= 0x0000
.equ	ADDR_LOCKBITS_SIZE		= 0x0001

; ----------	DATA ADDRESS SPACE		------------------------
;   IO
.equ	ADDR_IO_START			= 0x0000
.equ	ADDR_IO_END			= 0x003F
.equ	ADDR_IO_SIZE			= 0x0040

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x003F
.equ	ADDR_EEPROM_SIZE		= 0x0040

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0000
.equ	ADDR_OSCCAL_SIZE		= 0x0001




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LOW bits		------------------------
.equ	BODLEVEL	= 7		; 0x80 - Brown-out Detection Level
.equ	BODEN		= 6		; 0x40 - Brown-out detection enabled
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	RSTDISBL	= 4		; 0x10 - External reset function of PB5 disabled
.equ	CKSEL_MASK	= 0x03		;      - Clock Select (2 bits)
.equ	CKSEL0		= 0		;          CKSEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x80		; Brown-out detection at VCC=2.7 V
;			0x00		; Brown-out detection at VCC=4.0 V
; ::::  CKSEL	:::: bitfield values
;			0x03		; Very quickly rising power
;			0x02		; Quickly rising power
;			0x01		; Slowly rising power
;			0x00		; Slowly rising power




; **********************************************************************
; ***************	LOCKBITS REGISTERS	************************
; **********************************************************************
;
.equ	LOCKBIT		= 0x00


; ====	LOCKBIT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LOCKBIT bits		------------------------
.equ	LB_MASK		= 0x06		;      - Memory Lock (2 bits)
.equ	LB0		= 1		;          LB BIT0 position
; ::::  LB	:::: bitfield values
;			0x00		; Further programming and verification disabled
;			0x02		; Further programming disabled
;			0x06		; No memory lock features enabled




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	SREG		= 0x3F		; Status Register
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	TCCR0		= 0x33		; Timer/Counter0 Control Register
.equ	TCNT0		= 0x32		; Timer Counter 0
.equ	OSCCAL		= 0x31		; Status Register
.equ	TCCR1		= 0x30		; Timer/Counter Control Register
.equ	TCNT1		= 0x2F		; Timer/Counter Register
.equ	OCR1A		= 0x2E		; Output Compare Register
.equ	OCR1B		= 0x2D		; Output Compare Register
.equ	SFIOR		= 0x2C		; Special Function IO Register
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTB		= 0x18		; Data Register, Port B
.equ	DDRB		= 0x17		; Data Direction Register, Port B
.equ	PINB		= 0x16		; Input Pins, Port B
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
.equ	MUX_MASK	= 0x07		;      - Analog Channel and Gain Selection Bits (3 bits)
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
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0 bits		------------------------
.equ	CS02		= 2		; 0x04 - Clock Select0 bit 2
.equ	CS01		= 1		; 0x02 - Clock Select0 bit 1
.equ	CS00		= 0		; 0x01 - Clock Select0 bit 0
; ::::  CS02	>>>> This is a part of CLK_SEL_3BIT_EXT enum (see complete values list below)

; ----------	Register TCCR1 bits		------------------------
.equ	CTC1		= 7		; 0x80 - Clear Timer/Counter on Compare Match
.equ	PWM1		= 6		; 0x40 - Pulse Width Modulator Enable
.equ	COM1A_MASK	= 0x30		;      - Compare Output Mode, Bits (2 bits)
.equ	COM1A0		= 4		;          COM1A BIT0 position
.equ	CS1_MASK	= 0x0F		;      - Clock Select Bits (4 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  COM1A	:::: bitfield values
;			0x00		; Disconnected from OCn/PWMn
;			0x10		; Toggle OCn/PWMn output line
;			0x20		; Clear OCn/PWMn output line
;			0x30		; set OCn/PWMn output line
; ::::  CS1	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, CLK*16
;			0x02		; Running, CLK*8
;			0x03		; Running, CLK*4
;			0x04		; Running, CLK*2
;			0x05		; Running, No Prescaling
;			0x06		; Running, CLK/2
;			0x07		; Running, CLK/4
;			0x08		; Running, CLK/8
;			0x09		; Running, CLK/16
;			0x0A		; Running, CLK/32
;			0x0B		; Running, CLK/64
;			0x0C		; Running, CLK/128
;			0x0D		; Running, CLK/256
;			0x0E		; Running, CLK/512
;			0x0F		; Running, CLK/1024

; ----------	Register TIMSK bits		------------------------
.equ	OCIE1A		= 6		; 0x40 - OCIE1A: Timer/Counter1 Output Compare Interrupt Enable
.equ	TOIE1		= 2		; 0x04 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF1A		= 6		; 0x40 - Timer/Counter1 Output Compare Flag 1A
.equ	TOV1		= 2		; 0x04 - Timer/Counter1 Overflow Flag

; ----------	Register SFIOR bits		------------------------
.equ	FOC1A		= 2		; 0x04 - Force Output Compare 1A
.equ	PSR1		= 1		; 0x02 - Prescaler Reset Timer/Counter1
.equ	PSR0		= 0		; 0x01 - Prescaler Reset Timer/Counter0



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
;			0x18		; Reserved
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



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE		= 5		; 0x20 - Pin Change Interrupt Enable

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF		= 5		; 0x20 - Pin Change Interrupt Flag




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  CLK_SEL_3BIT_EXT	:::: values
;			0b000		; No Clock Source (Stopped)
;			0b001		; Running, No Prescaling
;			0b010		; Running, CLK/8
;			0b011		; Running, CLK/64
;			0b100		; Running, CLK/256
;			0b101		; Running, CLK/1024
;			0b110		; Running, ExtClk Tn Falling Edge
;			0b111		; Running, ExtClk Tn Rising Edge



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 9
.equ	INT_VECTORS_SIZE	= 0x12
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	IO_PINS		; External Interrupt Request 0
;	3	TIMER1_COMP	; Timer/Counter1 Compare Match
;	4	TIMER1_OVF	; Timer/Counter1 Overflow
;	5	TIMER0_OVF	; Timer/Counter0 Overflow
;	6	EE_RDY		; EEPROM Ready
;	7	ANA_COMP	; Analog Comparator
;	8	ADC		; ADC Conversion Ready


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt 0
;#		reti			; IO_PINS	 - External Interrupt Request 0
;#		reti			; TIMER1_COMP	 - Timer/Counter1 Compare Match
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY15_INC_ */

; ************************ END OF FILE *********************************

