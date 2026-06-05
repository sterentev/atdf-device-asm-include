;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny12
;* Title             : Register/Mask/Bit Definitions for the ATtiny12
;* File Name         : ATtiny12.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-05 09:17:48 UTC
;
;***********************************************************************

#ifndef _ATTINY12_INC_
#define _ATTINY12_INC_

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
.device	ATtiny12
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x90
.equ	SIGNATURE2	= 0x05


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
.equ	CKSEL_MASK	= 0x0F		;      - Clock Select (4 bits)
.equ	CKSEL0		= 0		;          CKSEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x80		; Brown-out detection at VCC=1.8 V
;			0x00		; Brown-out detection at VCC=2.7 V
; ::::  CKSEL	:::: bitfield values
;			0x0F		; External Crystal / Ceramic Resonator
;			0x0E		; External Crystal / Ceramic Resonator
;			0x0D		; External Crystal / Ceramic Resonator
;			0x0C		; External Crystal / Ceramic Resonator
;			0x0B		; External Crystal / Ceramic Resonator
;			0x0A		; External Crystal / Ceramic Resonator
;			0x09		; External Low-Frequency Crystal
;			0x08		; External Low-Frequency Crystal
;			0x07		; External RC Oscillator
;			0x06		; External RC Oscillator
;			0x05		; External RC Oscillator
;			0x04		; Internal RC Oscillator
;			0x03		; Internal RC Oscillator
;			0x02		; Internal RC Oscillator
;			0x01		; External Clock
;			0x00		; External Clock




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
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTB		= 0x18		; Data Register, Port B
.equ	DDRB		= 0x17		; Data Direction Register, Port B
.equ	PINB		= 0x16		; Input Pins, Port B
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register


; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	AINBG		= 6		; 0x40 - Analog Comparator Bandgap Select
.equ	ACO		= 5		; 0x20 - Analog Comparator Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge



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
.equ	SM		= 4		; 0x10 - Sleep Mode
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x10		; Power Down
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
.equ	INT_VECTORS_NUM		= 6
.equ	INT_VECTORS_SIZE	= 0x0C
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	IO_PINS		; External Interrupt Request 0
;	3	TIMER0_OVF	; Timer/Counter0 Overflow
;	4	EE_RDY		; EEPROM Ready
;	5	ANA_COMP	; Analog Comparator



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny12.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	CKSEL		= 0x02	; Internal RC Oscillator
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<BODLEVEL) \
;#				  & ~(0 <<BODEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<RSTDISBL) \
;#				  &  (~CKSEL_MASK | CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x06	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
;#	.message "===================="
;#	.message "-----  Fuses  ------"
;#	.message "LOW             ", FUSES_LOW
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt 0
;#		reti			; IO_PINS	 - External Interrupt Request 0
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY12_INC_ */

; ************************ END OF FILE *********************************

