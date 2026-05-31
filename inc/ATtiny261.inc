;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny261
;* Title             : Register/Mask/Bit Definitions for the ATtiny261
;* File Name         : ATtiny261.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-05-31 13:22:18 UTC
;
;***********************************************************************

#ifndef _ATTINY261_INC_
#define _ATTINY261_INC_

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
.device	ATtiny261
.equ	JTAGID		= 0x910C
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x91
.equ	SIGNATURE2	= 0x0c


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
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PB7 as i/o pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x03		; Brown-out detection at VCC=2.3 V
;			0x02		; Brown-out detection at VCC=2.2 V
;			0x01		; Brown-out detection at VCC=1.9 V
;			0x00		; Brown-out detection at VCC=2.0 V
;			0x07		; Brown-out detection disabled

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB5
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x20		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x01		; PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 8 ms
;			0x11		; PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 8 ms
;			0x21		; PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 68 ms
;			0x31		; PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 68 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x12		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x22		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x03		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x13		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x23		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x04		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK 4 ms
;			0x14		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK + 64 ms
;			0x24		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32 CK + 64 ms
;			0x08		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x18		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x28		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x38		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x09		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0B		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0D		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0E		; Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1E		; Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2E		; Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3E		; Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0F		; Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
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
.equ	SPL		= 0x3D		; Stack Pointer Low Byte
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter0 Interrupt Flag register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	PRR		= 0x36		; Power Reduction Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	TCCR0B		= 0x33		; Timer/Counter Control Register B
.equ	TCNT0L		= 0x32		; Timer/Counter0 Low
.equ	OSCCAL		= 0x31		; Oscillator Calibration Register
.equ	TCCR1A		= 0x30		; Timer/Counter Control Register A
.equ	TCCR1B		= 0x2F		; Timer/Counter Control Register B
.equ	TCNT1		= 0x2E		; Timer/Counter Register
.equ	OCR1A		= 0x2D		; Output Compare Register
.equ	OCR1B		= 0x2C		; Output Compare Register
.equ	OCR1C		= 0x2B		; Output compare register
.equ	OCR1D		= 0x2A		; Output compare register
.equ	PLLCSR		= 0x29		; PLL Control and status register
.equ	CLKPR		= 0x28		; Clock Prescale Register
.equ	TCCR1C		= 0x27		; Timer/Counter Control Register C
.equ	TCCR1D		= 0x26		; Timer/Counter Control Register D
.equ	TC1H		= 0x25		; Timer/Counter 1 Register High
.equ	DT1		= 0x24		; Timer/Counter 1 Dead Time Value
.equ	PCMSK0		= 0x23		; Pin Change Enable Mask 0
.equ	PCMSK1		= 0x22		; Pin Change Enable Mask 1
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	DWDR		= 0x20		; debugWire data register
.equ	EEAR		= 0x1E		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Port B Data Register
.equ	DDRB		= 0x17		; Port B Data Direction Register
.equ	PINB		= 0x16		; Port B Input Pins
.equ	TCCR0A		= 0x15		; Timer/Counter  Control Register A
.equ	TCNT0H		= 0x14		; Timer/Counter0 High
.equ	OCR0A		= 0x13		; Timer/Counter0 Output Compare Register
.equ	OCR0B		= 0x12		; Timer/Counter0 Output Compare Register
.equ	USIPP		= 0x11		; USI Pin Position
.equ	USIBR		= 0x10		; USI Buffer Register
.equ	USIDR		= 0x0F		; USI Data Register
.equ	USISR		= 0x0E		; USI Status Register
.equ	USICR		= 0x0D		; USI Control Register
.equ	GPIOR2		= 0x0C		; General Purpose IO register 2
.equ	GPIOR1		= 0x0B		; General Purpose register 1
.equ	GPIOR0		= 0x0A		; General purpose register 0
.equ	ACSRB		= 0x09		; Analog Comparator Control And Status Register B
.equ	ACSRA		= 0x08		; Analog Comparator Control And Status Register A
.equ	ADMUX		= 0x07		; The ADC multiplexer Selection Register
.equ	ADCSRA		= 0x06		; The ADC Control and Status register
.equ	ADC		= 0x04		; ADC Data Register  Bytes
.equ	ADCSRB		= 0x03		; ADC Control and Status Register B
.equ	DIDR1		= 0x02		; Digital Input Disable Register 1
.equ	DIDR0		= 0x01		; Digital Input Disable Register 0
.equ	TCCR1E		= 0x00		; Timer/Counter1 Control Register E


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
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

