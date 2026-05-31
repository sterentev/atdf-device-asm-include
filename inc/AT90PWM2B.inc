;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : AT90PWM2B
;* Title             : Register/Mask/Bit Definitions for the AT90PWM2B
;* File Name         : AT90PWM2B.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-05-31 13:22:21 UTC
;
;***********************************************************************

#ifndef _AT90PWM2B_INC_
#define _AT90PWM2B_INC_

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
.device	AT90PWM2B
.equ	JTAGID		= 0x9383
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x93
.equ	SIGNATURE2	= 0x83


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
.equ	PSC2RB		= 7		; 0x80 - PSC2 Reset Behavior
.equ	PSC1RB		= 6		; 0x40 - PSC1 Reset Behavior
.equ	PSC0RB		= 5		; 0x20 - PSC0 Reset Behavior
.equ	PSCRV		= 4		; 0x10 - PSCOUT Reset Value
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Select Reset Vector
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=128 words Boot address=$0F80
;			0x04		; Boot Flash size=256 words Boot address=$0F00
;			0x02		; Boot Flash size=512 words Boot address=$0E00
;			0x00		; Boot Flash size=1024 words Boot address=$0C00

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PC6 as i/o pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector Trigger Level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=4.5 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x03		; Brown-out detection at VCC=4.4 V
;			0x02		; Brown-out detection at VCC=4.2 V
;			0x01		; Brown-out detection at VCC=2.8 V
;			0x00		; Brown-out detection at VCC=2.6 V

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB0
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x12		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms
;			0x22		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x03		; PLL clock 16 MHz; Rc. Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x13		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms
;			0x23		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms
;			0x33		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x01		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 0 ms
;			0x11		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 4 ms
;			0x21		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 64 ms
;			0x05		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x15		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms
;			0x25		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms
;			0x35		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms
;			0x04		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x14		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms
;			0x24		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms
;			0x34		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms




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
.equ	PICR2		= 0xFE		; [MEMORY MAPPED] PSC 2 Input Capture Register 
.equ	PFRC2B		= 0xFD		; [MEMORY MAPPED] PSC 2 Input B Control
.equ	PFRC2A		= 0xFC		; [MEMORY MAPPED] PSC 2 Input B Control
.equ	PCTL2		= 0xFB		; [MEMORY MAPPED] PSC 2 Control Register
.equ	PCNF2		= 0xFA		; [MEMORY MAPPED] PSC 2 Configuration Register
.equ	OCR2RB		= 0xF8		; [MEMORY MAPPED] Output Compare 2 RB Register
.equ	OCR2SB		= 0xF6		; [MEMORY MAPPED] Output Compare 2 SB Register
.equ	OCR2RA		= 0xF4		; [MEMORY MAPPED] Output Compare 2 RA Register
.equ	OCR2SA		= 0xF2		; [MEMORY MAPPED] Output Compare 2 SA Register
.equ	POM2		= 0xF1		; [MEMORY MAPPED] PSC 2 Output Matrix
.equ	PSOC2		= 0xF0		; [MEMORY MAPPED] PSC2 Synchro and Output Configuration
.equ	PICR0		= 0xDE		; [MEMORY MAPPED] PSC 0 Input Capture Register 
.equ	PFRC0B		= 0xDD		; [MEMORY MAPPED] PSC 0 Input B Control
.equ	PFRC0A		= 0xDC		; [MEMORY MAPPED] PSC 0 Input A Control
.equ	PCTL0		= 0xDB		; [MEMORY MAPPED] PSC 0 Control Register
.equ	PCNF0		= 0xDA		; [MEMORY MAPPED] PSC 0 Configuration Register
.equ	OCR0RB		= 0xD8		; [MEMORY MAPPED] Output Compare 0 RB Register
.equ	OCR0SB		= 0xD6		; [MEMORY MAPPED] Output Compare 0 SB Register
.equ	OCR0RA		= 0xD4		; [MEMORY MAPPED] Output Compare 0 RA Register
.equ	OCR0SA		= 0xD2		; [MEMORY MAPPED] Output Compare 0 SA Register
.equ	PSOC0		= 0xD0		; [MEMORY MAPPED] PSC0 Synchro and Output Configuration
.equ	EUDR		= 0xCE		; [MEMORY MAPPED] EUSART I/O Data Register
.equ	MUBRR		= 0xCC		; [MEMORY MAPPED] Manchester Receiver Baud Rate Register
.equ	EUCSRC		= 0xCA		; [MEMORY MAPPED] EUSART Status Register C
.equ	EUCSRB		= 0xC9		; [MEMORY MAPPED] EUSART Control Register B
.equ	EUCSRA		= 0xC8		; [MEMORY MAPPED] EUSART Control and Status Register A
.equ	UDR		= 0xC6		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR		= 0xC4		; [MEMORY MAPPED] USART Baud Rate Register
.equ	UCSRC		= 0xC2		; [MEMORY MAPPED] USART Control an Status register C
.equ	UCSRB		= 0xC1		; [MEMORY MAPPED] USART Control an Status register B
.equ	UCSRA		= 0xC0		; [MEMORY MAPPED] USART Control and Status register A
.equ	AC2CON		= 0xAF		; [MEMORY MAPPED] Analog Comparator 2 Control Register
.equ	AC1CON		= 0xAE		; [MEMORY MAPPED] Analog Comparator 1 Control Register
.equ	AC0CON		= 0xAD		; [MEMORY MAPPED] Analog Comparator 0 Control Register
.equ	DAC		= 0xAB		; [MEMORY MAPPED] DAC Data Register
.equ	DACON		= 0xAA		; [MEMORY MAPPED] DAC Control Register
.equ	PIM2		= 0xA5		; [MEMORY MAPPED] PSC2 Interrupt Mask Register
.equ	PIFR2		= 0xA4		; [MEMORY MAPPED] PSC2 Interrupt Flag Register
.equ	PIM0		= 0xA1		; [MEMORY MAPPED] PSC0 Interrupt Mask Register
.equ	PIFR0		= 0xA0		; [MEMORY MAPPED] PSC0 Interrupt Flag Register
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1 Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register
.equ	ADC		= 0x78		; [MEMORY MAPPED] ADC Data Register Bytes
.equ	AMP1CSR		= 0x77		; [MEMORY MAPPED] 
.equ	AMP0CSR		= 0x76		; [MEMORY MAPPED] 
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] 
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	ACSR		= 0x30		; Analog Comparator Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	PLLCSR		= 0x29		; PLL Control And Status Register
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0B		= 0x25		; Timer/Counter Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Read/Write Access Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	GPIOR3		= 0x1B		; General Purpose IO Register 3
.equ	GPIOR2		= 0x1A		; General Purpose IO Register 2
.equ	GPIOR1		= 0x19		; General Purpose IO Register 1
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PORTE		= 0x0E		; Port E Data Register
.equ	DDRE		= 0x0D		; Port E Data Direction Register
.equ	PINE		= 0x0C		; Port E Input Pins
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins


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



