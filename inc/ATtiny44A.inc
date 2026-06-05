;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny44A
;* Title             : Register/Mask/Bit Definitions for the ATtiny44A
;* File Name         : ATtiny44A.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-05 09:17:50 UTC
;
;***********************************************************************

#ifndef _ATTINY44A_INC_
#define _ATTINY44A_INC_

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
.device	ATtiny44A
.equ	JTAGID		= 0x9207
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x92
.equ	SIGNATURE2	= 0x07


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
.equ	ADDR_FLASH_END			= 0x0FFF
.equ	ADDR_FLASH_SIZE			= 0x1000

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
.equ	ADDR_MAPPED_IO_END		= 0x005F
.equ	ADDR_MAPPED_IO_SIZE		= 0x0040
;   IRAM
.equ	ADDR_IRAM_START			= 0x0060
.equ	ADDR_IRAM_END			= 0x015F
.equ	ADDR_IRAM_SIZE			= 0x0100

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x00FF
.equ	ADDR_EEPROM_SIZE		= 0x0100

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
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming enable

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PB3 as i/o pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=4.3 V

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB2
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x12		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x22		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms; default value
;			0x04		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x14		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x24		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x06		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x16		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms
;			0x26		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32K CK/14 CK + 64 ms
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms




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
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	OCR0B		= 0x3C		; Timer/Counter0 Output Compare Register B
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag register
.equ	TIMSK0		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR0		= 0x38		; Timer/Counter0 Interrupt Flag Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	OCR0A		= 0x36		; Timer/Counter0 Output Compare Register A
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	TCCR0B		= 0x33		; Timer/Counter Control Register B
.equ	TCNT0		= 0x32		; Timer/Counter0
.equ	OSCCAL		= 0x31		; Oscillator Calibration Value
.equ	TCCR0A		= 0x30		; Timer/Counter  Control Register A
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; [___2 addrs___] Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; [___2 addrs___] Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1B		= 0x28		; [___2 addrs___] Timer/Counter1 Output Compare Register B  Bytes
.equ	CLKPR		= 0x26		; Clock Prescale Register
.equ	ICR1		= 0x24		; [___2 addrs___] Timer/Counter1 Input Capture Register  Bytes
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	TCCR1C		= 0x22		; Timer/Counter1 Control Register C
.equ	WDTCSR		= 0x21		; Watchdog Timer Control Register
.equ	PCMSK1		= 0x20		; Pin Change Enable Mask 1
.equ	EEAR		= 0x1E		; [___2 addrs___] EEPROM Address Register  Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Data Register, Port B
.equ	DDRB		= 0x17		; Data Direction Register, Port B
.equ	PINB		= 0x16		; Input Pins, Port B
.equ	GPIOR2		= 0x15		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x14		; General Purpose I/O Register 1
.equ	GPIOR0		= 0x13		; General Purpose I/O Register 0
.equ	PCMSK0		= 0x12		; Pin Change Enable Mask 0
.equ	USIBR		= 0x10		; USI Buffer Register
.equ	USIDR		= 0x0F		; USI Data Register
.equ	USISR		= 0x0E		; USI Status Register
.equ	USICR		= 0x0D		; USI Control Register
.equ	TIMSK1		= 0x0C		; Timer/Counter1 Interrupt Mask Register
.equ	TIFR1		= 0x0B		; Timer/Counter Interrupt Flag register
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	ADMUX		= 0x07		; ADC Multiplexer Selection Register
.equ	ADCSRA		= 0x06		; ADC Control and Status Register A
.equ	ADC		= 0x04		; [___2 addrs___] ADC Data Register  Bytes
.equ	ADCSRB		= 0x03		; ADC Control and Status Register B
.equ	DIDR0		= 0x01
.equ	PRR		= 0x00		; Power Reduction Register
;
; ----------	REGISTERS PAIRS			------------------------
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
;    EEPROM Address Register  Bytes
.equ	EEARH		= 0x1F
.equ	EEARL		= 0x1E
;    ADC Data Register  Bytes
.equ	ADCH		= 0x05
.equ	ADCL		= 0x04


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

; ----------	Register DIDR0 bits		------------------------
.equ	ADC1D		= 1		; 0x02 - ADC 1 Digital input buffer disable
.equ	ADC0D		= 0		; 0x01 - ADC 0 Digital input buffer disable



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	MUX_MASK	= 0x3F		;      - Analog Channel and Gain Selection Bits (6 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; VCC used as analog reference, disconnected from PA0 (AREF)
;			0x40		; External voltage reference at PA0 (AREF) pin, internal reference turned off
;			0x80		; Internal 1.1V voltage reference
;			0xC0		; Reserved

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
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
.equ	BIN		= 7		; 0x80 - Bipolar Input Mode
.equ	ADLAR		= 4		; 0x10 - ADC Left Adjust Result
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



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change of INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE_MASK	= 0x30		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF_MASK	= 0x30		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 4		;          PCIF BIT0 position



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



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Match Output A Mode bits (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Match Output B Mode bits (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode bits (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare B
.equ	WGM02		= 3		; 0x08 - Waveform Generation Mode bit 2
.equ	CS0_MASK	= 0x07		;      - Clock Select bits (3 bits)
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

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/CounterN



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Timer/Counter1 Input Capture Flag
.equ	OCF1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Flag
.equ	OCF1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Flag
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode Bits (2 bits)
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
.equ	FOC1A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare for Channel B



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PRR bits		------------------------
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 2		; 0x04 - Power Reduction Timer/Counter0
.equ	PRUSI		= 1		; 0x02 - Power Reduction USI
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration (8 bits)
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
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x08		; ADC Noise Reduction (If Available)
;			0x10		; Power Down
;			0x18		; Standby

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	CTPB		= 4		; 0x10 - Clear temporary page buffer
.equ	RFLB		= 3		; 0x08 - Read fuse and lock bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 17
.equ	INT_VECTORS_SIZE	= 0x22
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset,Watchdog Reset
;	1	EXT_INT0	; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	WDT		; Watchdog Time-out
;	5	TIM1_CAPT	; Timer/Counter1 Capture Event
;	6	TIM1_COMPA	; Timer/Counter1 Compare Match A
;	7	TIM1_COMPB	; Timer/Counter1 Compare Match B
;	8	TIM1_OVF	; Timer/Counter1 Overflow
;	9	TIM0_COMPA	; Timer/Counter0 Compare Match A
;	10	TIM0_COMPB	; Timer/Counter0 Compare Match B
;	11	TIM0_OVF	; Timer/Counter0 Overflow
;	12	ANA_COMP	; Analog Comparator
;	13	ADC		; ADC Conversion Complete
;	14	EE_RDY		; EEPROM Ready
;	15	USI_STR		; USI START
;	16	USI_OVF		; USI Overflow



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny44A.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  & ~(0 <<SELFPRGEN)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BODLEVEL	= 0x07	; Brown-out detection disabled
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x22	; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms; default value
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
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
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset,Watchdog Reset
;#		reti			; EXT_INT0	 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; WDT		 - Watchdog Time-out
;#		reti			; TIM1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIM1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIM1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIM1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIM0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIM0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; USI_STR	 - USI START
;#		reti			; USI_OVF	 - USI Overflow
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY44A_INC_ */

; ************************ END OF FILE *********************************

