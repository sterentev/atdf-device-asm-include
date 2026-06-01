;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny441
;* Title             : Register/Mask/Bit Definitions for the ATtiny441
;* File Name         : ATtiny441.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-06-01 12:44:40 UTC
;
;***********************************************************************

#ifndef _ATTINY441_INC_
#define _ATTINY441_INC_

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
.device	ATtiny441
.equ	JTAGID		= 0x9215
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x92
.equ	SIGNATURE2	= 0x15


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
.equ	ADDR_MAPPED_IO_END		= 0x00FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x00E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0100
.equ	ADDR_IRAM_END			= 0x01FF
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
.equ	ULPOSCSEL_MASK	= 0xE0		;      - Frequency selection for internal ULP oscillator. The selection only affects system clock, watchdog and reset timeout always use 32 kHz clock. (3 bits)
.equ	ULPOSCSEL0	= 5		;          ULPOSCSEL BIT0 position
.equ	BODPD_MASK	= 0x18		;      - BOD mode of operation when the device is in sleep mode (2 bits)
.equ	BODPD0		= 3		;          BODPD BIT0 position
.equ	BODACT_MASK	= 0x06		;      - BOD mode of operation when the device is active or idle (2 bits)
.equ	BODACT0		= 1		;          BODACT BIT0 position
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming enable
; ::::  ULPOSCSEL	:::: bitfield values
;			0xE0		; 32 kHz
;			0xC0		; 64 kHz
;			0xA0		; 128 kHz
;			0x80		; 256 kHz
;			0x60		; 512 kHz
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
;			0x04		; Int. ULP Osc.; Start-up time PWRDWN/RESET: 6 CK/16 CK + 16 ms
;			0x06		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1K CK/16 CK + 16 ms
;			0x16		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32K CK/16 CK + 16 ms
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
.equ	TCCR2A		= 0xCA		; [MEMORY MAPPED] Timer/Counter2 Control Register A
.equ	TCCR2B		= 0xC9		; [MEMORY MAPPED] Timer/Counter2 Control Register B
.equ	TCCR2C		= 0xC8		; [MEMORY MAPPED] Timer/Counter2 Control Register C
.equ	TCNT2		= 0xC6		; [MEMORY MAPPED] Timer/Counter2  Bytes
.equ	OCR2A		= 0xC4		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register A  Bytes
.equ	OCR2B		= 0xC2		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register B  Bytes
.equ	ICR2		= 0xC0		; [MEMORY MAPPED] Timer/Counter2 Input Capture Register  Bytes
.equ	SPCR		= 0xB2		; [MEMORY MAPPED] SPI Control Register
.equ	SPSR		= 0xB1		; [MEMORY MAPPED] SPI Status Register
.equ	SPDR		= 0xB0		; [MEMORY MAPPED] SPI Data Register
.equ	TWSCRA		= 0xA5		; [MEMORY MAPPED] TWI Slave Control Register A
.equ	TWSCRB		= 0xA4		; [MEMORY MAPPED] TWI Slave Control Register B
.equ	TWSSRA		= 0xA3		; [MEMORY MAPPED] TWI Slave Status Register A
.equ	TWSA		= 0xA2		; [MEMORY MAPPED] TWI Slave Address Register
.equ	TWSAM		= 0xA1		; [MEMORY MAPPED] TWI Slave Address Mask Register
.equ	TWSD		= 0xA0		; [MEMORY MAPPED] TWI Slave Data Register
.equ	UCSR1A		= 0x96		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UCSR1B		= 0x95		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR1C		= 0x94		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR1D		= 0x93		; [MEMORY MAPPED] USART Control and Status Register D
.equ	UBRR1		= 0x91		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UDR1		= 0x90		; [MEMORY MAPPED] USART I/O Data Register
.equ	UCSR0A		= 0x86		; [MEMORY MAPPED] USART Control and Status Register A
.equ	UCSR0B		= 0x85		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR0C		= 0x84		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR0D		= 0x83		; [MEMORY MAPPED] USART Control and Status Register D
.equ	UBRR0		= 0x81		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UDR0		= 0x80		; [MEMORY MAPPED] USART I/O Data Register
.equ	OSCCAL1		= 0x77		; [MEMORY MAPPED] Oscillator Calibration Register 32kHz
.equ	OSCTCAL0B	= 0x76		; [MEMORY MAPPED] Oscillator Temperature Calibration Register B
.equ	OSCTCAL0A	= 0x75		; [MEMORY MAPPED] Oscillator Temperature Calibration Register A
.equ	OSCCAL0		= 0x74		; [MEMORY MAPPED] Oscillator Calibration Register 8MHz
.equ	CLKPR		= 0x73		; [MEMORY MAPPED] Clock Prescale Register
.equ	CLKCR		= 0x72		; [MEMORY MAPPED] Clock Control Register
.equ	CCP		= 0x71		; [MEMORY MAPPED] Configuration Change Protection
.equ	PRR		= 0x70		; [MEMORY MAPPED] Power Reduction Register
.equ	PHDE		= 0x6A		; [MEMORY MAPPED] Port High Drive Enable Register
.equ	TOCPMSA1	= 0x68		; [MEMORY MAPPED] Timer Output Compare Pin Mux Selection 1
.equ	TOCPMSA0	= 0x67		; [MEMORY MAPPED] Timer Output Compare Pin Mux Selection 0
.equ	TOCPMCOE	= 0x66		; [MEMORY MAPPED] Timer Output Compare Pin Mux Channel Output Enable
.equ	REMAP		= 0x65		; [MEMORY MAPPED] Remap Port Pins
.equ	PORTCR		= 0x64		; [MEMORY MAPPED] Port Control Register
.equ	PUEA		= 0x63		; [MEMORY MAPPED] Pull-up Enable Control Register
.equ	PUEB		= 0x62		; [MEMORY MAPPED] Pull-up Enable Control Register
.equ	DIDR1		= 0x61		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x60		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	OCR0B		= 0x3C		; Timer/Counter0 Output Compare Register B
.equ	GIMSK		= 0x3B		; General Interrupt Mask Register
.equ	GIFR		= 0x3A		; General Interrupt Flag register
.equ	TIMSK0		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR0		= 0x38		; Timer/Counter0 Interrupt Flag Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	OCR0A		= 0x36		; Timer/Counter0 Output Compare Register A
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	TCCR0B		= 0x33		; Timer/Counter Control Register B
.equ	TCNT0		= 0x32		; Timer/Counter0
.equ	TCCR0A		= 0x30		; Timer/Counter  Control Register A
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1B		= 0x28		; Timer/Counter1 Output Compare Register B  Bytes
.equ	ICR1		= 0x24		; Timer/Counter1 Input Capture Register  Bytes
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	TCCR1C		= 0x22		; Timer/Counter1 Control Register C
.equ	WDTCSR		= 0x21		; Watchdog Timer Control and Status Register
.equ	PCMSK1		= 0x20		; Pin Change Enable Mask 1
.equ	EEAR		= 0x1E		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Data Direction Register, Port A
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Input Pins, Port B
.equ	DDRB		= 0x17		; Data Direction Register, Port B
.equ	PINB		= 0x16		; Port B Data register
.equ	GPIOR2		= 0x15		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x14		; General Purpose I/O Register 1
.equ	GPIOR0		= 0x13		; General Purpose I/O Register 0
.equ	PCMSK0		= 0x12		; Pin Change Enable Mask 0
.equ	TIMSK2		= 0x11		; Timer/Counter2 Interrupt Mask Register
.equ	TIFR2		= 0x10		; Timer/Counter Interrupt Flag register
.equ	TIMSK1		= 0x0F		; Timer/Counter1 Interrupt Mask Register
.equ	TIFR1		= 0x0E		; Timer/Counter Interrupt Flag register
.equ	ACSR1B		= 0x0D		; Analog Comparator 1 Control And Status Register B
.equ	ACSR1A		= 0x0C		; Analog Comparator 1 Control And Status Register A
.equ	ACSR0B		= 0x0B		; Analog Comparator 0 Control And Status Register B
.equ	ACSR0A		= 0x0A		; Analog Comparator 0 Control And Status Register A
.equ	ADMUXA		= 0x09		; The ADC multiplexer Selection Register A
.equ	ADMUXB		= 0x08		; The ADC multiplexer Selection Register B
.equ	ADC		= 0x06		; ADC Data Register  Bytes
.equ	ADCSRA		= 0x05		; The ADC Control and Status register
.equ	ADCSRB		= 0x04		; ADC Control and Status Register B


; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PORTCR bits		------------------------
.equ	BBMB		= 1		; 0x02 - Break-Before-Make Mode Enable

; ----------	Register PORTCR bits		------------------------
.equ	BBMA		= 0		; 0x01 - Break-Before-Make Mode Enable

; ----------	Register PHDE bits		------------------------
.equ	PHDEA_MASK	= 0x03		;      - PortA High Drive Enable (2 bits)
.equ	PHDEA0		= 0		;          PHDEA BIT0 position



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
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

; ----------	Register REMAP bits		------------------------
.equ	U0MAP		= 0		; 0x01 - USART0 Pin Mapping



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
.equ	TWHNM		= 3		; 0x08 - TWI High Noise Mode
.equ	TWAA		= 2		; 0x04 - TWI Acknowledge Action
.equ	TWCMD_MASK	= 0x03		;      -  (2 bits)
.equ	TWCMD0		= 0		;          TWCMD BIT0 position

; ----------	Register TWSSRA bits		------------------------
.equ	TWDIF		= 7		; 0x80 - TWI Data Interrupt Flag.
.equ	TWASIF		= 6		; 0x40 - TWI Address/Stop Interrupt Flag
.equ	TWCH		= 5		; 0x20 - TWI Clock Hold
.equ	TWRA		= 4		; 0x10 - TWI Receive Acknowledge
.equ	TWC		= 3		; 0x08 - TWI Collision
.equ	TWBE		= 2		; 0x04 - TWI Bus Error
.equ	TWDIR		= 1		; 0x02 - TWI Read/Write Direction
.equ	TWAS		= 0		; 0x01 - TWI Address or Stop

