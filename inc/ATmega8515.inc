;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega8515
;* Title             : Register/Mask/Bit Definitions for the ATmega8515
;* File Name         : ATmega8515.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-05-31 13:22:31 UTC
;
;***********************************************************************

#ifndef _ATMEGA8515_INC_
#define _ATMEGA8515_INC_

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
.device	ATmega8515
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x93
.equ	SIGNATURE2	= 0x06


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
.equ	ADDR_FLASH_END			= 0x1FFF
.equ	ADDR_FLASH_SIZE			= 0x2000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0x1F00
.equ	ADDR_BOOT_SECTION_1_END		= 0x1FFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0100
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0x1E00
.equ	ADDR_BOOT_SECTION_2_END		= 0x1FFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0200
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0x1C00
.equ	ADDR_BOOT_SECTION_3_END		= 0x1FFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x0400
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0x1800
.equ	ADDR_BOOT_SECTION_4_END		= 0x1FFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x0800

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
.equ	ADDR_IRAM_END			= 0x025F
.equ	ADDR_IRAM_SIZE			= 0x0200
;   XRAM
.equ	ADDR_XRAM_START			= 0x0260
.equ	ADDR_XRAM_END			= 0xFFFF
.equ	ADDR_XRAM_SIZE			= 0xFDA0

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0003
.equ	ADDR_OSCCAL_SIZE		= 0x0004




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register HIGH bits		------------------------
.equ	S8515C		= 7		; 0x80 - AT90S4414/8515 compatibility mode
.equ	WDTON		= 6		; 0x40 - Watch-dog Timer always on
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
.equ	CKOPT		= 4		; 0x10 - CKOPT fuse (operation dependent of CKSEL fuses)]
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flashsize=128 words Boot address=$0F80
;			0x04		; Boot Flash size=256 words Boot address=$0F00
;			0x02		; Boot Flash size=512 words Boot address=$0E00
;			0x00		; Boot Flash size=1024 words Boot address=$0C00

