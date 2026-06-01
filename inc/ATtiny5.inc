;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny5
;* Title             : Register/Mask/Bit Definitions for the ATtiny5
;* File Name         : ATtiny5.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-01 12:44:40 UTC
;
;***********************************************************************

#ifndef _ATTINY5_INC_
#define _ATTINY5_INC_

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
.device	ATtiny5
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x8f
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
.equ	ADDR_FLASH_END			= 0x01FF
.equ	ADDR_FLASH_SIZE			= 0x0200

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
.equ	ADDR_MAPPED_FLASH_END		= 0x41FF
.equ	ADDR_MAPPED_FLASH_SIZE		= 0x0200




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	BYTE0		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register BYTE0 bits		------------------------
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
.equ	SP		= 0x3D		; Stack Pointer 
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
.equ	TCNT0		= 0x28		; Timer/Counter0 
.equ	OCR0A		= 0x26		; Timer/Counter 0 Output Compare Register A 
.equ	OCR0B		= 0x24		; Timer/Counter0 Output Compare Register B 
.equ	ICR0		= 0x22		; Input Capture Register  Bytes
.equ	ACSR		= 0x1F		; Analog Comparator Control And Status Register
.equ	ADCSRA		= 0x1D		; The ADC Control and Status register A
.equ	ADCSRB		= 0x1C		; The ADC Control and Status register B
.equ	ADMUX		= 0x1B		; The ADC multiplexer Selection Register
.equ	ADCL		= 0x19		; ADC Data Register
.equ	DIDR0		= 0x17		; Digital Input Disable Register
.equ	EICRA		= 0x15		; External Interrupt Control Register A
.equ	EIFR		= 0x14		; External Interrupt Flag register
.equ	EIMSK		= 0x13		; External Interrupt Mask register
.equ	PCICR		= 0x12		; Pin Change Interrupt Control Register
.equ	PCIFR		= 0x11		; Pin Change Interrupt Flag Register
.equ	PCMSK		= 0x10		; Pin Change Mask Register
.equ	PORTCR		= 0x0C		; Port Control Register
.equ	PUEB		= 0x03		; Pull-up Enable Control Register
.equ	PORTB		= 0x02		; Input Pins, Port B
.equ	DDRB		= 0x01		; Data Direction Register, Port B
.equ	PINB		= 0x00		; Port B Data register


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	MUX_MASK	= 0x03		;      - Analog Channel Selection Bits (2 bits)
.equ	MUX0		= 0		;          MUX BIT0 position

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
;			0x05		; Timer/Counter0 Compare Match B
;			0x06		; Pin Change Interrupt 0 Request
;			0x07		; Timer/Counter0 Capture Event

; ----------	Register DIDR0 bits		------------------------
.equ	ADC3D		= 3		; 0x08 - 
.equ	ADC2D		= 2		; 0x04 - 
.equ	ADC1D		= 1		; 0x02 - 
.equ	ADC0D		= 0		; 0x01 - 



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
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

; ----------	Register DIDR0 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable



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
.equ	BBMB		= 1		; 0x02 - Break-Before-Make Mode Enable



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
.equ	PCIE0		= 0		; 0x01 - Pin Change Interrupt Enable 0

; ----------	Register PCIFR bits		------------------------
.equ	PCIF0		= 0		; 0x01 - Pin Change Interrupt Flag 0

; ----------	Register PCMSK bits		------------------------
.equ	PCINT_MASK	= 0x0F		;      - Pin Change Enable Masks (4 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position



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




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 11
.equ	INT_VECTORS_SIZE	= 0x16
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	TIM0_CAPT	; Timer/Counter0 Input Capture
;	4	TIM0_OVF	; Timer/Counter0 Overflow
;	5	TIM0_COMPA	; Timer/Counter Compare Match A
;	6	TIM0_COMPB	; Timer/Counter Compare Match B
;	7	ANA_COMP	; Analog Comparator
;	8	WDT		; Watchdog Time-out
;	9	VLM		; Vcc Voltage Level Monitor
;	10	ADC		; ADC Conversion Complete



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny5.inc"
;#	
;#	; FUSES BYTE0 byte (addr 0x00)
;#	.set	FUSES_BYTE0	= 0xFF \
;#				  & ~(0 <<CKOUT) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<RSTDISBL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
;#	.message "====================="
;#	.message "=====  Fuses  ======="
;#	.message "BYTE0		", FUSES_BYTE0
;#	.message "===== Lockbits ======"
;#	.message " LOCKBIT	", LOCKBITS_LOCKBIT
;#	.message "====================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; TIM0_CAPT	 - Timer/Counter0 Input Capture
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; TIM0_COMPA	 - Timer/Counter Compare Match A
;#		reti			; TIM0_COMPB	 - Timer/Counter Compare Match B
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; WDT		 - Watchdog Time-out
;#		reti			; VLM		 - Vcc Voltage Level Monitor
;#		reti			; ADC		 - ADC Conversion Complete
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_SRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_SRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY5_INC_ */

; ************************ END OF FILE *********************************

