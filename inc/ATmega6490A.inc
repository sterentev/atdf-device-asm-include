;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega6490A
;* Title             : Register/Mask/Bit Definitions for the ATmega6490A
;* File Name         : ATmega6490A.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-05-27 14:43:42 UTC
;
;***********************************************************************

#ifndef _ATMEGA6490A_INC_
#define _ATMEGA6490A_INC_

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
.device	ATmega6490A
.equ	JTAGID		= 0x0960C03F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x96
.equ	SIGNATURE2	= 0x04


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
.equ	ADDR_FLASH_END			= 0xFFFF
.equ	ADDR_FLASH_SIZE			= 0x00010000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0xFC00
.equ	ADDR_BOOT_SECTION_1_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0400
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0xF800
.equ	ADDR_BOOT_SECTION_2_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0800
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0xF000
.equ	ADDR_BOOT_SECTION_3_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x1000
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0xE000
.equ	ADDR_BOOT_SECTION_4_END		= 0xFFFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x2000

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
.equ	ADDR_IRAM_END			= 0x10FF
.equ	ADDR_IRAM_SIZE			= 0x1000

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x07FF
.equ	ADDR_EEPROM_SIZE		= 0x0800

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
.equ	BODLEVEL_MASK	= 0x06		;      - Brown-out Detector trigger level (2 bits)
.equ	BODLEVEL0	= 1		;          BODLEVEL BIT0 position
.equ	RSTDISBL	= 0		; 0x01 - External Reset Disable
; ::::  BODLEVEL	:::: bitfield values
;			0x06		; Brown-out detection disabled
;			0x04		; Brown-out detection at VCC=1.8 V
;			0x02		; Brown-out detection at VCC=2.7 V
;			0x00		; Brown-out detection at VCC=4.3 V

