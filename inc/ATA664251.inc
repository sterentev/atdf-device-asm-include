;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA664251
;* Title             : Register/Mask/Bit Definitions for the ATA664251
;* File Name         : ATA664251.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-06-01 14:53:06 UTC
;
;***********************************************************************

#ifndef _ATA664251_INC_
#define _ATA664251_INC_

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
.device	ATA664251
.equ	JTAGID		= 0x9487
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x87


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
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming enable

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PB7 as i/o pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always ON
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x06		; Brown-out detection at VCC=1.8 V
;			0x03		; Brown-out detection at VCC=2.3 V
;			0x02		; Brown-out detection at VCC=2.2 V
;			0x01		; Brown-out detection at VCC=1.9 V
;			0x00		; Brown-out detection at VCC=2.0 V
;			0x07		; Brown-out detection disabled

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB5
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x20		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x12		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x22		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x03		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x13		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms
;			0x23		; WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
;			0x04		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK 4 ms
;			0x14		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1024 CK + 64 ms
;			0x24		; Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32768 CK + 64 ms
;			0x08		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x18		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x28		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms
;			0x38		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms
;			0x09		; Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms
;			0x0A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms
;			0x3A		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms
;			0x0B		; Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms
;			0x0C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms
;			0x3C		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms
;			0x0D		; Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms
;			0x0E		; Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1E		; Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2E		; Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 0 ms
;			0x3E		; Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 4.1 ms
;			0x0F		; Ext. Ceramic Res. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 1024 CK /14 CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-16.0 MHz; Start-up time PWRDWN/RESET: 16384 CK/14 CK + 65 ms




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
.equ	LINDAT		= 0xD2		; [MEMORY MAPPED] LIN Data Register
.equ	LINSEL		= 0xD1		; [MEMORY MAPPED] LIN Data Buffer Selection Register
.equ	LINIDR		= 0xD0		; [MEMORY MAPPED] LIN Identifier Register
.equ	LINDLR		= 0xCF		; [MEMORY MAPPED] LIN Data Length Register
.equ	LINBRRH		= 0xCE		; [MEMORY MAPPED] LIN Baud Rate High Register
.equ	LINBRR		= 0xCD		; [MEMORY MAPPED] LIN Baud Rate Register
.equ	LINBRRL		= 0xCD		; [MEMORY MAPPED] LIN Baud Rate Low Register
.equ	LINBTR		= 0xCC		; [MEMORY MAPPED] LIN Bit Timing Register
.equ	LINERR		= 0xCB		; [MEMORY MAPPED] LIN Error Register
.equ	LINENIR		= 0xCA		; [MEMORY MAPPED] LIN Enable Interrupt Register
.equ	LINSIR		= 0xC9		; [MEMORY MAPPED] LIN Status and Interrupt Register
.equ	LINCR		= 0xC8		; [MEMORY MAPPED] LIN Control Register
.equ	USIPP		= 0xBC		; [MEMORY MAPPED] USI Pin Position
.equ	USIBR		= 0xBB		; [MEMORY MAPPED] USI Buffer Register
.equ	USIDR		= 0xBA		; [MEMORY MAPPED] USI Data Register
.equ	USISR		= 0xB9		; [MEMORY MAPPED] USI Status Register
.equ	USICR		= 0xB8		; [MEMORY MAPPED] USI Control Register
.equ	ASSR		= 0xB6		; [MEMORY MAPPED] Asynchronous Status Register
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register B  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register A  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	TCCR1D		= 0x83		; [MEMORY MAPPED] Timer/Counter1 Control Register D
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] The ADC Control and Status register B (Shared with ANALOG_COMPARATOR IO_MODULE)
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register A
.equ	ADC		= 0x78		; [MEMORY MAPPED] ADC Data Register  Bytes
.equ	AMISCR		= 0x77		; [MEMORY MAPPED] Analog Miscellaneous Control Register (Shared with CURRENT_SOURCE IO_MODULE)
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter1 Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Register
.equ	PRR		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKSELR		= 0x63		; [MEMORY MAPPED] Clock Selection Register
.equ	CLKCSR		= 0x62		; [MEMORY MAPPED] Clock Control & Status Register
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer  Bytes
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	DWDR		= 0x31		; DebugWire data register
.equ	ACSR		= 0x30		; Analog Comparator Control And Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO register 2
.equ	GPIOR1		= 0x2A		; General Purpose register 1
.equ	OCR0A		= 0x28		; Timer/Counter0 Output Compare Register A
.equ	TCNT0		= 0x27		; Timer/Counter0
.equ	TCCR0B		= 0x26		; Timer/Counter0 Control Register B
.equ	TCCR0A		= 0x25		; Timer/Counter0 Control Register A
.equ	GTCCR		= 0x23		; General Timer Counter Control register
.equ	EEAR		= 0x21		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General purpose register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter1 Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag Register
.equ	PORTCR		= 0x12		; Port Control Register
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins


