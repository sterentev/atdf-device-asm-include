;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega406
;* Title             : Register/Mask/Bit Definitions for the ATmega406
;* File Name         : ATmega406.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-05 09:18:00 UTC
;
;***********************************************************************

#ifndef _ATMEGA406_INC_
#define _ATMEGA406_INC_

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
.device	ATmega406
.equ	JTAGID		= 0x0950703F
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x95
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
.equ	ADDR_FLASH_END			= 0x9FFF
.equ	ADDR_FLASH_SIZE			= 0xA000
;   BOOT_SECTION_1
.equ	ADDR_BOOT_SECTION_1_START	= 0x9E00
.equ	ADDR_BOOT_SECTION_1_END		= 0x9FFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0200
;   BOOT_SECTION_2
.equ	ADDR_BOOT_SECTION_2_START	= 0x9C00
.equ	ADDR_BOOT_SECTION_2_END		= 0x9FFF
.equ	ADDR_BOOT_SECTION_2_SIZE	= 0x0400
;   BOOT_SECTION_3
.equ	ADDR_BOOT_SECTION_3_START	= 0x9800
.equ	ADDR_BOOT_SECTION_3_END		= 0x9FFF
.equ	ADDR_BOOT_SECTION_3_SIZE	= 0x0800
;   BOOT_SECTION_4
.equ	ADDR_BOOT_SECTION_4_START	= 0x9000
.equ	ADDR_BOOT_SECTION_4_END		= 0x9FFF
.equ	ADDR_BOOT_SECTION_4_SIZE	= 0x1000

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
.equ	ADDR_MAPPED_IO_END		= 0x00FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x00E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0100
.equ	ADDR_IRAM_END			= 0x08FF
.equ	ADDR_IRAM_SIZE			= 0x0800

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x01FF
.equ	ADDR_EEPROM_SIZE		= 0x0200




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register HIGH bits		------------------------
.equ	OCDEN		= 1		; 0x02 - On-Chip Debug Enabled
.equ	JTAGEN		= 0		; 0x01 - JTAG Interface Enabled

