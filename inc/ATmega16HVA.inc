;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega16HVA
;* Title             : Register/Mask/Bit Definitions for the ATmega16HVA
;* File Name         : ATmega16HVA.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-05 09:17:56 UTC
;
;***********************************************************************

#ifndef _ATMEGA16HVA_INC_
#define _ATMEGA16HVA_INC_

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
.device	ATmega16HVA
.equ	JTAGID		= 0x940C
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x0c


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
.equ	ADDR_FUSES_END			= 0x0000
.equ	ADDR_FUSES_SIZE			= 0x0001

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
.equ	ADDR_EEPROM_END			= 0x00FF
.equ	ADDR_EEPROM_SIZE		= 0x0100




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LOW bits		------------------------
.equ	WDTON		= 7		; 0x80 - Watch-dog Timer always on
.equ	EESAVE		= 6		; 0x40 - Preserve EEPROM through the Chip Erase cycle
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	DWEN		= 4		; 0x10 - Debug Wire enable
.equ	SELFPRGEN	= 3		; 0x08 - Self Programming enable
.equ	SUT_MASK	= 0x07		;      - Select start-up time (3 bits)
.equ	SUT0		= 0		;          SUT BIT0 position
; ::::  SUT	:::: bitfield values
;			0x00		; Start-up time 6 CK/14 CK + 4 ms
;			0x01		; Start-up time 6 CK/14 CK + 8 ms
;			0x02		; Start-up time 6 CK/14 CK + 16 ms
;			0x03		; Start-up time 6 CK/14 CK + 32 ms
;			0x04		; Start-up time 6 CK/14 CK + 64 ms
;			0x05		; Start-up time 6 CK/14 CK + 128 ms
;			0x06		; Start-up time 6 CK/14 CK + 256 ms
;			0x07		; Start-up time 6 CK/14 CK + 512 ms




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
.equ	BPPLR		= 0xFE		; [MEMORY MAPPED] Battery Protection Parameter Lock Register
.equ	BPCR		= 0xFD		; [MEMORY MAPPED] Battery Protection Control Register
.equ	BPHCTR		= 0xFC		; [MEMORY MAPPED] Battery Protection Short-current Timing Register
.equ	BPOCTR		= 0xFB		; [MEMORY MAPPED] Battery Protection Over-current Timing Register
.equ	BPSCTR		= 0xFA		; [MEMORY MAPPED] Battery Protection Short-current Timing Register
.equ	BPCHCD		= 0xF9		; [MEMORY MAPPED] Battery Protection Charge-High-current Detection Level Register
.equ	BPDHCD		= 0xF8		; [MEMORY MAPPED] Battery Protection Discharge-High-current Detection Level Register
.equ	BPCOCD		= 0xF7		; [MEMORY MAPPED] Battery Protection Charge-Over-current Detection Level Register
.equ	BPDOCD		= 0xF6		; [MEMORY MAPPED] Battery Protection Discharge-Over-current Detection Level Register
.equ	BPSCD		= 0xF5		; [MEMORY MAPPED] Battery Protection Short-Circuit Detection Level Register
.equ	BPIFR		= 0xF3		; [MEMORY MAPPED] Battery Protection Interrupt Flag Register
.equ	BPIMSK		= 0xF2		; [MEMORY MAPPED] Battery Protection Interrupt Mask Register
.equ	FCSR		= 0xF0		; [MEMORY MAPPED] FET Control and Status Register
.equ	CADIC		= 0xE8		; [MEMORY MAPPED] [___2 addrs___] CC-ADC Instantaneous Current
.equ	CADRC		= 0xE6		; [MEMORY MAPPED] CC-ADC Regular Current
.equ	CADCSRB		= 0xE5		; [MEMORY MAPPED] CC-ADC Control and Status Register B
.equ	CADCSRA		= 0xE4		; [MEMORY MAPPED] CC-ADC Control and Status Register A
.equ	CADAC3		= 0xE3		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC2		= 0xE2		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC1		= 0xE1		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC0		= 0xE0		; [MEMORY MAPPED] ADC Accumulate Current
.equ	BGCRR		= 0xD1		; [MEMORY MAPPED] Bandgap Calibration of Resistor Ladder
.equ	BGCCR		= 0xD0		; [MEMORY MAPPED] Bandgap Calibration Register
.equ	ROCR		= 0xC8		; [MEMORY MAPPED] Regulator Operating Condition Register
.equ	OCR1B		= 0x89		; [MEMORY MAPPED] Output Compare Register B
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Output Compare Register 1A
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] [___2 addrs___] Timer Counter 1  Bytes
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter 1 Control Register A
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register
.equ	VADMUX		= 0x7C		; [MEMORY MAPPED] The VADC multiplexer Selection Register
.equ	VADCSR		= 0x7A		; [MEMORY MAPPED] The VADC Control and Status register
.equ	VADC		= 0x78		; [MEMORY MAPPED] [___2 addrs___] VADC Data Register  Bytes
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	FOSCCAL		= 0x66		; [MEMORY MAPPED] Fast Oscillator Calibration Value
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register 0
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0B		= 0x29		; Output compare Register B
.equ	OCR0A		= 0x28		; Output compare Register A
.equ	TCNT0		= 0x26		; [___2 addrs___] Timer Counter 0  Bytes
.equ	TCCR0B		= 0x25		; Timer/Counter0 Control Register
.equ	TCCR0A		= 0x24		; Timer/Counter0 Control Register
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Read/Write Access
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	OSICSR		= 0x17		; Oscillator Sampling Interface Control and Status Register
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter Interrupt Flag register
.equ	PORTC		= 0x08		; Port C Data Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Data Register, Port B
.equ	DDRB		= 0x04		; Data Direction Register, Port B
.equ	PINB		= 0x03		; Input Pins, Port B
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
;    Timer Counter 0  Bytes
.equ	TCNT0H		= 0x27
.equ	TCNT0L		= 0x26


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