; ----------	Register TWSD bits		------------------------
.equ	TWSD_MASK	= 0xFF		;      - TWI slave data bit (8 bits)
.equ	TWSD0		= 0		;          TWSD BIT0 position

; ----------	Register TWSAM bits		------------------------
.equ	TWSAM_MASK	= 0xFE		;      - TWI Address Mask Bits (7 bits)
.equ	TWSAM0		= 1		;          TWSAM BIT0 position
.equ	TWAE		= 0		; 0x01 - TWI Address Enable



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUXA bits		------------------------
.equ	MUX_MASK	= 0x3F		;      - Analog Channel and Gain Selection Bits (6 bits)
.equ	MUX0		= 0		;          MUX BIT0 position

; ----------	Register ADMUXB bits		------------------------
.equ	REFS_MASK	= 0xE0		;      - Reference Selection Bits (3 bits)
.equ	REFS0		= 5		;          REFS BIT0 position
.equ	GSEL_MASK	= 0x03		;      - Gain Selection Bits (2 bits)
.equ	GSEL0		= 0		;          GSEL BIT0 position

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
;			0x01		; Analog Comparator 0
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter0 Compare Match A
;			0x04		; Timer/Counter0 Overflow
;			0x05		; Timer/Counter1 Compare Match A
;			0x06		; Timer/Counter1 Overflow
;			0x07		; Timer/Counter1 Capture Event

; ----------	Register DIDR1 bits		------------------------
.equ	ADC9D		= 3		; 0x08 - ADC9 Digital Input Disable
.equ	ADC8D		= 2		; 0x04 - ADC8 Digital input Disable
.equ	ADC10D		= 1		; 0x02 - ADC10 Digital input Disable
.equ	ADC11D		= 0		; 0x01 - ADC11 Digital input Disable

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC7 Digital input Disable
.equ	ADC6D		= 6		; 0x40 - ADC6 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4/AIN11 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3/AIN10 Digital Input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2/AIN01 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1/AIN00 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0/AREF Digital input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSR0B bits		------------------------
.equ	HSEL0		= 7		; 0x80 - Analog Comparator 0 Hysteresis Select
.equ	HLEV0		= 6		; 0x40 - Analog Comparator 0 Hysteresis Level
.equ	ACOE0		= 4		; 0x10 - Analog Comparator 0 Output Pin Enable
.equ	ACNMUX_MASK	= 0x0C		;      - Analog Comparator 0 Negative Input Multiplexer (2 bits)
.equ	ACNMUX0		= 2		;          ACNMUX BIT0 position
.equ	ACPMUX_MASK	= 0x03		;      - Analog Comparator 0 Positive Input Multiplexer Bits 1:0 (2 bits)
.equ	ACPMUX0		= 0		;          ACPMUX BIT0 position