; ====	EUSART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EUDR bits		------------------------
.equ	EUDR_MASK	= 0xFF		;      - EUSART Extended data bits (8 bits)
.equ	EUDR0		= 0		;          EUDR BIT0 position

; ----------	Register EUCSRA bits		------------------------
.equ	UTxS_MASK	= 0xF0		;      - EUSART Control and Status Register A Bits (4 bits)
.equ	UTxS0		= 4		;          UTxS BIT0 position
.equ	URxS_MASK	= 0x0F		;      - EUSART Control and Status Register A Bits (4 bits)
.equ	URxS0		= 0		;          URxS BIT0 position
; ::::  UTxS	:::: bitfield values
;			0x00		; 5-bit
;			0x10		; 6-bit
;			0x20		; 7-bit
;			0x30		; 8-bit
;			0x40		; Reserved
;			0x50		; Reserved
;			0x60		; Reserved
;			0x70		; 9-bit
;			0x80		; 13-bit
;			0x90		; 14-bit
;			0xA0		; 15-bit
;			0xB0		; 16-bit
;			0xC0		; Reserved
;			0xD0		; Reserved
;			0xE0		; Reserved
;			0xF0		; 17-bit
; ::::  URxS	:::: bitfield values
;			0x00		; 5-bit
;			0x01		; 6-bit
;			0x02		; 7-bit
;			0x03		; 8-bit
;			0x04		; Reserved
;			0x05		; Reserved
;			0x06		; Reserved
;			0x07		; 9-bit
;			0x08		; 13-bit
;			0x09		; 14-bit
;			0x0A		; 15-bit
;			0x0B		; 16-bit
;			0x0C		; Reserved
;			0x0D		; Reserved
;			0x0E		; 16 or 17
;			0x0F		; 17-bit

; ----------	Register EUCSRB bits		------------------------
.equ	EUSART		= 4		; 0x10 - EUSART Enable Bit
.equ	EUSBS		= 3		; 0x08 - EUSBS Enable Bit
.equ	EMCH		= 1		; 0x02 - Manchester Mode Bit
.equ	BODR		= 0		; 0x01 - Order Bit