; ----------	Register HIGH bits		------------------------
.equ	OCDEN		= 7		; 0x80 - On-Chip Debug Enabled
.equ	JTAGEN		= 6		; 0x40 - JTAG Interface Enabled
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enable
.equ	WDTON		= 4		; 0x10 - Watchdog timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words Boot address=$7E00
;			0x04		; Boot Flash size=1024 words Boot address=$7C00
;			0x02		; Boot Flash size=2048 words Boot address=$7800
;			0x00		; Boot Flash size=4096 words Boot address=$7000

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTE7
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 65 ms
;			0x02		; Int. RC Osc.; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x22		; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;			0x07		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms
;			0x17		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms
;			0x27		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms
;			0x06		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms
;			0x16		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms
;			0x26		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 258 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 1K CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time: 16K CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 258 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 1K CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time: 16K CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 258 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 1K CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time: 16K CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 1K CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 16K CK + 65 ms




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
.equ	LCDDR19		= 0xFF		; [MEMORY MAPPED] LCD Data Register 19
.equ	LCDDR18		= 0xFE		; [MEMORY MAPPED] LCD Data Register 18
.equ	LCDDR17		= 0xFD		; [MEMORY MAPPED] LCD Data Register 17
.equ	LCDDR16		= 0xFC		; [MEMORY MAPPED] LCD Data Register 16
.equ	LCDDR15		= 0xFB		; [MEMORY MAPPED] LCD Data Register 15
.equ	LCDDR14		= 0xFA		; [MEMORY MAPPED] LCD Data Register 14
.equ	LCDDR13		= 0xF9		; [MEMORY MAPPED] LCD Data Register 13
.equ	LCDDR12		= 0xF8		; [MEMORY MAPPED] LCD Data Register 12
.equ	LCDDR11		= 0xF7		; [MEMORY MAPPED] LCD Data Register 11
.equ	LCDDR10		= 0xF6		; [MEMORY MAPPED] LCD Data Register 10
.equ	LCDDR9		= 0xF5		; [MEMORY MAPPED] LCD Data Register 9
.equ	LCDDR8		= 0xF4		; [MEMORY MAPPED] LCD Data Register 8
.equ	LCDDR7		= 0xF3		; [MEMORY MAPPED] LCD Data Register 7
.equ	LCDDR6		= 0xF2		; [MEMORY MAPPED] LCD Data Register 6
.equ	LCDDR5		= 0xF1		; [MEMORY MAPPED] LCD Data Register 5
.equ	LCDDR4		= 0xF0		; [MEMORY MAPPED] LCD Data Register 4
.equ	LCDDR3		= 0xEF		; [MEMORY MAPPED] LCD Data Register 3
.equ	LCDDR2		= 0xEE		; [MEMORY MAPPED] LCD Data Register 2
.equ	LCDDR1		= 0xED		; [MEMORY MAPPED] LCD Data Register 1
.equ	LCDDR0		= 0xEC		; [MEMORY MAPPED] LCD Data Register 0
.equ	LCDCCR		= 0xE7		; [MEMORY MAPPED] LCD Contrast Control Register
.equ	LCDFRR		= 0xE6		; [MEMORY MAPPED] LCD Frame Rate Register
.equ	LCDCRB		= 0xE5		; [MEMORY MAPPED] LCD Control and Status Register B
.equ	LCDCRA		= 0xE4		; [MEMORY MAPPED] LCD Control and Status Register A
.equ	PORTJ		= 0xDD		; [MEMORY MAPPED] PORT J Data Register
.equ	DDRJ		= 0xDC		; [MEMORY MAPPED] PORT J Data Direction Register
.equ	PINJ		= 0xDB		; [MEMORY MAPPED] PORT J Input Pins
.equ	PORTH		= 0xDA		; [MEMORY MAPPED] PORT H Data Register
.equ	DDRH		= 0xD9		; [MEMORY MAPPED] PORT H Data Direction Register
.equ	PINH		= 0xD8		; [MEMORY MAPPED] PORT H Input Pins
.equ	UDR0		= 0xC6		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR0		= 0xC4		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UCSR0C		= 0xC2		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR0B		= 0xC1		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR0A		= 0xC0		; [MEMORY MAPPED] USART Control and Status Register A
.equ	USIDR		= 0xBA		; [MEMORY MAPPED] USI Data Register
.equ	USISR		= 0xB9		; [MEMORY MAPPED] USI Status Register
.equ	USICR		= 0xB8		; [MEMORY MAPPED] USI Control Register
.equ	ASSR		= 0xB6		; [MEMORY MAPPED] Asynchronous Status Register
.equ	OCR2A		= 0xB3		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register
.equ	TCNT2		= 0xB2		; [MEMORY MAPPED] Timer/Counter2
.equ	TCCR2A		= 0xB0		; [MEMORY MAPPED] Timer/Counter2 Control Register
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register A  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter 1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register
.equ	ADC		= 0x78		; [MEMORY MAPPED] ADC Data Register  Bytes
.equ	PCMSK3		= 0x73		; [MEMORY MAPPED] Pin Change Mask Register 3
.equ	TIMSK2		= 0x70		; [MEMORY MAPPED] Timer/Counter2 Interrupt Mask register
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter1 Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK2		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	OCDR		= 0x31		; On-Chip Debug Related Register in I/O Memory
.equ	ACSR		= 0x30		; Analog Comparator Control And Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0A		= 0x24		; Timer/Counter0 Control Register
.equ	GTCCR		= 0x23		; General Timer/Control Register
.equ	EEAR		= 0x21		; EEPROM Read/Write Access  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	TIFR2		= 0x17		; Timer/Counter2 Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter1 Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PORTG		= 0x14		; Port G Data Register
.equ	DDRG		= 0x13		; Port G Data Direction Register
.equ	PING		= 0x12		; Port G Input Pins
.equ	PORTF		= 0x11		; Data Register, Port F
.equ	DDRF		= 0x10		; Data Direction Register, Port F
.equ	PINF		= 0x0F		; Input Pins, Port F
.equ	PORTE		= 0x0E		; Data Register, Port E
.equ	DDRE		= 0x0D		; Data Direction Register, Port E
.equ	PINE		= 0x0C		; Input Pins, Port E
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal Vref turned off
;			0x40		; AVCC with external capacitor at AREF pin
;			0x80		; Reserved
;			0xC0		; Internal 1.1V Voltage Reference with external capacitor at AREF pin

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

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC7 Digital input Disable
.equ	ADC6D		= 6		; 0x40 - ADC6 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable



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

; ----------	Register DIDR1 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable



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
; ::::  SPR	>>>> This is a part of COMM_SCK_RATE_3BIT enum (see complete values list below)

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit



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
.equ	UPE0		= 2		; 0x04 - USART Parity Error
.equ	U2X0		= 1		; 0x02 - Double the USART Transmission Speed
.equ	MPCM0		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR0B bits		------------------------
.equ	RXCIE0		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE0		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE0		= 5		; 0x20 - USART Data Register Empty Interrupt Enable
.equ	RXEN0		= 4		; 0x10 - Receiver Enable
.equ	TXEN0		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ02		= 2		; 0x04 - Character Size
.equ	RXB80		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB80		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR0C bits		------------------------
.equ	UMSEL0		= 6		; 0x40 - USART Mode Select
.equ	UPM0_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM00		= 4		;          UPM0 BIT0 position
.equ	USBS0		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ0_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ00		= 1		;          UCSZ0 BIT0 position
.equ	UCPOL0		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL0	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
; ::::  UPM0	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS0	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit



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
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
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