; ====	PORTA MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DDRA bits		------------------------
.equ	DDA_MASK	= 0xFF		;      - Port A Data Direction Register bits (8 bits)
.equ	DDA0		= 0		;          DDA BIT0 position



; ====	PORTB MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DDRB bits		------------------------
.equ	DDB_MASK	= 0xFF		;      - Port B Data Direction Register bits (8 bits)
.equ	DDB0		= 0		;          DDB BIT0 position



; ====	LINUART MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LINCR bits		------------------------
.equ	LSWRES		= 7		; 0x80 - Software Reset
.equ	LIN13		= 6		; 0x40 - LIN Standard
.equ	LCONF_MASK	= 0x30		;      - LIN Configuration bits (2 bits)
.equ	LCONF0		= 4		;          LCONF BIT0 position
.equ	LENA		= 3		; 0x08 - LIN or UART Enable
.equ	LCMD_MASK	= 0x07		;      - LIN Command and Mode bits (3 bits)
.equ	LCMD0		= 0		;          LCMD BIT0 position

; ----------	Register LINSIR bits		------------------------
.equ	LIDST_MASK	= 0xE0		;      - Identifier Status bits (3 bits)
.equ	LIDST0		= 5		;          LIDST BIT0 position
.equ	LBUSY		= 4		; 0x10 - Busy Signal
.equ	LERR		= 3		; 0x08 - Error Interrupt
.equ	LIDOK		= 2		; 0x04 - Identifier Interrupt
.equ	LTXOK		= 1		; 0x02 - Transmit Performed Interrupt
.equ	LRXOK		= 0		; 0x01 - Receive Performed Interrupt

; ----------	Register LINENIR bits		------------------------
.equ	LENERR		= 3		; 0x08 - Enable Error Interrupt
.equ	LENIDOK		= 2		; 0x04 - Enable Identifier Interrupt
.equ	LENTXOK		= 1		; 0x02 - Enable Transmit Performed Interrupt
.equ	LENRXOK		= 0		; 0x01 - Enable Receive Performed Interrupt

; ----------	Register LINERR bits		------------------------
.equ	LABORT		= 7		; 0x80 - Abort Flag
.equ	LTOERR		= 6		; 0x40 - Frame Time Out Error Flag
.equ	LOVERR		= 5		; 0x20 - Overrun Error Flag
.equ	LFERR		= 4		; 0x10 - Framing Error Flag
.equ	LSERR		= 3		; 0x08 - Synchronization Error Flag
.equ	LPERR		= 2		; 0x04 - Parity Error Flag
.equ	LCERR		= 1		; 0x02 - Checksum Error Flag
.equ	LBERR		= 0		; 0x01 - Bit Error Flag

; ----------	Register LINBTR bits		------------------------
.equ	LDISR		= 7		; 0x80 - Disable Bit Timing Resynchronization
.equ	LBT_MASK	= 0x3F		;      - LIN Bit Timing bits (6 bits)
.equ	LBT0		= 0		;          LBT BIT0 position

; ----------	Register LINBRRL bits		------------------------
.equ	LINBRRL_LDIV_MASK= 0xFF		;      -  (8 bits)
.equ	LINBRRL_LDIV0	= 0		;          LINBRRL_LDIV BIT0 position

; ----------	Register LINBRRH bits		------------------------
.equ	LINBRRH_LDIV_MASK= 0x0F		;      -  (4 bits)
.equ	LINBRRH_LDIV0	= 0		;          LINBRRH_LDIV BIT0 position

; ----------	Register LINDLR bits		------------------------
.equ	LTXDL_MASK	= 0xF0		;      - LIN Transmit Data Length bits (4 bits)
.equ	LTXDL0		= 4		;          LTXDL BIT0 position
.equ	LRXDL_MASK	= 0x0F		;      - LIN Receive Data Length bits (4 bits)
.equ	LRXDL0		= 0		;          LRXDL BIT0 position