; ----------	Register LOW bits		------------------------
.equ	WDTON		= 7		; 0x80 - Watchdog timer always on
.equ	EESAVE		= 6		; 0x40 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x30		;      - Select boot size (2 bits)
.equ	BOOTSZ0		= 4		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 3		; 0x08 - Boot Reset vector Enabled
.equ	SUT_CKSEL_MASK	= 0x07		;      - Clock Selection (3 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  BOOTSZ	:::: bitfield values
;			0x30		; Boot Flash size=256 words Boot address=$4F00
;			0x20		; Boot Flash size=512 words Boot address=$4E00
;			0x10		; Boot Flash size=1024 words Boot address=$4C00
;			0x00		; Boot Flash size=2048 words Boot address=$4800
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Start-up time: 14 CK + 0 ms
;			0x02		; Start-up time: 14 CK + 3.9 ms
;			0x04		; Start-up time: 14 CK + 62.5 ms
;			0x01		; Start-up time: 14 CK + 0 ms
;			0x03		; Start-up time: 14 CK + 3.9 ms
;			0x05		; Start-up time: 14 CK + 62.5 ms




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
.equ	BPPLR		= 0xF8		; [MEMORY MAPPED] Battery Protection Parameter Lock Register
.equ	BPCR		= 0xF7		; [MEMORY MAPPED] Battery Protection Control Register
.equ	CBPTR		= 0xF6		; [MEMORY MAPPED] Current Battery Protection Timing Register
.equ	BPOCD		= 0xF5		; [MEMORY MAPPED] Battery Protection OverCurrent Detection Level Register
.equ	BPSCD		= 0xF4		; [MEMORY MAPPED] Battery Protection Short-Circuit Detection Level Register
.equ	BPDUV		= 0xF3		; [MEMORY MAPPED] Battery Protection Deep Under Voltage Register
.equ	BPIR		= 0xF2		; [MEMORY MAPPED] Battery Protection Interrupt Register
.equ	CBCR		= 0xF1		; [MEMORY MAPPED] Cell Balancing Control Register
.equ	FCSR		= 0xF0		; [MEMORY MAPPED] 
.equ	CADIC		= 0xE8		; [MEMORY MAPPED] [___2 addrs___] CC-ADC Instantaneous Current
.equ	CADRDC		= 0xE7		; [MEMORY MAPPED] CC-ADC Regular Discharge Current
.equ	CADRCC		= 0xE6		; [MEMORY MAPPED] CC-ADC Regular Charge Current
.equ	CADCSRB		= 0xE5		; [MEMORY MAPPED] CC-ADC Control and Status Register B
.equ	CADCSRA		= 0xE4		; [MEMORY MAPPED] CC-ADC Control and Status Register A
.equ	CADAC3		= 0xE3		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC2		= 0xE2		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC1		= 0xE1		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC0		= 0xE0		; [MEMORY MAPPED] ADC Accumulate Current
.equ	BGCRR		= 0xD1		; [MEMORY MAPPED] Bandgap Calibration of Resistor Ladder
.equ	BGCCR		= 0xD0		; [MEMORY MAPPED] Bandgap Calibration Register
.equ	CCSR		= 0xC0		; [MEMORY MAPPED] Clock Control and Status Register
.equ	TWBCSR		= 0xBE		; [MEMORY MAPPED] TWI Bus Control and Status Register
.equ	TWAMR		= 0xBD		; [MEMORY MAPPED] TWI (Slave) Address Mask Register
.equ	TWCR		= 0xBC		; [MEMORY MAPPED] TWI Control Register
.equ	TWDR		= 0xBB		; [MEMORY MAPPED] TWI Data register
.equ	TWAR		= 0xBA		; [MEMORY MAPPED] TWI (Slave) Address register
.equ	TWSR		= 0xB9		; [MEMORY MAPPED] TWI Status Register
.equ	TWBR		= 0xB8		; [MEMORY MAPPED] TWI Bit Rate register
.equ	OCR1AH		= 0x89		; [MEMORY MAPPED] Output Compare Register 1A High byte
.equ	OCR1AL		= 0x88		; [MEMORY MAPPED] Output Compare Register 1A Low byte
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] [___2 addrs___] Timer Counter 1  Bytes
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register
.equ	VADMUX		= 0x7C		; [MEMORY MAPPED] The VADC multiplexer Selection Register
.equ	VADCSR		= 0x7A		; [MEMORY MAPPED] The VADC Control and Status register
.equ	VADC		= 0x78		; [MEMORY MAPPED] [___2 addrs___] VADC Data Register  Bytes
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Enable Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Enable Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	FOSCCAL		= 0x66		; [MEMORY MAPPED] Fast Oscillator Calibration Value
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register 0
.equ	WUTCSR		= 0x62		; [MEMORY MAPPED] Wake-up Timer Control Register
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0B		= 0x28		; Output compare Register B
.equ	OCR0A		= 0x27		; Output compare Register A
.equ	TCNT0		= 0x26		; Timer Counter 0
.equ	TCCR0B		= 0x25		; Timer/Counter0 Control Register
.equ	TCCR0A		= 0x24		; Timer/Counter0 Control Register
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; [___2 addrs___] EEPROM Address Register  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter Interrupt Flag register
.equ	PORTD		= 0x0B		; Data Register, Port D
.equ	DDRD		= 0x0A		; Data Direction Register, Port D
.equ	PIND		= 0x09		; Input Pins, Port D
.equ	PORTC		= 0x08		; Port C Data Register
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins
;
; ----------	REGISTERS PAIRS			------------------------
;    CC-ADC Instantaneous Current
.equ	CADICH		= 0xE9
.equ	CADICL		= 0xE8
;    Timer Counter 1  Bytes
.equ	TCNT1H		= 0x85
.equ	TCNT1L		= 0x84
;    VADC Data Register  Bytes
.equ	VADCH		= 0x79
.equ	VADCL		= 0x78
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    EEPROM Address Register  Bytes
.equ	EEARH		= 0x22
.equ	EEARL		= 0x21


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register VADMUX bits		------------------------
.equ	VADMUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
.equ	VADMUX0		= 0		;          VADMUX BIT0 position