; ----------	Register EUCSRC bits		------------------------
.equ	FEM		= 3		; 0x08 - Frame Error Manchester Bit
.equ	F1617		= 2		; 0x04 - F1617 Bit
.equ	STP_MASK	= 0x03		;      - Stop Bits (2 bits)
.equ	STP0		= 0		;          STP BIT0 position

; ----------	Register MUBRR bits		------------------------
.equ	MUBRR_MASK	= 0xFFFF	;      - Manchester Receiver Baud Rate Register Bits (16 bits)
.equ	MUBRR0		= 0		;          MUBRR BIT0 position



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register AC0CON bits		------------------------
.equ	AC0EN		= 7		; 0x80 - Analog Comparator 0 Enable Bit
.equ	AC0IE		= 6		; 0x40 - Analog Comparator 0 Interrupt Enable Bit
.equ	AC0IS_MASK	= 0x30		;      - Analog Comparator 0  Interrupt Select Bit (2 bits)
.equ	AC0IS0		= 4		;          AC0IS BIT0 position
.equ	AC0M_MASK	= 0x07		;      - Analog Comparator 0 Multiplexer Register (3 bits)
.equ	AC0M0		= 0		;          AC0M BIT0 position

; ----------	Register AC1CON bits		------------------------
.equ	AC1EN		= 7		; 0x80 - Analog Comparator 1 Enable Bit
.equ	AC1IE		= 6		; 0x40 - Analog Comparator 1 Interrupt Enable Bit
.equ	AC1IS_MASK	= 0x30		;      - Analog Comparator 1  Interrupt Select Bit (2 bits)
.equ	AC1IS0		= 4		;          AC1IS BIT0 position
.equ	AC1ICE		= 3		; 0x08 - Analog Comparator 1 Interrupt Capture Enable Bit
.equ	AC1M_MASK	= 0x07		;      - Analog Comparator 1 Multiplexer Register (3 bits)
.equ	AC1M0		= 0		;          AC1M BIT0 position
; ::::  AC1IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register AC2CON bits		------------------------
.equ	AC2EN		= 7		; 0x80 - Analog Comparator 2 Enable Bit
.equ	AC2IE		= 6		; 0x40 - Analog Comparator 2 Interrupt Enable Bit
.equ	AC2IS_MASK	= 0x30		;      - Analog Comparator 2  Interrupt Select Bit (2 bits)
.equ	AC2IS0		= 4		;          AC2IS BIT0 position
.equ	AC2M_MASK	= 0x07		;      - Analog Comparator 2 Multiplexer Register (3 bits)
.equ	AC2M0		= 0		;          AC2M BIT0 position
; ::::  AC2IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register ACSR bits		------------------------
.equ	ACCKDIV		= 7		; 0x80 - Analog Comparator Clock Divider
.equ	AC2IF		= 6		; 0x40 - Analog Comparator 2 Interrupt Flag Bit
.equ	AC1IF		= 5		; 0x20 - Analog Comparator 1  Interrupt Flag Bit
.equ	AC0IF		= 4		; 0x10 - Analog Comparator 0 Interrupt Flag Bit
.equ	AC2O		= 2		; 0x04 - Analog Comparator 2 Output Bit
.equ	AC1O		= 1		; 0x02 - Analog Comparator 1 Output Bit
.equ	AC0O		= 0		; 0x01 - Analog Comparator 0 Output Bit



; ====	DAC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DAC bits		------------------------
.equ	DAC_MASK	= 0xFFFF	;      - DAC Data Register Bits (16 bits)
.equ	DAC0		= 0		;          DAC BIT0 position

; ----------	Register DACON bits		------------------------
.equ	DAATE		= 7		; 0x80 - DAC Auto Trigger Enable Bit
.equ	DATS_MASK	= 0x70		;      - DAC Trigger Selection Bits (3 bits)
.equ	DATS0		= 4		;          DATS BIT0 position
.equ	DALA		= 2		; 0x04 - DAC Left Adjust
.equ	DAOE		= 1		; 0x02 - DAC Output Enable
.equ	DAEN		= 0		; 0x01 - DAC Enable Bit
; ::::  DATS	:::: bitfield values
;			0x00		; Analog Comparator 0
;			0x10		; Analog Comparator 1
;			0x20		; External Interrupt Request 0
;			0x30		; Timer/Counter0 Compare Match A
;			0x40		; Timer/Counter0 Overflow
;			0x50		; Timer/Counter1 Compare Match B
;			0x60		; Timer/Counter1 Overflow
;			0x70		; Timer/Counter1 Capture Event



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
.equ	SPIPS		= 7		; 0x80 - SPI Pin Select
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
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
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Reserved
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Reserved

