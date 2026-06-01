;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega64RFR2
;* Title             : Register/Mask/Bit Definitions for the ATmega64RFR2
;* File Name         : ATmega64RFR2.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-01 14:53:01 UTC
;
;***********************************************************************

#ifndef _ATMEGA64RFR2_INC_
#define _ATMEGA64RFR2_INC_

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
.device	ATmega64RFR2
.equ	JTAGID		= 0x0A60203F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0xa6
.equ	SIGNATURE2	= 0x02


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

; ----------	USER_SIGNATURES ADDRESS SPACE	------------------------
;   USER_SIGNATURES
.equ	ADDR_USER_SIGNATURES_START	= 0x0100
.equ	ADDR_USER_SIGNATURES_END	= 0x03FF
.equ	ADDR_USER_SIGNATURES_SIZE	= 0x0300

; ----------	DATA ADDRESS SPACE		------------------------
;   REGISTERS
.equ	ADDR_REGISTERS_START		= 0x0000
.equ	ADDR_REGISTERS_END		= 0x001F
.equ	ADDR_REGISTERS_SIZE		= 0x0020
;   MAPPED_IO
.equ	ADDR_MAPPED_IO_START		= 0x0020
.equ	ADDR_MAPPED_IO_END		= 0x01FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x01E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0200
.equ	ADDR_IRAM_END			= 0x21FF
.equ	ADDR_IRAM_SIZE			= 0x2000

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
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x05		; Brown-out detection at VCC=1.9 V
;			0x04		; Brown-out detection at VCC=2.0 V
;			0x03		; Brown-out detection at VCC=2.1 V
;			0x02		; Brown-out detection at VCC=2.2 V
;			0x01		; Brown-out detection at VCC=2.3 V
;			0x00		; Brown-out detection at VCC=2.4 V

; ----------	Register HIGH bits		------------------------
.equ	OCDEN		= 7		; 0x80 - On-Chip Debug Enabled
.equ	JTAGEN		= 6		; 0x40 - JTAG Interface Enabled
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watchdog timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words start address=$7E00
;			0x04		; Boot Flash size=1024 words start address=$7C00
;			0x02		; Boot Flash size=2048 words start address=$7800
;			0x00		; Boot Flash size=4096 words start address=$7000

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTE7
.equ	CKSEL_SUT_MASK	= 0x3F		;      - Select Clock Source : Start-up time (6 bits)
.equ	CKSEL_SUT0	= 0		;          CKSEL_SUT BIT0 position
; ::::  CKSEL_SUT	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time: 6 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time: 6 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time: 6 CK + 65 ms
;			0x02		; Int. RC Osc.; Start-up time: 6 CK + 0 ms
;			0x12		; Int. RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x22		; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;			0x03		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 0 ms
;			0x13		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 4.1 ms
;			0x23		; Int. 128kHz RC Osc.; Start-up time: 6 CK + 65 ms
;			0x06		; Transceiver Oscillator; Start-up time: 258 CK + 4.1 ms
;			0x16		; Transceiver Oscillator; Start-up time: 258 CK + 65 ms
;			0x26		; Transceiver Oscillator; Start-up time: 1K CK + 0 ms
;			0x36		; Transceiver Oscillator; Start-up time: 1K CK + 4.1 ms
;			0x07		; Transceiver Oscillator; Start-up time: 1K CK + 65 ms
;			0x17		; Transceiver Oscillator; Start-up time: 16K CK + 0 ms
;			0x27		; Transceiver Oscillator; Start-up time: 16K CK + 4.1 ms
;			0x37		; Transceiver Oscillator; Start-up time: 16K CK + 65 ms
;			0x08		; Transceiver Oscillator; Start-up time: 258 CK + 4.1 ms
;			0x18		; Transceiver Oscillator; Start-up time: 258 CK + 65 ms
;			0x28		; Transceiver Oscillator; Start-up time: 1K CK + 0 ms
;			0x38		; Transceiver Oscillator; Start-up time: 1K CK + 4.1 ms
;			0x09		; Transceiver Oscillator; Start-up time: 1K CK + 65 ms
;			0x19		; Transceiver Oscillator; Start-up time: 16K CK + 0 ms
;			0x29		; Transceiver Oscillator; Start-up time: 16K CK + 4.1 ms
;			0x39		; Transceiver Oscillator; Start-up time: 16K CK + 65 ms
;			0x0A		; Transceiver Oscillator; Start-up time: 258 CK + 4.1 ms
;			0x1A		; Transceiver Oscillator; Start-up time: 258 CK + 65 ms
;			0x2A		; Transceiver Oscillator; Start-up time: 1K CK + 0 ms
;			0x3A		; Transceiver Oscillator; Start-up time: 1K CK + 4.1 ms
;			0x0B		; Transceiver Oscillator; Start-up time: 1K CK + 65 ms
;			0x1B		; Transceiver Oscillator; Start-up time: 16K CK + 0 ms
;			0x2B		; Transceiver Oscillator; Start-up time: 16K CK + 4.1 ms
;			0x3B		; Transceiver Oscillator; Start-up time: 16K CK + 65 ms
;			0x0C		; Transceiver Oscillator; Start-up time: 258 CK + 4.1 ms
;			0x1C		; Transceiver Oscillator; Start-up time: 258 CK + 65 ms
;			0x2C		; Transceiver Oscillator; Start-up time: 1K CK + 0 ms
;			0x3C		; Transceiver Oscillator; Start-up time: 1K CK + 4.1 ms
;			0x0D		; Transceiver Oscillator; Start-up time: 1K CK + 65 ms
;			0x1D		; Transceiver Oscillator; Start-up time: 16K CK + 0 ms
;			0x2D		; Transceiver Oscillator; Start-up time: 16K CK + 4.1 ms
;			0x3D		; Transceiver Oscillator; Start-up time: 16K CK + 65 ms
;			0x0E		; Transceiver Oscillator; Start-up time: 258 CK + 4.1 ms
;			0x1E		; Transceiver Oscillator; Start-up time: 258 CK + 65 ms
;			0x2E		; Transceiver Oscillator; Start-up time: 1K CK + 0 ms
;			0x3E		; Transceiver Oscillator; Start-up time: 1K CK + 4.1 ms
;			0x0F		; Transceiver Oscillator; Start-up time: 1K CK + 65 ms
;			0x1F		; Transceiver Oscillator; Start-up time: 16K CK + 0 ms
;			0x2F		; Transceiver Oscillator; Start-up time: 16K CK + 4.1 ms
;			0x3F		; Transceiver Oscillator; Start-up time: 16K CK + 65 ms




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
.equ	SCTSTRHH	= 0xFC		; [MEMORY MAPPED] Symbol Counter Transmit Frame Timestamp Register HH-Byte
.equ	SCTSTRHL	= 0xFB		; [MEMORY MAPPED] Symbol Counter Transmit Frame Timestamp Register HL-Byte
.equ	SCTSTRLH	= 0xFA		; [MEMORY MAPPED] Symbol Counter Transmit Frame Timestamp Register LH-Byte
.equ	SCTSTRLL	= 0xF9		; [MEMORY MAPPED] Symbol Counter Transmit Frame Timestamp Register LL-Byte
.equ	SCOCR1HH	= 0xF8		; [MEMORY MAPPED] Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HL	= 0xF7		; [MEMORY MAPPED] Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1LH	= 0xF6		; [MEMORY MAPPED] Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LL	= 0xF5		; [MEMORY MAPPED] Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR2HH	= 0xF4		; [MEMORY MAPPED] Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HL	= 0xF3		; [MEMORY MAPPED] Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2LH	= 0xF2		; [MEMORY MAPPED] Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LL	= 0xF1		; [MEMORY MAPPED] Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR3HH	= 0xF0		; [MEMORY MAPPED] Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HL	= 0xEF		; [MEMORY MAPPED] Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3LH	= 0xEE		; [MEMORY MAPPED] Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LL	= 0xED		; [MEMORY MAPPED] Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCTSRHH		= 0xEC		; [MEMORY MAPPED] Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHL		= 0xEB		; [MEMORY MAPPED] Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRLH		= 0xEA		; [MEMORY MAPPED] Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLL		= 0xE9		; [MEMORY MAPPED] Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCBTSRHH	= 0xE8		; [MEMORY MAPPED] Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHL	= 0xE7		; [MEMORY MAPPED] Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRLH	= 0xE6		; [MEMORY MAPPED] Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLL	= 0xE5		; [MEMORY MAPPED] Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCCNTHH		= 0xE4		; [MEMORY MAPPED] Symbol Counter Register HH-Byte
.equ	SCCNTHL		= 0xE3		; [MEMORY MAPPED] Symbol Counter Register HL-Byte
.equ	SCCNTLH		= 0xE2		; [MEMORY MAPPED] Symbol Counter Register LH-Byte
.equ	SCCNTLL		= 0xE1		; [MEMORY MAPPED] Symbol Counter Register LL-Byte
.equ	SCIRQS		= 0xE0		; [MEMORY MAPPED] Symbol Counter Interrupt Status Register
.equ	SCIRQM		= 0xDF		; [MEMORY MAPPED] Symbol Counter Interrupt Mask Register
.equ	SCSR		= 0xDE		; [MEMORY MAPPED] Symbol Counter Status Register
.equ	SCCR1		= 0xDD		; [MEMORY MAPPED] Symbol Counter Control Register 1
.equ	SCCR0		= 0xDC		; [MEMORY MAPPED] Symbol Counter Control Register 0
.equ	SCCSR		= 0xDB		; [MEMORY MAPPED] Symbol Counter Compare Source Register
.equ	SCRSTRHH	= 0xDA		; [MEMORY MAPPED] Symbol Counter Received Frame Timestamp Register HH-Byte
.equ	SCRSTRHL	= 0xD9		; [MEMORY MAPPED] Symbol Counter Received Frame Timestamp Register HL-Byte
.equ	SCRSTRLH	= 0xD8		; [MEMORY MAPPED] Symbol Counter Received Frame Timestamp Register LH-Byte
.equ	SCRSTRLL	= 0xD7		; [MEMORY MAPPED] Symbol Counter Received Frame Timestamp Register LL-Byte
.equ	UDR1		= 0xCE		; [MEMORY MAPPED] USART1 I/O Data Register
.equ	UBRR1		= 0xCC		; [MEMORY MAPPED] USART1 Baud Rate Register  Bytes
.equ	UCSR1C		= 0xCA		; [MEMORY MAPPED] USART1 Control and Status Register C
.equ	UCSR1B		= 0xC9		; [MEMORY MAPPED] USART1 Control and Status Register B
.equ	UCSR1A		= 0xC8		; [MEMORY MAPPED] USART1 Control and Status Register A
.equ	UDR0		= 0xC6		; [MEMORY MAPPED] USART0 I/O Data Register
.equ	UBRR0		= 0xC4		; [MEMORY MAPPED] USART0 Baud Rate Register  Bytes
.equ	UCSR0C		= 0xC2		; [MEMORY MAPPED] USART0 Control and Status Register C
.equ	UCSR0B		= 0xC1		; [MEMORY MAPPED] USART0 Control and Status Register B
.equ	UCSR0A		= 0xC0		; [MEMORY MAPPED] USART0 Control and Status Register A
.equ	IRQ_STATUS1	= 0xBF		; [MEMORY MAPPED] Transceiver Interrupt Status Register 1
.equ	IRQ_MASK1	= 0xBE		; [MEMORY MAPPED] Transceiver Interrupt Enable Register 1
.equ	TWAMR		= 0xBD		; [MEMORY MAPPED] TWI (Slave) Address Mask Register
.equ	TWCR		= 0xBC		; [MEMORY MAPPED] TWI Control Register
.equ	TWDR		= 0xBB		; [MEMORY MAPPED] TWI Data Register
.equ	TWAR		= 0xBA		; [MEMORY MAPPED] TWI (Slave) Address Register
.equ	TWSR		= 0xB9		; [MEMORY MAPPED] TWI Status Register
.equ	TWBR		= 0xB8		; [MEMORY MAPPED] TWI Bit Rate Register
.equ	ASSR		= 0xB6		; [MEMORY MAPPED] Asynchronous Status Register
.equ	OCR2B		= 0xB4		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register B
.equ	OCR2A		= 0xB3		; [MEMORY MAPPED] Timer/Counter2 Output Compare Register A
.equ	TCNT2		= 0xB2		; [MEMORY MAPPED] Timer/Counter2
.equ	TCCR2B		= 0xB1		; [MEMORY MAPPED] Timer/Counter2 Control Register B
.equ	TCCR2A		= 0xB0		; [MEMORY MAPPED] Timer/Counter2 Control Register A
.equ	OCR4C		= 0xAC		; [MEMORY MAPPED] Timer/Counter4 Output Compare Register C  Bytes
.equ	OCR4B		= 0xAA		; [MEMORY MAPPED] Timer/Counter4 Output Compare Register B  Bytes
.equ	OCR4A		= 0xA8		; [MEMORY MAPPED] Timer/Counter4 Output Compare Register A  Bytes
.equ	ICR4		= 0xA6		; [MEMORY MAPPED] Timer/Counter4 Input Capture Register  Bytes
.equ	TCNT4		= 0xA4		; [MEMORY MAPPED] Timer/Counter4  Bytes
.equ	TCCR4C		= 0xA2		; [MEMORY MAPPED] Timer/Counter4 Control Register C
.equ	TCCR4B		= 0xA1		; [MEMORY MAPPED] Timer/Counter4 Control Register B
.equ	TCCR4A		= 0xA0		; [MEMORY MAPPED] Timer/Counter4 Control Register A
.equ	OCR3C		= 0x9C		; [MEMORY MAPPED] Timer/Counter3 Output Compare Register C  Bytes
.equ	OCR3B		= 0x9A		; [MEMORY MAPPED] Timer/Counter3 Output Compare Register B  Bytes
.equ	OCR3A		= 0x98		; [MEMORY MAPPED] Timer/Counter3 Output Compare Register A  Bytes
.equ	ICR3		= 0x96		; [MEMORY MAPPED] Timer/Counter3 Input Capture Register  Bytes
.equ	TCNT3		= 0x94		; [MEMORY MAPPED] Timer/Counter3  Bytes
.equ	TCCR3C		= 0x92		; [MEMORY MAPPED] Timer/Counter3 Control Register C
.equ	TCCR3B		= 0x91		; [MEMORY MAPPED] Timer/Counter3 Control Register B
.equ	TCCR3A		= 0x90		; [MEMORY MAPPED] Timer/Counter3 Control Register A
.equ	OCR1C		= 0x8C		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register C  Bytes
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register A  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	DIDR2		= 0x7D		; [MEMORY MAPPED] Digital Input Disable Register 2
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC Multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status Register A
.equ	ADC		= 0x78		; [MEMORY MAPPED] ADC Data Register  Bytes
.equ	ADCSRC		= 0x77		; [MEMORY MAPPED] The ADC Control and Status Register C
.equ	NEMCR		= 0x75		; [MEMORY MAPPED] Flash Extended-Mode Control-Register
.equ	TIMSK5		= 0x73		; [MEMORY MAPPED] Timer/Counter5 Interrupt Mask Register
.equ	TIMSK4		= 0x72		; [MEMORY MAPPED] Timer/Counter4 Interrupt Mask Register
.equ	TIMSK3		= 0x71		; [MEMORY MAPPED] Timer/Counter3 Interrupt Mask Register
.equ	TIMSK2		= 0x70		; [MEMORY MAPPED] Timer/Counter Interrupt Mask register
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter1 Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK2		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRB		= 0x6A		; [MEMORY MAPPED] External Interrupt Control Register B
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	BGCR		= 0x67		; [MEMORY MAPPED] Reference Voltage Calibration Register
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR1		= 0x65		; [MEMORY MAPPED] Power Reduction Register 1
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register0
.equ	PRR2		= 0x63		; [MEMORY MAPPED] Power Reduction Register 2
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	OCDR		= 0x31		; On-Chip Debug Register
.equ	ACSR		= 0x30		; Analog Comparator Control And Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register B
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0 Register
.equ	TCCR0B		= 0x25		; Timer/Counter0 Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter0 Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR5		= 0x1A		; Timer/Counter5 Interrupt Flag Register
.equ	TIFR4		= 0x19		; Timer/Counter4 Interrupt Flag Register
.equ	TIFR3		= 0x18		; Timer/Counter3 Interrupt Flag Register
.equ	TIFR2		= 0x17		; Timer/Counter Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter1 Interrupt Flag Register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag Register
.equ	PORTG		= 0x14		; Port G Data Register
.equ	DDRG		= 0x13		; Port G Data Direction Register
.equ	PING		= 0x12		; Port G Input Pins Address
.equ	PORTF		= 0x11		; Port F Data Register
.equ	DDRF		= 0x10		; Port F Data Direction Register
.equ	PINF		= 0x0F		; Port F Input Pins Address
.equ	PORTE		= 0x0E		; Port E Data Register
.equ	DDRE		= 0x0D		; Port E Data Direction Register
.equ	PINE		= 0x0C		; Port E Input Pins Address
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins Address
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins Address
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins Address
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins Address
.equ	TRXFBEND	= 0x01FF	; [MEMORY MAPPED] End of frame buffer
.equ	TRXFBST		= 0x0180	; [MEMORY MAPPED] Start of frame buffer
.equ	TST_RX_LENGTH	= 0x017B	; [MEMORY MAPPED] Transceiver Received Frame Length Register
.equ	TST_CTRL_DIGI	= 0x0176	; [MEMORY MAPPED] Transceiver Digital Test Control Register
.equ	CSMA_BE		= 0x016F	; [MEMORY MAPPED] Transceiver CSMA-CA Back-off Exponent Control Register
.equ	CSMA_SEED_1	= 0x016E	; [MEMORY MAPPED] Transceiver Acknowledgment Frame Control Register 2
.equ	CSMA_SEED_0	= 0x016D	; [MEMORY MAPPED] Transceiver CSMA-CA Random Number Generator Seed Register
.equ	XAH_CTRL_0	= 0x016C	; [MEMORY MAPPED] Transceiver Extended Operating Mode Control Register
.equ	IEEE_ADDR_7	= 0x016B	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 7
.equ	IEEE_ADDR_6	= 0x016A	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 6
.equ	IEEE_ADDR_5	= 0x0169	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 5
.equ	IEEE_ADDR_4	= 0x0168	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 4
.equ	IEEE_ADDR_3	= 0x0167	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 3
.equ	IEEE_ADDR_2	= 0x0166	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 2
.equ	IEEE_ADDR_1	= 0x0165	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 1
.equ	IEEE_ADDR_0	= 0x0164	; [MEMORY MAPPED] Transceiver MAC IEEE Address Register 0
.equ	PAN_ID_1	= 0x0163	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register (High Byte)
.equ	PAN_ID_0	= 0x0162	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register (Low Byte)
.equ	SHORT_ADDR_1	= 0x0161	; [MEMORY MAPPED] Transceiver MAC Short Address Register (High Byte)
.equ	SHORT_ADDR_0	= 0x0160	; [MEMORY MAPPED] Transceiver MAC Short Address Register (Low Byte)
.equ	MAN_ID_1	= 0x015F	; [MEMORY MAPPED] Device Identification Register (Manufacture ID High Byte)
.equ	MAN_ID_0	= 0x015E	; [MEMORY MAPPED] Device Identification Register (Manufacture ID Low Byte)
.equ	VERSION_NUM	= 0x015D	; [MEMORY MAPPED] Device Identification Register (Version Number)
.equ	PART_NUM	= 0x015C	; [MEMORY MAPPED] Device Identification Register (Part Number)
.equ	PLL_DCU		= 0x015B	; [MEMORY MAPPED] Transceiver Delay Cell Calibration Control Register
.equ	PLL_CF		= 0x015A	; [MEMORY MAPPED] Transceiver Center Frequency Calibration Control Register
.equ	FTN_CTRL	= 0x0158	; [MEMORY MAPPED] Transceiver Filter Tuning Control Register
.equ	XAH_CTRL_1	= 0x0157	; [MEMORY MAPPED] Transceiver Acknowledgment Frame Control Register 1
.equ	TRX_RPC		= 0x0156	; [MEMORY MAPPED] Transceiver Reduced Power Consumption Control
.equ	RX_SYN		= 0x0155	; [MEMORY MAPPED] Transceiver Receiver Sensitivity Control Register
.equ	CC_CTRL_1	= 0x0154	; [MEMORY MAPPED] Channel Control Register 1
.equ	CC_CTRL_0	= 0x0153	; [MEMORY MAPPED] Channel Control Register 0
.equ	XOSC_CTRL	= 0x0152	; [MEMORY MAPPED] Crystal Oscillator Control Register
.equ	BATMON		= 0x0151	; [MEMORY MAPPED] Battery Monitor Control and Status Register
.equ	VREG_CTRL	= 0x0150	; [MEMORY MAPPED] Voltage Regulator Control and Status Register
.equ	IRQ_STATUS	= 0x014F	; [MEMORY MAPPED] Transceiver Interrupt Status Register
.equ	IRQ_MASK	= 0x014E	; [MEMORY MAPPED] Transceiver Interrupt Enable Register
.equ	ANT_DIV		= 0x014D	; [MEMORY MAPPED] Antenna Diversity Control Register
.equ	TRX_CTRL_2	= 0x014C	; [MEMORY MAPPED] Transceiver Control Register 2
.equ	SFD_VALUE	= 0x014B	; [MEMORY MAPPED] Start of Frame Delimiter Value Register
.equ	RX_CTRL		= 0x014A	; [MEMORY MAPPED] Transceiver Receive Control Register
.equ	CCA_THRES	= 0x0149	; [MEMORY MAPPED] Transceiver CCA Threshold Setting Register
.equ	PHY_CC_CCA	= 0x0148	; [MEMORY MAPPED] Transceiver Clear Channel Assessment (CCA) Control Register
.equ	PHY_ED_LEVEL	= 0x0147	; [MEMORY MAPPED] Transceiver Energy Detection Level Register
.equ	PHY_RSSI	= 0x0146	; [MEMORY MAPPED] Receiver Signal Strength Indicator Register
.equ	PHY_TX_PWR	= 0x0145	; [MEMORY MAPPED] Transceiver Transmit Power Control Register
.equ	TRX_CTRL_1	= 0x0144	; [MEMORY MAPPED] Transceiver Control Register 1
.equ	TRX_CTRL_0	= 0x0143	; [MEMORY MAPPED] Reserved
.equ	TRX_STATE	= 0x0142	; [MEMORY MAPPED] Transceiver State Control Register
.equ	TRX_STATUS	= 0x0141	; [MEMORY MAPPED] Transceiver Status Register
.equ	AES_KEY		= 0x013F	; [MEMORY MAPPED] AES Encryption and Decryption Key Buffer Register
.equ	AES_STATE	= 0x013E	; [MEMORY MAPPED] AES Plain and Cipher Text Buffer Register
.equ	AES_STATUS	= 0x013D	; [MEMORY MAPPED] AES Status Register
.equ	AES_CTRL	= 0x013C	; [MEMORY MAPPED] AES Control Register
.equ	TRXPR		= 0x0139	; [MEMORY MAPPED] Transceiver Pin Register
.equ	PARCR		= 0x0138	; [MEMORY MAPPED] Power Amplifier Ramp up/down Control Register
.equ	DPDS1		= 0x0137	; [MEMORY MAPPED] Port Driver Strength Register 1
.equ	DPDS0		= 0x0136	; [MEMORY MAPPED] Port Driver Strength Register 0
.equ	DRTRAM0		= 0x0135	; [MEMORY MAPPED] Data Retention Configuration Register #0
.equ	DRTRAM1		= 0x0134	; [MEMORY MAPPED] Data Retention Configuration Register #1
.equ	DRTRAM2		= 0x0133	; [MEMORY MAPPED] Data Retention Configuration Register #2
.equ	DRTRAM3		= 0x0132	; [MEMORY MAPPED] Data Retention Configuration Register #3
.equ	LLDRH		= 0x0131	; [MEMORY MAPPED] Low Leakage Voltage Regulator Data Register (High-Byte)
.equ	LLDRL		= 0x0130	; [MEMORY MAPPED] Low Leakage Voltage Regulator Data Register (Low-Byte)
.equ	LLCR		= 0x012F	; [MEMORY MAPPED] Low Leakage Voltage Regulator Control Register
.equ	OCR5C		= 0x012C	; [MEMORY MAPPED] Timer/Counter5 Output Compare Register C  Bytes
.equ	OCR5B		= 0x012A	; [MEMORY MAPPED] Timer/Counter5 Output Compare Register B  Bytes
.equ	OCR5A		= 0x0128	; [MEMORY MAPPED] Timer/Counter5 Output Compare Register A  Bytes
.equ	ICR5		= 0x0126	; [MEMORY MAPPED] Timer/Counter5 Input Capture Register  Bytes
.equ	TCNT5		= 0x0124	; [MEMORY MAPPED] Timer/Counter5  Bytes
.equ	TCCR5C		= 0x0122	; [MEMORY MAPPED] Timer/Counter5 Control Register C
.equ	TCCR5B		= 0x0121	; [MEMORY MAPPED] Timer/Counter5 Control Register B
.equ	TCCR5A		= 0x0120	; [MEMORY MAPPED] Timer/Counter5 Control Register A
.equ	MAFPA3H		= 0x011D	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 3 (High Byte)
.equ	MAFPA3L		= 0x011C	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 3 (Low Byte)
.equ	MAFSA3H		= 0x011B	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 3 (High Byte)
.equ	MAFSA3L		= 0x011A	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 3 (Low Byte)
.equ	MAFPA2H		= 0x0119	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 2 (High Byte)
.equ	MAFPA2L		= 0x0118	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 2 (Low Byte)
.equ	MAFSA2H		= 0x0117	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 2 (High Byte)
.equ	MAFSA2L		= 0x0116	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 2 (Low Byte)
.equ	MAFPA1H		= 0x0115	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 1 (High Byte)
.equ	MAFPA1L		= 0x0114	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 1 (Low Byte)
.equ	MAFSA1H		= 0x0113	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 1 (High Byte)
.equ	MAFSA1L		= 0x0112	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 1 (Low Byte)
.equ	MAFPA0H		= 0x0111	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 0 (High Byte)
.equ	MAFPA0L		= 0x0110	; [MEMORY MAPPED] Transceiver Personal Area Network ID Register for Frame Filter 0 (Low Byte)
.equ	MAFSA0H		= 0x010F	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 0 (High Byte)
.equ	MAFSA0L		= 0x010E	; [MEMORY MAPPED] Transceiver MAC Short Address Register for Frame Filter 0 (Low Byte)
.equ	MAFCR1		= 0x010D	; [MEMORY MAPPED] Multiple Address Filter Configuration Register 1
.equ	MAFCR0		= 0x010C	; [MEMORY MAPPED] Multiple Address Filter Configuration Register 0


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
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge

; ----------	Register DIDR1 bits		------------------------
.equ	AIN1D		= 1		; 0x02 - AIN1 Digital Input Disable
.equ	AIN0D		= 0		; 0x01 - AIN0 Digital Input Disable



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UCSR0A bits		------------------------
.equ	RXC0		= 7		; 0x80 - USART Receive Complete
.equ	TXC0		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE0		= 5		; 0x20 - USART Data Register Empty
.equ	FE0		= 4		; 0x10 - Frame Error
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
.equ	UMSEL0_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL00		= 6		;          UMSEL0 BIT0 position
.equ	UPM0_MASK	= 0x30		;      - Parity Mode (2 bits)
.equ	UPM00		= 4		;          UPM0 BIT0 position
.equ	USBS0		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ0_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ00		= 1		;          UCSZ0 BIT0 position
.equ	UCPOL0		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL0	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0x80		; Reserved
;			0xC0		; Master SPI (MSPIM)
; ::::  UPM0	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS0	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit
; ::::  UCSZ0	>>>> This is a part of USART_CHAR_SIZE_BITF enum (see complete values list below)
; ::::  UCPOL0	:::: bitfield values
;			0x00		; Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled)
;			0x01		; Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled)

; ----------	Register UCSR1A bits		------------------------
.equ	RXC1		= 7		; 0x80 - USART Receive Complete
.equ	TXC1		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE1		= 5		; 0x20 - USART Data Register Empty
.equ	FE1		= 4		; 0x10 - Frame Error
.equ	DOR1		= 3		; 0x08 - Data OverRun
.equ	UPE1		= 2		; 0x04 - USART Parity Error
.equ	U2X1		= 1		; 0x02 - Double the USART Transmission Speed
.equ	MPCM1		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSR1B bits		------------------------
.equ	RXCIE1		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE1		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE1		= 5		; 0x20 - USART Data Register Empty Interrupt Enable
.equ	RXEN1		= 4		; 0x10 - Receiver Enable
.equ	TXEN1		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ12		= 2		; 0x04 - Character Size
.equ	RXB81		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB81		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSR1C bits		------------------------
.equ	UMSEL1_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL10		= 6		;          UMSEL1 BIT0 position
.equ	UPM1_MASK	= 0x30		;      - Parity Mode (2 bits)
.equ	UPM10		= 4		;          UPM1 BIT0 position
.equ	USBS1		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ1_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ10		= 1		;          UCSZ1 BIT0 position
.equ	UCPOL1		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL1	:::: bitfield values
;			0x00		; Asynchronous USART
;			0x40		; Synchronous USART
;			0x80		; Reserved
;			0xC0		; Master SPI (MSPIM)
; ::::  UPM1	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS1	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit
; ::::  UCSZ1	>>>> This is a part of USART_CHAR_SIZE_BITF enum (see complete values list below)
; ::::  UCPOL1	:::: bitfield values
;			0x00		; Rising XCKn Edge (Transmitted Data Changed), Falling XCKn Edge (Received Data Sampled)
;			0x01		; Falling XCKn Edge (Transmitted Data Changed), Rising XCKn Edge (Received Data Sampled)



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWAMR bits		------------------------
.equ	TWAM_MASK	= 0xFE		;      - TWI Address Mask (7 bits)
.equ	TWAM0		= 1		;          TWAM BIT0 position

; ----------	Register TWCR bits		------------------------
.equ	TWINT		= 7		; 0x80 - TWI Interrupt Flag
.equ	TWEA		= 6		; 0x40 - TWI Enable Acknowledge Bit
.equ	TWSTA		= 5		; 0x20 - TWI START Condition Bit
.equ	TWSTO		= 4		; 0x10 - TWI STOP Condition Bit
.equ	TWWC		= 3		; 0x08 - TWI Write Collision Flag
.equ	TWEN		= 2		; 0x04 - TWI Enable Bit
.equ	TWIE		= 0		; 0x01 - TWI Interrupt Enable

; ----------	Register TWSR bits		------------------------
.equ	TWS_MASK	= 0xF8		;      - TWI Status (5 bits)
.equ	TWS0		= 3		;          TWS BIT0 position
.equ	TWPS_MASK	= 0x03		;      - TWI Prescaler Bits (2 bits)
.equ	TWPS0		= 0		;          TWPS BIT0 position
; ::::  TWS	:::: bitfield values
;			0x00		; Bus error due to illegal START or STOP condition.
;			0x08		; A START condition has been transmitted.
;			0x10		; A repeated START condition has been transmitted.
;			0x18		; SLA+W has been transmitted; ACK has been received.
;			0x20		; SLA+W has been transmitted; NOT ACK has been received.
;			0x28		; Data byte has been transmitted; ACK has been received.
;			0x30		; Data byte has been transmitted; NOT ACK has been received.
;			0x38		; Arbitration lost in SLA+W or data bytes (Transmitter); Arbitration lost in SLA+R or NOT ACK bit (Receiver).
;			0x40		; SLA+R has been transmitted; ACK has been received.
;			0x48		; SLA+R has been transmitted; NOT ACK has been received.
;			0x50		; Data byte has been received; ACK has been returned.
;			0x58		; Data byte has been received; NOT ACK has been returned.
;			0x60		; Own SLA+W has been received; ACK has been returned.
;			0x68		; Arbitration lost in SLA+R/W as Master; own SLA+W has been received; ACK has been returned.
;			0x70		; General call address has been received; ACK has been returned.
;			0x78		; Arbitration lost in SLA+R/W as Master; general call address has been received; ACK has been returned.
;			0x80		; Previously addressed with own SLA+W; data has been received; ACK has been returned.
;			0x88		; Previously addressed with own SLA+W; data has been received; NOT ACK has been returned.
;			0x90		; Previously addressed with general call; data has been received; ACK has been returned.
;			0x98		; Previously addressed with general call; data has been received; NOT ACK has been returned.
;			0xA0		; A STOP condition or repeated START condition has been received while still addressed as Slave.
;			0xA8		; Own SLA+R has been received; ACK has been returned.
;			0xB0		; Arbitration lost in SLA+R/W as Master; own SLA+R has been received; ACK has been returned.
;			0xB8		; Data byte in TWDR has been transmitted; ACK has been received.
;			0xC0		; Data byte in TWDR has been transmitted; NO ACK has been received.
;			0xC8		; Last data byte in TWDR has been transmitted (TWEA = 0); ACK has been received.
;			0xF8		; No relevant state information available; TWINT = 0.
; ::::  TWPS	:::: bitfield values
;			0x00		; 1
;			0x01		; 4
;			0x02		; 16
;			0x03		; 64