; ----------	Register PRR bits		------------------------
.equ	PRLCD		= 4		; 0x10 - Power Reduction LCD
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Reserved



; ====	JTAG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	JTD		= 7		; 0x80 - JTAG Interface Disable

; ----------	Register MCUSR bits		------------------------
;.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0A bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare
.equ	WGM00		= 6		; 0x40 - Waveform Generation Mode 0
.equ	COM0A_MASK	= 0x30		;      - Compare Match Output Modes (2 bits)
.equ	COM0A0		= 4		;          COM0A BIT0 position
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

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR310		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1B_WGM10	= 3		;          TCCR1B_WGM1 BIT0 position
.equ	CS1_MASK	= 0x07		;      - Prescaler source of Timer/Counter 1 (3 bits)
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
.equ	FOC1A		= 7		; 0x80 - Force Output Compare 1A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare 1B

; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1B		= 2		; 0x04 - Output Compare Flag 1B
.equ	OCF1A		= 1		; 0x02 - Output Compare Flag 1A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TCCR2A bits		------------------------
.equ	FOC2A		= 7		; 0x80 - Force Output Compare A
.equ	WGM20		= 6		; 0x40 - Waveform Generation Mode
.equ	COM2A_MASK	= 0x30		;      - Compare Output Mode bits (2 bits)
.equ	COM2A0		= 4		;          COM2A BIT0 position
.equ	WGM21		= 3		; 0x08 - Waveform Generation Mode
.equ	CS2_MASK	= 0x07		;      - Clock Select bits (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  WGM20	>>>> This is a part of WAVEFORM_GEN_MODE enum (see complete values list below)
; ::::  CS2	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register TIMSK2 bits		------------------------
.equ	OCIE2A		= 1		; 0x02 - Timer/Counter2 Output Compare Match Interrupt Enable
.equ	TOIE2		= 0		; 0x01 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR2 bits		------------------------
.equ	OCF2A		= 1		; 0x02 - Timer/Counter2 Output Compare Flag 2
.equ	TOV2		= 0		; 0x01 - Timer/Counter2 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	PSR2		= 1		; 0x02 - Prescaler Reset Timer/Counter2

; ----------	Register ASSR bits		------------------------
.equ	EXCLK		= 4		; 0x10 - Enable External Clock Interrupt
.equ	AS2		= 3		; 0x08 - AS2: Asynchronous Timer/Counter2
.equ	TCN2UB		= 2		; 0x04 - TCN2UB: Timer/Counter2 Update Busy
.equ	OCR2UB		= 1		; 0x02 - Output Compare Register2 Update Busy
.equ	TCR2UB		= 0		; 0x01 - TCR2UB: Timer/Counter Control Register2 Update Busy



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



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	LCD MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LCDFRR bits		------------------------
.equ	LCDPS_MASK	= 0x70		;      - LCD Prescaler Selects (3 bits)
.equ	LCDPS0		= 4		;          LCDPS BIT0 position
.equ	LCDCD_MASK	= 0x07		;      - LCD Clock Dividers (3 bits)
.equ	LCDCD0		= 0		;          LCDCD BIT0 position
; ::::  LCDPS	:::: bitfield values
;			0x00		; ClkLCD/16
;			0x10		; ClkLCD/64
;			0x20		; ClkLCD/128
;			0x30		; ClkLCD/256
;			0x40		; ClkLCD/512
;			0x50		; ClkLCD/1024
;			0x60		; ClkLCD/2048
;			0x70		; ClkLCD/4096
; ::::  LCDCD	:::: bitfield values
;			0x00		; 1
;			0x01		; 2
;			0x02		; 3
;			0x03		; 4
;			0x04		; 5
;			0x05		; 6
;			0x06		; 7
;			0x07		; 8

; ----------	Register LCDCRB bits		------------------------
.equ	LCDCS		= 7		; 0x80 - LCD CLock Select
.equ	LCD2B		= 6		; 0x40 - LCD 1/2 Bias Select
.equ	LCDMUX_MASK	= 0x30		;      - LCD Mux Selects (2 bits)
.equ	LCDMUX0		= 4		;          LCDMUX BIT0 position
.equ	LCDPM_MASK	= 0x0F		;      - LCD Port Masks (4 bits)
.equ	LCDPM0		= 0		;          LCDPM BIT0 position
; ::::  LCDPM	:::: bitfield values
;			0x00		; SEG0:12
;			0x01		; SEG0:14
;			0x02		; SEG0:15
;			0x03		; SEG0:18
;			0x04		; SEG0:20
;			0x05		; SEG0:22
;			0x06		; SEG0:23
;			0x07		; SEG0:24
;			0x08		; SEG0:26
;			0x09		; SEG0:28
;			0x0A		; SEG0:30
;			0x0B		; SEG0:32
;			0x0C		; SEG0:34
;			0x0D		; SEG0:36
;			0x0E		; SEG0:38
;			0x0F		; SEG0:39

; ----------	Register LCDCRA bits		------------------------
.equ	LCDEN		= 7		; 0x80 - LCD Enable
.equ	LCDAB		= 6		; 0x40 - LCD A or B waveform
.equ	LCDIF		= 4		; 0x10 - LCD Interrupt Flag
.equ	LCDIE		= 3		; 0x08 - LCD Interrupt Enable
.equ	LCDBL		= 0		; 0x01 - LCD Blanking



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC01		= 1		; 0x02 - External Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - External Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register EIMSK bits		------------------------
.equ	PCIE_MASK	= 0xF0		;      - Pin Change Interrupt Enables (4 bits)
.equ	PCIE0		= 4		;          PCIE BIT0 position
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable

; ----------	Register EIFR bits		------------------------
.equ	PCIF_MASK	= 0xF0		;      - Pin Change Interrupt Flags (4 bits)
.equ	PCIF0		= 4		;          PCIF BIT0 position
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0




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
; ::::  INTERRUPT_SENSE_CONTROL	:::: values
;			0b00		; Low Level of INTX
;			0b01		; Any Logical Change of INTX
;			0b10		; Falling Edge of INTX
;			0b11		; Rising Edge of INTX



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 25
.equ	INT_VECTORS_SIZE	= 0x32
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;	1	INT0		; External Interrupt Request 0
;	2	PCINT0		; Pin Change Interrupt Request 0
;	3	PCINT1		; Pin Change Interrupt Request 1
;	4	TIMER2_COMP	; Timer/Counter2 Compare Match
;	5	TIMER2_OVF	; Timer/Counter2 Overflow
;	6	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	7	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	8	TIMER1_COMPB	; Timer/Counter Compare Match B
;	9	TIMER1_OVF	; Timer/Counter1 Overflow
;	10	TIMER0_COMP	; Timer/Counter0 Compare Match
;	11	TIMER0_OVF	; Timer/Counter0 Overflow
;	12	SPI_STC		; SPI Serial Transfer Complete
;	13	USART_RX	; USART, Rx Complete
;	14	USART_UDRE	; USART Data register Empty
;	15	USART0_TX	; USART0, Tx Complete
;	16	USI_START	; USI Start Condition
;	17	USI_OVERFLOW	; USI Overflow
;	18	ANALOG_COMP	; Analog Comparator
;	19	ADC		; ADC Conversion Complete
;	20	EE_READY	; EEPROM Ready
;	21	SPM_READY	; Store Program Memory Read
;	22	LCD		; LCD Start of Frame
;	23	PCINT2		; Pin Change Interrupt Request 2
;	24	PCINT3		; Pin Change Interrupt Request 3


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	INT_RESET	; RESET		 - External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;#		rjmp	INT_INT0	; INT0		 - External Interrupt Request 0
;#		rjmp	INT_PCINT0	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; TIMER2_COMP	 - Timer/Counter2 Compare Match
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMP	 - Timer/Counter0 Compare Match
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART_RX	 - USART, Rx Complete
;#		reti			; USART_UDRE	 - USART Data register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; USI_START	 - USI Start Condition
;#		reti			; USI_OVERFLOW	 - USI Overflow
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	INT_EE_READY	; EE_READY	 - EEPROM Ready
;#		reti			; SPM_READY	 - Store Program Memory Read
;#		reti			; LCD		 - LCD Start of Frame
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; PCINT3	 - Pin Change Interrupt Request 3
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	INT_RESET:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA6490A_INC_ */

; ************************ END OF FILE *********************************

