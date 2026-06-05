;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny20
;* Title             : Register/Mask/Bit Definitions for the ATtiny20
;* File Name         : ATtiny20.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-05 09:17:49 UTC
;
;***********************************************************************

#ifndef _ATTINY20_INC_
#define _ATTINY20_INC_

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
.device	ATtiny20
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x91
.equ	SIGNATURE2	= 0x0f


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
;   SRAM
.equ	ADDR_SRAM_START			= 0x0040
.equ	ADDR_SRAM_END			= 0x00BF
.equ	ADDR_SRAM_SIZE			= 0x0080
;   MAPPED_NVM_LOCK_BITS
.equ	ADDR_MAPPED_NVM_LOCK_BITS_START	= 0x3F00
.equ	ADDR_MAPPED_NVM_LOCK_BITS_END	= 0x3F01
.equ	ADDR_MAPPED_NVM_LOCK_BITS_SIZE	= 0x0002
;   MAPPED_CONFIGURATION_BITS
.equ	ADDR_MAPPED_CONFIGURATION_BITS_START= 0x3F40
.equ	ADDR_MAPPED_CONFIGURATION_BITS_END= 0x3F41
.equ	ADDR_MAPPED_CONFIGURATION_BITS_SIZE= 0x0002
;   MAPPED_CALIBRATION_BITS
.equ	ADDR_MAPPED_CALIBRATION_BITS_START= 0x3F80
.equ	ADDR_MAPPED_CALIBRATION_BITS_END= 0x3F81
.equ	ADDR_MAPPED_CALIBRATION_BITS_SIZE= 0x0002
;   MAPPED_DEVICE_ID_BITS
.equ	ADDR_MAPPED_DEVICE_ID_BITS_START= 0x3FC0
.equ	ADDR_MAPPED_DEVICE_ID_BITS_END	= 0x3FC3
.equ	ADDR_MAPPED_DEVICE_ID_BITS_SIZE	= 0x0004
;   MAPPED_FLASH
.equ	ADDR_MAPPED_FLASH_START		= 0x4000
.equ	ADDR_MAPPED_FLASH_END		= 0x47FF
.equ	ADDR_MAPPED_FLASH_SIZE		= 0x0800

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0000
.equ	ADDR_OSCCAL_SIZE		= 0x0001




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	BYTE0		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register BYTE0 bits		------------------------
.equ	BODLEVEL_MASK	= 0x70		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 4		;          BODLEVEL BIT0 position
.equ	CKOUT		= 2		; 0x04 - Output external clock
.equ	WDTON		= 1		; 0x02 - Watch dog timer always on
.equ	RSTDISBL	= 0		; 0x01 - Disable external reset
; ::::  BODLEVEL	:::: bitfield values
;			0x70		; Brown-out detection disabled; [BODLEVEL=111]
;			0x60		; Brown-out detection at VCC=1.8 V
;			0x50		; Brown-out detection at VCC=2.7 V
;			0x40		; Brown-out detection at VCC=4.3 V




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
.equ	CCP		= 0x3C		; Configuration Change Protection
.equ	RSTFLR		= 0x3B		; Reset Flag Register
.equ	MCUCR		= 0x3A		; MCU Control Register
.equ	OSCCAL		= 0x39		; Oscillator Calibration Value
.equ	CLKMSR		= 0x37		; Clock Main Settings Register
.equ	CLKPSR		= 0x36		; Clock Prescale Register
.equ	PRR		= 0x35		; Power Reduction Register
.equ	NVMCMD		= 0x33		; Non-Volatile Memory Command
.equ	NVMCSR		= 0x32		; Non-Volatile Memory Control and Status Register
.equ	WDTCSR		= 0x31		; Watchdog Timer Control and Status Register
.equ	SPCR		= 0x30		; SPI Control Register
.equ	SPSR		= 0x2F		; SPI Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	TWSCRA		= 0x2D		; TWI Slave Control Register A
.equ	TWSCRB		= 0x2C		; TWI Slave Control Register B
.equ	TWSSRA		= 0x2B		; TWI Slave Status Register A
.equ	TWSA		= 0x2A		; TWI Slave Address Register
.equ	TWSAM		= 0x29		; TWI Slave Address Mask Register
.equ	TWSD		= 0x28		; TWI Slave Data Register
.equ	GTCCR		= 0x27		; General Timer/Counter Control Register
.equ	TIMSK		= 0x26		; Timer Interrupt Mask Register
.equ	TIFR		= 0x25		; Overflow Interrupt Enable
.equ	TCCR1A		= 0x24		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x23		; Timer/Counter1 Control Register B
.equ	TCCR1C		= 0x22		; Timer/Counter1 Control Register C
.equ	TCNT1		= 0x20		; [___2 addrs___] Timer/Counter1 
.equ	OCR1A		= 0x1E		; [___2 addrs___] Timer/Counter 1 Output Compare Register A 
.equ	OCR1B		= 0x1C		; [___2 addrs___] Timer/Counter1 Output Compare Register B 
.equ	ICR1		= 0x1A		; [___2 addrs___] Input Capture Register  Bytes
.equ	TCCR0A		= 0x19		; Timer/Counter 0 Control Register A
.equ	TCCR0B		= 0x18		; Timer/Counter 0 Control Register B
.equ	TCNT0		= 0x17		; Timer/Counter0
.equ	OCR0A		= 0x16		; Timer/Counter0 Output Compare Register
.equ	OCR0B		= 0x15		; Timer/Counter0 Output Compare Register
.equ	ACSRA		= 0x14		; Analog Comparator Control And Status Register A
.equ	ACSRB		= 0x13		; Analog Comparator Control And Status Register B
.equ	ADCSRA		= 0x12		; The ADC Control and Status register
.equ	ADCSRB		= 0x11		; ADC Control and Status Register B
.equ	ADMUX		= 0x10		; The ADC multiplexer Selection Register
.equ	ADC		= 0x0E		; [___2 addrs___] ADC Data Register  Bytes
.equ	DIDR0		= 0x0D		; Digital Input Disable Register 0
.equ	GIMSK		= 0x0C		; General Interrupt Mask Register
.equ	GIFR		= 0x0B		; General Interrupt Flag Register
.equ	PCMSK1		= 0x0A		; Pin Change Mask Register 1
.equ	PCMSK0		= 0x09		; Pin Change Mask Register 0
.equ	PORTCR		= 0x08		; Port Control Register
.equ	PUEB		= 0x07		; Pull-up Enable Control Register
.equ	PORTB		= 0x06		; Input Pins, Port B
.equ	DDRB		= 0x05		; Data Direction Register, Port B
.equ	PINB		= 0x04		; Port B Data register
.equ	PUEA		= 0x03		; Pull-up Enable Control Register
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Data Direction Register, Port A
.equ	PINA		= 0x00		; Port A Input Pins
;
; ----------	REGISTERS PAIRS			------------------------
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    Timer/Counter1 
.equ	TCNT1H		= 0x21
.equ	TCNT1L		= 0x20
;    Timer/Counter 1 Output Compare Register A 
.equ	OCR1AH		= 0x1F
.equ	OCR1AL		= 0x1E
;    Timer/Counter1 Output Compare Register B 
.equ	OCR1BH		= 0x1D
.equ	OCR1BL		= 0x1C
;    Input Capture Register  Bytes
.equ	ICR1H		= 0x1B
.equ	ICR1L		= 0x1A
;    ADC Data Register  Bytes
.equ	ADCH		= 0x0F
.equ	ADCL		= 0x0E


; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PORTCR bits		------------------------
.equ	BBMB		= 1		; 0x02 - Break-Before-Make Mode Enable

; ----------	Register PORTCR bits		------------------------
.equ	BBMA		= 0		; 0x01 - Break-Before-Make Mode Enable



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
.equ	WDIF		= 7		; 0x80 - Watchdog Timer Interrupt Flag
.equ	WDIE		= 6		; 0x40 - Watchdog Timer Interrupt Enable
.equ	WDP_MASK	= 0x27		;      - Watchdog Timer Prescaler Bits (4 bits)
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



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS		= 6		; 0x40 - Reference Selection Bit
.equ	MUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; Vcc used as internal reference
;			0x40		; Internal 1.1V Reference
; ::::  MUX	:::: bitfield values
;			0x00		; ADC0
;			0x01		; ADC1
;			0x02		; ADC2
;			0x03		; ADC3
;			0x04		; ADC4
;			0x05		; ADC5
;			0x06		; ADC6
;			0x07		; ADC7
;			0x08		; 0V (AGND)
;			0x09		; 1.1V Internal Reference
;			0x0A		; Temperature sensor

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
;			0x07		; Watchdog Interrupt Request

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC6 Digital input Disable
.equ	ADC6D		= 6		; 0x40 - ADC5 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC4 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC3 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - AREF Digital Input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSRB bits		------------------------
.equ	HSEL		= 7		; 0x80 - Hysteresis Select
.equ	HLEV		= 6		; 0x40 - Hysteresis Level
.equ	ACME		= 2		; 0x04 - Analog Comparator Multiplexer Enable

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