; ----------	Register LINIDR bits		------------------------
.equ	LP_MASK		= 0xC0		;      - Parity bits (2 bits)
.equ	LP0		= 6		;          LP BIT0 position
.equ	LID_MASK	= 0x3F		;      - Identifier bit 5 or Data Length bits (6 bits)
.equ	LID0		= 0		;          LID BIT0 position

; ----------	Register LINSEL bits		------------------------
.equ	LAINC		= 3		; 0x08 - Auto Increment of Data Buffer Index (Active Low)
.equ	LINDX_MASK	= 0x07		;      - FIFO LIN Data Buffer Index bits (3 bits)
.equ	LINDX0		= 0		;          LINDX BIT0 position

; ----------	Register LINDAT bits		------------------------
.equ	LDATA_MASK	= 0xFF		;      -  (8 bits)
.equ	LDATA0		= 0		;          LDATA BIT0 position



; ====	USI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register USIPP bits		------------------------
.equ	USIPOS		= 0		; 0x01 - USI Pin Position

; ----------	Register USIBR bits		------------------------
.equ	USIBR_MASK	= 0xFF		;      - USI Buffer Register bits (8 bits)
.equ	USIBR0		= 0		;          USIBR BIT0 position

; ----------	Register USIDR bits		------------------------
.equ	USIDR_MASK	= 0xFF		;      - USI Data Register bits (8 bits)
.equ	USIDR0		= 0		;          USIDR BIT0 position

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



