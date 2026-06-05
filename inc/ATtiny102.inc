;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny102
;* Title             : Register/Mask/Bit Definitions for the ATtiny102
;* File Name         : ATtiny102.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-05 09:17:48 UTC
;
;***********************************************************************

#ifndef _ATTINY102_INC_
#define _ATTINY102_INC_

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
.device	ATtiny102
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x90
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
;   SRAM
.equ	ADDR_SRAM_START			= 0x0040
.equ	ADDR_SRAM_END			= 0x005F
.equ	ADDR_SRAM_SIZE			= 0x0020
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
.equ	ADDR_MAPPED_FLASH_END		= 0x43FF
.equ	ADDR_MAPPED_FLASH_SIZE		= 0x0400




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	BYTE0		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register BYTE0 bits		------------------------
.equ	SELFPROGEN	= 3		; 0x08 - Self programming enable
.equ	CKOUT		= 2		; 0x04 - Output external clock
.equ	WDTON		= 1		; 0x02 - Watch dog timer always on
.equ	RSTDISBL	= 0		; 0x01 - Disable external reset




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
.equ	SMCR		= 0x3A		; Sleep Mode Control Register
.equ	OSCCAL		= 0x39		; Oscillator Calibration Value
.equ	CLKMSR		= 0x37		; Clock Main Settings Register
.equ	CLKPSR		= 0x36		; Clock Prescale Register
.equ	PRR		= 0x35		; Power Reduction Register
.equ	VLMCSR		= 0x34		; Vcc Level Monitoring Control and Status Register
.equ	NVMCMD		= 0x33		; Non-Volatile Memory Command
.equ	NVMCSR		= 0x32		; Non-Volatile Memory Control and Status Register
.equ	WDTCSR		= 0x31		; Watchdog Timer Control and Status Register
.equ	GTCCR		= 0x2F		; General Timer/Counter Control Register
.equ	TCCR0A		= 0x2E		; Timer/Counter 0 Control Register A
.equ	TCCR0B		= 0x2D		; Timer/Counter 0 Control Register B
.equ	TCCR0C		= 0x2C		; Timer/Counter 0 Control Register C
.equ	TIMSK0		= 0x2B		; Timer Interrupt Mask Register 0
.equ	TIFR0		= 0x2A		; Overflow Interrupt Enable
.equ	TCNT0		= 0x28		; [___2 addrs___] Timer/Counter0 
.equ	OCR0A		= 0x26		; [___2 addrs___] Timer/Counter 0 Output Compare Register A 
.equ	OCR0B		= 0x24		; [___2 addrs___] Timer/Counter0 Output Compare Register B 
.equ	ICR0		= 0x22		; [___2 addrs___] Input Capture Register  Bytes
.equ	ACSRA		= 0x1F		; Analog Comparator Control And Status Register A
.equ	ACSRB		= 0x1E		; Analog Comparator Control And Status Register B
.equ	ADCSRA		= 0x1D		; The ADC Control and Status register A
.equ	ADCSRB		= 0x1C		; The ADC Control and Status register B
.equ	ADMUX		= 0x1B		; The ADC multiplexer Selection Register
.equ	ADCH		= 0x1A		; ADC Data Register High
.equ	ADCL		= 0x19		; ADC Data Register Low
.equ	DIDR0		= 0x17		; Digital Input Disable Register
.equ	PORTCR		= 0x16		; Port Control Register
.equ	EICRA		= 0x15		; External Interrupt Control Register A
.equ	EIFR		= 0x14		; External Interrupt Flag register
.equ	EIMSK		= 0x13		; External Interrupt Mask register
.equ	PCICR		= 0x12		; Pin Change Interrupt Control Register
.equ	PCIFR		= 0x11		; Pin Change Interrupt Flag Register
.equ	PCMSK1		= 0x10		; Pin Change Mask Register 1
.equ	PCMSK0		= 0x0F		; Pin Change Mask Register 0
.equ	UCSRA		= 0x0E		; USART Control and Status Register A
.equ	UCSRB		= 0x0D		; USART Control and Status Register B
.equ	UCSRC		= 0x0C		; USART Control and Status Register C
.equ	UCSRD		= 0x0B		; USART Control and Status Register D
.equ	UBRR		= 0x09		; [___2 addrs___] USART Baud Rate Register  Bytes
.equ	UDR		= 0x08		; USART I/O Data Register
.equ	PUEB		= 0x07		; Pull-up Enable Control Register for PORTB
.equ	PORTB		= 0x06		; Port B Data register
.equ	DDRB		= 0x05		; Data Direction Register, Port B
.equ	PINB		= 0x04		; Input Pins, Port B
.equ	PUEA		= 0x03		; Pull-up Enable Control Register for PORTA
.equ	PORTA		= 0x02		; Port A Data register
.equ	DDRA		= 0x01		; Data Direction Register, Port A
.equ	PINA		= 0x00		; Input Pins, Port A
;
; ----------	REGISTERS PAIRS			------------------------
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    Timer/Counter0 
.equ	TCNT0H		= 0x29
.equ	TCNT0L		= 0x28
;    Timer/Counter 0 Output Compare Register A 
.equ	OCR0AH		= 0x27
.equ	OCR0AL		= 0x26
;    Timer/Counter0 Output Compare Register B 
.equ	OCR0BH		= 0x25
.equ	OCR0BL		= 0x24
;    Input Capture Register  Bytes
.equ	ICR0H		= 0x23
.equ	ICR0L		= 0x22
;    USART Baud Rate Register  Bytes
.equ	UBRRH		= 0x0A
.equ	UBRRL		= 0x09


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	MUX_MASK	= 0x07		;      - Analog Channel Selection Bits (3 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
.equ	REFS_MASK	= 0xC0		;      - Analog Reference voltage Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
; ::::  MUX	:::: bitfield values
;			0x00		; ADC0
;			0x01		; ADC1
;			0x02		; ADC2
;			0x03		; ADC3
;			0x04		; ADC4
;			0x05		; ADC5
;			0x06		; ADC6
;			0x07		; ADC7
; ::::  REFS	:::: bitfield values
;			0x00		; Vcc
;			0x40		; Internal 1.1V Reference
;			0x80		; Internal 2.2V Reference
;			0xC0		; Internal 4.3V Reference

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
.equ	ADLAR		= 7		; 0x80 - Left Adjustment for ADC Result Readout
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Source bits (3 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position
; ::::  ADTS	:::: bitfield values
;			0x00		; Free Running mode
;			0x01		; Analog Comparator
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter0 Compare Match A
;			0x04		; Timer/Counter0 Overflow
;			0x05		; Timer/Counter0 Compare Match B
;			0x06		; Pin Change Interrupt 0 Request
;			0x07		; Timer/Counter0 Capture Event

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC7 Digital Input Disable
.equ	ADC6D		= 6		; 0x40 - ADC6 Digital Input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital Input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4 Digital Input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital Input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital Input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital Input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital Input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSRA bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACBG		= 6		; 0x40 - Analog Comparator Bandgap enable
.equ	ACO		= 5		; 0x20 - Analog Compare Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACIC		= 2		; 0x04 - Analog Comparator Input Capture  Enable
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge

; ----------	Register ACSRB bits		------------------------
.equ	ACOE		= 1		; 0x02 - Analog Comparator Output Enable
.equ	ACPMUX		= 0		; 0x01 - Analog Comparator positive input selection bit

; ----------	Register DIDR0 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CCP bits		------------------------
.equ	CCP_MASK	= 0xFF		;      - CCP signature (8 bits)
.equ	CCP0		= 0		;          CCP BIT0 position
; ::::  CCP	:::: bitfield values
;			0xE7		; SPM Instruction Protection
;			0xD8		; IO Register Protection

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

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select Bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction
;			0x04		; Power Down
;			0x06		; Reserved
;			0x08		; Standby
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved

; ----------	Register PRR bits		------------------------
.equ	PRUSART		= 2		; 0x04 - Power Reduction USART
.equ	PRADC		= 1		; 0x02 - Power Reduction ADC
.equ	PRTIM0		= 0		; 0x01 - Power Reduction Timer/Counter0

; ----------	Register VLMCSR bits		------------------------
.equ	VLMF		= 7		; 0x80 - VLM Flag
.equ	VLMIE		= 6		; 0x40 - VLM Interrupt Enable
.equ	VLM_MASK	= 0x07		;      - Trigger Level of Voltage Level Monitor bits (3 bits)
.equ	VLM0		= 0		;          VLM BIT0 position

; ----------	Register RSTFLR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on Reset Flag

; ----------	Register NVMCSR bits		------------------------
.equ	NVMBSY		= 7		; 0x80 - Non-Volatile Memory Busy



; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PORTCR bits		------------------------
.equ	BBMB		= 1		; 0x02 - Break-Before-Make Mode Enable for PORTB

; ----------	Register PORTCR bits		------------------------
.equ	BBMA		= 0		; 0x01 - Break-Before-Make Mode Enable for PORTA



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC01		= 1		; 0x02 - Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - Interrupt Sense Control 0 Bit 0

; ----------	Register EIMSK bits		------------------------
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable

; ----------	Register EIFR bits		------------------------
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0

; ----------	Register PCICR bits		------------------------
.equ	PCIE1		= 1		; 0x02 - Pin Change Interrupt Enable 1
.equ	PCIE0		= 0		; 0x01 - Pin Change Interrupt Enable 0

; ----------	Register PCIFR bits		------------------------
.equ	PCIF1		= 1		; 0x02 - Pin Change Interrupt Flag 1
.equ	PCIF0		= 0		; 0x01 - Pin Change Interrupt Flag 0

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT11		= 3		; 0x08 - Pin Change Enable Mask 1 Bit 3
.equ	PCINT10		= 2		; 0x04 - Pin Change Enable Mask 1 Bit 2
.equ	PCINT9		= 1		; 0x02 - Pin Change Enable Mask 1 Bit 1
.equ	PCINT8		= 0		; 0x01 - Pin Change Enable Mask 1 Bit 0

; ----------	Register PCMSK0 bits		------------------------
.equ	PCINT7		= 7		; 0x80 - Pin Change Enable Mask 0 Bit 7
.equ	PCINT6		= 6		; 0x40 - Pin Change Enable Mask 0 Bit 6
.equ	PCINT5		= 5		; 0x20 - Pin Change Enable Mask 0 Bit 5
.equ	PCINT4		= 4		; 0x10 - Pin Change Enable Mask 0 Bit 4
.equ	PCINT3		= 3		; 0x08 - Pin Change Enable Mask 0 Bit 3
.equ	PCINT2		= 2		; 0x04 - Pin Change Enable Mask 0 Bit 2
.equ	PCINT1		= 1		; 0x02 - Pin Change Enable Mask 0 Bit 1
.equ	PCINT0		= 0		; 0x01 - Pin Change Enable Mask 0 Bit 0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode for Channel A bits (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode for Channel B bits (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	TCCR0A_WGM0_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR0A_WGM00	= 0		;          TCCR0A_WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	ICNC0		= 7		; 0x80 - Input Capture Noise Canceler
.equ	ICES0		= 6		; 0x40 - Input Capture Edge Select
.equ	TCCR0B_WGM0_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR0B_WGM00	= 3		;          TCCR0B_WGM0 BIT0 position
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

; ----------	Register TCCR0C bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare for Channel B

; ----------	Register TIMSK0 bits		------------------------
.equ	ICIE0		= 5		; 0x20 - Input Capture Interrupt Enable
.equ	OCIE0B		= 2		; 0x04 - Output Compare B Match Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Output Compare A Match Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	ICF0		= 5		; 0x20 - Input Capture Flag
.equ	OCF0B		= 2		; 0x04 - Timer Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer Synchronization Mode
.equ	REMAP		= 1		; 0x02 - Remap Bit for 14 pin part only
.equ	PSR		= 0		; 0x01 - Prescaler Reset



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



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
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
.equ	UMSEL_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL0		= 6		;          UMSEL BIT0 position
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

; ----------	Register UCSRD bits		------------------------
.equ	RXSIE		= 7		; 0x80 - USART RX Start Interrupt Enable
.equ	RXS		= 6		; 0x40 - USART RX Start Flag
.equ	SFDE		= 5		; 0x20 - Start frame detection enable




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 16
.equ	INT_VECTORS_SIZE	= 0x20
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	TIM0_CAPT	; Timer/Counter0 Input Capture
;	5	TIM0_OVF	; Timer/Counter0 Overflow
;	6	TIM0_COMPA	; Timer/Counter Compare Match A
;	7	TIM0_COMPB	; Timer/Counter Compare Match B
;	8	ANA_COMP	; Analog Comparator
;	9	WDT		; Watchdog Time-out
;	10	VLM		; Vcc Voltage Level Monitor
;	11	ADC		; ADC Conversion complete
;	12	USART_RXS	; USART RX Start
;	13	USART_RXC	; USART RX Complete
;	14	USART_DRE	; USART Data register empty
;	15	USART_TXC	; USART Tx Complete



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny102.inc"
;#	
;#	; FUSES BYTE0 byte (addr 0x00)
;#	.set	FUSES_BYTE0	= 0xFF \
;#				  & ~(0 <<SELFPROGEN) \
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
;#		reti			; TIM0_CAPT	 - Timer/Counter0 Input Capture
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; TIM0_COMPA	 - Timer/Counter Compare Match A
;#		reti			; TIM0_COMPB	 - Timer/Counter Compare Match B
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; WDT		 - Watchdog Time-out
;#		reti			; VLM		 - Vcc Voltage Level Monitor
;#		reti			; ADC		 - ADC Conversion complete
;#		reti			; USART_RXS	 - USART RX Start
;#		reti			; USART_RXC	 - USART RX Complete
;#		reti			; USART_DRE	 - USART Data register empty
;#		reti			; USART_TXC	 - USART Tx Complete
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_SRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_SRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY102_INC_ */

; ************************ END OF FILE *********************************