; ----------	Register CLKMSR bits		------------------------
.equ	CLKMS_MASK	= 0x03		;      - Clock Main Select Bits (2 bits)
.equ	CLKMS0		= 0		;          CLKMS BIT0 position

; ----------	Register CLKPSR bits		------------------------
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

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register PRR bits		------------------------
.equ	PRTWI		= 4		; 0x10 - Power Reduction TWI
.equ	PRSPI		= 3		; 0x08 - Power Reduction Serial Peripheral Interface
.equ	PRTIM1		= 2		; 0x04 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 1		; 0x02 - Power Reduction Timer/Counter0
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register RSTFLR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on Reset Flag

; ----------	Register NVMCSR bits		------------------------
.equ	NVMBSY		= 7		; 0x80 - Non-Volatile Memory Busy

; ----------	Register MCUCR bits		------------------------
.equ	BODS		= 4		; 0x10 - BOD Sleep
.equ	SM_MASK		= 0x0E		;      - Sleep Mode (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC noise reduction
;			0x04		; Power-down
;			0x08		; Standby



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	ISC01		= 7		; 0x80 - Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 6		; 0x40 - Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x0F		;      - Pin Change Enable Masks (4 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	PCIF_MASK	= 0x30		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 4		;          PCIF BIT0 position
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0

; ----------	Register GIMSK bits		------------------------
.equ	PCIE_MASK	= 0x30		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode for Channel A bits (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode for Channel B bits (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare B
.equ	WGM02		= 3		; 0x08 - Waveform Generation Mode
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

; ----------	Register TIMSK bits		------------------------
.equ	ICIE1		= 7		; 0x80 - Input Capture Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 4		; 0x10 - Output Compare A Match Interrupt Enable
.equ	TOIE_MASK	= 0x09		;      - Overflow Interrupt Enable (2 bits)
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable

; ----------	Register TIFR bits		------------------------
.equ	ICF1		= 7		; 0x80 - Input Capture Flag
.equ	OCF1B		= 5		; 0x20 - Timer Output Compare Flag 1B
.equ	OCF1A		= 4		; 0x10 - Timer Output Compare Flag 1A
.equ	TOV_MASK	= 0x09		;      - Timer Overflow Flag (2 bits)
.equ	OCF0B		= 2		; 0x04 - Output Compare Flag 0 B
.equ	OCF0A		= 1		; 0x02 - Output Compare Flag 0 A

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer Synchronization Mode
.equ	PSR		= 0		; 0x01 - Prescaler Reset



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



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
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

; ----------	Register TIMSK bits		------------------------
;.equ	ICIE1		= 7		; 0x80 - Input Capture Interrupt Enable
;.equ	OCIE1B		= 5		; 0x20 - Output Compare B Match Interrupt Enable
;.equ	OCIE1A		= 4		; 0x10 - Output Compare A Match Interrupt Enable
;.equ	TOIE_MASK	= 0x09		;      - Overflow Interrupt Enable (2 bits)
;.equ	OCIE0B		= 2		; 0x04 - Timer/Counter Output Compare Match B Interrupt Enable
;.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable

; ----------	Register TIFR bits		------------------------
;.equ	ICF1		= 7		; 0x80 - Input Capture Flag
;.equ	OCF1B		= 5		; 0x20 - Timer Output Compare Flag 1B
;.equ	OCF1A		= 4		; 0x10 - Timer Output Compare Flag 1A
;.equ	TOV_MASK	= 0x09		;      - Timer Overflow Flag (2 bits)
;.equ	OCF0B		= 2		; 0x04 - Output Compare Flag 0 B
;.equ	OCF0A		= 1		; 0x02 - Output Compare Flag 0 A

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer Synchronization Mode
;.equ	PSR		= 0		; 0x01 - Prescaler Reset



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
; ::::  SPR	:::: bitfield values
;			0x00		; fcl/4
;			0x01		; fcl/16
;			0x02		; fcl/64
;			0x03		; fcl/128

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  INTERRUPT_SENSE_CONTROL	:::: values
;			0b00		; Low Level of INTX
;			0b01		; Any logical change on INTX
;			0b10		; Falling Edge of INTX
;			0b11		; Rising Edge of INTX



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 17
.equ	INT_VECTORS_SIZE	= 0x22
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	WDT		; Watchdog Time-out
;	5	TIM1_CAPT	; Timer/Counter1 Input Capture
;	6	TIM1_COMPA	;  Timer/Counter1 Compare Match A
;	7	TIM1_COMPB	;  Timer/Counter1 Compare Match B
;	8	TIM1_OVF	; Timer/Counter1 Overflow
;	9	TIM0_COMPA	; Timer/Counter0 Compare Match A
;	10	TIM0_COMPB	; Timer/Counter0 Compare Match B
;	11	TIM0_OVF	; Timer/Counter0 Overflow
;	12	ANA_COMP	; Analog Comparator
;	13	ADC_ADC		; Conversion Complete
;	14	TWI_SLAVE	; Two-Wire Interface
;	15	SPI		; Serial Peripheral Interface
;	16	QTRIP		; Touch Sensing



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny20.inc"
;#	
;#	; FUSES BYTE0 byte (addr 0x00)
;#	.set	BODLEVEL	= 0x70	; Brown-out detection disabled; [BODLEVEL=111]
;#	.set	FUSES_BYTE0	= 0xFF \
;#				  &  (~BODLEVEL_MASK | BODLEVEL) \
;#				  & ~(0 <<CKOUT) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<RSTDISBL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
;#	.message "===================="
;#	.message "-----  Fuses  ------"
;#	.message "BYTE0           ", FUSES_BYTE0
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; WDT		 - Watchdog Time-out
;#		reti			; TIM1_CAPT	 - Timer/Counter1 Input Capture
;#		reti			; TIM1_COMPA	 -  Timer/Counter1 Compare Match A
;#		reti			; TIM1_COMPB	 -  Timer/Counter1 Compare Match B
;#		reti			; TIM1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIM0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIM0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; ADC_ADC	 - Conversion Complete
;#		reti			; TWI_SLAVE	 - Two-Wire Interface
;#		reti			; SPI		 - Serial Peripheral Interface
;#		reti			; QTRIP		 - Touch Sensing
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_SRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_SRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY20_INC_ */

; ************************ END OF FILE *********************************