; ----------	Register ADCSRB bits		------------------------
.equ	BIN		= 7		; 0x80 - Bipolar Input Mode
.equ	GSEL		= 6		; 0x40 - Gain Select
.equ	IPR		= 5		; 0x20 - Input Polarity Mode
.equ	REFS2		= 4		; 0x10 - 
.equ	MUX5		= 3		; 0x08 - 
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Sources (3 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position
; ::::  ADTS	:::: bitfield values
;			0x00		; Free Running mode
;			0x01		; Analog Comparator
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter0 Compare Match A
;			0x04		; Timer/Counter0 Overflow
;			0x05		; Timer/Counter1 Compare Match B
;			0x06		; Timer/Counter1 Overflow
;			0x07		; Watchdog Interrupt Request

; ----------	Register DIDR1 bits		------------------------
.equ	ADC10D		= 7		; 0x80 - ADC10 Digital input Disable
.equ	ADC9D		= 6		; 0x40 - ADC9 Digital input Disable
.equ	ADC8D		= 5		; 0x20 - ADC8 Digital input Disable
.equ	ADC7D		= 4		; 0x10 - ADC7 Digital input Disable

; ----------	Register DIDR0 bits		------------------------
.equ	ADC6D		= 7		; 0x80 - ADC6 Digital input Disable
.equ	ADC5D		= 6		; 0x40 - ADC5 Digital input Disable
.equ	ADC4D		= 5		; 0x20 - ADC4 Digital input Disable
.equ	ADC3D		= 4		; 0x10 - ADC3 Digital input Disable
.equ	AREFD		= 3		; 0x08 - AREF Digital Input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSRB bits		------------------------
.equ	HSEL		= 7		; 0x80 - Hysteresis Select
.equ	HLEV		= 6		; 0x40 - Hysteresis Level
.equ	ACM_MASK	= 0x07		;      - Analog Comparator Multiplexer (3 bits)
.equ	ACM0		= 0		;          ACM BIT0 position

; ----------	Register ACSRA bits		------------------------
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
; ----------	Register WDTCR bits		------------------------
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
; ----------	Register TIMSK bits		------------------------
.equ	OCIE0A		= 4		; 0x10 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B		= 3		; 0x08 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable
.equ	TICIE0		= 0		; 0x01 - Timer/Counter0 Input Capture Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF0A		= 4		; 0x10 - Timer/Counter0 Output Compare Flag 0A
.equ	OCF0B		= 3		; 0x08 - Timer/Counter0 Output Compare Flag 0B
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag
.equ	ICF0		= 0		; 0x01 - Timer/Counter0 Input Capture Flag

; ----------	Register TCCR0A bits		------------------------
.equ	TCW0		= 7		; 0x80 - Timer/Counter 0 Width
.equ	ICEN0		= 6		; 0x40 - Input Capture Mode Enable
.equ	ICNC0		= 5		; 0x20 - Input Capture Noise Canceler
.equ	ICES0		= 4		; 0x10 - Input Capture Edge Select
.equ	ACIC0		= 3		; 0x08 - Analog Comparator Input Capture Enable
.equ	WGM00		= 0		; 0x01 - Waveform Generation Mode

; ----------	Register TCCR0B bits		------------------------
.equ	TSM		= 4		; 0x10 - Timer/Counter Synchronization Mode
.equ	PSR0		= 3		; 0x08 - Timer/Counter 0 Prescaler Reset
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

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode, Bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode, Bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	FOC1A		= 3		; 0x08 - Force Output Compare Match 1A
.equ	FOC1B		= 2		; 0x04 - Force Output Compare Match 1B
.equ	PWM1A		= 1		; 0x02 - Pulse Width Modulator Enable
.equ	PWM1B		= 0		; 0x01 - Pulse Width Modulator Enable

; ----------	Register TCCR1B bits		------------------------
.equ	PWM1X		= 7		; 0x80 - PWM Inversion Mode
.equ	PSR1		= 6		; 0x40 - Timer/Counter 1 Prescaler reset
.equ	DTPS1_MASK	= 0x30		;      - Dead Time Prescaler (2 bits)
.equ	DTPS10		= 4		;          DTPS1 BIT0 position
.equ	CS1_MASK	= 0x0F		;      - Clock Select Bits (4 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  DTPS1	:::: bitfield values
;			0x00		; 1x
;			0x10		; 2x
;			0x20		; 4x
;			0x30		; 8x
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

; ----------	Register TCCR1C bits		------------------------
.equ	COM1A1S		= 7		; 0x80 - COM1A1 Shadow Bit
.equ	COM1A0S		= 6		; 0x40 - COM1A0 Shadow Bit
.equ	COM1B1S		= 5		; 0x20 - COM1B1 Shadow Bit
.equ	COM1B0S		= 4		; 0x10 - COM1B0 Shadow Bit
.equ	COM1D_MASK	= 0x0C		;      - Comparator D output mode (2 bits)
.equ	COM1D0		= 2		;          COM1D BIT0 position
.equ	FOC1D		= 1		; 0x02 - Force Output Compare Match 1D
.equ	PWM1D		= 0		; 0x01 - Pulse Width Modulator D Enable

; ----------	Register TCCR1D bits		------------------------
.equ	FPIE1		= 7		; 0x80 - Fault Protection Interrupt Enable
.equ	FPEN1		= 6		; 0x40 - Fault Protection Mode Enable
.equ	FPNC1		= 5		; 0x20 - Fault Protection Noise Canceler
.equ	FPES1		= 4		; 0x10 - Fault Protection Edge Select
.equ	FPAC1		= 3		; 0x08 - Fault Protection Analog Comparator Enable
.equ	FPF1		= 2		; 0x04 - Fault Protection Interrupt Flag
.equ	WGM1_MASK	= 0x03		;      - Waveform Generation Mode Bit (2 bits)
.equ	WGM10		= 0		;          WGM1 BIT0 position
; ::::  WGM1	:::: bitfield values
;			0x00		; Fast PWM (NB! PWMx must be set!)
;			0x01		; Phase and Frequency Correct PWM
;			0x02		; PWM6/Single-slope
;			0x03		; PWM6/Dual-slope

; ----------	Register TCCR1E bits		------------------------
.equ	OC1OE_MASK	= 0x3F		;      - Output Compare Override Enable Bits (6 bits)
.equ	OC1OE0		= 0		;          OC1OE BIT0 position

; ----------	Register TIMSK bits		------------------------
.equ	OCIE1D		= 7		; 0x80 - OCIE1D: Timer/Counter1 Output Compare Interrupt Enable
.equ	OCIE1A		= 6		; 0x40 - OCIE1A: Timer/Counter1 Output Compare Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable
.equ	TOIE1		= 2		; 0x04 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF1D		= 7		; 0x80 - Timer/Counter1 Output Compare Flag 1D
.equ	OCF1A		= 6		; 0x40 - Timer/Counter1 Output Compare Flag 1A
.equ	OCF1B		= 5		; 0x20 - Timer/Counter1 Output Compare Flag 1B
.equ	TOV1		= 2		; 0x04 - Timer/Counter1 Overflow Flag

; ----------	Register DT1 bits		------------------------
.equ	DT1H_MASK	= 0xF0		;      -  (4 bits)
.equ	DT1H0		= 4		;          DT1H BIT0 position
.equ	DT1L_MASK	= 0x0F		;      -  (4 bits)
.equ	DT1L0		= 0		;          DT1L BIT0 position



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	CTPB		= 4		; 0x10 - Clear temporary page buffer
.equ	RFLB		= 3		; 0x08 - Read fuse and lock bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	ISC01		= 1		; 0x02 - Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register GIMSK bits		------------------------
.equ	INT_MASK	= 0xC0		;      - External Interrupt Request 1 Enable (2 bits)
.equ	INT0		= 6		;          INT BIT0 position
.equ	PCIE_MASK	= 0x30		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	INTF_MASK	= 0xC0		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 6		;          INTF BIT0 position
.equ	PCIF		= 5		; 0x20 - Pin Change Interrupt Flag



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

; ----------	Register PRR bits		------------------------
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 2		; 0x04 - Power Reduction Timer/Counter0
.equ	PRUSI		= 1		; 0x02 - Power Reduction USI
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register MCUCR bits		------------------------
.equ	PUD		= 6		; 0x40 - Pull-up Disable
.equ	SE		= 5		; 0x20 - Sleep Enable
.equ	SM_MASK		= 0x18		;      - Sleep Mode Select Bits (2 bits)
.equ	SM0		= 3		;          SM BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
;.equ	ISC00		= 0		;          ISC0 BIT0 position
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

; ----------	Register PLLCSR bits		------------------------
.equ	LSM		= 7		; 0x80 - Low speed mode
.equ	PCKE		= 2		; 0x04 - PCK Enable
.equ	PLLE		= 1		; 0x02 - PLL Enable
.equ	PLOCK		= 0		; 0x01 - PLL Lock detector




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  INTERRUPT_SENSE_CONTROL	:::: values
;			0b00		; Low Level of INTX
;			0b01		; Any Logical Change of INTX
;			0b10		; Falling Edge of INTX
;			0b11		; Rising Edge of INTX



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 19
.equ	INT_VECTORS_SIZE	= 0x26
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	PCINT		; Pin Change Interrupt
;	3	TIMER1_COMPA	; Timer/Counter1 Compare Match 1A
;	4	TIMER1_COMPB	; Timer/Counter1 Compare Match 1B
;	5	TIMER1_OVF	; Timer/Counter1 Overflow
;	6	TIMER0_OVF	; Timer/Counter0 Overflow
;	7	USI_START	; USI Start
;	8	USI_OVF		; USI Overflow
;	9	EE_RDY		; EEPROM Ready
;	10	ANA_COMP	; Analog Comparator
;	11	ADC		; ADC Conversion Complete
;	12	WDT		; Watchdog Time-Out
;	13	INT1		; External Interrupt 1
;	14	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	15	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	16	TIMER0_CAPT	; ADC Conversion Complete
;	17	TIMER1_COMPD	; Timer/Counter1 Compare Match D
;	18	FAULT_PROTECTION; Timer/Counter1 Fault Protection


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
;#		reti			; PCINT		 - Pin Change Interrupt
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match 1A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match 1B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; USI_START	 - USI Start
;#		reti			; USI_OVF	 - USI Overflow
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		reti			; WDT		 - Watchdog Time-Out
;#		reti			; INT1		 - External Interrupt 1
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_CAPT	 - ADC Conversion Complete
;#		reti			; TIMER1_COMPD	 - Timer/Counter1 Compare Match D
;#		reti			; FAULT_PROTECTION - Timer/Counter1 Fault Protection
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SPL, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY261_INC_ */

; ************************ END OF FILE *********************************