; ----------	Register LOW bits		------------------------
.equ	BODLEVEL	= 7		; 0x80 - Brownout detector trigger level
.equ	BODEN		= 6		; 0x40 - Brown-out detection enabled
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x00		; Brown-out detection at VCC=4.0 V
;			0x80		; Brown-out detection at VCC=2.7 V
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 64 ms
;			0x01		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 0 ms
;			0x11		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 4 ms
;			0x21		; Int. RC Osc. 1 MHz; Start-up time: 6 CK + 64 ms
;			0x02		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 4 ms
;			0x22		; Int. RC Osc. 2 MHz; Start-up time: 6 CK + 64 ms
;			0x03		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 0 ms
;			0x13		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 4 ms
;			0x23		; Int. RC Osc. 4 MHz; Start-up time: 6 CK + 64 ms
;			0x04		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 0 ms
;			0x14		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 4 ms
;			0x24		; Int. RC Osc. 8 MHz; Start-up time: 6 CK + 64 ms
;			0x05		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 0 ms
;			0x15		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 4 ms
;			0x25		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 18 CK + 64 ms
;			0x35		; Ext. RC Osc.         -  0.9 MHz; Start-up time: 6 CK + 4 ms
;			0x06		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 0 ms
;			0x16		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 4 ms
;			0x26		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 18 CK + 64 ms
;			0x36		; Ext. RC Osc. 0.9 MHz -  3.0 MHz; Start-up time: 6 CK + 4 ms
;			0x07		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 0 ms
;			0x17		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 4 ms
;			0x27		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 18 CK + 64 ms
;			0x37		; Ext. RC Osc. 3.0 MHz -  8.0 MHz; Start-up time: 6 CK + 4 ms
;			0x08		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 0 ms
;			0x18		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 4 ms
;			0x28		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 18 CK + 64 ms
;			0x38		; Ext. RC Osc. 8.0 MHz - 12.0 MHz; Start-up time: 6 CK + 4 ms
;			0x09		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4 ms
;			0x19		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 64 ms
;			0x29		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 64 ms
;			0x0A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 4 ms
;			0x1A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 258 CK + 64 ms
;			0x2A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 0 ms
;			0x3A		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 4 ms
;			0x0B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 1K CK + 64 ms
;			0x1B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 0 ms
;			0x2B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 4 ms
;			0x3B		; Ext. Crystal/Resonator Low Freq.; Start-up time: 16K CK + 64 ms
;			0x0C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 4 ms
;			0x1C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 258 CK + 64 ms
;			0x2C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 0 ms
;			0x3C		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 4 ms
;			0x0D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 1K CK + 64 ms
;			0x1D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 0 ms
;			0x2D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 4 ms
;			0x3D		; Ext. Crystal/Resonator Medium Freq.; Start-up time: 16K CK + 64 ms
;			0x0E		; Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 4 ms
;			0x1E		; Ext. Crystal/Resonator High Freq.; Start-up time: 258 CK + 64 ms
;			0x2E		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 0 ms
;			0x3E		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 4 ms
;			0x0F		; Ext. Crystal/Resonator High Freq.; Start-up time: 1K CK + 64 ms
;			0x1F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 0 ms
;			0x2F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 4 ms
;			0x3F		; Ext. Crystal/Resonator High Freq.; Start-up time: 16K CK + 64 ms




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
.equ	BLB0_MASK	= 0x0C		;      - Boot Loader Protection Mode (2 bits)
.equ	BLB00		= 2		;          BLB0 BIT0 position
.equ	BLB1_MASK	= 0x30		;      - Boot Loader Protection Mode (2 bits)
.equ	BLB10		= 4		;          BLB1 BIT0 position
; ::::  LB	:::: bitfield values
;			0x00		; Further programming and verification disabled
;			0x02		; Further programming disabled
;			0x03		; No memory lock features enabled
; ::::  BLB0	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Application Section
;			0x04		; LPM prohibited in Application Section
;			0x08		; SPM prohibited in Application Section
;			0x0C		; No lock on SPM and LPM in Application Section
; ::::  BLB1	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Boot Section
;			0x10		; LPM prohibited in Boot Section
;			0x20		; SPM prohibited in Boot Section
;			0x30		; No lock on SPM and LPM in Boot Section




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	GICR		= 0x3B		; General Interrupt Control Register
.equ	GIFR		= 0x3A		; General Interrupt Flag Register
.equ	TIMSK		= 0x39		; Timer/Counter Interrupt Mask Register
.equ	TIFR		= 0x38		; Timer/Counter Interrupt Flag register
.equ	SPMCR		= 0x37		; Store Program Memory Control Register
.equ	EMCUCR		= 0x36		; Extended MCU Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUCSR		= 0x34		; MCU Control And Status Register
.equ	TCCR0		= 0x33		; Timer/Counter 0 Control Register
.equ	TCNT0		= 0x32		; Timer/Counter 0 Register
.equ	OCR0		= 0x31		; Timer/Counter 0 Output Compare Register
.equ	SFIOR		= 0x30		; Special Function IO Register
.equ	TCCR1A		= 0x2F		; Timer/Counter1 Control Register A
.equ	TCCR1B		= 0x2E		; Timer/Counter1 Control Register B
.equ	TCNT1		= 0x2C		; Timer/Counter1  Bytes
.equ	OCR1A		= 0x2A		; Timer/Counter1 Output Compare Register A  Bytes
.equ	OCR1B		= 0x28		; Timer/Counter1 Output Compare Register B  Bytes
.equ	ICR1		= 0x24		; Timer/Counter1 Input Capture Register  Bytes
.equ	WDTCR		= 0x21		; Watchdog Timer Control Register
.equ	UCSRC		= 0x20		; USART Control and Status Register C
.equ	UBRRH		= 0x20		; USART Baud Rate Register High Byte
.equ	EEAR		= 0x1E		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x1D		; EEPROM Data Register
.equ	EECR		= 0x1C		; EEPROM Control Register
.equ	PORTA		= 0x1B		; Port A Data Register
.equ	DDRA		= 0x1A		; Port A Data Direction Register
.equ	PINA		= 0x19		; Port A Input Pins
.equ	PORTB		= 0x18		; Port B Data Register
.equ	DDRB		= 0x17		; Port B Data Direction Register
.equ	PINB		= 0x16		; Port B Input Pins
.equ	PORTC		= 0x15		; Port C Data Register
.equ	DDRC		= 0x14		; Port C Data Direction Register
.equ	PINC		= 0x13		; Port C Input Pins
.equ	PORTD		= 0x12		; Port D Data Register
.equ	DDRD		= 0x11		; Port D Data Direction Register
.equ	PIND		= 0x10		; Port D Input Pins
.equ	SPDR		= 0x0F		; SPI Data Register
.equ	SPSR		= 0x0E		; SPI Status Register
.equ	SPCR		= 0x0D		; SPI Control Register
.equ	UDR		= 0x0C		; USART I/O Data Register
.equ	UCSRA		= 0x0B		; USART Control and Status Register A
.equ	UCSRB		= 0x0A		; USART Control and Status Register B
.equ	UBRRL		= 0x09		; USART Baud Rate Register Low Byte
.equ	ACSR		= 0x08		; Analog Comparator Control And Status Register
.equ	PORTE		= 0x07		; Port E Data Register
.equ	DDRE		= 0x06		; Port E Data Direction Register
.equ	PINE		= 0x05		; Port E Input Pins
.equ	OSCCAL		= 0x04		; Oscillator Calibration Value


; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
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
.equ	UCSZ2		= 2		; 0x04 - Character Size Bit 2
.equ	RXB8		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB8		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSRC bits		------------------------
.equ	URSEL		= 7		; 0x80 - Register Select
.equ	UMSEL		= 6		; 0x40 - USART Mode Select
.equ	UPM_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM0		= 4		;          UPM BIT0 position
.equ	USBS		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ_MASK	= 0x06		;      - Character Size Bits (2 bits)
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

; ----------	Register UBRRH bits		------------------------
;.equ	URSEL		= 7		; 0x80 - Register Select
.equ	UBRR1_MASK	= 0x0C		;      - USART Baud Rate Register bit 11 (2 bits)
.equ	UBRR10		= 2		;          UBRR1 BIT0 position
.equ	UBRR_MASK	= 0x03		;      - USART Baud Rate Register bits (2 bits)
.equ	UBRR0		= 0		;          UBRR BIT0 position



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit

; ----------	Register SPCR bits		------------------------
.equ	SPIE		= 7		; 0x80 - SPI Interrupt Enable
.equ	SPE		= 6		; 0x40 - SPI Enable
.equ	DORD		= 5		; 0x20 - Data Order
.equ	MSTR		= 4		; 0x10 - Master/Slave Select
.equ	CPOL		= 3		; 0x08 - Clock polarity
.equ	CPHA		= 2		; 0x04 - Clock Phase
.equ	SPR_MASK	= 0x03		;      - SPI Clock Rate Selects (2 bits)
.equ	SPR0		= 0		;          SPR BIT0 position
; ::::  SPR	>>>> This is a part of COMM_SCK_RATE_3BIT enum (see complete values list below)



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

; ----------	Register EMCUCR bits		------------------------
.equ	SM0		= 7		; 0x80 - Sleep Mode Select Bit 0
.equ	SRL_MASK	= 0x70		;      - Wait State Selector Limit bits (3 bits)
.equ	SRL0		= 4		;          SRL BIT0 position
.equ	SRW0_MASK	= 0x0C		;      - Wait State Select Bits for Lower Sector, bits (2 bits)
.equ	SRW00		= 2		;          SRW0 BIT0 position
.equ	SRW11		= 1		; 0x02 - Wait State Select Bits for Upper Sector, bit 1
.equ	ISC2		= 0		; 0x01 - Interrupt Sense Control 2
; ::::  SRL	:::: bitfield values
;			0x00		; LS = N/A, US = 0x1100 - 0xFFFF
;			0x10		; LS = 0x1100 - 0x1FFF, US = 0x2000 - 0xFFFF
;			0x20		; LS = 0x1100 - 0x3FFF, US = 0x4000 - 0xFFFF
;			0x30		; LS = 0x1100 - 0x5FFF, US = 0x6000 - 0xFFFF
;			0x40		; LS = 0x1100 - 0x7FFF, US = 0x8000 - 0xFFFF
;			0x50		; LS = 0x1100 - 0x9FFF, US = 0xA000 - 0xFFFF
;			0x60		; LS = 0x1100 - 0xBFFF, US = 0xC000 - 0xFFFF
;			0x70		; LS = 0x1100 - 0xDFFF, US = 0xE000 - 0xFFFF
; ::::  SRW0	:::: bitfield values
;			0x00		; No wait-states
;			0x04		; Wait one cycle during read/write strobe
;			0x08		; Wait two cycles during read/write strobe
;			0x0C		; Wait two cycles during read/write and wait one cycle before driving out new address

; ----------	Register MCUCR bits		------------------------
.equ	SRE		= 7		; 0x80 - External SRAM/XMEM Enable
.equ	SRW10		= 6		; 0x40 - Wait State Select Bits for Upper Sector, bit 0
.equ	SE		= 5		; 0x20 - Sleep Enable
.equ	SM1		= 4		; 0x10 - Sleep Mode Select Bit 1
.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 Bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
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

