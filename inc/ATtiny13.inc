;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny13
;* Title             : Register/Mask/Bit Definitions for the ATtiny13
;* File Name         : ATtiny13.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-05-31 13:22:18 UTC
;
;***********************************************************************

#ifndef _ATTINY13_INC_
#define _ATTINY13_INC_

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
.device	ATtiny13
.equ	JTAGID		= 0x9007
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x90
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
.equ	ADDR_IRAM_END			= 0x009F
.equ	ADDR_IRAM_SIZE			= 0x0040

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x003F
.equ	ADDR_EEPROM_SIZE		= 0x0040

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0001
.equ	ADDR_OSCCAL_SIZE		= 0x0002




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register HIGH bits		------------------------
.equ	SELFPRGEN	= 4		; 0x10 - Self Programming enable
.equ	DWEN		= 3		; 0x08 - Debug Wire enable
.equ	BODLEVEL_MASK	= 0x06		;      - Enable BOD and select level (2 bits)
.equ	BODLEVEL0	= 1		;          BODLEVEL BIT0 position
.equ	RSTDISBL	= 0		; 0x01 - Reset Disabled (Enable PB5 as i/o pin)
; ::::  BODLEVEL	:::: bitfield values
;			0x00		; Brown-out detection at VCC=4.3 V
;			0x02		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=1.8 V
;			0x06		; Brown-out detection disabled

; ----------	Register LOW bits		------------------------
.equ	SPIEN		= 7		; 0x80 - Serial program downloading (SPI) enabled
.equ	EESAVE		= 6		; 0x40 - Preserve EEPROM through the Chip Erase cycle
.equ	WDTON		= 5		; 0x20 - Watch-dog Timer always on
.equ	CKDIV8		= 4		; 0x10 - Divide clock by 8 internally
.equ	SUT_CKSEL_MASK	= 0x0F		;      - Select Clock Source (4 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 14 CK + 0 ms
;			0x04		; Ext. Clock; Start-up time: 14 CK + 4 ms
;			0x08		; Ext. Clock; Start-up time: 14 CK + 64 ms
;			0x01		; Int. RC Osc. 4.8 MHz; Start-up time: 14 CK + 0 ms
;			0x05		; Int. RC Osc. 4.8 MHz; Start-up time: 14 CK + 4 ms
;			0x09		; Int. RC Osc. 4.8 MHz; Start-up time: 14 CK + 64 ms
;			0x02		; Int. RC Osc. 9.6 MHz; Start-up time: 14 CK + 0 ms
;			0x06		; Int. RC Osc. 9.6 MHz; Start-up time: 14 CK + 4 ms
;			0x0A		; Int. RC Osc. 9.6 MHz; Start-up time: 14 CK + 64 ms
;			0x03		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 0 ms
;			0x07		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 4 ms
;			0x0B		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 64 ms




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
.equ	TIMSK0		= 0x39		; Timer/Counter0 Interrupt Mask Register
.equ	TIFR0		= 0x38		; Timer/Counter0 Interrupt Flag register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	OCR0A		= 0x36		; Timer/Counter0 Output Compare Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	TCCR0B		= 0x33		; Timer/Counter Control Register B
.equ	TCNT0		= 0x32		; Timer/Counter0
.equ	OSCCAL		= 0x31		; Oscillator Calibration Register
.equ	TCCR0A		= 0x2F		; Timer/Counter  Control Register A
.equ	DWDR		= 0x2E		; Debug Wire Data Register
.equ	OCR0B		= 0x29		; Timer/Counter0 Output Compare Register
.equ	GTCCR		= 0x28		; General Timer Counter Register
.equ	CLKPR		= 0x26		; Clock Prescale Register
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTB		= 0x18		; Data Register, Port B
.equ	DDRB		= 0x17		; Data Direction Register, Port B
.equ	PINB		= 0x16		; Input Pins, Port B
.equ	PCMSK		= 0x15		; Pin Change Enable Mask
.equ	DIDR0		= 0x14		; Digital Input Disable Register 0
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	ADMUX		= 0x07		; The ADC multiplexer Selection Register
.equ	ADCSRA		= 0x06		; The ADC Control and Status register
.equ	ADC		= 0x04		; ADC Data Register  Bytes
.equ	ADCSRB		= 0x03		; ADC Control and Status Register B


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS0		= 6		; 0x40 - Reference Selection Bit 0
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x03		;      - Analog Channel and Gain Selection Bits (2 bits)
.equ	MUX0		= 0		;          MUX BIT0 position

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

; ----------	Register DIDR0 bits		------------------------
.equ	ADC0D		= 5		; 0x20 - ADC0 Digital input Disable
.equ	ADC2D		= 4		; 0x10 - ADC2 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital input Disable
.equ	ADC1D		= 2		; 0x04 - ADC2 Digital input Disable



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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      -  (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



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
;.equ	ISC00		= 0		;          ISC0 BIT0 position
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

; ----------	Register SPMCSR bits		------------------------
.equ	CTPB		= 4		; 0x10 - Clear Temporary Page Buffer
.equ	RFLB		= 3		; 0x08 - Read Fuse and Lock Bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store program Memory Enable



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	ISC01		= 1		; 0x02 - Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE		= 5		; 0x20 - Pin Change Interrupt Enable

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF		= 5		; 0x20 - Pin Change Interrupt Flag



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 3		; 0x08 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 2		; 0x04 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 3		; 0x08 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Match Output A Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Match Output B Mode (2 bits)
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

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/Counter0



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDTIF		= 7		; 0x80 - Watchdog Timeout Interrupt Flag
.equ	WDTIE		= 6		; 0x40 - Watchdog Timeout Interrupt Enable
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
.equ	INT_VECTORS_NUM		= 10
.equ	INT_VECTORS_SIZE	= 0x14
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	PCINT0		; External Interrupt Request 0
;	3	TIM0_OVF	; Timer/Counter0 Overflow
;	4	EE_RDY		; EEPROM Ready
;	5	ANA_COMP	; Analog Comparator
;	6	TIM0_COMPA	; Timer/Counter Compare Match A
;	7	TIM0_COMPB	; Timer/Counter Compare Match B
;	8	WDT		; Watchdog Time-out
;	9	ADC		; ADC Conversion Complete


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
;#		rjmp	PCINT0_ISR	; PCINT0	 - External Interrupt Request 0
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; TIM0_COMPA	 - Timer/Counter Compare Match A
;#		reti			; TIM0_COMPB	 - Timer/Counter Compare Match B
;#		reti			; WDT		 - Watchdog Time-out
;#		reti			; ADC		 - ADC Conversion Complete
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SPL, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY13_INC_ */

; ************************ END OF FILE *********************************