; ----------	Register TWAR bits		------------------------
.equ	TWA_MASK	= 0xFE		;      - TWI (Slave) Address (7 bits)
.equ	TWA0		= 1		;          TWA BIT0 position
.equ	TWGCE		= 0		; 0x01 - TWI General Call Recognition Enable Bit



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPCR bits		------------------------
.equ	SPIE		= 7		; 0x80 - SPI Interrupt Enable
.equ	SPE		= 6		; 0x40 - SPI Enable
.equ	DORD		= 5		; 0x20 - Data Order
.equ	MSTR		= 4		; 0x10 - Master/Slave Select
.equ	CPOL		= 3		; 0x08 - Clock polarity
.equ	CPHA		= 2		; 0x04 - Clock Phase
.equ	SPR_MASK	= 0x03		;      - SPI Clock Rate Select 1 and 0 (2 bits)
.equ	SPR0		= 0		;          SPR BIT0 position
; ::::  CPOL	:::: bitfield values
;			0x00		; Rising (Leading Edge), Falling (Trailing Edge)
;			0x08		; Falling (Leading Edge), Rising (Trailing Edge)
; ::::  CPHA	:::: bitfield values
;			0x00		; Sample (Leading Edge), Setup (Trailing Edge)
;			0x04		; Setup (Leading Edge), Sample (Trailing Edge)
; ::::  SPR	:::: bitfield values
;			0x00		; fosc/4 / fosc/2 (SPI2X=0/1)
;			0x01		; fosc/16 / fosc/8 (SPI2X=0/1)
;			0x02		; fosc/64 / fosc/32 (SPI2X=0/1)
;			0x03		; fosc/128 / fosc/64 (SPI2X=0/1)

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	WCOL		= 6		; 0x40 - Write Collision Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit

; ----------	Register UCSR0A bits		------------------------
;.equ	RXC0		= 7		; 0x80 - USART Receive Complete
;.equ	TXC0		= 6		; 0x40 - USART Transmit Complete
;.equ	UDRE0		= 5		; 0x20 - USART Data Register Empty

; ----------	Register UCSR0B bits		------------------------
;.equ	RXCIE0		= 7		; 0x80 - RX Complete Interrupt Enable
;.equ	TXCIE0		= 6		; 0x40 - TX Complete Interrupt Enable
;.equ	UDRIE0		= 5		; 0x20 - USART Data Register Empty Interrupt Enable
;.equ	RXEN0		= 4		; 0x10 - Receiver Enable
;.equ	TXEN0		= 3		; 0x08 - Transmitter Enable

; ----------	Register UCSR0C bits		------------------------
.equ	UDORD0		= 2		; 0x04 - Data Order
.equ	UCPHA0		= 1		; 0x02 - Clock Phase
;.equ	UCPOL0		= 0		; 0x01 - Clock Polarity

; ----------	Register UCSR1A bits		------------------------
;.equ	RXC1		= 7		; 0x80 - USART Receive Complete
;.equ	TXC1		= 6		; 0x40 - USART Transmit Complete
;.equ	UDRE1		= 5		; 0x20 - USART Data Register Empty

; ----------	Register UCSR1B bits		------------------------
;.equ	RXCIE1		= 7		; 0x80 - RX Complete Interrupt Enable
;.equ	TXCIE1		= 6		; 0x40 - TX Complete Interrupt Enable
;.equ	UDRIE1		= 5		; 0x20 - USART Data Register Empty Interrupt Enable
;.equ	RXEN1		= 4		; 0x10 - Receiver Enable
;.equ	TXEN1		= 3		; 0x08 - Transmitter Enable

; ----------	Register UCSR1C bits		------------------------
.equ	UDORD1		= 2		; 0x04 - Data Order
.equ	UCPHA1		= 1		; 0x02 - Clock Phase
;.equ	UCPOL1		= 0		; 0x01 - Clock Polarity



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare B
.equ	WGM02		= 3		; 0x08 - 
.equ	CS0_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS00		= 0		;          CS0 BIT0 position
; ::::  CS0	:::: bitfield values
;			0x00		; No clock source (Timer/Counter0 stopped)
;			0x01		; clk_IO/1 (no prescaling)
;			0x02		; clk_IO/8 (from prescaler)
;			0x03		; clk_IO/64 (from prescaler)
;			0x04		; clk_IO/256 (from prescaler)
;			0x05		; clk_IO/1024 (from prescaler)
;			0x06		; External clock source on T0 pin, clock on falling edge
;			0x07		; External clock source on T0 pin, clock on rising edge

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Match Output A Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Match Output B Mode (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position
; ::::  COM0A	:::: bitfield values
;			0x00		; Normal port operation, OC0A disconnected
;			0x40		; Toggle OC0A on Compare Match
;			0x80		; Clear OC0A on Compare Match
;			0xC0		; Set OC0A on Compare Match
; ::::  COM0B	:::: bitfield values
;			0x00		; Normal port operation, OC0B disconnected
;			0x10		; Toggle OC0B on Compare Match
;			0x20		; Clear OC0B on Compare Match
;			0x30		; Set OC0B on Compare Match
; ::::  WGM0	>>>> This is a part of TC0_WGM_BITF enum (see complete values list below)

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare B Match Flag
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare A Match Flag
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRASY		= 1		; 0x02 - Prescaler Reset Timer/Counter2
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset for Synchronous Timer/Counters



; ====	TC8_ASYNC MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TIMSK2 bits		------------------------
.equ	OCIE2B		= 2		; 0x04 - Timer/Counter2 Output Compare Match B Interrupt Enable
.equ	OCIE2A		= 1		; 0x02 - Timer/Counter2 Output Compare Match A Interrupt Enable
.equ	TOIE2		= 0		; 0x01 - Timer/Counter2 Overflow Interrupt Enable

; ----------	Register TIFR2 bits		------------------------
.equ	OCF2B		= 2		; 0x04 - Output Compare Flag 2 B
.equ	OCF2A		= 1		; 0x02 - Output Compare Flag 2 A
.equ	TOV2		= 0		; 0x01 - Timer/Counter2 Overflow Flag

; ----------	Register TCCR2A bits		------------------------
.equ	COM2A_MASK	= 0xC0		;      - Compare Match Output A Mode (2 bits)
.equ	COM2A0		= 6		;          COM2A BIT0 position
.equ	COM2B_MASK	= 0x30		;      - Compare Match Output B Mode (2 bits)
.equ	COM2B0		= 4		;          COM2B BIT0 position
.equ	WGM2_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM20		= 0		;          WGM2 BIT0 position
; ::::  COM2A	:::: bitfield values
;			0x00		; Normal port operation, OC2A disconnected
;			0x40		; Toggle OC2A on Compare Match
;			0x80		; Clear OC2A on Compare Match
;			0xC0		; Set OC2A on Compare Match
; ::::  COM2B	:::: bitfield values
;			0x00		; Normal port operation, OC2B disconnected
;			0x10		; Toggle OC2B on Compare Match
;			0x20		; Clear OC2B on Compare Match
;			0x30		; Set OC2B on Compare Match
; ::::  WGM2	>>>> This is a part of TC0_WGM_BITF enum (see complete values list below)

; ----------	Register TCCR2B bits		------------------------
.equ	FOC2A		= 7		; 0x80 - Force Output Compare A
.equ	FOC2B		= 6		; 0x40 - Force Output Compare B
.equ	WGM22		= 3		; 0x08 - Waveform Generation Mode
.equ	CS2_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS20		= 0		;          CS2 BIT0 position
; ::::  CS2	:::: bitfield values
;			0x00		; No clock source (Timer/Counter2 stopped)
;			0x01		; clk_T2S/1 (no prescaling)
;			0x02		; clk_T2S/8 (from prescaler)
;			0x03		; clk_T2S/32 (from prescaler)
;			0x04		; clk_T2S/64 (from prescaler)
;			0x05		; clk_T2S/128 (from prescaler)
;			0x06		; clk_T2S/256 (from prescaler)
;			0x07		; clk_T2S/1024 (from prescaler)

; ----------	Register ASSR bits		------------------------
.equ	EXCLKAMR	= 7		; 0x80 - Enable External Clock Input for AMR
.equ	EXCLK		= 6		; 0x40 - Enable External Clock Input
.equ	AS2		= 5		; 0x20 - Timer/Counter2 Asynchronous Mode
.equ	TCN2UB		= 4		; 0x10 - Timer/Counter2 Update Busy
.equ	OCR2AUB		= 3		; 0x08 - Timer/Counter2 Output Compare Register A Update Busy
.equ	OCR2BUB		= 2		; 0x04 - Timer/Counter2 Output Compare Register B Update Busy
.equ	TCR2AUB		= 1		; 0x02 - Timer/Counter2 Control Register A Update Busy
.equ	TCR2BUB		= 0		; 0x01 - Timer/Counter2 Control Register B Update Busy

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSRASY		= 1		; 0x02 - Prescaler Reset Timer/Counter2



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



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR5A bits		------------------------
.equ	COM5A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM5A0		= 6		;          COM5A BIT0 position
.equ	COM5B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM5B0		= 4		;          COM5B BIT0 position
.equ	COM5C_MASK	= 0x0C		;      - Compare Output Mode for Channel C (2 bits)
.equ	COM5C0		= 2		;          COM5C BIT0 position
.equ	TCCR5A_WGM5_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR5A_WGM50	= 0		;          TCCR5A_WGM5 BIT0 position
; ::::  COM5A	:::: bitfield values
;			0x00		; Normal operation
;			0x40		; Reserved
;			0x80		; Reserved
;			0xC0		; Reserved
; ::::  COM5B	:::: bitfield values
;			0x00		; Normal operation
;			0x10		; Reserved
;			0x20		; Reserved
;			0x30		; Reserved
; ::::  COM5C	:::: bitfield values
;			0x00		; Normal operation
;			0x04		; Reserved
;			0x08		; Reserved
;			0x0C		; Reserved
; ::::  TCCR5A_WGM5	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)

; ----------	Register TCCR5B bits		------------------------
.equ	ICNC5		= 7		; 0x80 - Input Capture 5 Noise Canceller
.equ	ICES5		= 6		; 0x40 - Input Capture 5 Edge Select
.equ	TCCR5B_WGM5_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR5B_WGM50	= 3		;          TCCR5B_WGM5 BIT0 position
.equ	CS5_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS50		= 0		;          CS5 BIT0 position
; ::::  TCCR5B_WGM5	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)
; ::::  CS5	:::: bitfield values
;			0x00		; No clock source (Timer/Counter stopped)
;			0x01		; clk_IO/1 (no prescaling)
;			0x02		; clk_IO/8 (from prescaler)
;			0x03		; clk_IO/64 (from prescaler)
;			0x04		; clk_IO/256 (from prescaler)
;			0x05		; clk_IO/1024 (from prescaler)
;			0x06		; Reserved
;			0x07		; Reserved

; ----------	Register TCCR5C bits		------------------------
.equ	FOC5A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC5B		= 6		; 0x40 - Force Output Compare for Channel B
.equ	FOC5C		= 5		; 0x20 - Force Output Compare for Channel C

; ----------	Register TIMSK5 bits		------------------------
.equ	ICIE5		= 5		; 0x20 - Timer/Counter5 Input Capture Interrupt Enable
.equ	OCIE5C		= 3		; 0x08 - Timer/Counter5 Output Compare C Match Interrupt Enable
.equ	OCIE5B		= 2		; 0x04 - Timer/Counter5 Output Compare B Match Interrupt Enable
.equ	OCIE5A		= 1		; 0x02 - Timer/Counter5 Output Compare A Match Interrupt Enable
.equ	TOIE5		= 0		; 0x01 - Timer/Counter5 Overflow Interrupt Enable

; ----------	Register TIFR5 bits		------------------------
.equ	ICF5		= 5		; 0x20 - Timer/Counter5 Input Capture Flag
.equ	OCF5C		= 3		; 0x08 - Timer/Counter5 Output Compare C Match Flag
.equ	OCF5B		= 2		; 0x04 - Timer/Counter5 Output Compare B Match Flag
.equ	OCF5A		= 1		; 0x02 - Timer/Counter5 Output Compare A Match Flag
.equ	TOV5		= 0		; 0x01 - Timer/Counter5 Overflow Flag

; ----------	Register TCCR4A bits		------------------------
.equ	COM4A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM4A0		= 6		;          COM4A BIT0 position
.equ	COM4B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM4B0		= 4		;          COM4B BIT0 position
.equ	COM4C_MASK	= 0x0C		;      - Compare Output Mode for Channel C (2 bits)
.equ	COM4C0		= 2		;          COM4C BIT0 position
.equ	TCCR4A_WGM4_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR4A_WGM40	= 0		;          TCCR4A_WGM4 BIT0 position
; ::::  COM4A	:::: bitfield values
;			0x00		; Normal operation
;			0x40		; Reserved
;			0x80		; Reserved
;			0xC0		; Reserved
; ::::  COM4B	:::: bitfield values
;			0x00		; Normal operation
;			0x10		; Reserved
;			0x20		; Reserved
;			0x30		; Reserved
; ::::  COM4C	:::: bitfield values
;			0x00		; Normal operation
;			0x04		; Reserved
;			0x08		; Reserved
;			0x0C		; Reserved
; ::::  TCCR4A_WGM4	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)

; ----------	Register TCCR4B bits		------------------------
.equ	ICNC4		= 7		; 0x80 - Input Capture 4 Noise Canceller
.equ	ICES4		= 6		; 0x40 - Input Capture 4 Edge Select
.equ	TCCR4B_WGM4_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR4B_WGM40	= 3		;          TCCR4B_WGM4 BIT0 position
.equ	CS4_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS40		= 0		;          CS4 BIT0 position
; ::::  TCCR4B_WGM4	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)
; ::::  CS4	:::: bitfield values
;			0x00		; No clock source (Timer/Counter stopped)
;			0x01		; clk_IO/1 (no prescaling)
;			0x02		; clk_IO/8 (from prescaler)
;			0x03		; clk_IO/64 (from prescaler)
;			0x04		; clk_IO/256 (from prescaler)
;			0x05		; clk_IO/1024 (from prescaler)
;			0x06		; Reserved
;			0x07		; Reserved

; ----------	Register TCCR4C bits		------------------------
.equ	FOC4A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC4B		= 6		; 0x40 - Force Output Compare for Channel B
.equ	FOC4C		= 5		; 0x20 - Force Output Compare for Channel C

; ----------	Register TIMSK4 bits		------------------------
.equ	ICIE4		= 5		; 0x20 - Timer/Counter4 Input Capture Interrupt Enable
.equ	OCIE4C		= 3		; 0x08 - Timer/Counter4 Output Compare C Match Interrupt Enable
.equ	OCIE4B		= 2		; 0x04 - Timer/Counter4 Output Compare B Match Interrupt Enable
.equ	OCIE4A		= 1		; 0x02 - Timer/Counter4 Output Compare A Match Interrupt Enable
.equ	TOIE4		= 0		; 0x01 - Timer/Counter4 Overflow Interrupt Enable

; ----------	Register TIFR4 bits		------------------------
.equ	ICF4		= 5		; 0x20 - Timer/Counter4 Input Capture Flag
.equ	OCF4C		= 3		; 0x08 - Timer/Counter4 Output Compare C Match Flag
.equ	OCF4B		= 2		; 0x04 - Timer/Counter4 Output Compare B Match Flag
.equ	OCF4A		= 1		; 0x02 - Timer/Counter4 Output Compare A Match Flag
.equ	TOV4		= 0		; 0x01 - Timer/Counter4 Overflow Flag

; ----------	Register TCCR3A bits		------------------------
.equ	COM3A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM3A0		= 6		;          COM3A BIT0 position
.equ	COM3B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM3B0		= 4		;          COM3B BIT0 position
.equ	COM3C_MASK	= 0x0C		;      - Compare Output Mode for Channel C (2 bits)
.equ	COM3C0		= 2		;          COM3C BIT0 position
.equ	TCCR3A_WGM3_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR3A_WGM30	= 0		;          TCCR3A_WGM3 BIT0 position
; ::::  COM3A	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x40		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x80		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0xC0		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  COM3B	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x10		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x20		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0x30		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  COM3C	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x04		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x08		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0x0C		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  TCCR3A_WGM3	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)

; ----------	Register TCCR3B bits		------------------------
.equ	ICNC3		= 7		; 0x80 - Input Capture 3 Noise Canceller
.equ	ICES3		= 6		; 0x40 - Input Capture 3 Edge Select
.equ	TCCR3B_WGM3_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR3B_WGM30	= 3		;          TCCR3B_WGM3 BIT0 position
.equ	CS3_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS30		= 0		;          CS3 BIT0 position
; ::::  TCCR3B_WGM3	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)
; ::::  CS3	:::: bitfield values
;			0x00		; No clock source (Timer/Counter stopped)
;			0x01		; clk_IO/1 (no prescaling)
;			0x02		; clk_IO/8 (from prescaler)
;			0x03		; clk_IO/64 (from prescaler)
;			0x04		; clk_IO/256 (from prescaler)
;			0x05		; clk_IO/1024 (from prescaler)
;			0x06		; External clock source on Tn pin, clock on falling edge
;			0x07		; External clock source on Tn pin, clock on rising edge