; ----------	Register ACSR0A bits		------------------------
.equ	ACD0		= 7		; 0x80 - Analog Comparator 0 Disable
.equ	ACPMUX2		= 6		; 0x40 - Analog Comparator 0 Positive Input Multiplexer Bit 2
.equ	ACO0		= 5		; 0x20 - Analog Comparator 0 Output
.equ	ACI0		= 4		; 0x10 - Analog Comparator 0 Interrupt Flag
.equ	ACIE0		= 3		; 0x08 - Analog Comparator 0 Interrupt Enable
.equ	ACIC0		= 2		; 0x04 - Analog Comparator 0 Input Capture Enable
.equ	ACIS0_MASK	= 0x03		;      - Analog Comparator 0 Interrupt Mode Select bits (2 bits)
.equ	ACIS00		= 0		;          ACIS0 BIT0 position
; ::::  ACIS0	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge

; ----------	Register ACSR1B bits		------------------------
.equ	HSEL1		= 7		; 0x80 - Analog Comparator 1 Hysteresis Select
.equ	HLEV1		= 6		; 0x40 - Analog Comparator 1 Hysteresis Level
.equ	ACOE1		= 4		; 0x10 - Analog Comparator 1 Output Pin Enable
.equ	ACME1		= 2		; 0x04 - Analog Comparator 1 Multiplexer Enable

; ----------	Register ACSR1A bits		------------------------
.equ	ACD1		= 7		; 0x80 - Analog Comparator 1 Disable
.equ	ACBG1		= 6		; 0x40 - Analog Comparator 1 Bandgap Select
.equ	ACO1		= 5		; 0x20 - Analog Comparator 1 Output
.equ	ACI1		= 4		; 0x10 - Analog Comparator 1 Interrupt Flag
.equ	ACIE1		= 3		; 0x08 - Analog Comparator 1 Interrupt Enable
.equ	ACIC1		= 2		; 0x04 - Analog Comparator 1 Input Capture Enable
.equ	ACIS1_MASK	= 0x03		;      - Analog Comparator 1 Interrupt Mode Select bits (2 bits)
.equ	ACIS10		= 0		;          ACIS1 BIT0 position
; ::::  ACIS1	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge



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
.equ	CS1_MASK	= 0x07		;      - Clock Select bits (3 bits)
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
.equ	PSR		= 0		; 0x01 - Prescaler Reset Timer/CounterN

; ----------	Register TIMSK2 bits		------------------------
.equ	ICIE2		= 5		; 0x20 - Timer/Counter2 Input Capture Interrupt Enable
.equ	OCIE2B		= 2		; 0x04 - Timer/Counter2 Output Compare B Match Interrupt Enable
.equ	OCIE2A		= 1		; 0x02 - Timer/Counter2 Output Compare A Match Interrupt Enable
.equ	TOIE2		= 0		; 0x01 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR2 bits		------------------------
.equ	ICF2		= 5		; 0x20 - Timer/Counter2 Input Capture Flag
.equ	OCF2B		= 2		; 0x04 - Timer/Counter2 Output Compare B Match Flag
.equ	OCF2A		= 1		; 0x02 - Timer/Counter2 Output Compare A Match Flag
.equ	TOV2		= 0		; 0x01 - Timer/Counter2 Overflow Flag

; ----------	Register TCCR2A bits		------------------------
.equ	COM2A_MASK	= 0xC0		;      - Compare Output Mode 2A, bits (2 bits)
.equ	COM2A0		= 6		;          COM2A BIT0 position
.equ	COM2B_MASK	= 0x30		;      - Compare Output Mode 2B, bits (2 bits)
.equ	COM2B0		= 4		;          COM2B BIT0 position
.equ	TCCR2A_WGM2_MASK= 0x03		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR2A_WGM20	= 0		;          TCCR2A_WGM2 BIT0 position

