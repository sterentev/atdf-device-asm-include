;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : AT90USB162
;* Title             : Register/Mask/Bit Definitions for the AT90USB162
;* File Name         : AT90USB162.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-01 14:52:51 UTC
;
;***********************************************************************

#ifndef _AT90USB162_INC_
#define _AT90USB162_INC_

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
.device	AT90USB162
.equ	JTAGID		= 0x9482
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x82


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
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0x3E00
.equ	ADDR_BOOT_SECTION_1_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0200
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0x3C00
.equ	ADDR_BOOT_SECTION_2_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0400
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0x3800
.equ	ADDR_BOOT_SECTION_3_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x0800
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0x3000
.equ	ADDR_BOOT_SECTION_4_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x1000

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
.equ	ADDR_IRAM_END			= 0x02FF
.equ	ADDR_IRAM_SIZE			= 0x0200

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200

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
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
.equ	HWBE		= 3		; 0x08 - Hardware Boot Enable
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection level at VCC=2.7 V
;			0x05		; Brown-out detection level at VCC=2.9 V
;			0x04		; Brown-out detection level at VCC=3.0 V
;			0x03		; Brown-out detection level at VCC=3.5 V
;			0x02		; Brown-out detection level at VCC=3.6 V
;			0x01		; Brown-out detection level at VCC=4.0 V
;			0x00		; Brown-out detection level at VCC=4.3 V

; ----------	Register HIGH bits		------------------------
.equ	DWEN		= 7		; 0x80 - Debug Wire enable
.equ	RSTDISBL	= 6		; 0x40 - Reset Disabled (Enable PC6 as i/o pin)
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watchdog timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=256 words start address=$1F00
;			0x04		; Boot Flash size=512 words start address=$1E00
;			0x02		; Boot Flash size=1024 words start address=$1C00
;			0x00		; Boot Flash size=2048 words start address=$1800

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTC7
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 65 ms
;			0x02		; Int. RC Osc.; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x22		; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;			0x07		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms; Int. Cap.
;			0x17		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms; Int. Cap.
;			0x27		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms; Int. Cap.
;			0x06		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms; Int. Cap.
;			0x16		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms; Int. Cap.
;			0x26		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms; Int. Cap.
;			0x05		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 0 ms
;			0x15		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 4.1 ms
;			0x25		; Ext. Low-Freq. Crystal; Start-up time: 32K CK + 65 ms
;			0x04		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 0 ms
;			0x14		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 4.1 ms
;			0x24		; Ext. Low-Freq. Crystal; Start-up time: 1K CK + 65 ms
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
.equ	UPOE		= 0xFB		; [MEMORY MAPPED] 
.equ	PS2CON		= 0xFA		; [MEMORY MAPPED] PS2 Pad Enable register
.equ	UEINT		= 0xF4		; [MEMORY MAPPED] 
.equ	UEBCLX		= 0xF2		; [MEMORY MAPPED] 
.equ	UEDATX		= 0xF1		; [MEMORY MAPPED] 
.equ	UEIENX		= 0xF0		; [MEMORY MAPPED] 
.equ	UESTA1X		= 0xEF		; [MEMORY MAPPED] 
.equ	UESTA0X		= 0xEE		; [MEMORY MAPPED] 
.equ	UECFG1X		= 0xED		; [MEMORY MAPPED] 
.equ	UECFG0X		= 0xEC		; [MEMORY MAPPED] 
.equ	UECONX		= 0xEB		; [MEMORY MAPPED] 
.equ	UERST		= 0xEA		; [MEMORY MAPPED] 
.equ	UENUM		= 0xE9		; [MEMORY MAPPED] 
.equ	UEINTX		= 0xE8		; [MEMORY MAPPED] 
.equ	UDMFN		= 0xE6		; [MEMORY MAPPED] 
.equ	UDFNUM		= 0xE4		; [MEMORY MAPPED] 
.equ	UDADDR		= 0xE3		; [MEMORY MAPPED] 
.equ	UDIEN		= 0xE2		; [MEMORY MAPPED] 
.equ	UDINT		= 0xE1		; [MEMORY MAPPED] 
.equ	UDCON		= 0xE0		; [MEMORY MAPPED] 
.equ	USBCON		= 0xD8		; [MEMORY MAPPED] USB General Control Register
.equ	CLKSTA		= 0xD2		; [MEMORY MAPPED] 
.equ	CLKSEL1		= 0xD1		; [MEMORY MAPPED] 
.equ	CLKSEL0		= 0xD0		; [MEMORY MAPPED] 
.equ	UDR1		= 0xCE		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR1		= 0xCC		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UCSR1D		= 0xCB		; [MEMORY MAPPED] USART Control and Status Register D
.equ	UCSR1C		= 0xCA		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSR1B		= 0xC9		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSR1A		= 0xC8		; [MEMORY MAPPED] USART Control and Status Register A
.equ	OCR1C		= 0x8C		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register C  Bytes
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register A  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter 1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] 
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter1 Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRB		= 0x6A		; [MEMORY MAPPED] External Interrupt Control Register B
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR1		= 0x65		; [MEMORY MAPPED] Power Reduction Register1
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register0
.equ	REGCR		= 0x63		; [MEMORY MAPPED] Regulator Control Register
.equ	WDTCKD		= 0x62		; [MEMORY MAPPED] Watchdog Timer Clock Divider
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] 
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	EIND		= 0x3C		; Extended Indirect Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	DWDR		= 0x31		; debugWire communication register
.equ	ACSR		= 0x30		; Analog Comparator Control And Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	PLLCSR		= 0x29		; PLL Status and Control register
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0B		= 0x25		; Timer/Counter Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter  Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Address Register Low Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter1 Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins


; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PORTC bits		------------------------
.equ	PORTC_MASK	= 0xF7		;      - Port C Data Register bits (7 bits)

; ----------	Register DDRC bits		------------------------
.equ	DDC_MASK	= 0xF7		;      - Port C Data Direction Register bits (7 bits)

; ----------	Register PINC bits		------------------------
.equ	PINC_MASK	= 0xF7		;      - Port C Input Pins bits (7 bits)



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



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	SIGRD		= 5		; 0x20 - Signature Row Read
.equ	RWWSRE		= 4		; 0x10 - Read While Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



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



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
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

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode, Phase Correct PWM Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode, Fast PWm (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	COM1C_MASK	= 0x0C		;      - Compare Output Mode 1C, bits (2 bits)
.equ	COM1C0		= 2		;          COM1C BIT0 position
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
.equ	FOC1C		= 5		; 0x20 - Force Output Compare 1C

; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1C		= 3		; 0x08 - Timer/Counter1 Output Compare C Match Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1C		= 3		; 0x08 - Output Compare Flag 1C
.equ	OCF1B		= 2		; 0x04 - Output Compare Flag 1B
.equ	OCF1A		= 1		; 0x02 - Output Compare Flag 1A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag



; ====	PLL MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PLLCSR bits		------------------------
.equ	PLLP_MASK	= 0x1C		;      - PLL prescaler Bits (3 bits)
.equ	PLLP0		= 2		;          PLLP BIT0 position
.equ	PLLE		= 1		; 0x02 - PLL Enable Bit
.equ	PLOCK		= 0		; 0x01 - PLL Lock Status Bit
; ::::  PLLP	:::: bitfield values
;			0x0C		; Clock/4
;			0x14		; Clock/8



; ====	USB_DEVICE MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register UEIENX bits		------------------------
.equ	FLERRE		= 7		; 0x80 - 
.equ	NAKINE		= 6		; 0x40 - 
.equ	NAKOUTE		= 4		; 0x10 - 
.equ	RXSTPE		= 3		; 0x08 - 
.equ	RXOUTE		= 2		; 0x04 - 
.equ	STALLEDE	= 1		; 0x02 - 
.equ	TXINE		= 0		; 0x01 - 

; ----------	Register UESTA1X bits		------------------------
.equ	CTRLDIR		= 2		; 0x04 - 
.equ	CURRBK_MASK	= 0x03		;      -  (2 bits)
.equ	CURRBK0		= 0		;          CURRBK BIT0 position

; ----------	Register UESTA0X bits		------------------------
.equ	CFGOK		= 7		; 0x80 - 
.equ	OVERFI		= 6		; 0x40 - 
.equ	UNDERFI		= 5		; 0x20 - 
.equ	DTSEQ_MASK	= 0x0C		;      -  (2 bits)
.equ	DTSEQ0		= 2		;          DTSEQ BIT0 position
.equ	NBUSYBK_MASK	= 0x03		;      -  (2 bits)
.equ	NBUSYBK0	= 0		;          NBUSYBK BIT0 position

; ----------	Register UECFG1X bits		------------------------
.equ	EPSIZE_MASK	= 0x70		;      -  (3 bits)
.equ	EPSIZE0		= 4		;          EPSIZE BIT0 position
.equ	EPBK_MASK	= 0x0C		;      -  (2 bits)
.equ	EPBK0		= 2		;          EPBK BIT0 position
.equ	ALLOC		= 1		; 0x02 - 

; ----------	Register UECFG0X bits		------------------------
.equ	EPTYPE_MASK	= 0xC0		;      -  (2 bits)
.equ	EPTYPE0		= 6		;          EPTYPE BIT0 position
.equ	EPDIR		= 0		; 0x01 - 

; ----------	Register UECONX bits		------------------------
.equ	STALLRQ		= 5		; 0x20 - 
.equ	STALLRQC	= 4		; 0x10 - 
.equ	RSTDT		= 3		; 0x08 - 
.equ	EPEN		= 0		; 0x01 - 

; ----------	Register UERST bits		------------------------
.equ	EPRST_MASK	= 0x1F		;      -  (5 bits)
.equ	EPRST0		= 0		;          EPRST BIT0 position

; ----------	Register UEINTX bits		------------------------
.equ	FIFOCON		= 7		; 0x80 - 
.equ	NAKINI		= 6		; 0x40 - 
.equ	RWAL		= 5		; 0x20 - 
.equ	NAKOUTI		= 4		; 0x10 - 
.equ	RXSTPI		= 3		; 0x08 - 
.equ	RXOUTI		= 2		; 0x04 - 
.equ	STALLEDI	= 1		; 0x02 - 
.equ	TXINI		= 0		; 0x01 - 

; ----------	Register UDMFN bits		------------------------
.equ	FNCERR		= 4		; 0x10 - 

; ----------	Register UDADDR bits		------------------------
.equ	ADDEN		= 7		; 0x80 - 
.equ	UADD_MASK	= 0x7F		;      -  (7 bits)
.equ	UADD0		= 0		;          UADD BIT0 position

; ----------	Register UDIEN bits		------------------------
.equ	UPRSME		= 6		; 0x40 - 
.equ	EORSME		= 5		; 0x20 - 
.equ	WAKEUPE		= 4		; 0x10 - 
.equ	EORSTE		= 3		; 0x08 - 
.equ	SOFE		= 2		; 0x04 - 
.equ	SUSPE		= 0		; 0x01 - 

; ----------	Register UDINT bits		------------------------
.equ	UPRSMI		= 6		; 0x40 - 
.equ	EORSMI		= 5		; 0x20 - 
.equ	WAKEUPI		= 4		; 0x10 - 
.equ	EORSTI		= 3		; 0x08 - 
.equ	SOFI		= 2		; 0x04 - 
.equ	SUSPI		= 0		; 0x01 - 

; ----------	Register UDCON bits		------------------------
.equ	RSTCPU		= 2		; 0x04 - 
.equ	RMWKUP		= 1		; 0x02 - 
.equ	DETACH		= 0		; 0x01 - 

; ----------	Register USBCON bits		------------------------
.equ	USBE		= 7		; 0x80 - 
.equ	FRZCLK		= 5		; 0x20 - 

; ----------	Register REGCR bits		------------------------
.equ	REGDIS		= 0		; 0x01 - 



; ====	PS2 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UPOE bits		------------------------
.equ	UPWE_MASK	= 0xC0		;      -  (2 bits)
.equ	UPWE0		= 6		;          UPWE BIT0 position
.equ	UPDRV_MASK	= 0x30		;      -  (2 bits)
.equ	UPDRV0		= 4		;          UPDRV BIT0 position
.equ	SCKI		= 3		; 0x08 - 
.equ	DATAI		= 2		; 0x04 - 
.equ	DPI		= 1		; 0x02 - 
.equ	DMI		= 0		; 0x01 - 

; ----------	Register PS2CON bits		------------------------
.equ	PS2EN		= 0		; 0x01 - Enable



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
.equ	USBRF		= 5		; 0x20 - USB reset flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - 
.equ	CLKPS_MASK	= 0x0F		;      -  (4 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Reserved
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Extended Standby

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 2 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR1 bits		------------------------
;.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 1 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR07		= 7		; 0x80 - General Purpose IO Register 0 bit 7
.equ	GPIOR06		= 6		; 0x40 - General Purpose IO Register 0 bit 6
.equ	GPIOR05		= 5		; 0x20 - General Purpose IO Register 0 bit 5
.equ	GPIOR04		= 4		; 0x10 - General Purpose IO Register 0 bit 4
.equ	GPIOR03		= 3		; 0x08 - General Purpose IO Register 0 bit 3
.equ	GPIOR02		= 2		; 0x04 - General Purpose IO Register 0 bit 2
.equ	GPIOR01		= 1		; 0x02 - General Purpose IO Register 0 bit 1
.equ	GPIOR00		= 0		; 0x01 - General Purpose IO Register 0 bit 0

; ----------	Register PRR1 bits		------------------------
.equ	PRUSB		= 7		; 0x80 - Power Reduction USB
.equ	PRUSART1	= 0		; 0x01 - Power Reduction USART1

; ----------	Register PRR0 bits		------------------------
.equ	PRTIM0		= 5		; 0x20 - Power Reduction Timer/Counter0
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface

; ----------	Register CLKSTA bits		------------------------
.equ	RCON		= 1		; 0x02 - 
.equ	EXTON		= 0		; 0x01 - 

; ----------	Register CLKSEL1 bits		------------------------
.equ	RCCKSEL_MASK	= 0xF0		;      -  (4 bits)
.equ	RCCKSEL0	= 4		;          RCCKSEL BIT0 position
.equ	EXCKSEL_MASK	= 0x0F		;      -  (4 bits)
.equ	EXCKSEL0	= 0		;          EXCKSEL BIT0 position

; ----------	Register CLKSEL0 bits		------------------------
.equ	RCSUT_MASK	= 0xC0		;      -  (2 bits)
.equ	RCSUT0		= 6		;          RCSUT BIT0 position
.equ	EXSUT_MASK	= 0x30		;      -  (2 bits)
.equ	EXSUT0		= 4		;          EXSUT BIT0 position
.equ	RCE		= 3		; 0x08 - 
.equ	EXTE		= 2		; 0x04 - 
.equ	CLKS		= 0		; 0x01 - 



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC3_MASK	= 0xC0		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC30		= 6		;          ISC3 BIT0 position
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position

; ----------	Register EICRB bits		------------------------
.equ	ISC7_MASK	= 0xC0		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC70		= 6		;          ISC7 BIT0 position
.equ	ISC6_MASK	= 0x30		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC60		= 4		;          ISC6 BIT0 position
.equ	ISC5_MASK	= 0x0C		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC50		= 2		;          ISC5 BIT0 position
.equ	ISC4_MASK	= 0x03		;      - External Interrupt 7-4 Sense Control Bit (2 bits)
.equ	ISC40		= 0		;          ISC4 BIT0 position

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0xFF		;      - External Interrupt Request 7 Enable (8 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0xFF		;      - External Interrupt Flags (8 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x1F		;      -  (5 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x03		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x03		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position



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

; ----------	Register UCSR1D bits		------------------------
.equ	CTSEN		= 1		; 0x02 - CTS Enable
.equ	RTSEN		= 0		; 0x01 - RTS Enable



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
.equ	WDIF		= 7		; 0x80 - Watchdog Timeout Interrupt Flag
.equ	WDIE		= 6		; 0x40 - Watchdog Timeout Interrupt Enable
.equ	WDP_MASK	= 0x27		;      - Watchdog Timer Prescaler Bits (4 bits)
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watch Dog Enable

; ----------	Register WDTCKD bits		------------------------
.equ	WDEWIF		= 3		; 0x08 - Watchdog Early Warning Interrupt Flag
.equ	WDEWIE		= 2		; 0x04 - Watchdog Early Warning Interrupt Enable
.equ	WCLKD_MASK	= 0x03		;      - Watchdog Timer Clock Dividers (2 bits)
.equ	WCLKD0		= 0		;          WCLKD BIT0 position



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

; ----------	Register DIDR1 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable




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



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 29
.equ	INT_VECTORS_SIZE	= 0x3A
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	INT2		; External Interrupt Request 2
;	4	INT3		; External Interrupt Request 3
;	5	INT4		; External Interrupt Request 4
;	6	INT5		; External Interrupt Request 5
;	7	INT6		; External Interrupt Request 6
;	8	INT7		; External Interrupt Request 7
;	9	PCINT0		; Pin Change Interrupt Request 0
;	10	PCINT1		; Pin Change Interrupt Request 1
;	11	USB_GEN		; USB General Interrupt Request
;	12	USB_COM		; USB Endpoint/Pipe Interrupt Communication Request
;	13	WDT		; Watchdog Time-out Interrupt
;	14	TIMER1_CAPT	; Timer/Counter2 Capture Event
;	15	TIMER1_COMPA	; Timer/Counter2 Compare Match B
;	16	TIMER1_COMPB	; Timer/Counter2 Compare Match B
;	17	TIMER1_COMPC	; Timer/Counter2 Compare Match C
;	18	TIMER1_OVF	; Timer/Counter1 Overflow
;	19	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	20	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	21	TIMER0_OVF	; Timer/Counter0 Overflow
;	22	SPI_STC		; SPI Serial Transfer Complete
;	23	USART1_RX	; USART1, Rx Complete
;	24	USART1_UDRE	; USART1 Data register Empty
;	25	USART1_TX	; USART1, Tx Complete
;	26	ANALOG_COMP	; Analog Comparator
;	27	EE_READY	; EEPROM Ready
;	28	SPM_READY	; Store Program Memory Read



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "AT90USB162.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODLEVEL	= 0x04	; Brown-out detection level at VCC=3.0 V
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  &  (~BODLEVEL_MASK | BODLEVEL) \
;#				  & ~(1 <<HWBE)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=1024 words start address=$1C00
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<DWEN) \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x1E	; Ext. Crystal Osc. 8.0-    MHz; Start-up time: 258 CK + 65 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	BLB0		= 0x0C	; No lock on SPM and LPM in Application Section
;#	.set	BLB1		= 0x30	; No lock on SPM and LPM in Boot Section
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB) \
;#				  &  (~BLB0_MASK | BLB0) \
;#				  &  (~BLB1_MASK | BLB1)
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
;#		rjmp	RESET_ISR	; RESET		 - External Pin,Power-on Reset,Brown-out Reset,Watchdog Reset,and JTAG AVR Reset. See Datasheet.     
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		reti			; INT4		 - External Interrupt Request 4
;#		reti			; INT5		 - External Interrupt Request 5
;#		reti			; INT6		 - External Interrupt Request 6
;#		reti			; INT7		 - External Interrupt Request 7
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; USB_GEN	 - USB General Interrupt Request
;#		reti			; USB_COM	 - USB Endpoint/Pipe Interrupt Communication Request
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER1_CAPT	 - Timer/Counter2 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter2 Compare Match B
;#		reti			; TIMER1_COMPB	 - Timer/Counter2 Compare Match B
;#		reti			; TIMER1_COMPC	 - Timer/Counter2 Compare Match C
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1 Data register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM_READY	 - Store Program Memory Read
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _AT90USB162_INC_ */

; ************************ END OF FILE *********************************