; ----------	Register VADCSR bits		------------------------
.equ	VADEN		= 3		; 0x08 - VADC Enable
.equ	VADSC		= 2		; 0x04 - VADC Satrt Conversion
.equ	VADCCIF		= 1		; 0x02 - VADC Conversion Complete Interrupt Flag
.equ	VADCCIE		= 0		; 0x01 - VADC Conversion Complete Interrupt Enable



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC3_MASK	= 0xC0		;      - External Interrupt Sense Control 3 Bits (2 bits)
.equ	ISC30		= 6		;          ISC3 BIT0 position
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control 2 Bits (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control 0 Bits (2 bits)
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
.equ	INT_MASK	= 0x0F		;      - External Interrupt Request 1 Enable (4 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x0F		;      - External Interrupt Flags (4 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x03		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x03		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1B bits		------------------------
.equ	CTC1		= 3		; 0x08 - Clear Timer/Counter on Compare Match
.equ	CS1_MASK	= 0x07		;      - Clock Select1 bits (3 bits)
.equ	CS10		= 0		;          CS1 BIT0 position
; ::::  CS1	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register TIMSK1 bits		------------------------
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	OCF1A		= 1		; 0x02 - Timer/Counter1 Output Compare Flag A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset



; ====	WAKEUP_TIMER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register WUTCSR bits		------------------------
.equ	WUTIF		= 7		; 0x80 - Wake-up Timer Interrupt Flag
.equ	WUTIE		= 6		; 0x40 - Wake-up Timer Interrupt Enable
.equ	WUTCF		= 5		; 0x20 - Wake-up timer Calibration Flag
.equ	WUTR		= 4		; 0x10 - Wake-up Timer Reset
.equ	WUTE		= 3		; 0x08 - Wake-up Timer Enable
.equ	WUTP_MASK	= 0x07		;      - Wake-up Timer Prescaler Bits (3 bits)
.equ	WUTP0		= 0		;          WUTP BIT0 position
; ::::  WUTP	:::: bitfield values
;			0x00		; 4K(Slow RC) / 1K (32kHz)
;			0x01		; 8K(Slow RC) / 2K (32kHz)
;			0x02		; 16K(Slow RC) / 4K (32kHz)
;			0x03		; 32K(Slow RC) / 8K (32kHz)
;			0x04		; 64K(Slow RC) / 16K (32kHz)
;			0x05		; 128K(Slow RC) / 32K (32kHz)
;			0x06		; 256K(Slow RC) / 64K (32kHz)
;			0x07		; 512K(Slow RC) / 128K (32kHz)



; ====	BATTERY_PROTECTION MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register BPPLR bits		------------------------
.equ	BPPLE		= 1		; 0x02 - Battery Protection Parameter Lock Enable
.equ	BPPL		= 0		; 0x01 - Battery Protection Parameter Lock

; ----------	Register BPCR bits		------------------------
.equ	DUVD		= 3		; 0x08 - 
.equ	SCD		= 2		; 0x04 - 
.equ	DCD		= 1		; 0x02 - 
.equ	CCD		= 0		; 0x01 - 

; ----------	Register CBPTR bits		------------------------
.equ	SCPT_MASK	= 0xF0		;      -  (4 bits)
.equ	SCPT0		= 4		;          SCPT BIT0 position
.equ	OCPT_MASK	= 0x0F		;      -  (4 bits)
.equ	OCPT0		= 0		;          OCPT BIT0 position
; ::::  SCPT	:::: bitfield values
;			0x00		; 61 us
;			0x10		; 122 us
;			0x20		; 183 us
;			0x30		; 244 us
;			0x40		; 305 us
;			0x50		; 366 us
;			0x60		; 427 us
;			0x70		; 488 us
;			0x80		; 610 us
;			0x90		; 732 us
;			0xA0		; 854 us
;			0xB0		; 976 us
;			0xC0		; 1098 us
;			0xD0		; 1220 us
;			0xE0		; 1342 us
;			0xF0		; 1464 us
; ::::  OCPT	:::: bitfield values
;			0x00		; 1 ms
;			0x01		; 2 ms
;			0x02		; 4 ms
;			0x03		; 6 ms
;			0x04		; 8 ms
;			0x05		; 10 ms
;			0x06		; 12 ms
;			0x07		; 14 ms
;			0x08		; 16 ms
;			0x09		; 18 ms
;			0x0A		; 20 ms
;			0x0B		; 22 ms
;			0x0C		; 24 ms
;			0x0D		; 26 ms
;			0x0E		; 28 ms
;			0x0F		; 30 ms

; ----------	Register BPOCD bits		------------------------
.equ	DCDL_MASK	= 0xF0		;      -  (4 bits)
.equ	DCDL0		= 4		;          DCDL BIT0 position
.equ	CCDL_MASK	= 0x0F		;      -  (4 bits)
.equ	CCDL0		= 0		;          CCDL BIT0 position
; ::::  DCDL	:::: bitfield values
;			0x00		; 0.050V
;			0x10		; 0.055V
;			0x20		; 0.060V
;			0x30		; 0.065V
;			0x40		; 0.070V
;			0x50		; 0.080V
;			0x60		; 0.090V
;			0x70		; 0.100V
;			0x80		; 0.110V
;			0x90		; 0.120V
;			0xA0		; 0.130V
;			0xB0		; 0.140V
;			0xC0		; 0.160V
;			0xD0		; 0.180V
;			0xE0		; 0.200V
;			0xF0		; 0.220V
; ::::  CCDL	:::: bitfield values
;			0x00		; 0.050V
;			0x01		; 0.055V
;			0x02		; 0.060V
;			0x03		; 0.065V
;			0x04		; 0.070V
;			0x05		; 0.080V
;			0x06		; 0.090V
;			0x07		; 0.100V
;			0x08		; 0.110V
;			0x09		; 0.120V
;			0x0A		; 0.130V
;			0x0B		; 0.140V
;			0x0C		; 0.160V
;			0x0D		; 0.180V
;			0x0E		; 0.200V
;			0x0F		; 0.220V

; ----------	Register BPSCD bits		------------------------
.equ	SCDL_MASK	= 0x0F		;      -  (4 bits)
.equ	SCDL0		= 0		;          SCDL BIT0 position
; ::::  SCDL	:::: bitfield values
;			0x00		; 0.100V
;			0x01		; 0.110V
;			0x02		; 0.120V
;			0x03		; 0.130V
;			0x04		; 0.140V
;			0x05		; 0.160V
;			0x06		; 0.180V
;			0x07		; 0.200V
;			0x08		; 0.220V
;			0x09		; 0.240V
;			0x0A		; 0.260V
;			0x0B		; 0.280V
;			0x0C		; 0.320V
;			0x0D		; 0.360V
;			0x0E		; 0.400V
;			0x0F		; 0.440V

; ----------	Register BPDUV bits		------------------------
.equ	DUVT_MASK	= 0x30		;      -  (2 bits)
.equ	DUVT0		= 4		;          DUVT BIT0 position
.equ	DUDL_MASK	= 0x0F		;      -  (4 bits)
.equ	DUDL0		= 0		;          DUDL BIT0 position
; ::::  DUVT	:::: bitfield values
;			0x00		; 750ms
;			0x10		; 1000ms
;			0x20		; 1250ms
;			0x30		; 1500ms
; ::::  DUDL	:::: bitfield values
;			0x00		; 4.71V
;			0x01		; 5.03V
;			0x02		; 5.34V
;			0x03		; 5.66V
;			0x04		; 5.97V
;			0x05		; 6.29V
;			0x06		; 6.60V
;			0x07		; 6.91V
;			0x08		; 7.23V
;			0x09		; 7.54V
;			0x0A		; 7.86V
;			0x0B		; 8.17V
;			0x0C		; 8.49V
;			0x0D		; 8.80V
;			0x0E		; 9.11V
;			0x0F		; 9.43V

; ----------	Register BPIR bits		------------------------
.equ	DUVIF		= 7		; 0x80 - Deep Under-voltage Early Warning Interrupt Flag
.equ	COCIF		= 6		; 0x40 - Charge Over-current Protection Activated Interrupt Flag
.equ	DOCIF		= 5		; 0x20 - 
.equ	SCIF		= 4		; 0x10 - 
.equ	DUVIE		= 3		; 0x08 - Deep Under-voltage Early Warning Interrupt Enable
.equ	COCIE		= 2		; 0x04 - 
.equ	DOCIE		= 1		; 0x02 - 
.equ	SCIE		= 0		; 0x01 - 



; ====	FET MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FCSR bits		------------------------
.equ	PWMOC		= 5		; 0x20 - Pulse Width Modulation of OC output
.equ	PWMOPC		= 4		; 0x10 - Pulse Width Modulation Modulation of OPC output
.equ	CPS		= 3		; 0x08 - Current Protection Status
.equ	DFE		= 2		; 0x04 - Discharge FET Enable
.equ	CFE		= 1		; 0x02 - Charge FET Enable
.equ	PFD		= 0		; 0x01 - Precharge FET disable



; ====	COULOMB_COUNTER MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register CADCSRA bits		------------------------
.equ	CADEN		= 7		; 0x80 - When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled.
.equ	CADUB		= 5		; 0x20 - CC_ADC Update Busy
.equ	CADAS_MASK	= 0x18		;      - CC_ADC Accumulate Current Select Bits (2 bits)
.equ	CADAS0		= 3		;          CADAS BIT0 position
.equ	CADSI_MASK	= 0x06		;      - The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. (2 bits)
.equ	CADSI0		= 1		;          CADSI BIT0 position
.equ	CADSE		= 0		; 0x01 - When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode.
; ::::  CADAS	:::: bitfield values
;			0x00		; 125ms
;			0x08		; 250ms
;			0x10		; 500ms
;			0x18		; 1000ms
; ::::  CADSI	:::: bitfield values
;			0x00		; 125ms
;			0x02		; 250ms
;			0x04		; 500ms
;			0x06		; 1000ms

; ----------	Register CADCSRB bits		------------------------
.equ	CADACIE		= 6		; 0x40 - 
.equ	CADRCIE		= 5		; 0x20 - Regular Current Interrupt Enable
.equ	CADICIE		= 4		; 0x10 - CAD Instantaneous Current Interrupt Enable
.equ	CADACIF		= 2		; 0x04 - CC-ADC Accumulate Current Interrupt Flag
.equ	CADRCIF		= 1		; 0x02 - CC-ADC Accumulate Current Interrupt Flag
.equ	CADICIF		= 0		; 0x01 - CC-ADC Instantaneous Current Interrupt Flag



; ====	CELL_BALANCING MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register CBCR bits		------------------------
.equ	CBE_MASK	= 0x0F		;      - Cell Balancing Enables (4 bits)
.equ	CBE0		= 0		;          CBE BIT0 position



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
.equ	JTD		= 7		; 0x80 - JTAG Disable
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	JTRF		= 4		; 0x10 - JTAG Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BODRF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Power Off
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved

; ----------	Register CCSR bits		------------------------
.equ	XOE		= 1		; 0x02 - 32 kHz Crystal Oscillator Enable
.equ	ACS		= 0		; 0x01 - Asynchronous Clock Select

; ----------	Register PRR0 bits		------------------------
.equ	PRTWI		= 3		; 0x08 - Power Reduction TWI
.equ	PRTIM1		= 2		; 0x04 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 1		; 0x02 - Power Reduction Timer/Counter0
.equ	PRVADC		= 0		; 0x01 - Power Reduction V-ADC



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



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Force Output Compare (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      -  (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Clock Select0 bits (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare
.equ	FOC0B		= 6		; 0x40 - Waveform Generation Mode
.equ	WGM02		= 3		; 0x08 - 
.equ	CS0_MASK	= 0x07		;      - Clock Select0 bits (3 bits)
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

; ----------	Register OCR0A bits		------------------------
.equ	OCR0A_MASK	= 0xFF		;      -  (8 bits)
.equ	OCR0A0		= 0		;          OCR0A BIT0 position

; ----------	Register OCR0B bits		------------------------
.equ	OCR0B_MASK	= 0xFF		;      -  (8 bits)
.equ	OCR0B0		= 0		;          OCR0B BIT0 position

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Output Compare Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Output Compare Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Output Compare Flag
.equ	OCF0A		= 1		; 0x02 - Output Compare Flag
.equ	TOV0		= 0		; 0x01 - Overflow Flag



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



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWBCSR bits		------------------------
.equ	TWBCIF		= 7		; 0x80 - TWI Bus Connect/Disconnect Interrupt Flag
.equ	TWBCIE		= 6		; 0x40 - TWI Bus Connect/Disconnect Interrupt Enable
.equ	TWBDT_MASK	= 0x06		;      - TWI Bus Disconnect Time-out Period (2 bits)
.equ	TWBDT0		= 1		;          TWBDT BIT0 position
.equ	TWBCIP		= 0		; 0x01 - TWI Bus Connect/Disconnect Interrupt Polarity
; ::::  TWBDT	:::: bitfield values
;			0x00		; 250ms
;			0x02		; 500ms
;			0x04		; 1000ms
;			0x06		; 2000ms

; ----------	Register TWAMR bits		------------------------
.equ	TWAM_MASK	= 0xFE		;      -  (7 bits)
.equ	TWAM0		= 1		;          TWAM BIT0 position

; ----------	Register TWCR bits		------------------------
.equ	TWINT		= 7		; 0x80 - TWI Interrupt Flag
.equ	TWEA		= 6		; 0x40 - TWI Enable Acknowledge Bit
.equ	TWSTA		= 5		; 0x20 - TWI Start Condition Bit
.equ	TWSTO		= 4		; 0x10 - TWI Stop Condition Bit
.equ	TWWC		= 3		; 0x08 - TWI Write Collision Flag
.equ	TWEN		= 2		; 0x04 - TWI Enable Bit
.equ	TWIE		= 0		; 0x01 - TWI Interrupt Enable

; ----------	Register TWSR bits		------------------------
.equ	TWS_MASK	= 0xF8		;      - TWI Status (5 bits)
.equ	TWS0		= 3		;          TWS BIT0 position
.equ	TWPS_MASK	= 0x03		;      - TWI Prescaler (2 bits)
.equ	TWPS0		= 0		;          TWPS BIT0 position
; ::::  TWPS	:::: bitfield values
;			0x00		; 1
;			0x01		; 4
;			0x02		; 16
;			0x03		; 64

; ----------	Register TWAR bits		------------------------
.equ	TWA_MASK	= 0xFE		;      - TWI (Slave) Address register Bits (7 bits)
.equ	TWA0		= 1		;          TWA BIT0 position
.equ	TWGCE		= 0		; 0x01 - TWI General Call Recognition Enable Bit



; ====	BANDGAP MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register BGCCR bits		------------------------
.equ	BGD		= 7		; 0x80 - Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled.
.equ	BGCC_MASK	= 0x3F		;      - BG Calibration of PTAT Current Bits (6 bits)
.equ	BGCC0		= 0		;          BGCC BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Programming Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Programming Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 23
.equ	INT_VECTORS_SIZE	= 0x2E
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	BPINT		; Battery Protection Interrupt
;	2	INT0		; External Interrupt Request 0
;	3	INT1		; External Interrupt Request 1
;	4	INT2		; External Interrupt Request 2
;	5	INT3		; External Interrupt Request 3
;	6	PCINT0		; Pin Change Interrupt 0
;	7	PCINT1		; Pin Change Interrupt 1
;	8	WDT		; Watchdog Timeout Interrupt
;	9	WAKE_UP		; Wakeup timer overflow
;	10	TIM1_COMP	; Timer/Counter 1 Compare Match
;	11	TIM1_OVF	; Timer/Counter 1 Overflow
;	12	TIM0_COMPA	; Timer/Counter0 Compare A Match
;	13	TIM0_COMPB	; Timer/Counter0 Compare B Match
;	14	TIM0_OVF	; Timer/Counter0 Overflow
;	15	TWI_BUS_CD	; Two-Wire Bus Connect/Disconnect
;	16	TWI		; Two-Wire Serial Interface
;	17	VADC		; Voltage ADC Conversion Complete
;	18	CCADC_CONV	; Coulomb Counter ADC Conversion Complete
;	19	CCADC_REG_CUR	; Coloumb Counter ADC Regular Current
;	20	CCADC_ACC	; Coloumb Counter ADC Accumulator
;	21	EE_READY	; EEPROM Ready
;	22	SPM_READY	; Store Program Memory Ready



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega406.inc"
;#	
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<OCDEN) \
;#				  & ~(1 <<JTAGEN)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	BOOTSZ		= 0x10	; Boot Flash size=1024 words Boot address=$4C00
;#	.set	SUT_CKSEL	= 0x05	; Start-up time: 14 CK + 62.5 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	BLB0		= 0x0C	; No lock on SPM and LPM in Application Section
;#	.set	BLB1		= 0x30	; No lock on SPM and LPM in Boot Section
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB) \
;#				  &  (~BLB0_MASK | BLB0) \
;#				  &  (~BLB1_MASK | BLB1)
;#	.message "===================="
;#	.message "-----  Fuses  ------"
;#	.message "HIGH            ", FUSES_HIGH
;#	.message "LOW             ", FUSES_LOW
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		reti			; BPINT		 - Battery Protection Interrupt
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt 0
;#		reti			; PCINT1	 - Pin Change Interrupt 1
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		reti			; WAKE_UP	 - Wakeup timer overflow
;#		reti			; TIM1_COMP	 - Timer/Counter 1 Compare Match
;#		reti			; TIM1_OVF	 - Timer/Counter 1 Overflow
;#		reti			; TIM0_COMPA	 - Timer/Counter0 Compare A Match
;#		reti			; TIM0_COMPB	 - Timer/Counter0 Compare B Match
;#		reti			; TIM0_OVF	 - Timer/Counter0 Overflow
;#		reti			; TWI_BUS_CD	 - Two-Wire Bus Connect/Disconnect
;#		reti			; TWI		 - Two-Wire Serial Interface
;#		reti			; VADC		 - Voltage ADC Conversion Complete
;#		reti			; CCADC_CONV	 - Coulomb Counter ADC Conversion Complete
;#		reti			; CCADC_REG_CUR	 - Coloumb Counter ADC Regular Current
;#		reti			; CCADC_ACC	 - Coloumb Counter ADC Accumulator
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM_READY	 - Store Program Memory Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA406_INC_ */

; ************************ END OF FILE *********************************