; ----------	Register TCCR2B bits		------------------------
.equ	ICNC2		= 7		; 0x80 - Input Capture 2 Noise Canceler
.equ	ICES2		= 6		; 0x40 - Input Capture 2 Edge Select
.equ	TCCR2B_WGM2_MASK= 0x18		;      - Waveform Generation Mode Bits (2 bits)
.equ	TCCR2B_WGM20	= 3		;          TCCR2B_WGM2 BIT0 position
.equ	CS2_MASK	= 0x07		;      - Clock Select bits (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  CS2	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR2C bits		------------------------
.equ	FOC2A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC2B		= 6		; 0x40 - Force Output Compare for Channel B

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR		= 0		; 0x01 - Prescaler Reset Timer/CounterN



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
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSR		= 0		; 0x01 - Prescaler Reset Timer/CounterN



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	ISC01		= 1		; 0x02 - Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register GIMSK bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	PCIE_MASK	= 0x30		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position

; ----------	Register GIFR bits		------------------------
.equ	INTF0		= 6		; 0x40 - External Interrupt Flag 0
.equ	PCIF_MASK	= 0x30		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 4		;          PCIF BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT8		= 0		; 0x01 - Pin Change Enable Mask 1 Bit 0
.equ	PCINT9		= 1		; 0x02 - Pin Change Enable Mask 1 Bit 1
.equ	PCINT10		= 2		; 0x04 - Pin Change Enable Mask 1 Bit 2
.equ	PCINT11		= 3		; 0x08 - Pin Change Enable Mask 1 Bit 3

; ----------	Register PCMSK0 bits		------------------------
.equ	PCINT0		= 0		; 0x01 - Pin Change Enable Mask 0 Bit 0
.equ	PCINT1		= 1		; 0x02 - Pin Change Enable Mask 0 Bit 1
.equ	PCINT2		= 2		; 0x04 - Pin Change Enable Mask 0 Bit 2
.equ	PCINT3		= 3		; 0x08 - Pin Change Enable Mask 0 Bit 3
.equ	PCINT4		= 4		; 0x10 - Pin Change Enable Mask 0 Bit 4
.equ	PCINT5		= 5		; 0x20 - Pin Change Enable Mask 0 Bit 5
.equ	PCINT6		= 6		; 0x40 - Pin Change Enable Mask 0 Bit 6
.equ	PCINT7		= 7		; 0x80 - Pin Change Enable Mask 0 Bit 7



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PRR bits		------------------------
.equ	PRTWI		= 7		; 0x80 - Power Reduction TWI
.equ	PRUSART1	= 6		; 0x40 - Power Reduction USART1
.equ	PRUSART0	= 5		; 0x20 - Power Reduction USART0
.equ	PRSPI		= 4		; 0x10 - Power Reduction SPI
.equ	PRTIM2		= 3		; 0x08 - Power Reduction Timer/Counter2
.equ	PRTIM1		= 2		; 0x04 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 1		; 0x02 - Power Reduction Timer/Counter0
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

; ----------	Register CLKCR bits		------------------------
.equ	OSCRDY		= 7		; 0x80 - Oscillator Ready
.equ	CSTR		= 6		; 0x40 - Clock Switch Trigger
.equ	CKOUTC		= 5		; 0x20 - Clock Output (Copy). Active low.
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



; ====	TOCPM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TOCPMSA1 bits		------------------------
.equ	TOCC7S_MASK	= 0xC0		;      - Timer Output Compare Channel 7 Selection Bits (2 bits)
.equ	TOCC7S0		= 6		;          TOCC7S BIT0 position
.equ	TOCC6S_MASK	= 0x30		;      - Timer Output Compare Channel 6 Selection Bits (2 bits)
.equ	TOCC6S0		= 4		;          TOCC6S BIT0 position
.equ	TOCC5S_MASK	= 0x0C		;      - Timer Output Compare Channel 5 Selection Bits (2 bits)
.equ	TOCC5S0		= 2		;          TOCC5S BIT0 position
.equ	TOCC4S_MASK	= 0x03		;      - Timer Output Compare Channel 4 Selection Bits (2 bits)
.equ	TOCC4S0		= 0		;          TOCC4S BIT0 position

; ----------	Register TOCPMSA0 bits		------------------------
.equ	TOCC3S_MASK	= 0xC0		;      - Timer Output Compare Channel 3 Selection Bits (2 bits)
.equ	TOCC3S0		= 6		;          TOCC3S BIT0 position
.equ	TOCC2S_MASK	= 0x30		;      - Timer Output Compare Channel 2 Selection Bits (2 bits)
.equ	TOCC2S0		= 4		;          TOCC2S BIT0 position
.equ	TOCC1S_MASK	= 0x0C		;      - Timer Output Compare Channel 1 Selection Bits (2 bits)
.equ	TOCC1S0		= 2		;          TOCC1S BIT0 position
.equ	TOCC0S_MASK	= 0x03		;      - Timer Output Compare Channel 0 Selection Bits (2 bits)
.equ	TOCC0S0		= 0		;          TOCC0S BIT0 position

; ----------	Register TOCPMCOE bits		------------------------
.equ	TOCC7OE		= 7		; 0x80 - Timer Output Compare Channel 7 Output Enable
.equ	TOCC6OE		= 6		; 0x40 - Timer Output Compare Channel 6 Output Enable
.equ	TOCC5OE		= 5		; 0x20 - Timer Output Compare Channel 5 Output Enable
.equ	TOCC4OE		= 4		; 0x10 - Timer Output Compare Channel 4 Output Enable
.equ	TOCC3OE		= 3		; 0x08 - Timer Output Compare Channel 3 Output Enable
.equ	TOCC2OE		= 2		; 0x04 - Timer Output Compare Channel 2 Output Enable
.equ	TOCC1OE		= 1		; 0x02 - Timer Output Compare Channel 1 Output Enable
.equ	TOCC0OE		= 0		; 0x01 - Timer Output Compare Channel 0 Output Enable



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

; ----------	Register REMAP bits		------------------------
.equ	SPIMAP		= 1		; 0x02 - SPI Pin Mapping




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  INTERRUPT_SENSE_CONTROL	:::: values
;			0b00		; Low Level of INTX
;			0b01		; Reserved
;			0b10		; Falling Edge of INTX
;			0b11		; Rising Edge of INTX



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 30
.equ	INT_VECTORS_SIZE	= 0x3C
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	WDT		; Watchdog Time-out Interrupt
;	5	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	6	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	7	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	8	TIMER1_OVF	; Timer/Counter1 Overflow
;	9	TIMER0_COMPA	; TimerCounter0 Compare Match A
;	10	TIMER0_COMPB	; TimerCounter0 Compare Match B
;	11	TIMER0_OVF	; Timer/Counter0 Overflow
;	12	ANA_COMP0	; Analog Comparator 0
;	13	ADC		; ADC Conversion Complete
;	14	EE_RDY		; EEPROM Ready
;	15	ANA_COMP1	; Analog Comparator 1
;	16	TIMER2_CAPT	; Timer/Counter2 Capture Event
;	17	TIMER2_COMPA	; Timer/Counter2 Compare Match A
;	18	TIMER2_COMPB	; Timer/Counter2 Compare Match B
;	19	TIMER2_OVF	; Timer/Counter2 Overflow
;	20	SPI		; Serial Peripheral Interface
;	21	USART0_START	; USART0, Start
;	22	USART0_RX	; USART0, Rx Complete
;	23	USART0_UDRE	; USART0 Data Register Empty
;	24	USART0_TX	; USART0, Tx Complete
;	25	USART1_START	; USART1, Start
;	26	USART1_RX	; USART1, Rx Complete
;	27	USART1_UDRE	; USART1 Data Register Empty
;	28	USART1_TX	; USART1, Tx Complete
;	29	TWI_SLAVE	; Two-wire Serial Interface



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATtiny441.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	ULPOSCSEL	= 0xE0	; 32 kHz
;#	.set	BODPD		= 0x18	; Disabled
;#	.set	BODACT		= 0x06	; Disabled
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  &  (~ULPOSCSEL_MASK | ULPOSCSEL) \
;#				  &  (~BODPD_MASK | BODPD) \
;#				  &  (~BODACT_MASK | BODACT) \
;#				  & ~(0 <<SELFPRGEN)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BODLEVEL	= 
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
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - TimerCounter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - TimerCounter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; ANA_COMP0	 - Analog Comparator 0
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP1	 - Analog Comparator 1
;#		reti			; TIMER2_CAPT	 - Timer/Counter2 Capture Event
;#		reti			; TIMER2_COMPA	 - Timer/Counter2 Compare Match A
;#		reti			; TIMER2_COMPB	 - Timer/Counter2 Compare Match B
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; SPI		 - Serial Peripheral Interface
;#		reti			; USART0_START	 - USART0, Start
;#		reti			; USART0_RX	 - USART0, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data Register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; USART1_START	 - USART1, Start
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1 Data Register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; TWI_SLAVE	 - Two-wire Serial Interface
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY441_INC_ */

; ************************ END OF FILE *********************************