; ====	BANDGAP MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register BGCRR bits		------------------------
.equ	BGCR_MASK	= 0xFF		;      - Bandgap calibration bits (8 bits)
.equ	BGCR0		= 0		;          BGCR BIT0 position

; ----------	Register BGCCR bits		------------------------
.equ	BGD		= 7		; 0x80 - Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled.
.equ	BGCC_MASK	= 0x3F		;      - BG Calibration of PTAT Current Bits (6 bits)
.equ	BGCC0		= 0		;          BGCC BIT0 position



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control 2 Bits (2 bits)
.equ	ISC20		= 4		;          ISC2 BIT0 position
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control 0 Bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
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
.equ	INT_MASK	= 0x07		;      - External Interrupt Request 2 Enable (3 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x07		;      - External Interrupt Flags (3 bits)
.equ	INTF0		= 0		;          INTF BIT0 position



; ====	FET MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FCSR bits		------------------------
.equ	DUVRD		= 3		; 0x08 - Deep Under-Voltage Recovery Disable
.equ	CPS		= 2		; 0x04 - Current Protection Status
.equ	DFE		= 1		; 0x02 - Discharge FET Enable
.equ	CFE		= 0		; 0x01 - Charge FET Enable



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

; ----------	Register MCUCR bits		------------------------
.equ	CKOE		= 5		; 0x20 - Clock Output Enable
.equ	PUD		= 4		; 0x10 - Pull-up disable

; ----------	Register MCUSR bits		------------------------
.equ	OCDRF		= 4		; 0x10 - OCD Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BODRF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSICSR bits		------------------------
.equ	OSISEL0		= 4		; 0x10 - Oscillator Sampling Interface Select 0
.equ	OSIST		= 1		; 0x02 - Oscillator Sampling Interface Status
.equ	OSIEN		= 0		; 0x01 - Oscillator Sampling Interface Enable

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Reserved
;			0x06		; Power Save
;			0x08		; Power Off
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved

; ----------	Register DIDR0 bits		------------------------
.equ	PA1DID		= 1		; 0x02 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.
.equ	PA0DID		= 0		; 0x01 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.

; ----------	Register PRR0 bits		------------------------
.equ	PRVRM		= 5		; 0x20 - Power Reduction Voltage Regulator Monitor
.equ	PRSPI		= 3		; 0x08 - Power reduction SPI
.equ	PRTIM1		= 2		; 0x04 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 1		; 0x02 - Power Reduction Timer/Counter0
.equ	PRVADC		= 0		; 0x01 - Power Reduction V-ADC

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x03		;      - Clock Prescaler Select Bits (2 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position



; ====	BATTERY_PROTECTION MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register BPPLR bits		------------------------
.equ	BPPLE		= 1		; 0x02 - Battery Protection Parameter Lock Enable
.equ	BPPL		= 0		; 0x01 - Battery Protection Parameter Lock

; ----------	Register BPCR bits		------------------------
.equ	SCD		= 4		; 0x10 - Short Circuit Protection Disabled
.equ	DOCD		= 3		; 0x08 - Discharge Over-current Protection Disabled
.equ	COCD		= 2		; 0x04 - Charge Over-current Protection Disabled
.equ	DHCD		= 1		; 0x02 - Discharge High-current Protection Disable
.equ	CHCD		= 0		; 0x01 - Charge High-current Protection Disable

; ----------	Register BPIFR bits		------------------------
.equ	SCIF		= 4		; 0x10 - Short-circuit Protection Activated Interrupt Flag
.equ	DOCIF		= 3		; 0x08 - Discharge Over-current Protection Activated Interrupt Flag
.equ	COCIF		= 2		; 0x04 - Charge Over-current Protection Activated Interrupt Flag
.equ	DHCIF		= 1		; 0x02 - Discharge High-current Protection Activated Interrupt
.equ	CHCIF		= 0		; 0x01 - Charge High-current Protection Activated Interrupt

; ----------	Register BPIMSK bits		------------------------
.equ	SCIE		= 4		; 0x10 - Short-circuit Protection Activated Interrupt Enable
.equ	DOCIE		= 3		; 0x08 - Discharge Over-current Protection Activated Interrupt Enable
.equ	COCIE		= 2		; 0x04 - Charge Over-current Protection Activated Interrupt Enable
.equ	DHCIE		= 1		; 0x02 - Discharger High-current Protection Activated Interrupt
.equ	CHCIE		= 0		; 0x01 - Charger High-current Protection Activated Interrupt



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



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1B bits		------------------------
.equ	CS_MASK		= 0x07		;      - Clock Select1 bis (3 bits)
.equ	CS0		= 0		;          CS BIT0 position

; ----------	Register TCCR1A bits		------------------------
.equ	TCW1		= 7		; 0x80 - Timer/Counter Width
.equ	ICEN1		= 6		; 0x40 - Input Capture Mode Enable
.equ	ICNC1		= 5		; 0x20 - Input Capture Noise Canceler
.equ	ICES1		= 4		; 0x10 - Input Capture Edge Select
.equ	ICS1		= 3		; 0x08 - Input Capture Select
.equ	WGM10		= 0		; 0x01 - Waveform Generation Mode

; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 3		; 0x08 - Timer/Counter n Input Capture Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output Compare B Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output Compare A Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 3		; 0x08 - Timer/Counter 1 Input Capture Flag
.equ	OCF1B		= 2		; 0x04 - Timer/Counter1 Output Compare Flag B
.equ	OCF1A		= 1		; 0x02 - Timer/Counter1 Output Compare Flag A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset

; ----------	Register TCCR0A bits		------------------------
.equ	TCW0		= 7		; 0x80 - Timer/Counter Width
.equ	ICEN0		= 6		; 0x40 - Input Capture Mode Enable
.equ	ICNC0		= 5		; 0x20 - Input Capture Noise Canceler
.equ	ICES0		= 4		; 0x10 - Input Capture Edge Select
.equ	ICS0		= 3		; 0x08 - Input Capture Select
.equ	WGM00		= 0		; 0x01 - Clock Select0 bit 0

; ----------	Register TCCR0B bits		------------------------
.equ	CS02		= 2		; 0x04 - Clock Select0 bit 2
.equ	CS01		= 1		; 0x02 - Clock Select0 bit 1
.equ	CS00		= 0		; 0x01 - Clock Select0 bit 0

; ----------	Register TIMSK0 bits		------------------------
.equ	ICIE0		= 3		; 0x08 - Timer/Counter n Input Capture Interrupt Enable
.equ	OCIE0B		= 2		; 0x04 - Output Compare Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Output Compare Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	ICF0		= 3		; 0x08 - Timer/Counter Interrupt Flag Register
.equ	OCF0B		= 2		; 0x04 - Output Compare Flag
.equ	OCF0A		= 1		; 0x02 - Output Compare Flag
.equ	TOV0		= 0		; 0x01 - Overflow Flag



; ====	COULOMB_COUNTER MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register CADCSRA bits		------------------------
.equ	CADEN		= 7		; 0x80 - When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled.
.equ	CADPOL		= 6		; 0x40 - 
.equ	CADUB		= 5		; 0x20 - CC_ADC Update Busy
.equ	CADAS_MASK	= 0x18		;      - CC_ADC Accumulate Current Select Bits (2 bits)
.equ	CADAS0		= 3		;          CADAS BIT0 position
.equ	CADSI_MASK	= 0x06		;      - The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. (2 bits)
.equ	CADSI0		= 1		;          CADSI BIT0 position
.equ	CADSE		= 0		; 0x01 - When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode.

; ----------	Register CADCSRB bits		------------------------
.equ	CADACIE		= 6		; 0x40 - 
.equ	CADRCIE		= 5		; 0x20 - Regular Current Interrupt Enable
.equ	CADICIE		= 4		; 0x10 - CAD Instantaneous Current Interrupt Enable
.equ	CADACIF		= 2		; 0x04 - CC-ADC Accumulate Current Interrupt Flag
.equ	CADRCIF		= 1		; 0x02 - CC-ADC Accumulate Current Interrupt Flag
.equ	CADICIF		= 0		; 0x01 - CC-ADC Instantaneous Current Interrupt Flag



; ====	VOLTAGE_REGULATOR MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register ROCR bits		------------------------
.equ	ROCS		= 7		; 0x80 - ROC Status
.equ	ROCWIF		= 1		; 0x02 - ROC Warning Interrupt Flag
.equ	ROCWIE		= 0		; 0x01 - ROC Warning Interrupt Enable




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
.equ	INT_VECTORS_NUM		= 21
.equ	INT_VECTORS_SIZE	= 0x2A
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	BPINT		; Battery Protection Interrupt
;	2	VREGMON		; Voltage regulator monitor interrupt
;	3	INT0		; External Interrupt Request 0
;	4	INT1		; External Interrupt Request 1
;	5	INT2		; External Interrupt Request 2
;	6	WDT		; Watchdog Timeout Interrupt
;	7	TIMER1_IC	; Timer 1 Input capture
;	8	TIMER1_COMPA	; Timer 1 Compare Match A
;	9	TIMER1_COMPB	; Timer 1 Compare Match B
;	10	TIMER1_OVF	; Timer 1 overflow
;	11	TIMER0_IC	; Timer 0 Input Capture
;	12	TIMER0_COMPA	; Timer 0 Compare Match A
;	13	TIMER0_COMPB	; Timer 0 Compare Match B
;	14	TIMER0_OVF	; Timer 0 Overflow
;	15	SPI_STC		; SPI Serial transfer complete
;	16	VADC		; Voltage ADC Conversion Complete
;	17	CCADC_CONV	; Coulomb Counter ADC Conversion Complete
;	18	CCADC_REG_CUR	; Coloumb Counter ADC Regular Current
;	19	CCADC_ACC	; Coloumb Counter ADC Accumulator
;	20	EE_READY	; EEPROM Ready



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega16HVA.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT		= 0x07	; Start-up time 6 CK/14 CK + 512 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(0 <<SELFPRGEN) \
;#				  &  (~SUT_MASK | SUT)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
;#	.message "===================="
;#	.message "-----  Fuses  ------"
;#	.message "LOW             ", FUSES_LOW
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		reti			; BPINT		 - Battery Protection Interrupt
;#		reti			; VREGMON	 - Voltage regulator monitor interrupt
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		reti			; TIMER1_IC	 - Timer 1 Input capture
;#		reti			; TIMER1_COMPA	 - Timer 1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer 1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer 1 overflow
;#		reti			; TIMER0_IC	 - Timer 0 Input Capture
;#		reti			; TIMER0_COMPA	 - Timer 0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer 0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer 0 Overflow
;#		reti			; SPI_STC	 - SPI Serial transfer complete
;#		reti			; VADC		 - Voltage ADC Conversion Complete
;#		reti			; CCADC_CONV	 - Coulomb Counter ADC Conversion Complete
;#		reti			; CCADC_REG_CUR	 - Coloumb Counter ADC Regular Current
;#		reti			; CCADC_ACC	 - Coloumb Counter ADC Accumulator
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA16HVA_INC_ */

; ************************ END OF FILE *********************************