; ----------	Register TCCR3C bits		------------------------
.equ	FOC3A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC3B		= 6		; 0x40 - Force Output Compare for Channel B
.equ	FOC3C		= 5		; 0x20 - Force Output Compare for Channel C

; ----------	Register TIMSK3 bits		------------------------
.equ	ICIE3		= 5		; 0x20 - Timer/Counter3 Input Capture Interrupt Enable
.equ	OCIE3C		= 3		; 0x08 - Timer/Counter3 Output Compare C Match Interrupt Enable
.equ	OCIE3B		= 2		; 0x04 - Timer/Counter3 Output Compare B Match Interrupt Enable
.equ	OCIE3A		= 1		; 0x02 - Timer/Counter3 Output Compare A Match Interrupt Enable
.equ	TOIE3		= 0		; 0x01 - Timer/Counter3 Overflow Interrupt Enable

; ----------	Register TIFR3 bits		------------------------
.equ	ICF3		= 5		; 0x20 - Timer/Counter3 Input Capture Flag
.equ	OCF3C		= 3		; 0x08 - Timer/Counter3 Output Compare C Match Flag
.equ	OCF3B		= 2		; 0x04 - Timer/Counter3 Output Compare B Match Flag
.equ	OCF3A		= 1		; 0x02 - Timer/Counter3 Output Compare A Match Flag
.equ	TOV3		= 0		; 0x01 - Timer/Counter3 Overflow Flag

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	COM1C_MASK	= 0x0C		;      - Compare Output Mode for Channel C (2 bits)
.equ	COM1C0		= 2		;          COM1C BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position
; ::::  COM1A	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x40		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x80		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0xC0		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  COM1B	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x10		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x20		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0x30		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  COM1C	:::: bitfield values
;			0x00		; Normal port operation, OCnA/OCnB/OCnC disconnected.
;			0x04		; Toggle OCnA/OCnB/OCnC on Compare Match.
;			0x08		; Clear OCnA/OCnB/OCnC on Compare Match (set output to low level).
;			0x0C		; Set OCnA/OCnB/OCnC on Compare Match (set output to high level).
; ::::  TCCR1A_WGM1	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceller
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1B_WGM10	= 3		;          TCCR1B_WGM1 BIT0 position
.equ	CS1_MASK	= 0x07		;      - Clock Select (3 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  TCCR1B_WGM1	>>>> This is a part of TC1_WGMX_BITF enum (see complete values list below)
; ::::  CS1	:::: bitfield values
;			0x00		; No clock source (Timer/Counter stopped)
;			0x01		; clk_IO/1 (no prescaling)
;			0x02		; clk_IO/8 (from prescaler)
;			0x03		; clk_IO/64 (from prescaler)
;			0x04		; clk_IO/256 (from prescaler)
;			0x05		; clk_IO/1024 (from prescaler)
;			0x06		; External clock source on Tn pin, clock on falling edge
;			0x07		; External clock source on Tn pin, clock on rising edge

; ----------	Register TCCR1C bits		------------------------
.equ	FOC1A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare for Channel B
.equ	FOC1C		= 5		; 0x20 - Force Output Compare for Channel C

; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1C		= 3		; 0x08 - Timer/Counter1 Output Compare C Match Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Timer/Counter1 Input Capture Flag
.equ	OCF1C		= 3		; 0x08 - Timer/Counter1 Output Compare C Match Flag
.equ	OCF1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Match Flag
.equ	OCF1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Match Flag
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag



; ====	TRX24 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PARCR bits		------------------------
.equ	PALTD_MASK	= 0xE0		;      - ext. PA Ramp Down Lead Time (3 bits)
.equ	PALTD0		= 5		;          PALTD BIT0 position
.equ	PALTU_MASK	= 0x1C		;      - ext. PA Ramp Up Lead Time (3 bits)
.equ	PALTU0		= 2		;          PALTU BIT0 position
.equ	PARDFI		= 1		; 0x02 - Power Amplifier Ramp Down Frequency Inversion
.equ	PARUFI		= 0		; 0x01 - Power Amplifier Ramp Up Frequency Inversion
; ::::  PALTD	:::: bitfield values
;			0x00		; -3us
;			0x20		; -2us
;			0x40		; -1us
;			0x60		; 0us
;			0x80		; 1us
;			0xA0		; 2us
;			0xC0		; 3us
;			0xE0		; 4us
; ::::  PALTU	:::: bitfield values
;			0x00		; -3us
;			0x04		; -2us
;			0x08		; -1us
;			0x0C		; 0us
;			0x10		; 1us
;			0x14		; 2us
;			0x18		; 3us
;			0x1C		; 4us

; ----------	Register MAFSA0L bits		------------------------
.equ	MAFSA0L_MASK	= 0xFF		;      - MAC Short Address low Byte for Frame Filter 0 (8 bits)
.equ	MAFSA0L0	= 0		;          MAFSA0L BIT0 position

; ----------	Register MAFSA0H bits		------------------------
.equ	MAFSA0H_MASK	= 0xFF		;      - MAC Short Address high Byte for Frame Filter 0 (8 bits)
.equ	MAFSA0H0	= 0		;          MAFSA0H BIT0 position

; ----------	Register MAFPA0L bits		------------------------
.equ	MAFPA0L_MASK	= 0xFF		;      - MAC Personal Area Network ID low Byte for Frame Filter 0 (8 bits)
.equ	MAFPA0L0	= 0		;          MAFPA0L BIT0 position

; ----------	Register MAFPA0H bits		------------------------
.equ	MAFPA0H_MASK	= 0xFF		;      - MAC Personal Area Network ID high Byte for Frame Filter 0 (8 bits)
.equ	MAFPA0H0	= 0		;          MAFPA0H BIT0 position

; ----------	Register MAFSA1L bits		------------------------
.equ	MAFSA1L_MASK	= 0xFF		;      - MAC Short Address low Byte for Frame Filter 1 (8 bits)
.equ	MAFSA1L0	= 0		;          MAFSA1L BIT0 position

; ----------	Register MAFSA1H bits		------------------------
.equ	MAFSA1H_MASK	= 0xFF		;      - MAC Short Address high Byte for Frame Filter 1 (8 bits)
.equ	MAFSA1H0	= 0		;          MAFSA1H BIT0 position

; ----------	Register MAFPA1L bits		------------------------
.equ	MAFPA1L_MASK	= 0xFF		;      - MAC Personal Area Network ID low Byte for Frame Filter 1 (8 bits)
.equ	MAFPA1L0	= 0		;          MAFPA1L BIT0 position

; ----------	Register MAFPA1H bits		------------------------
.equ	MAFPA1H_MASK	= 0xFF		;      - MAC Personal Area Network ID high Byte for Frame Filter 1 (8 bits)
.equ	MAFPA1H0	= 0		;          MAFPA1H BIT0 position

; ----------	Register MAFSA2L bits		------------------------
.equ	MAFSA2L_MASK	= 0xFF		;      - MAC Short Address low Byte for Frame Filter 2 (8 bits)
.equ	MAFSA2L0	= 0		;          MAFSA2L BIT0 position

; ----------	Register MAFSA2H bits		------------------------
.equ	MAFSA2H_MASK	= 0xFF		;      - MAC Short Address high Byte for Frame Filter 2 (8 bits)
.equ	MAFSA2H0	= 0		;          MAFSA2H BIT0 position

; ----------	Register MAFPA2L bits		------------------------
.equ	MAFPA2L_MASK	= 0xFF		;      - MAC Personal Area Network ID low Byte for Frame Filter 2 (8 bits)
.equ	MAFPA2L0	= 0		;          MAFPA2L BIT0 position

; ----------	Register MAFPA2H bits		------------------------
.equ	MAFPA2H_MASK	= 0xFF		;      - MAC Personal Area Network ID high Byte for Frame Filter 2 (8 bits)
.equ	MAFPA2H0	= 0		;          MAFPA2H BIT0 position

; ----------	Register MAFSA3L bits		------------------------
.equ	MAFSA3L_MASK	= 0xFF		;      - MAC Short Address low Byte for Frame Filter 3 (8 bits)
.equ	MAFSA3L0	= 0		;          MAFSA3L BIT0 position

; ----------	Register MAFSA3H bits		------------------------
.equ	MAFSA3H_MASK	= 0xFF		;      - MAC Short Address high Byte for Frame Filter 3 (8 bits)
.equ	MAFSA3H0	= 0		;          MAFSA3H BIT0 position

; ----------	Register MAFPA3L bits		------------------------
.equ	MAFPA3L_MASK	= 0xFF		;      - MAC Personal Area Network ID low Byte for Frame Filter 3 (8 bits)
.equ	MAFPA3L0	= 0		;          MAFPA3L BIT0 position

; ----------	Register MAFPA3H bits		------------------------
.equ	MAFPA3H_MASK	= 0xFF		;      - MAC Personal Area Network ID high Byte for Frame Filter 3 (8 bits)
.equ	MAFPA3H0	= 0		;          MAFPA3H BIT0 position

; ----------	Register MAFCR0 bits		------------------------
.equ	MAF3EN		= 3		; 0x08 - Multiple Address Filter 3 Enable
.equ	MAF2EN		= 2		; 0x04 - Multiple Address Filter 2 Enable
.equ	MAF1EN		= 1		; 0x02 - Multiple Address Filter 1 Enable
.equ	MAF0EN		= 0		; 0x01 - Multiple Address Filter 0 Enable

; ----------	Register MAFCR1 bits		------------------------
.equ	AACK_3_SET_PD	= 7		; 0x80 - Set Data Pending bit for address filter 3.
.equ	AACK_3_I_AM_COORD= 6		; 0x40 - Enable PAN Coordinator mode for address filter 3.
.equ	AACK_2_SET_PD	= 5		; 0x20 - Set Data Pending bit for address filter 2.
.equ	AACK_2_I_AM_COORD= 4		; 0x10 - Enable PAN Coordinator mode for address filter 2.
.equ	AACK_1_SET_PD	= 3		; 0x08 - Set Data Pending bit for address filter 1.
.equ	AACK_1_I_AM_COORD= 2		; 0x04 - Enable PAN Coordinator mode for address filter 1.
.equ	AACK_0_SET_PD	= 1		; 0x02 - Set Data Pending bit for address filter 0.
.equ	AACK_0_I_AM_COORD= 0		; 0x01 - Enable PAN Coordinator mode for address filter 0.

; ----------	Register AES_CTRL bits		------------------------
.equ	AES_REQUEST	= 7		; 0x80 - Request AES Operation.
.equ	AES_MODE	= 5		; 0x20 - Set AES Operation Mode
.equ	AES_DIR		= 3		; 0x08 - Set AES Operation Direction
.equ	AES_IM		= 2		; 0x04 - AES Interrupt Enable
; ::::  AES_MODE	:::: bitfield values
;			0x00		; AES Mode is ECB (Electronic Code Book).
;			0x20		; AES Mode is CBC (Cipher Block Chaining).
; ::::  AES_DIR	:::: bitfield values
;			0x00		; AES operation is encryption.
;			0x08		; AES operation is decryption.

; ----------	Register AES_STATUS bits	------------------------
.equ	AES_ER		= 7		; 0x80 - AES Operation Finished with Error
.equ	AES_DONE	= 0		; 0x01 - AES Operation Finished with Success

; ----------	Register AES_STATE bits		------------------------
.equ	AES_STATE_MASK	= 0xFF		;      - AES Plain and Cipher Text Buffer (8 bits)
.equ	AES_STATE0	= 0		;          AES_STATE BIT0 position

; ----------	Register AES_KEY bits		------------------------
.equ	AES_KEY_MASK	= 0xFF		;      - AES Encryption/Decryption Key Buffer (8 bits)
.equ	AES_KEY0	= 0		;          AES_KEY BIT0 position

; ----------	Register TRX_STATUS bits	------------------------
.equ	CCA_DONE	= 7		; 0x80 - CCA Algorithm Status
.equ	CCA_STATUS	= 6		; 0x40 - CCA Status Result
.equ	TST_STATUS	= 5		; 0x20 - Test mode status
.equ	TRX_STATUS_MASK	= 0x1F		;      - Transceiver Main Status (5 bits)
.equ	TRX_STATUS0	= 0		;          TRX_STATUS BIT0 position
; ::::  CCA_DONE	:::: bitfield values
;			0x00		; CCA calculation not finished
;			0x80		; CCA calculation finished
; ::::  CCA_STATUS	:::: bitfield values
;			0x00		; Channel indicated as busy.
;			0x40		; Channel indicated as idle.
; ::::  TST_STATUS	:::: bitfield values
;			0x00		; Test mode is disabled.
;			0x20		; Test mode is active.
; ::::  TRX_STATUS	:::: bitfield values
;			0x00		; P_ON
;			0x01		; BUSY_RX
;			0x02		; BUSY_TX
;			0x06		; RX_ON
;			0x08		; TRX_OFF
;			0x09		; PLL_ON
;			0x0F		; SLEEP
;			0x11		; BUSY_RX_AACK
;			0x12		; BUSY_TX_ARET
;			0x16		; RX_AACK_ON
;			0x19		; TX_ARET_ON
;			0x1F		; STATE_TRANSITION_IN_PROGRESS

; ----------	Register TRX_STATE bits		------------------------
.equ	TRAC_STATUS_MASK= 0xE0		;      - Transaction Status (3 bits)
.equ	TRAC_STATUS0	= 5		;          TRAC_STATUS BIT0 position
.equ	TRX_CMD_MASK	= 0x1F		;      - State Control Command (5 bits)
.equ	TRX_CMD0	= 0		;          TRX_CMD BIT0 position
; ::::  TRAC_STATUS	:::: bitfield values
;			0x00		; SUCCESS (RX_AACK, TX_ARET)
;			0x20		; SUCCESS_DATA_PENDING (TX_ARET)
;			0x40		; SUCCESS_WAIT_FOR_ACK (RX_AACK)
;			0x60		; CHANNEL_ACCESS_FAILURE (TX_ARET)
;			0xA0		; NO_ACK (TX_ARET)
;			0xE0		; INVALID (RX_AACK, TX_ARET)
; ::::  TRX_CMD	:::: bitfield values
;			0x00		; NOP
;			0x02		; TX_START
;			0x03		; FORCE_TRX_OFF
;			0x04		; FORCE_PLL_ON
;			0x06		; RX_ON
;			0x08		; TRX_OFF
;			0x09		; PLL_ON (TX_ON)
;			0x16		; RX_AACK_ON
;			0x19		; TX_ARET_ON

; ----------	Register TRX_CTRL_0 bits	------------------------
.equ	Res7		= 7		; 0x80 - Reserved
.equ	PMU_EN		= 6		; 0x40 - Enable Phase Measurement Unit
.equ	PMU_START	= 5		; 0x20 - Start of Phase Measurement Unit
.equ	PMU_IF_INV	= 4		; 0x10 - PMU IF Inverse

; ----------	Register TRX_CTRL_1 bits	------------------------
.equ	PA_EXT_EN	= 7		; 0x80 - External PA support enable
.equ	IRQ_2_EXT_EN	= 6		; 0x40 - Connect Frame Start IRQ to TC1
.equ	TX_AUTO_CRC_ON	= 5		; 0x20 - Enable Automatic CRC Calculation
.equ	PLL_TX_FLT	= 4		; 0x10 - Enable PLL TX filter

; ----------	Register PHY_TX_PWR bits	------------------------
.equ	TX_PWR_MASK	= 0x0F		;      - Transmit Power Setting (4 bits)
.equ	TX_PWR0		= 0		;          TX_PWR BIT0 position
; ::::  TX_PWR	:::: bitfield values
;			0x00		; 3.5 dBm
;			0x01		; 3.3 dBm
;			0x02		; 2.8 dBm
;			0x03		; 2.3 dBm
;			0x04		; 1.8 dBm
;			0x05		; 1.2 dBm
;			0x06		; 0.5 dBm
;			0x07		; -0.5 dBm
;			0x08		; -1.5 dBm
;			0x09		; -2.5 dBm
;			0x0A		; -3.5 dBm
;			0x0B		; -4.5 dBm
;			0x0C		; -6.5 dBm
;			0x0D		; -8.5 dBm
;			0x0E		; -11.5 dBm
;			0x0F		; -16.5 dBm

; ----------	Register PHY_RSSI bits		------------------------
.equ	RX_CRC_VALID	= 7		; 0x80 - Received Frame CRC Status
.equ	RND_VALUE_MASK	= 0x60		;      - Random Value (2 bits)
.equ	RND_VALUE0	= 5		;          RND_VALUE BIT0 position
.equ	RSSI_MASK	= 0x1F		;      - Receiver Signal Strength Indicator (5 bits)
.equ	RSSI0		= 0		;          RSSI BIT0 position
; ::::  RX_CRC_VALID	:::: bitfield values
;			0x00		; CRC (FCS) not valid
;			0x80		; CRC (FCS) valid
; ::::  RSSI	:::: bitfield values
;			0x00		; Minimum RSSI value: P(RF) < -90 dBm
;			0x01		; P(RF) = RSSI_BASE_VAL+3 · (RSSI-1) [dBm]
;			0x02		; ...
;			0x1C		; Maximum RSSI value: P(RF) ≥ -10 dBm

; ----------	Register PHY_ED_LEVEL bits	------------------------
.equ	ED_LEVEL_MASK	= 0xFF		;      - Energy Detection Level (8 bits)
.equ	ED_LEVEL0	= 0		;          ED_LEVEL BIT0 position
; ::::  ED_LEVEL	:::: bitfield values
;			0x00		; Minimum result of last ED measurement
;			0x01		; P(RF) = RSSI_BASE_VAL+ED [dBm]
;			0x02		; ...
;			0x54		; Maximum result of last ED measurement
;			0xFF		; Reset value

; ----------	Register PHY_CC_CCA bits	------------------------
.equ	CCA_REQUEST	= 7		; 0x80 - Manual CCA Measurement Request
.equ	CCA_MODE_MASK	= 0x60		;      - Select CCA Measurement Mode (2 bits)
.equ	CCA_MODE0	= 5		;          CCA_MODE BIT0 position
.equ	CHANNEL_MASK	= 0x1F		;      - RX/TX Channel Selection (5 bits)
.equ	CHANNEL0	= 0		;          CHANNEL BIT0 position
; ::::  CCA_MODE	:::: bitfield values
;			0x00		; Mode 3a, Carrier sense OR energy above threshold
;			0x20		; Mode 1, Energy above threshold
;			0x40		; Mode 2, Carrier sense only
;			0x60		; Mode 3b, Carrier sense AND energy above threshold
; ::::  CHANNEL	:::: bitfield values
;			0x0B		; 2405 MHz
;			0x0C		; 2410 MHz
;			0x0D		; 2415 MHz
;			0x0E		; 2420 MHz
;			0x0F		; 2425 MHz
;			0x10		; 2430 MHz
;			0x11		; 2435 MHz
;			0x12		; 2440 MHz
;			0x13		; 2445 MHz
;			0x14		; 2450 MHz
;			0x15		; 2455 MHz
;			0x16		; 2460 MHz
;			0x17		; 2465 MHz
;			0x18		; 2470 MHz
;			0x19		; 2475 MHz
;			0x1A		; 2480 MHz

; ----------	Register CCA_THRES bits		------------------------
.equ	CCA_CS_THRES_MASK= 0xF0		;      - CS Threshold Level for CCA Measurement (4 bits)
.equ	CCA_CS_THRES0	= 4		;          CCA_CS_THRES BIT0 position
.equ	CCA_ED_THRES_MASK= 0x0F		;      - ED Threshold Level for CCA Measurement (4 bits)
.equ	CCA_ED_THRES0	= 0		;          CCA_ED_THRES BIT0 position

; ----------	Register RX_CTRL bits		------------------------
.equ	PDT_THRES_MASK	= 0x0F		;      - Receiver Sensitivity Control (4 bits)
.equ	PDT_THRES0	= 0		;          PDT_THRES BIT0 position
; ::::  PDT_THRES	:::: bitfield values
;			0x07		; Reset value, to be used if Antenna Diversity algorithm is disabled
;			0x03		; Recommended correlator threshold for Antenna Diversity operation

; ----------	Register SFD_VALUE bits		------------------------
.equ	SFD_VALUE_MASK	= 0xFF		;      - Start of Frame Delimiter Value (8 bits)
.equ	SFD_VALUE0	= 0		;          SFD_VALUE BIT0 position
; ::::  SFD_VALUE	:::: bitfield values
;			0xA7		; IEEE 802.15.4 compliant value of the SFD

; ----------	Register TRX_CTRL_2 bits	------------------------
.equ	RX_SAFE_MODE	= 7		; 0x80 - RX Safe Mode
.equ	OQPSK_DATA_RATE_MASK= 0x03		;      - Data Rate Selection (2 bits)
.equ	OQPSK_DATA_RATE0= 0		;          OQPSK_DATA_RATE BIT0 position
; ::::  OQPSK_DATA_RATE	:::: bitfield values
;			0x00		; 250 kb/s (IEEE 802.15.4 compliant)
;			0x01		; 500 kb/s
;			0x02		; 1000 kb/s
;			0x03		; 2000 kb/s

; ----------	Register ANT_DIV bits		------------------------
.equ	ANT_SEL		= 7		; 0x80 - Antenna Diversity Antenna Status
.equ	ANT_DIV_EN	= 3		; 0x08 - Enable Antenna Diversity
.equ	ANT_EXT_SW_EN	= 2		; 0x04 - Enable External Antenna Switch Control
.equ	ANT_CTRL_MASK	= 0x03		;      - Static Antenna Diversity Switch Control (2 bits)
.equ	ANT_CTRL0	= 0		;          ANT_CTRL BIT0 position
; ::::  ANT_SEL	:::: bitfield values
;			0x00		; Antenna 0
;			0x80		; Antenna 1
; ::::  ANT_DIV_EN	:::: bitfield values
;			0x00		; Antenna Diversity algorithm disabled
;			0x08		; Antenna Diversity algorithm enabled
; ::::  ANT_EXT_SW_EN	:::: bitfield values
;			0x00		; Antenna Diversity RF switch control disabled
;			0x04		; Antenna Diversity RF switch control enabled
; ::::  ANT_CTRL	:::: bitfield values
;			0x00		; Reserved
;			0x01		; Antenna 1: DIG1=H, DIG2=L
;			0x02		; Antenna 0: DIG1=L, DIG2=H
;			0x03		; Default value for ANT_EXT_SW_EN=0; Mandatory setting for applications not using Antenna Diversity

; ----------	Register IRQ_MASK bits		------------------------
.equ	AWAKE_EN	= 7		; 0x80 - Awake Interrupt Enable
.equ	TX_END_EN	= 6		; 0x40 - TX_END Interrupt Enable
.equ	AMI_EN		= 5		; 0x20 - Address Match Interrupt Enable
.equ	CCA_ED_DONE_EN	= 4		; 0x10 - End of ED Measurement Interrupt Enable
.equ	RX_END_EN	= 3		; 0x08 - RX_END Interrupt Enable
.equ	RX_START_EN	= 2		; 0x04 - RX_START Interrupt Enable
.equ	PLL_UNLOCK_EN	= 1		; 0x02 - PLL Unlock Interrupt Enable
.equ	PLL_LOCK_EN	= 0		; 0x01 - PLL Lock Interrupt Enable

; ----------	Register IRQ_STATUS bits	------------------------
.equ	AWAKE		= 7		; 0x80 - Awake Interrupt Status
.equ	TX_END		= 6		; 0x40 - TX_END Interrupt Status
.equ	AMI		= 5		; 0x20 - Address Match Interrupt Status
.equ	CCA_ED_DONE	= 4		; 0x10 - End of ED Measurement Interrupt Status
.equ	RX_END		= 3		; 0x08 - RX_END Interrupt Status
.equ	RX_START	= 2		; 0x04 - RX_START Interrupt Status
.equ	PLL_UNLOCK	= 1		; 0x02 - PLL Unlock Interrupt Status
.equ	PLL_LOCK	= 0		; 0x01 - PLL Lock Interrupt Status

; ----------	Register IRQ_MASK1 bits		------------------------
.equ	MAF_3_AMI_EN	= 4		; 0x10 - Address Match Interrupt enable Address filter 3
.equ	MAF_2_AMI_EN	= 3		; 0x08 - Address Match Interrupt enable Address filter 2
.equ	MAF_1_AMI_EN	= 2		; 0x04 - Address Match Interrupt enable Address filter 1
.equ	MAF_0_AMI_EN	= 1		; 0x02 - Address Match Interrupt enable Address filter 0
.equ	TX_START_EN	= 0		; 0x01 - Transmit Start Interrupt enable

; ----------	Register IRQ_STATUS1 bits	------------------------
.equ	MAF_3_AMI	= 4		; 0x10 - Address Match Interrupt Status Address filter 3
.equ	MAF_2_AMI	= 3		; 0x08 - Address Match Interrupt Status Address filter 2
.equ	MAF_1_AMI	= 2		; 0x04 - Address Match Interrupt Status Address filter 1
.equ	MAF_0_AMI	= 1		; 0x02 - Address Match Interrupt Status Address filter 0
.equ	TX_START	= 0		; 0x01 - Transmit Start Interrupt Status

; ----------	Register VREG_CTRL bits		------------------------
.equ	AVREG_EXT	= 7		; 0x80 - Use External AVDD Regulator
.equ	AVDD_OK		= 6		; 0x40 - AVDD Supply Voltage Valid
.equ	DVREG_EXT	= 3		; 0x08 - Use External DVDD Regulator
.equ	DVDD_OK		= 2		; 0x04 - DVDD Supply Voltage Valid
; ::::  AVREG_EXT	:::: bitfield values
;			0x00		; Internal AVDD voltage regulator for the analog section is enabled.
;			0x80		; Internal AVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the analog section.
; ::::  AVDD_OK	:::: bitfield values
;			0x00		; Analog voltage regulator disabled or supply voltage not stable
;			0x40		; Analog supply voltage has settled
; ::::  DVREG_EXT	:::: bitfield values
;			0x00		; Internal DVDD voltage regulator for the digital section is enabled.
;			0x08		; Internal DVDD voltage regulator is disabled; use external regulated 1.8V supply voltage for the digital section.
; ::::  DVDD_OK	:::: bitfield values
;			0x00		; Digital voltage regulator disabled or supply voltage not stable
;			0x04		; Digital supply voltage has settled

; ----------	Register BATMON bits		------------------------
.equ	BAT_LOW		= 7		; 0x80 - Battery Monitor Interrupt Status
.equ	BAT_LOW_EN	= 6		; 0x40 - Battery Monitor Interrupt Enable
.equ	BATMON_OK	= 5		; 0x20 - Battery Monitor Status
.equ	BATMON_HR	= 4		; 0x10 - Battery Monitor Voltage Range
.equ	BATMON_VTH_MASK	= 0x0F		;      - Battery Monitor Threshold Voltage (4 bits)
.equ	BATMON_VTH0	= 0		;          BATMON_VTH BIT0 position
; ::::  BATMON_OK	:::: bitfield values
;			0x00		; The battery voltage is below the threshold.
;			0x20		; The battery voltage is above the threshold.
; ::::  BATMON_HR	:::: bitfield values
;			0x00		; Enables the low range, see BATMON_VTH
;			0x10		; Enables the high range, see BATMON_VTH
; ::::  BATMON_VTH	:::: bitfield values
;			0x00		; 2.550V / 1.70V (BATMON_HR=1/0)
;			0x01		; 2.625V / 1.75V (BATMON_HR=1/0)
;			0x02		; 2.700V / 1.80V (BATMON_HR=1/0)
;			0x03		; 2.775V / 1.85V (BATMON_HR=1/0)
;			0x04		; 2.850V / 1.90V (BATMON_HR=1/0)
;			0x05		; 2.925V / 1.95V (BATMON_HR=1/0)
;			0x06		; 3.000V / 2.00V (BATMON_HR=1/0)
;			0x07		; 3.075V / 2.05V (BATMON_HR=1/0)
;			0x08		; 3.150V / 2.10V (BATMON_HR=1/0)
;			0x09		; 3.225V / 2.15V (BATMON_HR=1/0)
;			0x0A		; 3.300V / 2.20V (BATMON_HR=1/0)
;			0x0B		; 3.375V / 2.25V (BATMON_HR=1/0)
;			0x0C		; 3.450V / 2.30V (BATMON_HR=1/0)
;			0x0D		; 3.525V / 2.35V (BATMON_HR=1/0)
;			0x0E		; 3.600V / 2.40V (BATMON_HR=1/0)
;			0x0F		; 3.675V / 2.45V (BATMON_HR=1/0)

; ----------	Register XOSC_CTRL bits		------------------------
.equ	XTAL_MODE_MASK	= 0xF0		;      - Crystal Oscillator Operating Mode (4 bits)
.equ	XTAL_MODE0	= 4		;          XTAL_MODE BIT0 position
.equ	XTAL_TRIM_MASK	= 0x0F		;      - Crystal Oscillator Load Capacitance Trimming (4 bits)
.equ	XTAL_TRIM0	= 0		;          XTAL_TRIM BIT0 position
; ::::  XTAL_MODE	:::: bitfield values
;			0x40		; Internal crystal oscillator disabled; use external reference frequency.
;			0xF0		; Internal crystal oscillator enabled; amplitude regulation of oscillation enabled.
; ::::  XTAL_TRIM	:::: bitfield values
;			0x00		; 0.0 pF, trimming capacitors disconnected
;			0x01		; 0.3 pF, trimming capacitor switched on
;			0x02		; ...
;			0x0F		; 4.5 pF, trimming capacitor switched on

; ----------	Register CC_CTRL_0 bits		------------------------
.equ	CC_NUMBER_MASK	= 0xFF		;      - Channel Number (8 bits)
.equ	CC_NUMBER0	= 0		;          CC_NUMBER BIT0 position

; ----------	Register CC_CTRL_1 bits		------------------------
.equ	CC_BAND_MASK	= 0x0F		;      - Channel Band (4 bits)
.equ	CC_BAND0	= 0		;          CC_BAND BIT0 position

; ----------	Register RX_SYN bits		------------------------
.equ	RX_PDT_DIS	= 7		; 0x80 - Prevent Frame Reception
.equ	RX_OVERRIDE	= 6		; 0x40 - Receiver Override Function
.equ	RX_PDT_LEVEL_MASK= 0x0F		;      - Reduce Receiver Sensitivity (4 bits)
.equ	RX_PDT_LEVEL0	= 0		;          RX_PDT_LEVEL BIT0 position
; ::::  RX_PDT_LEVEL	:::: bitfield values
;			0x00		; RX_THRES ≤ RSSI_BASE_VAL (Reset value); RSSI value not considered
;			0x01		; RX_THRES > RSSI_BASE_VAL + 0 · 3; RSSI > -90 dBm
;			0x02		; ...
;			0x0E		; RX_THRES > RSSI_BASE_VAL + 13 · 3; RSSI > -51 dBm
;			0x0F		; RX_THRES > RSSI_BASE_VAL + 14 · 3; RSSI > -48 dBm

; ----------	Register TRX_RPC bits		------------------------
.equ	RX_RPC_CTRL_MASK= 0xC0		;      - Smart Receiving Mode Timing (2 bits)
.equ	RX_RPC_CTRL0	= 6		;          RX_RPC_CTRL BIT0 position
.equ	RX_RPC_EN	= 5		; 0x20 - Receiver Smart Receiving Mode Enable
.equ	PDT_RPC_EN	= 4		; 0x10 - Smart Receiving Mode Reduced Sensitivity Enable
.equ	PLL_RPC_EN	= 3		; 0x08 - PLL Smart Receiving Mode Enable
.equ	TRX_RPC_Res0	= 2		; 0x04 - Reserved
.equ	IPAN_RPC_EN	= 1		; 0x02 - Smart Receiving Mode IPAN Handling Enable
.equ	XAH_RPC_EN	= 0		; 0x01 - Smart Receiving in Extended Operating Modes Enable
; ::::  RX_RPC_CTRL	:::: bitfield values
;			0x00		; Activates minimum power saving behaviour for smart receiving mode
;			0x40		; Reserved
;			0x80		; Reserved
;			0xC0		; Activates maximum power saving behaviour for smart receiving mode

; ----------	Register XAH_CTRL_1 bits	------------------------
.equ	AACK_FLTR_RES_FT= 5		; 0x20 - Filter Reserved Frames
.equ	AACK_UPLD_RES_FT= 4		; 0x10 - Process Reserved Frames
.equ	AACK_ACK_TIME	= 2		; 0x04 - Reduce Acknowledgment Time
.equ	AACK_PROM_MODE	= 1		; 0x02 - Enable Promiscuous Mode
; ::::  AACK_ACK_TIME	:::: bitfield values
;			0x00		; 12 symbols acknowledgment time
;			0x04		;  2 symbols acknowledgment time

; ----------	Register FTN_CTRL bits		------------------------
.equ	FTN_START	= 7		; 0x80 - Start Calibration Loop of Filter Tuning Network

; ----------	Register PLL_CF bits		------------------------
.equ	PLL_CF_START	= 7		; 0x80 - Start Center Frequency Calibration

; ----------	Register PLL_DCU bits		------------------------
.equ	PLL_DCU_START	= 7		; 0x80 - Start Delay Cell Calibration

; ----------	Register PART_NUM bits		------------------------
.equ	PART_NUM_MASK	= 0xFF		;      - Part Number (8 bits)
.equ	PART_NUM0	= 0		;          PART_NUM BIT0 position
; ::::  PART_NUM	:::: bitfield values
;			0x83		; ATmega128RFA1 part number
;			0x93		; RFA2 family
;			0x94		; RFR2 family

; ----------	Register VERSION_NUM bits	------------------------
.equ	VERSION_NUM_MASK= 0xFF		;      - Version Number (8 bits)
.equ	VERSION_NUM0	= 0		;          VERSION_NUM BIT0 position
; ::::  VERSION_NUM	:::: bitfield values
;			0x0C		; Revision A
;			0x01		; Revision B

; ----------	Register MAN_ID_0 bits		------------------------
.equ	MAN_ID_07	= 7		; 0x80 - Manufacturer ID (Low Byte)
.equ	MAN_ID_06	= 6		; 0x40 - Manufacturer ID (Low Byte)
.equ	MAN_ID_05	= 5		; 0x20 - Manufacturer ID (Low Byte)
.equ	MAN_ID_04	= 4		; 0x10 - Manufacturer ID (Low Byte)
.equ	MAN_ID_03	= 3		; 0x08 - Manufacturer ID (Low Byte)
.equ	MAN_ID_02	= 2		; 0x04 - Manufacturer ID (Low Byte)
.equ	MAN_ID_01	= 1		; 0x02 - Manufacturer ID (Low Byte)
.equ	MAN_ID_00	= 0		; 0x01 - Manufacturer ID (Low Byte)
; ::::  MAN_ID_00	:::: bitfield values
;			0x01		; Atmel JEDEC manufacturer ID, bits [7:0] of 32 bit manufacturer ID: 00 00 00 1F

; ----------	Register MAN_ID_1 bits		------------------------
.equ	MAN_ID__MASK	= 0xFF		;      - Manufacturer ID (High Byte) (8 bits)
;.equ	MAN_ID_0	= 0		;          MAN_ID_ BIT0 position
; ::::  MAN_ID_	:::: bitfield values
;			0x00		; Atmel JEDEC manufacturer ID, bits [15:8] of 32 bit manufacturer ID: 00 00 00 1F

; ----------	Register SHORT_ADDR_0 bits	------------------------
.equ	SHORT_ADDR_07	= 7		; 0x80 - MAC Short Address
.equ	SHORT_ADDR_06	= 6		; 0x40 - MAC Short Address
.equ	SHORT_ADDR_05	= 5		; 0x20 - MAC Short Address
.equ	SHORT_ADDR_04	= 4		; 0x10 - MAC Short Address
.equ	SHORT_ADDR_03	= 3		; 0x08 - MAC Short Address
.equ	SHORT_ADDR_02	= 2		; 0x04 - MAC Short Address
.equ	SHORT_ADDR_01	= 1		; 0x02 - MAC Short Address
.equ	SHORT_ADDR_00	= 0		; 0x01 - MAC Short Address

; ----------	Register SHORT_ADDR_1 bits	------------------------
.equ	SHORT_ADDR__MASK= 0xFF		;      - MAC Short Address (8 bits)
;.equ	SHORT_ADDR_0	= 0		;          SHORT_ADDR_ BIT0 position

; ----------	Register PAN_ID_0 bits		------------------------
.equ	PAN_ID_07	= 7		; 0x80 - MAC Personal Area Network ID
.equ	PAN_ID_06	= 6		; 0x40 - MAC Personal Area Network ID
.equ	PAN_ID_05	= 5		; 0x20 - MAC Personal Area Network ID
.equ	PAN_ID_04	= 4		; 0x10 - MAC Personal Area Network ID
.equ	PAN_ID_03	= 3		; 0x08 - MAC Personal Area Network ID
.equ	PAN_ID_02	= 2		; 0x04 - MAC Personal Area Network ID
.equ	PAN_ID_01	= 1		; 0x02 - MAC Personal Area Network ID
.equ	PAN_ID_00	= 0		; 0x01 - MAC Personal Area Network ID

; ----------	Register PAN_ID_1 bits		------------------------
.equ	PAN_ID__MASK	= 0xFF		;      - MAC Personal Area Network ID (8 bits)
;.equ	PAN_ID_0	= 0		;          PAN_ID_ BIT0 position

; ----------	Register IEEE_ADDR_0 bits	------------------------
.equ	IEEE_ADDR_07	= 7		; 0x80 - MAC IEEE Address
.equ	IEEE_ADDR_06	= 6		; 0x40 - MAC IEEE Address
.equ	IEEE_ADDR_05	= 5		; 0x20 - MAC IEEE Address
.equ	IEEE_ADDR_04	= 4		; 0x10 - MAC IEEE Address
.equ	IEEE_ADDR_03	= 3		; 0x08 - MAC IEEE Address
.equ	IEEE_ADDR_02	= 2		; 0x04 - MAC IEEE Address
.equ	IEEE_ADDR_01	= 1		; 0x02 - MAC IEEE Address
.equ	IEEE_ADDR_00	= 0		; 0x01 - MAC IEEE Address

; ----------	Register IEEE_ADDR_1 bits	------------------------
.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_2 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_3 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_4 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_5 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_6 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register IEEE_ADDR_7 bits	------------------------
;.equ	IEEE_ADDR__MASK	= 0xFF		;      - MAC IEEE Address (8 bits)
;.equ	IEEE_ADDR_0	= 0		;          IEEE_ADDR_ BIT0 position

; ----------	Register XAH_CTRL_0 bits	------------------------
.equ	MAX_FRAME_RETRIES_MASK= 0xF0		;      - Maximum Number of Frame Re-transmission Attempts (4 bits)
.equ	MAX_FRAME_RETRIES0= 4		;          MAX_FRAME_RETRIES BIT0 position
.equ	MAX_CSMA_RETRIES_MASK= 0x0E		;      - Maximum Number of CSMA-CA Procedure Repetition Attempts (3 bits)
.equ	MAX_CSMA_RETRIES0= 1		;          MAX_CSMA_RETRIES BIT0 position
.equ	SLOTTED_OPERATION= 0		; 0x01 - Set Slotted Acknowledgment
; ::::  MAX_FRAME_RETRIES	:::: bitfield values
;			0x00		; Retransmission of frame is not attempted.
;			0x10		; Retransmission of frame is attempted once.
;			0x20		; ...
;			0xF0		; Retransmission of frame is attempted 15 times.
; ::::  MAX_CSMA_RETRIES	:::: bitfield values
;			0x00		; No repetition of CSMA-CA procedure
;			0x02		; One repetition of CSMA-CA procedure
;			0x04		; ...
;			0x0A		; Five repetitions (highest IEEE 802.15.4 compliant value)
;			0x0C		; Reserved
;			0x0E		; Immediate frame re-transmission without performing CSMA-CA
; ::::  SLOTTED_OPERATION	:::: bitfield values
;			0x00		; The radio transceiver operates in unslotted mode. An acknowledgment frame is automatically sent if requested.
;			0x01		; The transmission of an acknowledgment frame has to be controlled by the microcontroller.

; ----------	Register CSMA_SEED_0 bits	------------------------
.equ	CSMA_SEED_07	= 7		; 0x80 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_06	= 6		; 0x40 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_05	= 5		; 0x20 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_04	= 4		; 0x10 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_03	= 3		; 0x08 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_02	= 2		; 0x04 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_01	= 1		; 0x02 - Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_00	= 0		; 0x01 - Seed Value for CSMA Random Number Generator

; ----------	Register CSMA_SEED_1 bits	------------------------
.equ	AACK_FVN_MODE_MASK= 0xC0		;      - Acknowledgment Frame Filter Mode (2 bits)
.equ	AACK_FVN_MODE0	= 6		;          AACK_FVN_MODE BIT0 position
.equ	AACK_SET_PD	= 5		; 0x20 - Set Frame Pending Sub-field
.equ	AACK_DIS_ACK	= 4		; 0x10 - Disable Acknowledgment Frame Transmission
.equ	AACK_I_AM_COORD	= 3		; 0x08 - Set Personal Area Network Coordinator
.equ	CSMA_SEED_1_MASK= 0x07		;      - Seed Value for CSMA Random Number Generator (3 bits)
.equ	CSMA_SEED_10	= 0		;          CSMA_SEED_1 BIT0 position
; ::::  AACK_FVN_MODE	:::: bitfield values
;			0x00		; Acknowledge frames with version number 0
;			0x40		; Acknowledge frames with version number 0 or 1
;			0x80		; Acknowledge frames with version number 0 or 1 or 2
;			0xC0		; Acknowledge frames independent of frame version number

; ----------	Register CSMA_BE bits		------------------------
.equ	MAX_BE_MASK	= 0xF0		;      - Maximum Back-off Exponent (4 bits)
.equ	MAX_BE0		= 4		;          MAX_BE BIT0 position
.equ	MIN_BE_MASK	= 0x0F		;      - Minimum Back-off Exponent (4 bits)
.equ	MIN_BE0		= 0		;          MIN_BE BIT0 position
; ::::  MAX_BE	:::: bitfield values
;			0x10		; This value is not valid for the maximum back-off exponent.
;			0x20		; This value is not valid for the maximum back-off exponent.
;			0x30		; Minimum, IEEE compliant value for the maximum back-off exponent.
;			0x40		; ...
;			0x80		; Maximum, IEEE compliant value for the maximum back-off exponent.
; ::::  MIN_BE	:::: bitfield values
;			0x00		; Minimum value of minimum back-off exponent.
;			0x01		; ...
;			0x08		; Maximum value of minimum back-off exponent. MIN_BE must be smaller or equal to MAX_BE.

; ----------	Register TST_CTRL_DIGI bits	------------------------
.equ	TST_CTRL_DIG_MASK= 0x0F		;      - Digital Test Controller Register (4 bits)
.equ	TST_CTRL_DIG0	= 0		;          TST_CTRL_DIG BIT0 position
; ::::  TST_CTRL_DIG	:::: bitfield values
;			0x00		; NORMAL (no test is active)
;			0x0F		; TST_CONT_TX (continuous transmit)

; ----------	Register TST_RX_LENGTH bits	------------------------
.equ	RX_LENGTH_MASK	= 0xFF		;      - Received Frame Length (8 bits)
.equ	RX_LENGTH0	= 0		;          RX_LENGTH BIT0 position



; ====	SYMCNT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SCTSTRHH bits		------------------------
.equ	SCTSTRHH_MASK	= 0xFF		;      - Symbol Counter Transmit Frame Timestamp Register HH-Byte (8 bits)
.equ	SCTSTRHH0	= 0		;          SCTSTRHH BIT0 position

; ----------	Register SCTSTRHL bits		------------------------
.equ	SCTSTRHL_MASK	= 0xFF		;      - Symbol Counter Transmit Frame Timestamp Register HL-Byte (8 bits)
.equ	SCTSTRHL0	= 0		;          SCTSTRHL BIT0 position

; ----------	Register SCTSTRLH bits		------------------------
.equ	SCTSTRLH_MASK	= 0xFF		;      - Symbol Counter Transmit Frame Timestamp Register LH-Byte (8 bits)
.equ	SCTSTRLH0	= 0		;          SCTSTRLH BIT0 position

; ----------	Register SCTSTRLL bits		------------------------
.equ	SCTSTRLL_MASK	= 0xFF		;      - Symbol Counter Transmit Frame Timestamp Register LL-Byte (8 bits)
.equ	SCTSTRLL0	= 0		;          SCTSTRLL BIT0 position

; ----------	Register SCOCR1HH bits		------------------------
.equ	SCOCR1HH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 1 HH-Byte (8 bits)
.equ	SCOCR1HH0	= 0		;          SCOCR1HH BIT0 position

; ----------	Register SCOCR1HL bits		------------------------
.equ	SCOCR1HL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 1 HL-Byte (8 bits)
.equ	SCOCR1HL0	= 0		;          SCOCR1HL BIT0 position

; ----------	Register SCOCR1LH bits		------------------------
.equ	SCOCR1LH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 1 LH-Byte (8 bits)
.equ	SCOCR1LH0	= 0		;          SCOCR1LH BIT0 position

; ----------	Register SCOCR1LL bits		------------------------
.equ	SCOCR1LL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 1 LL-Byte (8 bits)
.equ	SCOCR1LL0	= 0		;          SCOCR1LL BIT0 position

; ----------	Register SCOCR2HH bits		------------------------
.equ	SCOCR2HH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 2 HH-Byte (8 bits)
.equ	SCOCR2HH0	= 0		;          SCOCR2HH BIT0 position

; ----------	Register SCOCR2HL bits		------------------------
.equ	SCOCR2HL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 2 HL-Byte (8 bits)
.equ	SCOCR2HL0	= 0		;          SCOCR2HL BIT0 position

; ----------	Register SCOCR2LH bits		------------------------
.equ	SCOCR2LH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 2 LH-Byte (8 bits)
.equ	SCOCR2LH0	= 0		;          SCOCR2LH BIT0 position

; ----------	Register SCOCR2LL bits		------------------------
.equ	SCOCR2LL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 2 LL-Byte (8 bits)
.equ	SCOCR2LL0	= 0		;          SCOCR2LL BIT0 position

; ----------	Register SCOCR3HH bits		------------------------
.equ	SCOCR3HH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 3 HH-Byte (8 bits)
.equ	SCOCR3HH0	= 0		;          SCOCR3HH BIT0 position

; ----------	Register SCOCR3HL bits		------------------------
.equ	SCOCR3HL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 3 HL-Byte (8 bits)
.equ	SCOCR3HL0	= 0		;          SCOCR3HL BIT0 position

; ----------	Register SCOCR3LH bits		------------------------
.equ	SCOCR3LH_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 3 LH-Byte (8 bits)
.equ	SCOCR3LH0	= 0		;          SCOCR3LH BIT0 position

; ----------	Register SCOCR3LL bits		------------------------
.equ	SCOCR3LL_MASK	= 0xFF		;      - Symbol Counter Output Compare Register 3 LL-Byte (8 bits)
.equ	SCOCR3LL0	= 0		;          SCOCR3LL BIT0 position

; ----------	Register SCTSRHH bits		------------------------
.equ	SCTSRHH_MASK	= 0xFF		;      - Symbol Counter Frame Timestamp Register HH-Byte (8 bits)
.equ	SCTSRHH0	= 0		;          SCTSRHH BIT0 position

; ----------	Register SCTSRHL bits		------------------------
.equ	SCTSRHL_MASK	= 0xFF		;      - Symbol Counter Frame Timestamp Register HL-Byte (8 bits)
.equ	SCTSRHL0	= 0		;          SCTSRHL BIT0 position

; ----------	Register SCTSRLH bits		------------------------
.equ	SCTSRLH_MASK	= 0xFF		;      - Symbol Counter Frame Timestamp Register LH-Byte (8 bits)
.equ	SCTSRLH0	= 0		;          SCTSRLH BIT0 position

; ----------	Register SCTSRLL bits		------------------------
.equ	SCTSRLL_MASK	= 0xFF		;      - Symbol Counter Frame Timestamp Register LL-Byte (8 bits)
.equ	SCTSRLL0	= 0		;          SCTSRLL BIT0 position

; ----------	Register SCBTSRHH bits		------------------------
.equ	SCBTSRHH_MASK	= 0xFF		;      - Symbol Counter Beacon Timestamp Register HH-Byte (8 bits)
.equ	SCBTSRHH0	= 0		;          SCBTSRHH BIT0 position

; ----------	Register SCBTSRHL bits		------------------------
.equ	SCBTSRHL_MASK	= 0xFF		;      - Symbol Counter Beacon Timestamp Register HL-Byte (8 bits)
.equ	SCBTSRHL0	= 0		;          SCBTSRHL BIT0 position

; ----------	Register SCBTSRLH bits		------------------------
.equ	SCBTSRLH_MASK	= 0xFF		;      - Symbol Counter Beacon Timestamp Register LH-Byte (8 bits)
.equ	SCBTSRLH0	= 0		;          SCBTSRLH BIT0 position

; ----------	Register SCBTSRLL bits		------------------------
.equ	SCBTSRLL_MASK	= 0xFF		;      - Symbol Counter Beacon Timestamp Register LL-Byte (8 bits)
.equ	SCBTSRLL0	= 0		;          SCBTSRLL BIT0 position

; ----------	Register SCCNTHH bits		------------------------
.equ	SCCNTHH_MASK	= 0xFF		;      - Symbol Counter Register HH-Byte (8 bits)
.equ	SCCNTHH0	= 0		;          SCCNTHH BIT0 position

; ----------	Register SCCNTHL bits		------------------------
.equ	SCCNTHL_MASK	= 0xFF		;      - Symbol Counter Register HL-Byte (8 bits)
.equ	SCCNTHL0	= 0		;          SCCNTHL BIT0 position

; ----------	Register SCCNTLH bits		------------------------
.equ	SCCNTLH_MASK	= 0xFF		;      - Symbol Counter Register LH-Byte (8 bits)
.equ	SCCNTLH0	= 0		;          SCCNTLH BIT0 position

; ----------	Register SCCNTLL bits		------------------------
.equ	SCCNTLL_MASK	= 0xFF		;      - Symbol Counter Register LL-Byte (8 bits)
.equ	SCCNTLL0	= 0		;          SCCNTLL BIT0 position

; ----------	Register SCIRQS bits		------------------------
.equ	IRQSBO		= 4		; 0x10 - Backoff Slot Counter IRQ
.equ	IRQSOF		= 3		; 0x08 - Symbol Counter Overflow IRQ
.equ	IRQSCP_MASK	= 0x07		;      - Compare Unit 3 Compare Match IRQ (3 bits)
.equ	IRQSCP0		= 0		;          IRQSCP BIT0 position

; ----------	Register SCIRQM bits		------------------------
.equ	IRQMBO		= 4		; 0x10 - Backoff Slot Counter IRQ enable
.equ	IRQMOF		= 3		; 0x08 - Symbol Counter Overflow IRQ enable
.equ	IRQMCP_MASK	= 0x07		;      - Symbol Counter Compare Match 3 IRQ enable (3 bits)
.equ	IRQMCP0		= 0		;          IRQMCP BIT0 position

; ----------	Register SCSR bits		------------------------
.equ	SCBSY		= 0		; 0x01 - Symbol Counter busy

; ----------	Register SCCR1 bits		------------------------
.equ	Res_MASK	= 0xC0		;      - Reserved Bit (2 bits)
;.equ	Res0		= 6		;          Res BIT0 position
.equ	SCBTSM		= 5		; 0x20 - Symbol Counter Beacon Timestamp Mask Register
.equ	SCCKDIV_MASK	= 0x1C		;      - Clock divider for synchronous clock source (16MHz Transceiver Clock) (3 bits)
.equ	SCCKDIV0	= 2		;          SCCKDIV BIT0 position
.equ	SCEECLK		= 1		; 0x02 - Enable External Clock Source on PG2
.equ	SCENBO		= 0		; 0x01 - Backoff Slot Counter enable
; ::::  SCCKDIV	:::: bitfield values
;			0x00		; Transceiver Clock divided by 256, (62.5kHz)
;			0x04		; Transceiver Clock divided by 128, (125kHz)
;			0x08		; Transceiver Clock divided by 64,  (250kHz)
;			0x0C		; Transceiver Clock divided by 32,  (500kHz)
;			0x10		; Transceiver Clock divided by 16,  (1MHz)
;			0x14		; Transceiver Clock divided by 8,   (2MHz)
;			0x18		; Transceiver Clock divided by 4,   (4MHz)

; ----------	Register SCCR0 bits		------------------------
.equ	SCRES		= 7		; 0x80 - Symbol Counter Synchronization
.equ	SCMBTS		= 6		; 0x40 - Manual Beacon Timestamp
.equ	SCEN		= 5		; 0x20 - Symbol Counter enable
.equ	SCCKSEL		= 4		; 0x10 - Symbol Counter Clock Source select
.equ	SCTSE		= 3		; 0x08 - Symbol Counter Automatic Timestamping enable
.equ	SCCMP_MASK	= 0x07		;      - Symbol Counter Compare Unit 3 Mode select (3 bits)
.equ	SCCMP0		= 0		;          SCCMP BIT0 position

; ----------	Register SCCSR bits		------------------------
.equ	SCCS3_MASK	= 0x30		;      - Symbol Counter Compare Source select register for Compare Unit 3 (2 bits)
.equ	SCCS30		= 4		;          SCCS3 BIT0 position
.equ	SCCS2_MASK	= 0x0C		;      - Symbol Counter Compare Source select register for Compare Unit 2 (2 bits)
.equ	SCCS20		= 2		;          SCCS2 BIT0 position
.equ	SCCS1_MASK	= 0x03		;      - Symbol Counter Compare Source select register for Compare Units (2 bits)
.equ	SCCS10		= 0		;          SCCS1 BIT0 position
; ::::  SCCS3	:::: bitfield values
;			0x00		; Compare Unit 3 Relative Compare Source = Beacon Timestamp Register
;			0x10		; Compare Unit 3 Relative Compare Source = Transmit Frame Timestamp Register
;			0x20		; Compare Unit 3 Relative Compare Source = Received Frame Timestamp Register
; ::::  SCCS2	:::: bitfield values
;			0x00		; Compare Unit 2 Relative Compare Source = Beacon Timestamp Register
;			0x04		; Compare Unit 2 Relative Compare Source = Transmit Frame Timestamp Register
;			0x08		; Compare Unit 2 Relative Compare Source = Received Frame Timestamp Register
; ::::  SCCS1	:::: bitfield values
;			0x00		; Compare Unit 1 Relative Compare Source = Beacon Timestamp Register
;			0x01		; Compare Unit 1 Relative Compare Source = Transmit Frame Timestamp Register
;			0x02		; Compare Unit 1 Relative Compare Source = Received Frame Timestamp Register

; ----------	Register SCRSTRHH bits		------------------------
.equ	SCRSTRHH_MASK	= 0xFF		;      - Symbol Counter Received Frame Timestamp Register HH-Byte (8 bits)
.equ	SCRSTRHH0	= 0		;          SCRSTRHH BIT0 position

; ----------	Register SCRSTRHL bits		------------------------
.equ	SCRSTRHL_MASK	= 0xFF		;      - Symbol Counter Received Frame Timestamp Register HL-Byte (8 bits)
.equ	SCRSTRHL0	= 0		;          SCRSTRHL BIT0 position

; ----------	Register SCRSTRLH bits		------------------------
.equ	SCRSTRLH_MASK	= 0xFF		;      - Symbol Counter Received Frame Timestamp Register LH-Byte (8 bits)
.equ	SCRSTRLH0	= 0		;          SCRSTRLH BIT0 position

; ----------	Register SCRSTRLL bits		------------------------
.equ	SCRSTRLL_MASK	= 0xFF		;      - Symbol Counter Received Frame Timestamp Register LL-Byte (8 bits)
.equ	SCRSTRLL0	= 0		;          SCRSTRLL BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Programming Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation (Atomic Operation)
;			0x10		; Erase only
;			0x20		; Write only
;			0x30		; Reserved for future use



; ====	JTAG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register OCDR bits		------------------------
.equ	OCDR_MASK	= 0xFF		;      - On-Chip Debug Register Data (8 bits)
.equ	OCDR0		= 0		;          OCDR BIT0 position
; ::::  OCDR	:::: bitfield values
;			0x00		; Refer to the debugger documentation for further information on how to use this register.

; ----------	Register MCUCR bits		------------------------
.equ	JTD		= 7		; 0x80 - JTAG Interface Disable

; ----------	Register MCUSR bits		------------------------
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC3_MASK	= 0xC0		;      - External Interrupt 3 Sense Control Bit (2 bits)
.equ	ISC30		= 6		;          ISC3 BIT0 position
.equ	ISC2_MASK	= 0x30		;      - External Interrupt 2 Sense Control Bit (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt 1 Sense Control Bit (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt 0 Sense Control Bit (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC3	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x40		; Any edge of INTn generates asynchronously an interrupt request.
;			0x80		; The falling edge of INTn generates asynchronously an interrupt request.
;			0xC0		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC2	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x10		; Any edge of INTn generates asynchronously an interrupt request.
;			0x20		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x30		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC1	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x04		; Any edge of INTn generates asynchronously an interrupt request.
;			0x08		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x0C		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC0	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x01		; Any edge of INTn generates asynchronously an interrupt request.
;			0x02		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x03		; The rising edge of INTn generates asynchronously an interrupt request.

; ----------	Register EICRB bits		------------------------
.equ	ISC7_MASK	= 0xC0		;      - External Interrupt 7 Sense Control Bit (2 bits)
.equ	ISC70		= 6		;          ISC7 BIT0 position
.equ	ISC6_MASK	= 0x30		;      - External Interrupt 6 Sense Control Bit (2 bits)
.equ	ISC60		= 4		;          ISC6 BIT0 position
.equ	ISC5_MASK	= 0x0C		;      - External Interrupt 5 Sense Control Bit (2 bits)
.equ	ISC50		= 2		;          ISC5 BIT0 position
.equ	ISC4_MASK	= 0x03		;      - External Interrupt 4 Sense Control Bit (2 bits)
.equ	ISC40		= 0		;          ISC4 BIT0 position
; ::::  ISC7	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x40		; Any edge of INTn generates asynchronously an interrupt request.
;			0x80		; The falling edge of INTn generates asynchronously an interrupt request.
;			0xC0		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC6	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x10		; Any edge of INTn generates asynchronously an interrupt request.
;			0x20		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x30		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC5	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x04		; Any edge of INTn generates asynchronously an interrupt request.
;			0x08		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x0C		; The rising edge of INTn generates asynchronously an interrupt request.
; ::::  ISC4	:::: bitfield values
;			0x00		; The low level of INTn generates an interrupt request.
;			0x01		; Any edge of INTn generates asynchronously an interrupt request.
;			0x02		; The falling edge of INTn generates asynchronously an interrupt request.
;			0x03		; The rising edge of INTn generates asynchronously an interrupt request.

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0xFF		;      - External Interrupt Request Enable (8 bits)
.equ	INT0		= 0		;          INT BIT0 position
; ::::  INT	:::: bitfield values
;			0x00		; All external pin interrupts are disabled.
;			0xFF		; All external pin interrupts are enabled.

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0xFF		;      - External Interrupt Flag (8 bits)
.equ	INTF0		= 0		;          INTF BIT0 position
; ::::  INTF	:::: bitfield values
;			0x00		; No edge or logic change on INT7:0 occurred.
;			0x01		; A edge or logic change on INT0 occurred and triggered an interrupt request.
;			0x02		; ...
;			0x80		; A edge or logic change on INT7 occurred and triggered an interrupt request.

; ----------	Register PCMSK2 bits		------------------------
.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Mask (8 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Mask (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Mask (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x07		;      - Pin Change Interrupt Flags (3 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x07		;      - Pin Change Interrupt Enables (3 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - ADC Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal reference voltage generation turned off
;			0x40		; AVDD with external capacitor at AREF pin
;			0x80		; Internal 1.5V Voltage Reference (no external capacitor at AREF pin)
;			0xC0		; Internal 1.6V Voltage Reference (no external capacitor at AREF pin)

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
.equ	AVDDOK		= 7		; 0x80 - AVDD Supply Voltage OK
;.equ	ACME		= 6		; 0x40 - Analog Comparator Multiplexer Enable
.equ	REFOK		= 5		; 0x20 - Reference Voltage OK
.equ	ACCH		= 4		; 0x10 - Analog Channel Change
.equ	MUX5		= 3		; 0x08 - Analog Channel and Gain Selection Bits
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Source (3 bits)
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

; ----------	Register ADCSRC bits		------------------------
.equ	ADTHT_MASK	= 0xC0		;      - ADC Track-and-Hold Time (2 bits)
.equ	ADTHT0		= 6		;          ADTHT BIT0 position
.equ	ADCSRC_Res0	= 5		; 0x20 - Reserved
.equ	ADSUT_MASK	= 0x1F		;      - ADC Start-up Time (5 bits)
.equ	ADSUT0		= 0		;          ADSUT BIT0 position
; ::::  ADTHT	:::: bitfield values
;			0x00		; Single ended: 1, differential 3 ADC clock cycles
;			0x40		; Single ended: 2, differential 5 ADC clock cycles
;			0x80		; Single ended: 3, differential 7 ADC clock cycles
;			0xC0		; Single ended: 4, differential 9 ADC clock cycles
; ::::  ADSUT	:::: bitfield values
;			0x00		; 3 ADC clock cycles
;			0x01		; 7 ADC clock cycles
;			0x02		; 11 ADC clock cycles
;			0x03		; 15 ADC clock cycles
;			0x04		; ...
;			0x1E		; 251 ADC clock cycles
;			0x1F		; 255 ADC clock cycles

; ----------	Register DIDR2 bits		------------------------
.equ	ADC15D		= 7		; 0x80 - Reserved Bits
.equ	ADC14D		= 6		; 0x40 - Reserved Bits
.equ	ADC13D		= 5		; 0x20 - Reserved Bits
.equ	ADC12D		= 4		; 0x10 - Reserved Bits
.equ	ADC11D		= 3		; 0x08 - Reserved Bits
.equ	ADC10D		= 2		; 0x04 - Reserved Bits
.equ	ADC9D		= 1		; 0x02 - Reserved Bits
.equ	ADC8D		= 0		; 0x01 - Reserved Bits

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - Disable ADC7:0 Digital Input
.equ	ADC6D		= 6		; 0x40 - Disable ADC7:0 Digital Input
.equ	ADC5D		= 5		; 0x20 - Disable ADC7:0 Digital Input
.equ	ADC4D		= 4		; 0x10 - Disable ADC7:0 Digital Input
.equ	ADC3D		= 3		; 0x08 - Disable ADC7:0 Digital Input
.equ	ADC2D		= 2		; 0x04 - Disable ADC7:0 Digital Input
.equ	ADC1D		= 1		; 0x02 - Disable ADC7:0 Digital Input
.equ	ADC0D		= 0		; 0x01 - Disable ADC7:0 Digital Input



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	SIGRD		= 5		; 0x20 - Signature Row Read
.equ	RWWSRE		= 4		; 0x10 - Read While Write Section Read Enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



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
;.equ	JTD		= 7		; 0x80 - JTAG Interface Disable
.equ	PUD		= 4		; 0x10 - Pull-up Disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
;.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on Reset Flag

; ----------	Register OSCCAL bits		------------------------
.equ	CAL_MASK	= 0xFF		;      - Oscillator Calibration Tuning Value (8 bits)
.equ	CAL0		= 0		;          CAL BIT0 position
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position
; ::::  CAL	:::: bitfield values
;			0x00		; Calibration value for lowest oscillator frequency
;			0x7F		; End value of low frequency range calibration
;			0x80		; Start value of high frequency range calibration
;			0xFF		; Calibration value for highest oscillator frequency

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x0F		;      - Clock Prescaler Select Bits (4 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position
; ::::  CLKPS	:::: bitfield values
;			0x00		; Division factor 1   / RC-Oscillator   2
;			0x01		; Division factor 2   / RC-Oscillator   4
;			0x02		; Division factor 4   / RC-Oscillator   8
;			0x03		; Division factor 8   / RC-Oscillator  16
;			0x04		; Division factor 16  / RC-Oscillator  32
;			0x05		; Division factor 32  / RC-Oscillator  64
;			0x06		; Division factor 64  / RC-Oscillator 128
;			0x07		; Division factor 128 / RC-Oscillator 256
;			0x08		; Division factor 256 / RC-Oscillator 512
;			0x09		; Reserved
;			0x0A		; Reserved
;			0x0B		; Reserved
;			0x0C		; Reserved
;			0x0D		; Reserved
;			0x0E		; Reserved
;			0x0F		; Division factor 1 only permitted for RC-Oscillator. Flash and EEPROM programming is not allowed.

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
;			0x0E		; Extended Standby

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR_MASK	= 0xFF		;      - General Purpose I/O Register 2 Value (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR1 bits		------------------------
;.equ	GPIOR_MASK	= 0xFF		;      - General Purpose I/O Register 1 Value (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR07		= 7		; 0x80 - General Purpose I/O Register 0 Value
.equ	GPIOR06		= 6		; 0x40 - General Purpose I/O Register 0 Value
.equ	GPIOR05		= 5		; 0x20 - General Purpose I/O Register 0 Value
.equ	GPIOR04		= 4		; 0x10 - General Purpose I/O Register 0 Value
.equ	GPIOR03		= 3		; 0x08 - General Purpose I/O Register 0 Value
.equ	GPIOR02		= 2		; 0x04 - General Purpose I/O Register 0 Value
.equ	GPIOR01		= 1		; 0x02 - General Purpose I/O Register 0 Value
.equ	GPIOR00		= 0		; 0x01 - General Purpose I/O Register 0 Value

; ----------	Register PRR2 bits		------------------------
.equ	PRRAM3		= 3		; 0x08 - Power Reduction SRAM3
.equ	PRRAM2		= 2		; 0x04 - Power Reduction SRAM2
.equ	PRRAM1		= 1		; 0x02 - Power Reduction SRAM1
.equ	PRRAM0		= 0		; 0x01 - Power Reduction SRAM0

; ----------	Register PRR1 bits		------------------------
.equ	PRTRX24		= 6		; 0x40 - Power Reduction Transceiver
.equ	PRTIM5		= 5		; 0x20 - Power Reduction Timer/Counter5
.equ	PRTIM4		= 4		; 0x10 - Power Reduction Timer/Counter4
.equ	PRTIM3		= 3		; 0x08 - Power Reduction Timer/Counter3
.equ	PRUSART1	= 0		; 0x01 - Power Reduction USART1

; ----------	Register PRR0 bits		------------------------
.equ	PRTWI		= 7		; 0x80 - Power Reduction TWI
.equ	PRTIM2		= 6		; 0x40 - Power Reduction Timer/Counter2
.equ	PRTIM0		= 5		; 0x20 - Power Reduction Timer/Counter0
.equ	PRPGA		= 4		; 0x10 - Power Reduction PGA
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC



; ====	FLASH MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register NEMCR bits		------------------------
.equ	ENEAM		= 6		; 0x40 - Enable Extended Address Mode for Extra Rows
.equ	AEAM_MASK	= 0x30		;      - Address for Extended Address Mode of Extra Rows (2 bits)
.equ	AEAM0		= 4		;          AEAM BIT0 position
; ::::  AEAM	:::: bitfield values
;			0x00		; Factory Row
;			0x10		; User Row 1
;			0x20		; User Row 2
;			0x30		; User Row 3

; ----------	Register BGCR bits		------------------------
.equ	BGCAL_FINE_MASK	= 0x78		;      - Fine Calibration Bits (4 bits)
.equ	BGCAL_FINE0	= 3		;          BGCAL_FINE BIT0 position
.equ	BGCAL_MASK	= 0x07		;      - Coarse Calibration Bits (3 bits)
.equ	BGCAL0		= 0		;          BGCAL BIT0 position
; ::::  BGCAL_FINE	:::: bitfield values
;			0x00		; Center value
;			0x08		; Voltage step up
;			0x40		; Voltage step down
;			0x38		; Setting for highest voltage
;			0x78		; Setting for lowest voltage
; ::::  BGCAL	:::: bitfield values
;			0x04		; Center value
;			0x03		; Voltage step up
;			0x05		; Voltage step down
;			0x00		; Setting for highest voltage
;			0x07		; Setting for lowest voltage



; ====	PWRCTRL MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TRXPR bits		------------------------
.equ	SLPTR		= 1		; 0x02 - Multi-purpose Transceiver Control Bit
.equ	TRXRST		= 0		; 0x01 - Force Transceiver Reset

; ----------	Register DRTRAM0 bits		------------------------
.equ	DRTSWOK		= 5		; 0x20 - DRT Switch OK
.equ	ENDRT		= 4		; 0x10 - Enable SRAM Data Retention

; ----------	Register DRTRAM1 bits		------------------------
;.equ	DRTSWOK		= 5		; 0x20 - DRT Switch OK
;.equ	ENDRT		= 4		; 0x10 - Enable SRAM Data Retention

; ----------	Register DRTRAM2 bits		------------------------
;.equ	DRTSWOK		= 5		; 0x20 - DRT Switch OK
;.equ	ENDRT		= 4		; 0x10 - Enable SRAM Data Retention

; ----------	Register DRTRAM3 bits		------------------------
;.equ	DRTSWOK		= 5		; 0x20 - DRT Switch OK
;.equ	ENDRT		= 4		; 0x10 - Enable SRAM Data Retention

; ----------	Register LLDRL bits		------------------------
.equ	LLDRL_MASK	= 0x0F		;      - Low-Byte Data Register Bits (4 bits)
.equ	LLDRL0		= 0		;          LLDRL BIT0 position
; ::::  LLDRL	:::: bitfield values
;			0x00		; Calibration limit for fast process corner/high output voltage
;			0x01		; Calibration limit for slow process corner/low output voltage

; ----------	Register LLDRH bits		------------------------
.equ	LLDRH_MASK	= 0x1F		;      - High-Byte Data Register Bits (5 bits)
.equ	LLDRH0		= 0		;          LLDRH BIT0 position
; ::::  LLDRH	:::: bitfield values
;			0x00		; Calibration limit for fast process corner/high output voltage
;			0x01		; Calibration limit for slow process corner/low output voltage

; ----------	Register LLCR bits		------------------------
.equ	LLDONE		= 5		; 0x20 - Calibration Done
.equ	LLCOMP		= 4		; 0x10 - Comparator Output
.equ	LLCAL		= 3		; 0x08 - Calibration Active
.equ	LLTCO		= 2		; 0x04 - Temperature Coefficient of Current Source
.equ	LLSHORT		= 1		; 0x02 - Short Lower Calibration Circuit
.equ	LLENCAL		= 0		; 0x01 - Enable Automatic Calibration

; ----------	Register DPDS0 bits		------------------------
.equ	PFDRV_MASK	= 0xC0		;      - Driver Strength Port F (2 bits)
.equ	PFDRV0		= 6		;          PFDRV BIT0 position
.equ	PEDRV_MASK	= 0x30		;      - Driver Strength Port E (2 bits)
.equ	PEDRV0		= 4		;          PEDRV BIT0 position
.equ	PDDRV_MASK	= 0x0C		;      - Driver Strength Port D (2 bits)
.equ	PDDRV0		= 2		;          PDDRV BIT0 position
.equ	PBDRV_MASK	= 0x03		;      - Driver Strength Port B (2 bits)
.equ	PBDRV0		= 0		;          PBDRV BIT0 position
; ::::  PFDRV	:::: bitfield values
;			0x00		; 2 mA
;			0x40		; 4 mA
;			0x80		; 6 mA
;			0xC0		; 8 mA
; ::::  PEDRV	:::: bitfield values
;			0x00		; 2 mA
;			0x10		; 4 mA
;			0x20		; 6 mA
;			0x30		; 8 mA
; ::::  PDDRV	:::: bitfield values
;			0x00		; 2 mA
;			0x04		; 4 mA
;			0x08		; 6 mA
;			0x0C		; 8 mA
; ::::  PBDRV	:::: bitfield values
;			0x00		; 2 mA
;			0x01		; 4 mA
;			0x02		; 6 mA
;			0x03		; 8 mA

; ----------	Register DPDS1 bits		------------------------
.equ	PGDRV_MASK	= 0x03		;      - Driver Strength Port G (2 bits)
.equ	PGDRV0		= 0		;          PGDRV BIT0 position
; ::::  PGDRV	:::: bitfield values
;			0x00		; 2 mA
;			0x01		; 4 mA
;			0x02		; 6 mA
;			0x03		; 8 mA

; ----------	Register MCUCR bits		------------------------
;.equ	PUD		= 4		; 0x10 - Pull-up Disable




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  USART_CHAR_SIZE_BITF	:::: values
;			0b000		; 5-bit
;			0b001		; 6-bit
;			0b010		; 7-bit
;			0b011		; 8-bit
;			0b100		; Reserved
;			0b101		; Reserved
;			0b110		; Reserved
;			0b111		; 9-bit
; ::::  USART_CHAR_SIZE_BITF	:::: values
;			0b000		; 5-bit
;			0b001		; 6-bit
;			0b010		; 7-bit
;			0b011		; 8-bit
;			0b100		; Reserved
;			0b101		; Reserved
;			0b110		; Reserved
;			0b111		; 9-bit
; ::::  TC0_WGM_BITF	:::: values
;			0b000		; Normal mode of operation
;			0b001		; PWM, phase correct, TOP=0xFF
;			0b010		; CTC, TOP = OCRA
;			0b011		; Fast PWM, TOP=0xFF
;			0b100		; Reserved
;			0b101		; PWM, Phase correct, TOP = OCRA
;			0b110		; Reserved
;			0b111		; Fast PWM, TOP=OCRA
; ::::  TC1_WGMX_BITF	:::: values
;			0b0000		; Normal mode of operation
;			0b0001		; PWM, phase correct, 8-bit
;			0b0010		; PWM, phase correct, 9-bit
;			0b0011		; PWM, phase correct, 10-bit
;			0b0100		; CTC, TOP = OCRnA
;			0b0101		; Fast PWM, 8-bit
;			0b0110		; Fast PWM, 9-bit
;			0b0111		; Fast PWM, 10-bit
;			0b1000		; PWM, Phase and frequency correct, TOP = ICRn
;			0b1001		; PWM, Phase and frequency correct, TOP = OCRnA
;			0b1010		; PWM, Phase correct, TOP = ICRn
;			0b1011		; PWM, Phase correct, TOP = OCRnA
;			0b1100		; CTC, TOP = OCRnA
;			0b1101		; Reserved
;			0b1110		; Fast PWM, TOP = ICRn
;			0b1111		; Fast PWM, TOP = OCRnA



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 71
.equ	INT_VECTORS_SIZE	= 0x8E
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
;	11	PCINT2		; Pin Change Interrupt Request 2
;	12	WDT		; Watchdog Time-out Interrupt
;	13	TIMER2_COMPA	; Timer/Counter2 Compare Match A
;	14	TIMER2_COMPB	; Timer/Counter2 Compare Match B
;	15	TIMER2_OVF	; Timer/Counter2 Overflow
;	16	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	17	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	18	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	19	TIMER1_COMPC	; Timer/Counter1 Compare Match C
;	20	TIMER1_OVF	; Timer/Counter1 Overflow
;	21	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	22	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	23	TIMER0_OVF	; Timer/Counter0 Overflow
;	24	SPI_STC		; SPI Serial Transfer Complete
;	25	USART0_RX	; USART0, Rx Complete
;	26	USART0_UDRE	; USART0 Data register Empty
;	27	USART0_TX	; USART0, Tx Complete
;	28	ANALOG_COMP	; Analog Comparator
;	29	ADC		; ADC Conversion Complete
;	30	EE_READY	; EEPROM Ready
;	31	TIMER3_CAPT	; Timer/Counter3 Capture Event
;	32	TIMER3_COMPA	; Timer/Counter3 Compare Match A
;	33	TIMER3_COMPB	; Timer/Counter3 Compare Match B
;	34	TIMER3_COMPC	; Timer/Counter3 Compare Match C
;	35	TIMER3_OVF	; Timer/Counter3 Overflow
;	36	USART1_RX	; USART1, Rx Complete
;	37	USART1_UDRE	; USART1 Data register Empty
;	38	USART1_TX	; USART1, Tx Complete
;	39	TWI		; 2-wire Serial Interface
;	40	SPM_READY	; Store Program Memory Read
;	41	TIMER4_CAPT	; Timer/Counter4 Capture Event
;	42	TIMER4_COMPA	; Timer/Counter4 Compare Match A
;	43	TIMER4_COMPB	; Timer/Counter4 Compare Match B
;	44	TIMER4_COMPC	; Timer/Counter4 Compare Match C
;	45	TIMER4_OVF	; Timer/Counter4 Overflow
;	46	TIMER5_CAPT	; Timer/Counter5 Capture Event
;	47	TIMER5_COMPA	; Timer/Counter5 Compare Match A
;	48	TIMER5_COMPB	; Timer/Counter5 Compare Match B
;	49	TIMER5_COMPC	; Timer/Counter5 Compare Match C
;	50	TIMER5_OVF	; Timer/Counter5 Overflow
;	57	TRX24_PLL_LOCK	; TRX24 - PLL lock interrupt
;	58	TRX24_PLL_UNLOCK; TRX24 - PLL unlock interrupt
;	59	TRX24_RX_START	; TRX24 - Receive start interrupt
;	60	TRX24_RX_END	; TRX24 - RX_END interrupt
;	61	TRX24_CCA_ED_DONE; TRX24 - CCA/ED done interrupt
;	62	TRX24_XAH_AMI	; TRX24 - XAH - AMI
;	63	TRX24_TX_END	; TRX24 - TX_END interrupt
;	64	TRX24_AWAKE	; TRX24 AWAKE - transceiver is reaching state TRX_OFF
;	65	SCNT_CMP1	; Symbol counter - compare match 1 interrupt
;	66	SCNT_CMP2	; Symbol counter - compare match 2 interrupt
;	67	SCNT_CMP3	; Symbol counter - compare match 3 interrupt
;	68	SCNT_OVFL	; Symbol counter - overflow interrupt
;	69	SCNT_BACKOFF	; Symbol counter - backoff interrupt
;	70	AES_READY	; AES engine ready interrupt
;	71	BAT_LOW		; Battery monitor indicates supply voltage below threshold
;	72	TRX24_TX_START	; TRX24 TX start interrupt
;	73	TRX24_AMI0	; Address match interrupt of address filter 0
;	74	TRX24_AMI1	; Address match interrupt of address filter 1
;	75	TRX24_AMI2	; Address match interrupt of address filter 2
;	76	TRX24_AMI3	; Address match interrupt of address filter 3



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega64RFR2.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODLEVEL	= 0x06	; Brown-out detection at VCC=1.8 V
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=2048 words start address=$7800
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<OCDEN) \
;#				  & ~(1 <<JTAGEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	CKSEL_SUT	= 0x22	; Int. RC Osc.; Start-up time: 6 CK + 65 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~CKSEL_SUT_MASK | CKSEL_SUT)
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
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER2_COMPA	 - Timer/Counter2 Compare Match A
;#		reti			; TIMER2_COMPB	 - Timer/Counter2 Compare Match B
;#		reti			; TIMER2_OVF	 - Timer/Counter2 Overflow
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_COMPC	 - Timer/Counter1 Compare Match C
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART0_RX	 - USART0, Rx Complete
;#		reti			; USART0_UDRE	 - USART0 Data register Empty
;#		reti			; USART0_TX	 - USART0, Tx Complete
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; TIMER3_CAPT	 - Timer/Counter3 Capture Event
;#		reti			; TIMER3_COMPA	 - Timer/Counter3 Compare Match A
;#		reti			; TIMER3_COMPB	 - Timer/Counter3 Compare Match B
;#		reti			; TIMER3_COMPC	 - Timer/Counter3 Compare Match C
;#		reti			; TIMER3_OVF	 - Timer/Counter3 Overflow
;#		reti			; USART1_RX	 - USART1, Rx Complete
;#		reti			; USART1_UDRE	 - USART1 Data register Empty
;#		reti			; USART1_TX	 - USART1, Tx Complete
;#		reti			; TWI		 - 2-wire Serial Interface
;#		reti			; SPM_READY	 - Store Program Memory Read
;#		reti			; TIMER4_CAPT	 - Timer/Counter4 Capture Event
;#		reti			; TIMER4_COMPA	 - Timer/Counter4 Compare Match A
;#		reti			; TIMER4_COMPB	 - Timer/Counter4 Compare Match B
;#		reti			; TIMER4_COMPC	 - Timer/Counter4 Compare Match C
;#		reti			; TIMER4_OVF	 - Timer/Counter4 Overflow
;#		reti			; TIMER5_CAPT	 - Timer/Counter5 Capture Event
;#		reti			; TIMER5_COMPA	 - Timer/Counter5 Compare Match A
;#		reti			; TIMER5_COMPB	 - Timer/Counter5 Compare Match B
;#		reti			; TIMER5_COMPC	 - Timer/Counter5 Compare Match C
;#		reti			; TIMER5_OVF	 - Timer/Counter5 Overflow
;#		reti			; TRX24_PLL_LOCK - TRX24 - PLL lock interrupt
;#		reti			; TRX24_PLL_UNLOCK - TRX24 - PLL unlock interrupt
;#		reti			; TRX24_RX_START - TRX24 - Receive start interrupt
;#		reti			; TRX24_RX_END	 - TRX24 - RX_END interrupt
;#		reti			; TRX24_CCA_ED_DONE - TRX24 - CCA/ED done interrupt
;#		reti			; TRX24_XAH_AMI	 - TRX24 - XAH - AMI
;#		reti			; TRX24_TX_END	 - TRX24 - TX_END interrupt
;#		reti			; TRX24_AWAKE	 - TRX24 AWAKE - transceiver is reaching state TRX_OFF
;#		reti			; SCNT_CMP1	 - Symbol counter - compare match 1 interrupt
;#		reti			; SCNT_CMP2	 - Symbol counter - compare match 2 interrupt
;#		reti			; SCNT_CMP3	 - Symbol counter - compare match 3 interrupt
;#		reti			; SCNT_OVFL	 - Symbol counter - overflow interrupt
;#		reti			; SCNT_BACKOFF	 - Symbol counter - backoff interrupt
;#		reti			; AES_READY	 - AES engine ready interrupt
;#		reti			; BAT_LOW	 - Battery monitor indicates supply voltage below threshold
;#		reti			; TRX24_TX_START - TRX24 TX start interrupt
;#		reti			; TRX24_AMI0	 - Address match interrupt of address filter 0
;#		reti			; TRX24_AMI1	 - Address match interrupt of address filter 1
;#		reti			; TRX24_AMI2	 - Address match interrupt of address filter 2
;#		reti			; TRX24_AMI3	 - Address match interrupt of address filter 3
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA64RFR2_INC_ */

; ************************ END OF FILE *********************************

