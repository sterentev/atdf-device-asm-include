;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny4313
;* Title             : Register/Mask/Bit Definitions for the ATtiny4313
;* File Name         : ATtiny4313.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-05-27 14:43:31 UTC
;
;***********************************************************************

#ifndef _ATTINY4313_INC_
#define _ATTINY4313_INC_

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
.device	ATtiny4313
.equ	JTAGID		= 0x920D
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x92
.equ	SIGNATURE2	= 0x0d


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
.equ	ADDR_OSCCAL_END			= 0x0001
.equ	ADDR_OSCCAL_SIZE		= 0x0002




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
.equ	DWEN		= 7		; 0x80 - Debug Wire enable
.equ	EESAVE		= 6		; 0x40 - Preserve EEPROM through the Chip Erase cycle
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enable
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	BODLEVEL_MASK	= 0x0E		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 1		;          BODLEVEL BIT0 position
.equ	RSTDISBL	= 0		; 0x01 - External reset disable
; ::::  BODLEVEL	:::: bitfield values
;			0x08		; Brown-out detection at VCC=4.3 V
;			0x0A		; Brown-out detection at VCC=2.7 V
;			0x0C		; Brown-out detection at VCC=1.8 V
;			0x0E		; Brown-out detection disabled

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTD2
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 14 CK + 0   ms
;			0x10		; Ext. Clock; Start-up time: 14 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 14 CK + 65  ms
;			0x02		; Int. RC Osc. 4 MHz; Start-up time: 14 CK + 0   ms
;			0x12		; Int. RC Osc. 4 MHz; Start-up time: 14 CK + 4.1 ms
;			0x22		; Int. RC Osc. 4 MHz; Start-up time: 14 CK + 65  ms
;			0x04		; Int. RC Osc. 8 MHz; Start-up time: 14 CK + 0   ms
;			0x14		; Int. RC Osc. 8 MHz; Start-up time: 14 CK + 4.1 ms
;			0x24		; Int. RC Osc. 8 MHz; Start-up time: 14 CK + 65  ms
;			0x06		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 0 ms
;			0x16		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 4 ms
;			0x26		; Int. RC Osc. 128 kHz; Start-up time: 14 CK + 64 ms
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 14 CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 14 CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 14 CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 14 CK + 65 ms




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
.equ	OCR0B		= 0x3C		; Timer/Counter0 Output Compare Register
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag Register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status register
.equ	OCR0A		= 0x36		; Timer/Counter0 Output Compare Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	TCCR0B		= 0x33		; Timer/Counter Control Register B
.equ	TCNT0		= 0x32		; Timer/Counter0
.equ	OSCCAL		= 0x31		; Oscillator Calibration Register
.equ	TCCR0A		= 0x30		; Timer/Counter  Control Register A
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1B		= 0x28		; Timer/Counter1 Output Compare Register  Bytes
.equ	CLKPR		= 0x26		; Clock Prescale Register
.equ	ICR1		= 0x24		; Timer/Counter1 Input Capture Register  Bytes
.equ	GTCCR		= 0x23		; General Timer Counter Control Register
.equ	TCCR1C		= 0x22		; Timer/Counter1 Control Register C
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	PCMSK0		= 0x20		; Pin Change Interrupt Mask Register 0
.equ	EEAR		= 0x1E		; EEPROM Read/Write Access
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Port B Data Register
.equ	DDRB		= 0x17		; Port B Data Direction Register
.equ	PINB		= 0x16		; Port B Input Pins
.equ	GPIOR2		= 0x15		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x14		; General Purpose I/O Register 1
.equ	GPIOR0		= 0x13		; General Purpose I/O Register 0
.equ	PORTD		= 0x12		; Data Register, Port D
.equ	DDRD		= 0x11		; Data Direction Register, Port D
.equ	PIND		= 0x10		; Input Pins, Port D
.equ	USIDR		= 0x0F		; USI Data Register
.equ	USISR		= 0x0E		; USI Status Register
.equ	USICR		= 0x0D		; USI Control Register
.equ	UDR		= 0x0C		; USART I/O Data Register
.equ	UBRRL		= 0x09		; USART Baud Rate Register Low Byte
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	BODCR		= 0x07		; BOD control register
.equ	PRR		= 0x06		; Power reduction register
.equ	PCMSK2		= 0x05		; Pin Change Interrupt Mask Register 2
.equ	PCMSK1		= 0x04		; Pin Change Interrupt Mask Register 1
.equ	UCSRC		= 0x03		; USART Control and Status Register C
.equ	UBRRH		= 0x02		; USART Baud Rate Register High Byte
.equ	DIDR		= 0x01		; Digital Input Disable Register 1
.equ	UCSRA		= 0x0B		; USART Control and Status Register A
.equ	UCSRB		= 0x0A		; USART Control and Status Register B


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



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UCSRA bits		------------------------
.equ	RXC		= 7		; 0x80 - USART Receive Complete
.equ	TXC		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE		= 5		; 0x20 - USART Data Register Empty
.equ	FE		= 4		; 0x10 - Framing Error
.equ	DOR		= 3		; 0x08 - Data Overrun
.equ	UPE		= 2		; 0x04 - USART Parity Error
.equ	U2X		= 1		; 0x02 - Double the USART Transmission Speed
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
.equ	UCSZ_MASK	= 0x06		;      - Character Size Bits (2 bits)
.equ	UCSZ0		= 1		;          UCSZ BIT0 position
.equ	UCPOL		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
;			0xC0		; Master SPI
; ::::  UPM	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACBG		= 6		; 0x40 - Analog Comparator Bandgap Select
.equ	ACO		= 5		; 0x20 - Analog Compare Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACIC		= 2		; 0x04 - 
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
.equ	EEPM_MASK	= 0x30		;      -  (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



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
; ----------	Register GIMSK bits		------------------------
.equ	INT_MASK	= 0xC0		;      - External Interrupt Request 1 Enable (2 bits)
.equ	INT0		= 6		;          INT BIT0 position
.equ	PCIE		= 5		; 0x20 - 

; ----------	Register GIFR bits		------------------------
.equ	INTF_MASK	= 0xC0		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 6		;          INTF BIT0 position
.equ	PCIF_MASK	= 0x38		;      - Pin Change Interrupt Flags (3 bits)
.equ	PCIF0		= 3		;          PCIF BIT0 position

; ----------	Register PCMSK2 bits		------------------------
.equ	PCMSK2_PCINT_MASK= 0x7F		;      - Pin Change Interrupt Masks (7 bits)
.equ	PCMSK2_PCINT0	= 0		;          PCMSK2_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x07		;      - Pin Change Interrupt Masks (3 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position



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

; ----------	Register SPMCSR bits		------------------------
.equ	CTPB		= 4		; 0x10 - Clear Temporary Page Buffer
.equ	RFLB		= 3		; 0x08 - Read Fuse and Lock Bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable

; ----------	Register MCUCR bits		------------------------
.equ	PUD		= 7		; 0x80 - Pull-up Disable
.equ	SM_MASK		= 0x50		;      - Sleep Mode Select Bits (2 bits)
.equ	SE		= 5		; 0x20 - Sleep Enable
.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x10		; Power Down
;			0x00		; Standby
;			0x10		; Power Down 
; ::::  ISC1	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Any Logical Change in INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
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

; ----------	Register GTCCR bits		------------------------
.equ	PSR10		= 0		; 0x01 - 

; ----------	Register PRR bits		------------------------
.equ	PRTIM_MASK	= 0x0C		;      -  (2 bits)
.equ	PRTIM0		= 2		;          PRTIM BIT0 position
.equ	PRUSI		= 1		; 0x02 - 
.equ	PRUSART		= 0		; 0x01 - 

; ----------	Register BODCR bits		------------------------
.equ	BPDS		= 1		; 0x02 - 
.equ	BPDSE		= 0		; 0x01 - 




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 21
.equ	INT_VECTORS_SIZE	= 0x2A
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	4	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	5	TIMER1_OVF	; Timer/Counter1 Overflow
;	6	TIMER0_OVF	; Timer/Counter0 Overflow
;	7	USART_RX	; USART, Rx Complete
;	8	USART_UDRE	; USART Data Register Empty
;	9	USART_TX	; USART, Tx Complete
;	10	ANA_COMP	; Analog Comparator
;	11	PCINT_B		; Pin Change Interrupt Request B
;	12	TIMER1_COMPB
;	13	TIMER0_COMPA
;	14	TIMER0_COMPB
;	15	USI_START	; USI Start Condition
;	16	USI_OVERFLOW	; USI Overflow
;	17	EEPROM_Ready
;	18	WDT_OVERFLOW	; Watchdog Timer Overflow
;	19	PCINT_A		; Pin Change Interrupt Request A
;	20	PCINT_D		; Pin Change Interrupt Request D


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	INT_RESET	; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT_INT0	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; USART_RX	 - USART, Rx Complete
;#		reti			; USART_UDRE	 - USART Data Register Empty
;#		reti			; USART_TX	 - USART, Tx Complete
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; PCINT_B	 - Pin Change Interrupt Request B
;#		reti			; TIMER1_COMPB	 - 
;#		reti			; TIMER0_COMPA	 - 
;#		reti			; TIMER0_COMPB	 - 
;#		reti			; USI_START	 - USI Start Condition
;#		reti			; USI_OVERFLOW	 - USI Overflow
;#		reti			; EEPROM_Ready	 - 
;#		reti			; WDT_OVERFLOW	 - Watchdog Timer Overflow
;#		reti			; PCINT_A	 - Pin Change Interrupt Request A
;#		reti			; PCINT_D	 - Pin Change Interrupt Request D
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	INT_RESET:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY4313_INC_ */

; ************************ END OF FILE *********************************

