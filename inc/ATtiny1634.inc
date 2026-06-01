;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny1634
;* Title             : Register/Mask/Bit Definitions for the ATtiny1634
;* File Name         : ATtiny1634.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-01 14:52:47 UTC
;
;***********************************************************************

#ifndef _ATTINY1634_INC_
#define _ATTINY1634_INC_

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
.device	ATtiny1634
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x12
.equ	JTAGID		= 0x9412


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
.equ	ADDR_EEPROM_END			= 0x00FF
.equ	ADDR_EEPROM_SIZE		= 0x0100




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
.equ	BODPD_MASK	= 0x18		;      - BOD mode of operation when the device is in sleep mode (2 bits)
.equ	BODPD0		= 3		;          BODPD BIT0 position
.equ	BODACT_MASK	= 0x06		;      - BOD mode of operation when the device is active or idle (2 bits)
.equ	BODACT0		= 1		;          BODACT BIT0 position
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming enable
; ::::  BODPD	:::: bitfield values
;			0x08		; Sampled
;			0x10		; Enabled
;			0x18		; Disabled
; ::::  BODACT	:::: bitfield values
;			0x02		; Sampled
;			0x04		; Enabled
;			0x06		; Disabled

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PC2 as i/o pin)
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

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTC2
.equ	SUT_CKSEL_MASK	= 0x1F		;      - Select Clock Source (5 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms
;			0x04		; Int. ULP Osc. 32 kHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms
;			0x08		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms
;			0x18		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms
;			0x0A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms
;			0x1A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms
;			0x0C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms
;			0x1C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms
;			0x0E		; Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 258 CK/16 CK + 16 ms
;			0x1E		; Ext. Ceramic Res. 8.0- MHz; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms
;			0x0F		; Ext. Crystal Osc. 8.0- MHz; Start-up time PWRDWN/RESET: 16 K CK/16 CK + 16 ms




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
.equ	TWSCRA		= 0x7F		; [MEMORY MAPPED] TWI Slave Control Register A
.equ	TWSCRB		= 0x7E		; [MEMORY MAPPED] TWI Slave Control Register B
.equ	TWSSRA		= 0x7D		; [MEMORY MAPPED] TWI Slave Status Register A
.equ	TWSA		= 0x7C		; [MEMORY MAPPED] TWI Slave Address Register
.equ	TWSAM		= 0x7B		; [MEMORY MAPPED] TWI Slave Address Mask Register
.equ	TWSD		= 0x7A		; [MEMORY MAPPED] TWI Slave Data Register
.equ	UCSR1A		= 0x79		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UCSR1B		= 0x78		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR1C		= 0x77		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR1D		= 0x76		; [MEMORY MAPPED] USART Control and Status Register D
.equ	UBRR1		= 0x74		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UDR1		= 0x73		; [MEMORY MAPPED] USART I/O Data Register
.equ	TCCR1A		= 0x72		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x71		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1C		= 0x70		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCNT1		= 0x6E		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	OCR1A		= 0x6C		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1B		= 0x6A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register  Bytes
.equ	ICR1		= 0x68		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	GTCCR		= 0x67		; [MEMORY MAPPED] General Timer/Counter Control Register
.equ	OSCCAL1		= 0x66		; [MEMORY MAPPED] 
.equ	OSCTCAL0B	= 0x65		; [MEMORY MAPPED] 
.equ	OSCTCAL0A	= 0x64		; [MEMORY MAPPED] 
.equ	OSCCAL0		= 0x63		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	DIDR2		= 0x62		; [MEMORY MAPPED] Digital Input Disable Register 2
.equ	DIDR1		= 0x61		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x60		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	GIMSK		= 0x3C		; General Interrupt Mask Register
.equ	GIFR		= 0x3B		; General Interrupt Flag Register
.equ	TIMSK		= 0x3A		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x39		; Timer/Counter Interrupt Flag register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	MCUCR		= 0x36		; MCU Control Register
.equ	MCUSR		= 0x35		; MCU Status Register
.equ	PRR		= 0x34		; Power Reduction Register
.equ	CLKPR		= 0x33		; Clock Prescale Register
.equ	CLKSR		= 0x32		; Clock Setting Register
.equ	WDTCSR		= 0x30		; Watchdog Timer Control and Status Register
.equ	CCP		= 0x2F		; Configuration Change Protection
.equ	USIBR		= 0x2D		; USI Buffer Register
.equ	USIDR		= 0x2C		; USI Data Register
.equ	USISR		= 0x2B		; USI Status Register
.equ	USICR		= 0x2A		; USI Control Register
.equ	PCMSK2		= 0x29		; Pin Change Mask Register 2
.equ	PCMSK1		= 0x28		; Pin Change Mask Register 1
.equ	PCMSK0		= 0x27		; Pin Change Mask Register 0
.equ	UCSR0A		= 0x26		; USART Control and Status Register A
.equ	UCSR0B		= 0x25		; USART Control and Status Register B
.equ	UCSR0C		= 0x24		; USART Control and Status Register C
.equ	UCSR0D		= 0x23		; USART Control and Status Register D
.equ	UBRR0		= 0x21		; USART Baud Rate Register  Bytes
.equ	UDR0		= 0x20		; USART I/O Data Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	TCCR0A		= 0x1B		; Timer/Counter  Control Register A
.equ	TCCR0B		= 0x1A		; Timer/Counter Control Register B
.equ	TCNT0		= 0x19		; Timer/Counter0
.equ	OCR0A		= 0x18		; Timer/Counter0 Output Compare Register
.equ	OCR0B		= 0x17		; Timer/Counter0 Output Compare Register
.equ	GPIOR2		= 0x16		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x15		; General Purpose I/O Register 1
.equ	GPIOR0		= 0x14		; General Purpose I/O Register 0
.equ	PORTCR		= 0x13		; Port Control Register
.equ	PUEA		= 0x12		; Pull-up Enable Control Register
.equ	PORTA		= 0x11		; Port A Data Register
.equ	DDRA		= 0x10		; Data Direction Register, Port A
.equ	PINA		= 0x0F		; Port A Input Pins
.equ	PUEB		= 0x0E		; Pull-up Enable Control Register
.equ	PORTB		= 0x0D		; Input Pins, Port B
.equ	DDRB		= 0x0C		; Data Direction Register, Port B
.equ	PINB		= 0x0B		; Port B Data register
.equ	PUEC		= 0x0A		; Pull-up Enable Control Register
.equ	PORTC		= 0x09		; Port C Data Register
.equ	DDRC		= 0x08		; Data Direction Register, Port C
.equ	PINC		= 0x07		; Port C Input Pins
.equ	ACSRA		= 0x06		; Analog Comparator Control And Status Register A
.equ	ACSRB		= 0x05		; Analog Comparator Control And Status Register B
.equ	ADMUX		= 0x04		; The ADC multiplexer Selection Register
.equ	ADCSRA		= 0x03		; The ADC Control and Status register
.equ	ADCSRB		= 0x02		; ADC Control and Status Register B
.equ	ADC		= 0x00		; ADC Data Register  Bytes


; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWSCRA bits		------------------------
.equ	TWSHE		= 7		; 0x80 - TWI SDA Hold Time Enable
.equ	TWDIE		= 5		; 0x20 - TWI Data Interrupt Enable
.equ	TWASIE		= 4		; 0x10 - TWI Address/Stop Interrupt Enable
.equ	TWEN		= 3		; 0x08 - Two-Wire Interface Enable
.equ	TWSIE		= 2		; 0x04 - TWI Stop Interrupt Enable
.equ	TWPME		= 1		; 0x02 - TWI Promiscuous Mode Enable
.equ	TWSME		= 0		; 0x01 - TWI Smart Mode Enable

; ----------	Register TWSCRB bits		------------------------
.equ	TWAA		= 2		; 0x04 - TWI Acknowledge Action
.equ	TWCMD_MASK	= 0x03		;      -  (2 bits)
.equ	TWCMD0		= 0		;          TWCMD BIT0 position

; ----------	Register TWSSRA bits		------------------------
.equ	TWDIF		= 7		; 0x80 - TWI Data Interrupt Flag
.equ	TWASIF		= 6		; 0x40 - TWI Address/Stop Interrupt Flag
.equ	TWCH		= 5		; 0x20 - TWI Clock Hold
.equ	TWRA		= 4		; 0x10 - TWI Receive Acknowledge
.equ	TWC		= 3		; 0x08 - TWI Collision
.equ	TWBE		= 2		; 0x04 - TWI Bus Error
.equ	TWDIR		= 1		; 0x02 - TWI Read/Write Direction
.equ	TWAS		= 0		; 0x01 - TWI Address or Stop

; ----------	Register TWSA bits		------------------------
.equ	TWSA_MASK	= 0xFF		;      - TWI slave address bit (8 bits)
.equ	TWSA0		= 0		;          TWSA BIT0 position

; ----------	Register TWSD bits		------------------------
.equ	TWSD_MASK	= 0xFF		;      - TWI slave data bit (8 bits)
.equ	TWSD0		= 0		;          TWSD BIT0 position



; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PORTCR bits		------------------------
.equ	BBMB		= 1		; 0x02 - Break-Before-Make Mode Enable

; ----------	Register PUEB bits		------------------------
.equ	PUEB_MASK	= 0x0F		;      - Pull-up Enable Control bit (4 bits)
.equ	PUEB0		= 0		;          PUEB BIT0 position

; ----------	Register PORTCR bits		------------------------
.equ	BBMC		= 2		; 0x04 - Break-Before-Make Mode Enable

; ----------	Register PUEC bits		------------------------
.equ	PUEC_MASK	= 0x3F		;      - Pull-up Enable Control bit (6 bits)
.equ	PUEC0		= 0		;          PUEC BIT0 position

; ----------	Register PORTCR bits		------------------------
.equ	BBMA		= 0		; 0x01 - Break-Before-Make Mode Enable

; ----------	Register PUEA bits		------------------------
.equ	PUEA_MASK	= 0xFF		;      - Pull-up Enable Control bit (8 bits)
.equ	PUEA0		= 0		;          PUEA BIT0 position



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bit (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	REFEN		= 5		; 0x20 - 
.equ	ADC0EN		= 4		; 0x10 - 
.equ	MUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
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
.equ	VDEN		= 7		; 0x80 - 
.equ	VDPD		= 6		; 0x40 - 
.equ	ADLAR		= 3		; 0x08 - 
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
;			0x07		; Timer/Counter1 Capture Event

; ----------	Register DIDR2 bits		------------------------
.equ	ADC11D		= 2		; 0x04 - ADC11 Digital input Disable
.equ	ADC10D		= 1		; 0x02 - ADC10 Digital input Disable
.equ	ADC9D		= 0		; 0x01 - ADC9 Digital input Disable

; ----------	Register DIDR1 bits		------------------------
.equ	ADC8D		= 3		; 0x08 - ADC8 Digital Input Disable
.equ	ADC7D		= 2		; 0x04 - ADC7 Digital input Disable
.equ	ADC6D		= 1		; 0x02 - ADC6 Digital input Disable
.equ	ADC5D		= 0		; 0x01 - ADC5 Digital input Disable

; ----------	Register DIDR0 bits		------------------------
.equ	ADC4D		= 7		; 0x80 - ADC4 Digital input Disable
.equ	ADC3D		= 6		; 0x40 - ADC3 Digital input Disable
.equ	ADC2D		= 5		; 0x20 - ADC2 Digital input Disable
.equ	ADC1D		= 4		; 0x10 - ADC1 Digital input Disable
.equ	ADC0D		= 3		; 0x08 - ADC0 Digital Input Disable
.equ	AIN1D		= 2		; 0x04 - AIN1 Digital input Disable
.equ	AIN0D		= 1		; 0x02 - AIN0 Digital input Disable
.equ	AREFD		= 0		; 0x01 - AREF Digital input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSRB bits		------------------------
.equ	HSEL		= 7		; 0x80 - Hysteresis Select
.equ	HLEV		= 6		; 0x40 - Hysteresis Level
.equ	ACLP		= 5		; 0x20 - 
.equ	ACCE		= 3		; 0x08 - 
.equ	ACME		= 2		; 0x04 - Analog Comparator Multiplexer Enable
.equ	ACIRS_MASK	= 0x03		;      -  (2 bits)
.equ	ACIRS0		= 0		;          ACIRS BIT0 position

; ----------	Register ACSRA bits		------------------------
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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TOIE1		= 7		; 0x80 - Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A		= 6		; 0x40 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	ICIE1		= 3		; 0x08 - Timer/Counter1 Input Capture Interrupt Enable

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

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A		= 0		; 0x01 - Timer/Counter0 Output Compare Match A Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag
.equ	OCF0A		= 0		; 0x01 - Timer/Counter0 Output Compare Flag 0A

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Match Output A Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Match Output B Mode (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare B
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

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PCMSK2 bits		------------------------
.equ	PCMSK2_PCINT_MASK= 0x3F		;      - Pin Change Enable Masks (6 bits)
.equ	PCMSK2_PCINT0	= 0		;          PCMSK2_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x0F		;      - Pin Change Enable Masks (4 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF_MASK	= 0x38		;      - Pin Change Interrupt Flags (3 bits)
.equ	PCIF0		= 3		;          PCIF BIT0 position

; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE_MASK	= 0x38		;      - Pin Change Interrupt Enables (3 bits)
.equ	PCIE0		= 3		;          PCIE BIT0 position



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PRR bits		------------------------
.equ	PRTWI		= 6		; 0x40 - Power Reduction TWI
.equ	PRTIM1		= 5		; 0x20 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 4		; 0x10 - Power Reduction Timer/Counter0
.equ	PRUSI		= 3		; 0x08 - Power Reduction USI
.equ	PRUSART1	= 2		; 0x04 - Power Reduction USART1
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART0
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register CLKPR bits		------------------------
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

; ----------	Register CLKSR bits		------------------------
.equ	OSCRDY		= 7		; 0x80 - Oscillator Ready
.equ	CSTR		= 6		; 0x40 - Clock Switch Trigger
.equ	CKOUT_IO	= 5		; 0x20 - Clock Output (active low)
.equ	SUT		= 4		; 0x10 - Start-up Time
.equ	CKSEL_MASK	= 0x0F		;      - Clock Select Bits (4 bits)
.equ	CKSEL0		= 0		;          CKSEL BIT0 position

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
.equ	SM_MASK		= 0x60		;      - Sleep Mode Select Bits (2 bits)
.equ	SM0		= 5		;          SM BIT0 position
.equ	SE		= 4		; 0x10 - Sleep Enable
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x20		; ADC Noise Reduction (If Available)
;			0x40		; Power Down
;			0x60		; Standby

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register SPMCSR bits		------------------------
.equ	RSIG		= 5		; 0x20 - Read Device Signature Imprint Table
.equ	CTPB		= 4		; 0x10 - Clear Temporary Page Buffer
.equ	RFLB		= 3		; 0x08 - Read Fuse and Lock Bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store program Memory Enable



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

; ----------	Register UCSR0D bits		------------------------
.equ	RXSIE0		= 7		; 0x80 - USART RX Start Interrupt Enable
.equ	RXS0		= 6		; 0x40 - USART RX Start Flag
.equ	SFDE0		= 5		; 0x20 - USART RX Start Frame Detection Enable

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

; ----------	Register UCSR1D bits		------------------------
.equ	RXSIE1		= 7		; 0x80 - USART RX Start Interrupt Enable
.equ	RXS1		= 6		; 0x40 - USART RX Start Flag
.equ	SFDE1		= 5		; 0x20 - USART RX Start Frame Detection Enable



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
.equ	WDIF		= 7		; 0x80 - Watchdog Timer Interrupt Flag
.equ	WDIE		= 6		; 0x40 - Watchdog Timer Interrupt Enable
.equ	WDP_MASK	= 0x27		;      - Watchdog Timer Prescaler Bits (4 bits)
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
; ::::  WDP	:::: bitfield values
;			0x00		; Oscillator Cycles 512 (16 ms)
;			0x01		; Oscillator Cycles 1K (32 ms)
;			0x02		; Oscillator Cycles 2K (64 ms)
;			0x03		; Oscillator Cycles 4K (0.125 s)
;			0x04		; Oscillator Cycles 8K (0.25 s)
;			0x05		; Oscillator Cycles 16K (0.5 s)
;			0x06		; Oscillator Cycles 32K (1.0 s)
;			0x07		; Oscillator Cycles 64K (2.0 s)
;			0x20		; Oscillator Cycles 128K (4.0 s)
;			0x21		; Oscillator Cycles 256K (8.0 s)




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 47
.equ	INT_VECTORS_SIZE	= 0x5E
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	PCINT2		; Pin Change Interrupt Request 2
;	5	WDT		; Watchdog Time-out Interrupt
;	6	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	6	TIM1_CAPT	; Timer/Counter1 Capture Event
;	7	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	7	TIM1_COMPA	; Timer/Counter1 Compare Match A
;	8	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	8	TIM1_COMPB	; Timer/Counter1 Compare Match B
;	9	TIMER1_OVF	; Timer/Counter1 Overflow
;	9	TIM1_OVF	; Timer/Counter1 Overflow
;	10	TIMER0_COMPA	; TimerCounter0 Compare Match A
;	10	TIM0_COMPA	; TimerCounter0 Compare Match A
;	11	TIMER0_COMPB	; TimerCounter0 Compare Match B
;	11	TIM0_COMPB	; TimerCounter0 Compare Match B
;	12	TIMER0_OVF	; Timer/Counter0 Overflow
;	12	TIM0_OVF	; Timer/Counter0 Overflow
;	13	ANA_COMP	; Analog Comparator
;	14	ADC		; ADC Conversion Complete
;	14	ADC_READY	; ADC Conversion Complete
;	15	USART0_START	; USART0, Start
;	15	USART0_RXS	; USART0, Start
;	16	USART0_RX	; USART0, Rx Complete
;	16	USART0_RXC	; USART0, Rx Complete
;	17	USART0_UDRE	; USART0 Data Register Empty
;	17	USART0_DRE	; USART0 Data Register Empty
;	18	USART0_TX	; USART0, Tx Complete
;	18	USART0_TXC	; USART0, Tx Complete
;	19	USART1_START	; USART1, Start
;	19	USART1_RXS	; USART1, Start
;	20	USART1_RX	; USART1, Rx Complete
;	20	USART1_RXC	; USART1, Rx Complete
;	21	USART1_UDRE	; USART1 Data Register Empty
;	21	USART1_DRE	; USART1 Data Register Empty
;	22	USART1_TX	; USART1, Tx Complete
;	22	USART1_TXC	; USART1, Tx Complete
;	23	USI_START	; USI Start Condition
;	23	USI_STR		; USI Start Condition
;	24	USI_OVERFLOW	; USI Overflow
;	24	USI_OVF		; USI Overflow
;	25	TWI_SLAVE	; Two-wire Serial Interface
;	25	TWI		; Two-wire Serial Interface
;	26	EE_RDY		; EEPROM Ready
;	27	QTRIP		; Touch Sensing



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny1634.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODPD		= 0x18	; Disabled
;#	.set	BODACT		= 0x06	; Disabled
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  &  (~BODPD_MASK | BODPD) \
;#				  &  (~BODACT_MASK | BODACT) \
;#				  & ~(0 <<SELFPRGEN)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BODLEVEL	= 0x07
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x02	; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
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
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIM1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIM1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIM1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIM1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - TimerCounter0 Compare Match A
;#		reti			; TIM0_COMPA	 - TimerCounter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - TimerCounter0 Compare Match B
;#		reti			; TIM0_COMPB	 - TimerCounter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		reti			; ADC_READY	 - ADC Conversion Complete
;#		reti			; USART0_START	 - USART0, Start
;#		reti			; USART0_RXS	 - USART0, Start
;#		reti			; USART0_RX	 - USART0, Rx Complete
;#		reti			; USART0_RXC	 - USART0, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data Register Empty
;#		reti			; USART0_DRE	 - USART0 Data Register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; USART0_TXC	 - USART0, Tx Complete
;#		reti			; USART1_START	 - USART1, Start
;#		reti			; USART1_RXS	 - USART1, Start
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_RXC	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1 Data Register Empty
;#		reti			; USART1_DRE	 - USART1 Data Register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; USART1_TXC	 - USART1, Tx Complete
;#		reti			; USI_START	 - USI Start Condition
;#		reti			; USI_STR	 - USI Start Condition
;#		reti			; USI_OVERFLOW	 - USI Overflow
;#		reti			; USI_OVF	 - USI Overflow
;#		reti			; TWI_SLAVE	 - Two-wire Serial Interface
;#		reti			; TWI		 - Two-wire Serial Interface
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; QTRIP		 - Touch Sensing
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY1634_INC_ */

; ************************ END OF FILE *********************************