; ----------	Register GPIOR3 bits		------------------------
.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 3 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR2 bits		------------------------
;.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 2 bis (8 bits)
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

; ----------	Register PLLCSR bits		------------------------
.equ	PLLF		= 2		; 0x04 - PLL Factor
.equ	PLLE		= 1		; 0x02 - PLL Enable
.equ	PLOCK		= 0		; 0x01 - PLL Lock Detector

; ----------	Register PRR bits		------------------------
.equ	PRPSC2		= 7		; 0x80 - Power Reduction PSC2
.equ	PRPSC1		= 6		; 0x40 - Power Reduction PSC1
.equ	PRPSC0		= 5		; 0x20 - Power Reduction PSC0
.equ	PRTIM1		= 4		; 0x10 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 3		; 0x08 - Power Reduction Timer/Counter0
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode, Phase Correct PWM Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode, Fast PWm (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

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

; ----------	Register TCNT0 bits		------------------------
.equ	TCNT0_MASK	= 0xFF		;      - Timer Counter 0 value (8 bits)
.equ	TCNT00		= 0		;          TCNT0 BIT0 position

; ----------	Register OCR0A bits		------------------------
.equ	OCR0A_MASK	= 0xFF		;      - Timer/Counter0 Output Compare A (8 bits)
.equ	OCR0A0		= 0		;          OCR0A BIT0 position

; ----------	Register OCR0B bits		------------------------
.equ	OCR0B_MASK	= 0xFF		;      - Timer/Counter0 Output Compare B (8 bits)
.equ	OCR0B0		= 0		;          OCR0B BIT0 position

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	ICPSEL1		= 6		; 0x40 - Timer1 Input Capture Selection Bit
.equ	PSR10		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1B		= 2		; 0x04 - Output Compare Flag 1B
.equ	OCF1A		= 1		; 0x02 - Output Compare Flag 1A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

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
.equ	FOC1A		= 7		; 0x80 - 
.equ	FOC1B		= 6		; 0x40 - 

; ----------	Register TCNT1 bits		------------------------
.equ	TCNT1_MASK	= 0xFFFF	;      - Timer/Counter1 (16 bits)
.equ	TCNT10		= 0		;          TCNT1 BIT0 position

; ----------	Register ICR1 bits		------------------------
.equ	ICR1_MASK	= 0xFFFF	;      - Timer/Counter1 Input Capture (16 bits)
.equ	ICR10		= 0		;          ICR1 BIT0 position

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal Vref turned off
;			0x40		; AVCC with external capacitor at AREF pin
;			0x80		; Reserved
;			0xC0		; Internal 2.56V Voltage Reference with external capacitor at AREF pin

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC Prescaler Select Bits (3 bits)
.equ	ADPS0		= 0		;          ADPS BIT0 position

; ----------	Register ADC bits		------------------------
.equ	ADC_MASK	= 0xFFFF	;      - ADC Data Register (16 bits)
.equ	ADC0		= 0		;          ADC BIT0 position

; ----------	Register ADCSRB bits		------------------------
.equ	ADHSM		= 7		; 0x80 - ADC High Speed Mode
.equ	ADTS_MASK	= 0x0F		;      - ADC Auto Trigger Source (4 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - 
.equ	ADC6D		= 6		; 0x40 - 
.equ	ADC5D		= 5		; 0x20 - 
.equ	ADC4D		= 4		; 0x10 - 
.equ	ADC3D		= 3		; 0x08 - 
.equ	ADC2D		= 2		; 0x04 - 
.equ	ADC1D		= 1		; 0x02 - 
.equ	ADC0D		= 0		; 0x01 - 

; ----------	Register DIDR1 bits		------------------------
.equ	ACMP0D		= 5		; 0x20 - 
.equ	AMP0PD		= 4		; 0x10 - 
.equ	AMP0ND		= 3		; 0x08 - 
.equ	ADC10D		= 2		; 0x04 - 
.equ	ADC9D		= 1		; 0x02 - 
.equ	ADC8D		= 0		; 0x01 - 

; ----------	Register AMP0CSR bits		------------------------
.equ	AMP0EN		= 7		; 0x80 - 
.equ	AMP0IS		= 6		; 0x40 - 
.equ	AMP0G_MASK	= 0x30		;      -  (2 bits)
.equ	AMP0G0		= 4		;          AMP0G BIT0 position
.equ	AMP0TS_MASK	= 0x03		;      -  (2 bits)
.equ	AMP0TS0		= 0		;          AMP0TS BIT0 position

; ----------	Register AMP1CSR bits		------------------------
.equ	AMP1EN		= 7		; 0x80 - 
.equ	AMP1IS		= 6		; 0x40 - 
.equ	AMP1G_MASK	= 0x30		;      -  (2 bits)
.equ	AMP1G0		= 4		;          AMP1G BIT0 position
.equ	AMP1TS_MASK	= 0x03		;      -  (2 bits)
.equ	AMP1TS0		= 0		;          AMP1TS BIT0 position



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UDR bits		------------------------
.equ	UDR_MASK	= 0xFF		;      - USART I/O Data (8 bits)
.equ	UDR0		= 0		;          UDR BIT0 position

; ----------	Register UCSRA bits		------------------------
.equ	RXC		= 7		; 0x80 - USART Receive Complete
.equ	TXC		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE		= 5		; 0x20 - USART Data Register Empty
.equ	FE		= 4		; 0x10 - Framing Error
.equ	DOR		= 3		; 0x08 - Data Overrun
.equ	UPE		= 2		; 0x04 - USART Parity Error
.equ	U2X		= 1		; 0x02 - Double USART Transmission Bit
.equ	MPCM		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSRB bits		------------------------
.equ	RXCIE		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE		= 5		; 0x20 - USART Data Register Empty Interrupt Enable
.equ	RXEN		= 4		; 0x10 - Receiver Enable
.equ	TXEN		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ2		= 2		; 0x04 - Character Size
.equ	RXB8		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB8		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSRC bits		------------------------
.equ	UMSEL0		= 6		; 0x40 - USART Mode Select
.equ	UPM_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM0		= 4		;          UPM BIT0 position
.equ	USBS		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ_MASK	= 0x06		;      - Character Size Bits (2 bits)
.equ	UCSZ0		= 1		;          UCSZ BIT0 position
.equ	UCPOL		= 0		; 0x01 - Clock Polarity
; ::::  UPM	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UBRR bits		------------------------
.equ	UBRR_MASK	= 0x0FFF	;      - USART Baud Rate Register Bits (12 bits)
.equ	UBRR0		= 0		;          UBRR BIT0 position



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

; ----------	Register SPDR bits		------------------------
.equ	SPD_MASK	= 0xFF		;      - SPI Data bits (8 bits)
.equ	SPD0		= 0		;          SPD BIT0 position



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
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
; ::::  ISC3	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x40		; Any Logical Change of INTX
;			0x80		; Falling Edge of INTX
;			0xC0		; Rising Edge of INTX
; ::::  ISC2	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x10		; Any Logical Change of INTX
;			0x20		; Falling Edge of INTX
;			0x30		; Rising Edge of INTX
; ::::  ISC1	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Any Logical Change of INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Any Logical Change of INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0x07		;      - External Interrupt Request Enable (3 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x07		;      - External Interrupt Flags (3 bits)
.equ	INTF0		= 0		;          INTF BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEAR bits		------------------------
.equ	EEAR_MASK	= 0x0FFF	;      - EEPROM Address bytes (12 bits)
.equ	EEAR0		= 0		;          EEAR BIT0 position

; ----------	Register EEDR bits		------------------------
.equ	EEDR_MASK	= 0xFF		;      - EEPROM Data Bits (8 bits)
.equ	EEDR0		= 0		;          EEDR BIT0 position

; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	PSC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PICR0 bits		------------------------
.equ	PCST0		= 15		; 0x8000 - PSC 0 Input Capture Software Trig
.equ	PICR0_MASK	= 0x0FFF	;      - PSC 0 Input Capture Bytes (12 bits)
.equ	PICR00		= 0		;          PICR0 BIT0 position

; ----------	Register PFRC0B bits		------------------------
.equ	PCAE0B		= 7		; 0x80 - PSC 0 Capture Enable Input Part B
.equ	PISEL0B		= 6		; 0x40 - PSC 0 Input Select for Part B
.equ	PELEV0B		= 5		; 0x20 - PSC 0 Edge Level Selector on Input Part B
.equ	PFLTE0B		= 4		; 0x10 - PSC 0 Filter Enable on Input Part B
.equ	PRFM0B_MASK	= 0x0F		;      - PSC 0 Retrigger and Fault Mode for Part B (4 bits)
.equ	PRFM0B0		= 0		;          PRFM0B BIT0 position

; ----------	Register PFRC0A bits		------------------------
.equ	PCAE0A		= 7		; 0x80 - PSC 0 Capture Enable Input Part A
.equ	PISEL0A		= 6		; 0x40 - PSC 0 Input Select for Part A
.equ	PELEV0A		= 5		; 0x20 - PSC 0 Edge Level Selector on Input Part A
.equ	PFLTE0A		= 4		; 0x10 - PSC 0 Filter Enable on Input Part A
.equ	PRFM0A_MASK	= 0x0F		;      - PSC 0 Retrigger and Fault Mode for Part A (4 bits)
.equ	PRFM0A0		= 0		;          PRFM0A BIT0 position

; ----------	Register PCTL0 bits		------------------------
.equ	PPRE0_MASK	= 0xC0		;      - PSC 0 Prescaler Selects (2 bits)
.equ	PPRE00		= 6		;          PPRE0 BIT0 position
.equ	PBFM0		= 5		; 0x20 - PSC 0 Balance Flank Width Modulation
.equ	PAOC0B		= 4		; 0x10 - PSC 0 Asynchronous Output Control B
.equ	PAOC0A		= 3		; 0x08 - PSC 0 Asynchronous Output Control A
.equ	PARUN0		= 2		; 0x04 - PSC0 Auto Run
.equ	PCCYC0		= 1		; 0x02 - PSC0 Complete Cycle
.equ	PRUN0		= 0		; 0x01 - PSC 0 Run

; ----------	Register PCNF0 bits		------------------------
.equ	PFIFTY0		= 7		; 0x80 - PSC 0 Fifty
.equ	PALOCK0		= 6		; 0x40 - PSC 0 Autolock
.equ	PLOCK0		= 5		; 0x20 - PSC 0 Lock
.equ	PMODE0_MASK	= 0x18		;      - PSC 0 Mode (2 bits)
.equ	PMODE00		= 3		;          PMODE0 BIT0 position
.equ	POP0		= 2		; 0x04 - PSC 0 Output Polarity
.equ	PCLKSEL0	= 1		; 0x02 - PSC 0 Input Clock Select

; ----------	Register OCR0RB bits		------------------------
.equ	OCR0RB_MASK	= 0xFFFF	;      - Output Compare RB (16 bits)
.equ	OCR0RB0		= 0		;          OCR0RB BIT0 position

; ----------	Register OCR0SB bits		------------------------
.equ	OCR0SB_MASK	= 0x0FFF	;      - Output Compare SB (12 bits)
.equ	OCR0SB0		= 0		;          OCR0SB BIT0 position

; ----------	Register OCR0RA bits		------------------------
.equ	OCR0RA_MASK	= 0x0FFF	;      - Output Compare RA (12 bits)
.equ	OCR0RA0		= 0		;          OCR0RA BIT0 position

; ----------	Register OCR0SA bits		------------------------
.equ	OCR0SA_MASK	= 0x0FFF	;      - Output Compare SA (12 bits)
.equ	OCR0SA0		= 0		;          OCR0SA BIT0 position

; ----------	Register PSOC0 bits		------------------------
.equ	PSYNC0_MASK	= 0x30		;      - Synchronization Out for ADC Selection (2 bits)
.equ	PSYNC00		= 4		;          PSYNC0 BIT0 position
.equ	POEN0B		= 2		; 0x04 - PSCOUT01 Output Enable
.equ	POEN0A		= 0		; 0x01 - PSCOUT00 Output Enable

; ----------	Register PIM0 bits		------------------------
.equ	PSEIE0		= 5		; 0x20 - PSC 0 Synchro Error Interrupt Enable
.equ	PEVE0B		= 4		; 0x10 - External Event B Interrupt Enable
.equ	PEVE0A		= 3		; 0x08 - External Event A Interrupt Enable
.equ	PEOPE0		= 0		; 0x01 - End of Cycle Interrupt Enable

; ----------	Register PIFR0 bits		------------------------
.equ	POAC0B		= 7		; 0x80 - PSC 0 Output A Activity
.equ	POAC0A		= 6		; 0x40 - PSC 0 Output A Activity
.equ	PSEI0		= 5		; 0x20 - PSC 0 Synchro Error Interrupt
.equ	PEV0B		= 4		; 0x10 - External Event B Interrupt
.equ	PEV0A		= 3		; 0x08 - External Event A Interrupt
.equ	PRN0_MASK	= 0x06		;      - Ramp Number (2 bits)
.equ	PRN00		= 1		;          PRN0 BIT0 position
.equ	PEOP0		= 0		; 0x01 - End of PSC0 Interrupt

; ----------	Register PICR2 bits		------------------------
.equ	PCST2		= 15		; 0x8000 - PSC 2 Input Capture Software Trig
.equ	PICR2_MASK	= 0x0FFF	;      - PSC 2 Input Capture Bytes (12 bits)
.equ	PICR20		= 0		;          PICR2 BIT0 position

; ----------	Register PFRC2B bits		------------------------
.equ	PCAE2B		= 7		; 0x80 - PSC 2 Capture Enable Input Part B
.equ	PISEL2B		= 6		; 0x40 - PSC 2 Input Select for Part B
.equ	PELEV2B		= 5		; 0x20 - PSC 2 Edge Level Selector on Input Part B
.equ	PFLTE2B		= 4		; 0x10 - PSC 2 Filter Enable on Input Part B
.equ	PRFM2B_MASK	= 0x0F		;      - PSC 2 Retrigger and Fault Mode for Part B (4 bits)
.equ	PRFM2B0		= 0		;          PRFM2B BIT0 position

; ----------	Register PFRC2A bits		------------------------
.equ	PCAE2A		= 7		; 0x80 - PSC 2 Capture Enable Input Part A
.equ	PISEL2A		= 6		; 0x40 - PSC 2 Input Select for Part A
.equ	PELEV2A		= 5		; 0x20 - PSC 2 Edge Level Selector on Input Part A
.equ	PFLTE2A		= 4		; 0x10 - PSC 2 Filter Enable on Input Part A
.equ	PRFM2A_MASK	= 0x0F		;      - PSC 2 Retrigger and Fault Mode for Part A (4 bits)
.equ	PRFM2A0		= 0		;          PRFM2A BIT0 position

; ----------	Register PCTL2 bits		------------------------
.equ	PPRE2_MASK	= 0xC0		;      - PSC 2 Prescaler Selects (2 bits)
.equ	PPRE20		= 6		;          PPRE2 BIT0 position
.equ	PBFM2		= 5		; 0x20 - Balance Flank Width Modulation
.equ	PAOC2B		= 4		; 0x10 - PSC 2 Asynchronous Output Control B
.equ	PAOC2A		= 3		; 0x08 - PSC 2 Asynchronous Output Control A
.equ	PARUN2		= 2		; 0x04 - PSC2 Auto Run
.equ	PCCYC2		= 1		; 0x02 - PSC2 Complete Cycle
.equ	PRUN2		= 0		; 0x01 - PSC 2 Run

; ----------	Register PCNF2 bits		------------------------
.equ	PFIFTY2		= 7		; 0x80 - PSC 2 Fifty
.equ	PALOCK2		= 6		; 0x40 - PSC 2 Autolock
.equ	PLOCK2		= 5		; 0x20 - PSC 2 Lock
.equ	PMODE2_MASK	= 0x18		;      - PSC 2 Mode (2 bits)
.equ	PMODE20		= 3		;          PMODE2 BIT0 position
.equ	POP2		= 2		; 0x04 - PSC 2 Output Polarity
.equ	PCLKSEL2	= 1		; 0x02 - PSC 2 Input Clock Select
.equ	POME2		= 0		; 0x01 - PSC 2 Output Matrix Enable

; ----------	Register OCR2RB bits		------------------------
.equ	OCR2RB_MASK	= 0xFFFF	;      - Output Compare RB (16 bits)
.equ	OCR2RB0		= 0		;          OCR2RB BIT0 position

; ----------	Register OCR2SB bits		------------------------
.equ	OCR2SB_MASK	= 0x0FFF	;      - Output Compare SB (12 bits)
.equ	OCR2SB0		= 0		;          OCR2SB BIT0 position

; ----------	Register OCR2RA bits		------------------------
.equ	OCR2RA_MASK	= 0x0FFF	;      - Output Compare RA (12 bits)
.equ	OCR2RA0		= 0		;          OCR2RA BIT0 position

; ----------	Register OCR2SA bits		------------------------
.equ	OCR2SA_MASK	= 0x0FFF	;      - Output Compare SA (12 bits)
.equ	OCR2SA0		= 0		;          OCR2SA BIT0 position

; ----------	Register POM2 bits		------------------------
.equ	POMV2B_MASK	= 0xF0		;      - Output Matrix Output B Ramps (4 bits)
.equ	POMV2B0		= 4		;          POMV2B BIT0 position
.equ	POMV2A_MASK	= 0x0F		;      - Output Matrix Output A Ramps (4 bits)
.equ	POMV2A0		= 0		;          POMV2A BIT0 position

; ----------	Register PSOC2 bits		------------------------
.equ	POS2_MASK	= 0xC0		;      - PSC 2 Output 23 Select (2 bits)
.equ	POS20		= 6		;          POS2 BIT0 position
.equ	PSYNC2__MASK	= 0x30		;      - Synchronization Out for ADC Selection (2 bits)
.equ	PSYNC2_0	= 4		;          PSYNC2_ BIT0 position
.equ	POEN2D		= 3		; 0x08 - PSCOUT23 Output Enable
.equ	POEN2B		= 2		; 0x04 - PSCOUT21 Output Enable
.equ	POEN2C		= 1		; 0x02 - PSCOUT22 Output Enable
.equ	POEN2A		= 0		; 0x01 - PSCOUT20 Output Enable

; ----------	Register PIM2 bits		------------------------
.equ	PSEIE2		= 5		; 0x20 - PSC 2 Synchro Error Interrupt Enable
.equ	PEVE2B		= 4		; 0x10 - External Event B Interrupt Enable
.equ	PEVE2A		= 3		; 0x08 - External Event A Interrupt Enable
.equ	PEOPE2		= 0		; 0x01 - End of Cycle Interrupt Enable

; ----------	Register PIFR2 bits		------------------------
.equ	POAC2B		= 7		; 0x80 - PSC 2 Output A Activity
.equ	POAC2A		= 6		; 0x40 - PSC 2 Output A Activity
.equ	PSEI2		= 5		; 0x20 - PSC 2 Synchro Error Interrupt
.equ	PEV2B		= 4		; 0x10 - External Event B Interrupt
.equ	PEV2A		= 3		; 0x08 - External Event A Interrupt
.equ	PRN2_MASK	= 0x06		;      - Ramp Number (2 bits)
.equ	PRN20		= 1		;          PRN2 BIT0 position
.equ	PEOP2		= 0		; 0x01 - End of PSC2 Interrupt




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
.equ	INT_VECTORS_NUM		= 32
.equ	INT_VECTORS_SIZE	= 0x40
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;	1	PSC2_CAPT	; PSC2 Capture Event
;	2	PSC2_EC		; PSC2 End Cycle
;	3	PSC1_CAPT	; PSC1 Capture Event
;	4	PSC1_EC		; PSC1 End Cycle
;	5	PSC0_CAPT	; PSC0 Capture Event
;	6	PSC0_EC		; PSC0 End Cycle
;	7	ANALOG_COMP_0	; Analog Comparator 0
;	8	ANALOG_COMP_1	; Analog Comparator 1
;	9	ANALOG_COMP_2	; Analog Comparator 2
;	10	INT0		; External Interrupt Request 0
;	11	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	12	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	13	TIMER1_COMPB	; Timer/Counter Compare Match B
;	14	RESERVED15
;	15	TIMER1_OVF	; Timer/Counter1 Overflow
;	16	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	17	TIMER0_OVF	; Timer/Counter0 Overflow
;	18	ADC		; ADC Conversion Complete
;	19	INT1		; External Interrupt Request 1
;	20	SPI_STC		; SPI Serial Transfer Complete
;	21	USART_RX	; USART, Rx Complete
;	22	USART_UDRE	; USART Data Register Empty
;	23	USART_TX	; USART, Tx Complete
;	24	INT2		; External Interrupt Request 2
;	25	WDT		; Watchdog Timeout Interrupt
;	26	EE_READY	; EEPROM Ready
;	27	TIMER0_COMPB	; Timer Counter 0 Compare Match B
;	28	INT3		; External Interrupt Request 3
;	29	RESERVED30
;	30	RESERVED31
;	31	SPM_READY	; Store Program Memory Read


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;#		reti			; PSC2_CAPT	 - PSC2 Capture Event
;#		reti			; PSC2_EC	 - PSC2 End Cycle
;#		reti			; PSC1_CAPT	 - PSC1 Capture Event
;#		reti			; PSC1_EC	 - PSC1 End Cycle
;#		reti			; PSC0_CAPT	 - PSC0 Capture Event
;#		reti			; PSC0_EC	 - PSC0 End Cycle
;#		reti			; ANALOG_COMP_0	 - Analog Comparator 0
;#		reti			; ANALOG_COMP_1	 - Analog Comparator 1
;#		reti			; ANALOG_COMP_2	 - Analog Comparator 2
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter Compare Match B
;#		reti			; RESERVED15	 - 
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; ADC		 - ADC Conversion Complete
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART_RX	 - USART, Rx Complete
;#		reti			; USART_UDRE	 - USART Data Register Empty
;#		reti			; USART_TX	 - USART, Tx Complete
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; TIMER0_COMPB	 - Timer Counter 0 Compare Match B
;#		reti			; INT3		 - External Interrupt Request 3
;#		reti			; RESERVED30	 - 
;#		reti			; RESERVED31	 - 
;#		reti			; SPM_READY	 - Store Program Memory Read
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _AT90PWM2B_INC_ */

; ************************ END OF FILE *********************************