; ----------	Register MCUCSR bits		------------------------
.equ	SM2		= 5		; 0x20 - Sleep Mode Select Bit 2
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register SPMCR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read-While-Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read-While-Write Section Read Enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable

; ----------	Register SFIOR bits		------------------------
.equ	XMBK		= 6		; 0x40 - External Memory Bus Keeper Enable
.equ	XMM_MASK	= 0x38		;      - External Memory High Mask Bits (3 bits)
.equ	XMM0		= 3		;          XMM BIT0 position
.equ	PUD		= 2		; 0x04 - Pull-up Disable
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer / Counter 1 and Timer / Counter 0



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GICR bits		------------------------
.equ	INT0		= 6		; 0x40 - External Interrupt Request 0 Enable
.equ	INT1		= 7		; 0x80 - External Interrupt Request 1 Enable
.equ	INT2		= 5		; 0x20 - External Interrupt Request 2 Enable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register GIFR bits		------------------------
.equ	INTF_MASK	= 0xC0		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 6		;          INTF BIT0 position
.equ	INTF2		= 5		; 0x20 - External Interrupt Flag 2



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
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



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0 bits		------------------------
.equ	FOC0		= 7		; 0x80 - Force Output Compare
.equ	WGM00		= 6		; 0x40 - Waveform Generation Mode 0
.equ	COM0_MASK	= 0x30		;      - Compare Match Output Modes (2 bits)
.equ	COM00		= 4		;          COM0 BIT0 position
.equ	WGM01		= 3		; 0x08 - Waveform Generation Mode 1
.equ	CS0_MASK	= 0x07		;      - Clock Selects (3 bits)
.equ	CS00		= 0		;          CS0 BIT0 position
; ::::  WGM00	>>>> This is a part of WAVEFORM_GEN_MODE enum (see complete values list below)
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
.equ	TOIE0		= 1		; 0x02 - Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0		= 0		; 0x01 - Timer/Counter0 Output Compare Match Interrupt register

; ----------	Register TIFR bits		------------------------
.equ	TOV0		= 1		; 0x02 - Timer/Counter0 Overflow Flag
.equ	OCF0		= 0		; 0x01 - Output Compare Flag 0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK bits		------------------------
.equ	TOIE1		= 7		; 0x80 - Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A		= 6		; 0x40 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B		= 5		; 0x20 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	TICIE1		= 3		; 0x08 - Timer/Counter1 Input Capture Interrupt Enable

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
.equ	FOC1A		= 3		; 0x08 - Force Output Compare for Channel A
.equ	FOC1B		= 2		; 0x04 - Force Output Compare for Channel B
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Pulse Width Modulator Select Bits (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Pulse Width Modulator Select Bits (2 bits)
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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  COMM_SCK_RATE_3BIT	:::: values
;			0b000		; fosc/4
;			0b001		; fosc/16
;			0b010		; fosc/64
;			0b011		; fosc/128
;			0b100		; fosc/2
;			0b101		; fosc/8
;			0b110		; fosc/32
;			0b111		; fosc/64
; ::::  WAVEFORM_GEN_MODE	:::: values
;			0b00		; Normal
;			0b10		; PWM, Phase Correct
;			0b01		; CTC
;			0b11		; Fast PWM



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
;	2	INT1		; External Interrupt Request 1
;	3	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	4	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	5	TIMER1_COMPB	; Timer/Counter1 Compare MatchB
;	6	TIMER1_OVF	; Timer/Counter1 Overflow
;	7	TIMER0_OVF	; Timer/Counter0 Overflow
;	8	SPI_STC		; Serial Transfer Complete
;	9	USART_RX	; USART, Rx Complete
;	10	USART_UDRE	; USART Data Register Empty
;	11	USART_TX	; USART, Tx Complete
;	12	ANA_COMP	; Analog Comparator
;	13	INT2		; External Interrupt Request 2
;	14	TIMER0_COMP	; Timer 0 Compare Match
;	15	EE_RDY		; EEPROM Ready
;	16	SPM_RDY		; Store Program Memory Ready


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare MatchB
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - Serial Transfer Complete
;#		reti			; USART_RX	 - USART, Rx Complete
;#		reti			; USART_UDRE	 - USART Data Register Empty
;#		reti			; USART_TX	 - USART, Tx Complete
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; TIMER0_COMP	 - Timer 0 Compare Match
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; SPM_RDY	 - Store Program Memory Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA8515_INC_ */

; ************************ END OF FILE *********************************