; ====	TIMER_COUNTER_0 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0A		= 1		; 0x02 - Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode bits (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Genration Mode bits (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	CS0_MASK	= 0x07		;      - Clock Select bits (3 bits)
.equ	CS00		= 0		;          CS0 BIT0 position
; ::::  CS0	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register TCNT0 bits		------------------------
.equ	TCNT0_MASK	= 0xFF		;      - Timer/Counter0 bits (8 bits)
.equ	TCNT00		= 0		;          TCNT0 BIT0 position

; ----------	Register OCR0A bits		------------------------
.equ	OCR0_MASK	= 0xFF		;      - Timer/Counter0 Output Compare Register A bits (8 bits)
.equ	OCR00		= 0		;          OCR0 BIT0 position

; ----------	Register ASSR bits		------------------------
.equ	EXCLK		= 6		; 0x40 - Enable External Clock Input
.equ	AS0		= 5		; 0x20 - Asynchronous Timer/Counter0
.equ	TCN0UB		= 4		; 0x10 - Timer/Counter0 Update Busy
.equ	OCR0AUB		= 3		; 0x08 - Output Compare Register 0A  Update Busy
.equ	TCR0AUB		= 1		; 0x02 - Timer/Counter0 Control Register A Update Busy
.equ	TCR0BUB		= 0		; 0x01 - Timer/Counter0 Control Register B Update Busy

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR0		= 1		; 0x02 - Prescaler Reset Asynchronous 8-bit Timer/Counter0
.equ	PSR1		= 0		; 0x01 - Prescaler Reset Synchronous 16-bit Timer/Counter1



; ====	TIMER_COUNTER_1 MODULE REGISTERS BITS DEFINITION========
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
.equ	CS1_MASK	= 0x07		;      - Timer/Counter1 Clock Select bits (3 bits)
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
.equ	FOC1A		= 7		; 0x80 - Timer/Counter1 Force Output Compare for Channel A
.equ	FOC1B		= 6		; 0x40 - Timer/Counter1 Force Output Compare for Channel B

; ----------	Register TCCR1D bits		------------------------
.equ	OC1BX		= 7		; 0x80 - Timer/Counter1 Output Compare X-pin Enable for Channel B
.equ	OC1BW		= 6		; 0x40 - Timer/Counter1 Output Compare W-pin Enable for Channel B
.equ	OC1BV		= 5		; 0x20 - Timer/Counter1 Output Compare V-pin Enable for Channel B
.equ	OC1BU		= 4		; 0x10 - Timer/Counter1 Output Compare U-pin Enable for Channel B
.equ	OC1AX		= 3		; 0x08 - Timer/Counter1 Output Compare X-pin Enable for Channel A
.equ	OC1AW		= 2		; 0x04 - Timer/Counter1 Output Compare W-pin Enable for Channel A
.equ	OC1AV		= 1		; 0x02 - Timer/Counter1 Output Compare V-pin Enable for Channel A
.equ	OC1AU		= 0		; 0x01 - Timer/Counter1 Output Compare U-pin Enable for Channel A



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



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEDR bits		------------------------
.equ	EEDR_MASK	= 0xFF		;      - EEPROM Data Register Bits (8 bits)
.equ	EEDR0		= 0		;          EEDR BIT0 position

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



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPDR bits		------------------------
.equ	SPDR_MASK	= 0xFF		;      - SPI Data Register bits (8 bits)
.equ	SPDR0		= 0		;          SPDR BIT0 position

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



; ====	AD_CONVERTER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - Analog Channel and Gain Selection Bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.  
;			0x40		; If AREFEN==0 then Internal 1.1V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 1.1V as Voltage Reference with external capacitor at AREF pin.
;			0x80		; If AREFEN==0 then Internal AVCC as Voltage Reference. If AREFEN==1 then AREF pin as Voltage Reference.  
;			0xC0		; If AREFEN==0 then Internal 2.56V as Voltage Reference without external capacitor. If AREFEN==1 then Internal 2.56V as Voltage Reference with external capacitor at AREF pin.

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
.equ	BIN		= 7		; 0x80 - Bipolar Input Mode
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Source bits (3 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position
; ::::  ADTS	:::: bitfield values
;			0x00		; Free Running mode
;			0x01		; Analog Comparator
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter1 Compare Match A
;			0x04		; Timer/Counter1 Overflow
;			0x05		; Timer/Counter1 Compare Match B
;			0x06		; Timer/Counter1 Capture Event
;			0x07		; Watchdog Interrupt Request

; ----------	Register AMISCR bits		------------------------
.equ	AREFEN		= 2		; 0x04 - External Voltage Reference Input Enable
.equ	XREFEN		= 1		; 0x02 - Internal Voltage Reference Output Enable

; ----------	Register DIDR1 bits		------------------------
.equ	ADC10D		= 6		; 0x40 - 
.equ	ADC9D		= 5		; 0x20 - 
.equ	ADC8D		= 4		; 0x10 - 

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - 
.equ	ADC6D		= 6		; 0x40 - 
.equ	ADC5D		= 5		; 0x20 - 
.equ	ADC4D		= 4		; 0x10 - 
.equ	ADC3D		= 3		; 0x08 - 
.equ	ADC2D		= 2		; 0x04 - 
.equ	ADC1D		= 1		; 0x02 - 
.equ	ADC0D		= 0		; 0x01 - 



; ====	CURRENT_SOURCE MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register AMISCR bits		------------------------
.equ	ISRCEN		= 0		; 0x01 - Current Source Enable



; ====	ANALOG_COMPARATOR MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register ADCSRB bits		------------------------
.equ	ACME		= 6		; 0x40 - Analog Comparator Multiplexer Enable
.equ	ACIR_MASK	= 0x30		;      - Analog Comparator Internal Voltage Reference Select Bits (2 bits)
.equ	ACIR0		= 4		;          ACIR BIT0 position

; ----------	Register ACSR bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACIRS		= 6		; 0x40 - Analog Comparator Internal Reference Select
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



; ====	EXTERNAL_INTERRUPT MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control 0 Bits (2 bits)
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

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0x03		;      - External Interrupt Request 1 Enable (2 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x03		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x03		;      - Pin Change Interrupt Enable  on any PCINT14..8 pin (2 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x03		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Masks (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	RWWSB		= 6		; 0x40 - Read While Write Section Busy
.equ	SIGRD		= 5		; 0x20 - Signature Row Read
.equ	CTPB		= 4		; 0x10 - Clear Temporary Page Buffer
.equ	RFLB		= 3		; 0x08 - Read Fuse and Lock Bits
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

; ----------	Register PRR bits		------------------------
.equ	PRLIN		= 5		; 0x20 - Power Reduction LINUART
.equ	PRSPI		= 4		; 0x10 - Power Reduction SPI
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 2		; 0x04 - Power Reduction Timer/Counter0
.equ	PRUSI		= 1		; 0x02 - Power Reduction USI
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register MCUCR bits		------------------------
.equ	BODS		= 6		; 0x40 - BOD Sleep
.equ	BODSE		= 5		; 0x20 - BOD Sleep Enable
.equ	PUD		= 4		; 0x10 - Pull-up Disable

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-On Reset Flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x06		;      - Sleep Mode Select Bits (2 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Reserved

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

; ----------	Register CLKSELR bits		------------------------
.equ	COUT		= 6		; 0x40 - Clock Out - CKOUT fuse substitution
.equ	CSUT_MASK	= 0x30		;      - Clock Start-up Time bit 1 - SUT1 fuse substitution (2 bits)
.equ	CSUT0		= 4		;          CSUT BIT0 position
.equ	CSEL_MASK	= 0x0F		;      - Clock Source Select bit 3 - CKSEL3 fuse substitution (4 bits)
.equ	CSEL0		= 0		;          CSEL BIT0 position

; ----------	Register CLKCSR bits		------------------------
.equ	CLKCCE		= 7		; 0x80 - Clock Control Change Enable
.equ	CLKRDY		= 4		; 0x10 - Clock Ready Flag
.equ	CLKC_MASK	= 0x0F		;      - Clock Control bits (4 bits)
.equ	CLKC0		= 0		;          CLKC BIT0 position
; ::::  CLKC	:::: bitfield values
;			0x00		; No Command
;			0x01		; Disable Clock Source
;			0x02		; Enable Clock Source
;			0x03		; Request for Clock Availability
;			0x04		; Clock Source Switch
;			0x05		; Recovery System Clock Source Code
;			0x06		; Enable Watchdog in Automatic Reload Mode
;			0x07		; CKOUT Command
;			0x08		; From 0x08 up to 0x0F: No command

; ----------	Register DWDR bits		------------------------
.equ	DWDR_MASK	= 0xFF		;      - DebugWire data register bits (8 bits)
.equ	DWDR0		= 0		;          DWDR BIT0 position

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR2_MASK	= 0xFF		;      - General Purpose IO register 2 Bits (8 bits)
.equ	GPIOR20		= 0		;          GPIOR2 BIT0 position

; ----------	Register GPIOR1 bits		------------------------
.equ	GPIOR1_MASK	= 0xFF		;      - General Purpose IO register 1 Bits (8 bits)
.equ	GPIOR10		= 0		;          GPIOR1 BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR0_MASK	= 0xFF		;      - General Purpose IO register 0 Bits (8 bits)
.equ	GPIOR00		= 0		;          GPIOR0 BIT0 position

; ----------	Register PORTCR bits		------------------------
.equ	BBMB		= 5		; 0x20 - 
.equ	BBMA		= 4		; 0x10 - 
.equ	PUDB		= 1		; 0x02 - 
.equ	PUDA		= 0		; 0x01 - 




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
.equ	INT_VECTORS_NUM		= 20
.equ	INT_VECTORS_SIZE	= 0x28
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Reset, Power-on Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	PCINT0		; Pin Change Interrupt Request 0
;	4	PCINT1		; Pin Change Interrupt Request 1
;	5	WDT		; Watchdog Time-Out Interrupt
;	6	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	7	TIMER1_COMPA	; Timer/Counter1 Compare Match 1A
;	8	TIMER1_COMPB	; Timer/Counter1 Compare Match 1B
;	9	TIMER1_OVF	; Timer/Counter1 Overflow
;	10	TIMER0_COMPA	; Timer/Counter0 Compare Match 0A
;	11	TIMER0_OVF	; Timer/Counter0 Overflow
;	12	LIN_TC		; LIN Transfer Complete
;	13	LIN_ERR		; LIN Error
;	14	SPI_STC		; SPI Serial Transfer Complete
;	15	ADC		; ADC Conversion Complete
;	16	EE_RDY		; EEPROM Ready
;	17	ANA_COMP	; Analog Comparator
;	18	USI_START	; USI Start Condition Detection
;	19	USI_OVF		; USI Counter Overflow



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATA664251.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  & ~(0 <<SELFPRGEN)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BODLEVEL	= 0x07	; Brown-out detection disabled
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x22	; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms
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
;#		rjmp	RESET_ISR	; RESET		 - External Reset, Power-on Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; WDT		 - Watchdog Time-Out Interrupt
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match 1A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match 1B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match 0A
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; LIN_TC	 - LIN Transfer Complete
;#		reti			; LIN_ERR	 - LIN Error
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_RDY_ISR	; EE_RDY	 - EEPROM Ready
;#		reti			; ANA_COMP	 - Analog Comparator
;#		reti			; USI_START	 - USI Start Condition Detection
;#		reti			; USI_OVF	 - USI Counter Overflow
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA664251_INC_ */

; ************************ END OF FILE *********************************

