;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega16HVBrevB
;* Title             : Register/Mask/Bit Definitions for the ATmega16HVBrevB
;* File Name         : ATmega16HVBrevB.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-01 14:52:55 UTC
;
;***********************************************************************

#ifndef _ATMEGA16HVBREVB_INC_
#define _ATMEGA16HVBREVB_INC_

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
.device	ATmega16HVBrevB
.equ	JTAGID		= 0x940D
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
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
.equ	ADDR_IRAM_END			= 0x04FF
.equ	ADDR_IRAM_SIZE			= 0x0400

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
; ----------	Register LOW bits		------------------------
.equ	WDTON		= 7		; 0x80 - Watch-dog Timer always on
.equ	EESAVE		= 6		; 0x40 - Preserve EEPROM through the Chip Erase cycle
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	SUT_MASK	= 0x1C		;      - Select start-up time (3 bits)
.equ	SUT0		= 2		;          SUT BIT0 position
.equ	OSCSEL_MASK	= 0x03		;      - Oscillator select (2 bits)
.equ	OSCSEL0		= 0		;          OSCSEL BIT0 position
; ::::  SUT	:::: bitfield values
;			0x00		; Start-up time 14 CK + 4 ms
;			0x04		; Start-up time 14 CK + 8 ms
;			0x08		; Start-up time 14 CK + 16 ms
;			0x0C		; Start-up time 14 CK + 32 ms
;			0x10		; Start-up time 14 CK + 64 ms
;			0x14		; Start-up time 14 CK + 128 ms
;			0x18		; Start-up time 14 CK + 256 ms
;			0x1C		; Start-up time 14 CK + 512 ms
; ::::  OSCSEL	:::: bitfield values
;			0x01		; Default

; ----------	Register HIGH bits		------------------------
.equ	DUVRDINIT	= 4		; 0x10 - DUVR mode on
.equ	DWEN		= 3		; 0x08 - Debug Wire enable
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=256 words Boot address=$1F00
;			0x04		; Boot Flash size=512 words Boot address=$1E00
;			0x02		; Boot Flash size=1024 words Boot address=$1C00
;			0x00		; Boot Flash size=2048 words Boot address=$1800




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
.equ	CBCR		= 0xF1		; [MEMORY MAPPED] Cell Balancing Control Register
.equ	FCSR		= 0xF0		; [MEMORY MAPPED] FET Control and Status Register
.equ	CADRDC		= 0xEA		; [MEMORY MAPPED] CC-ADC Regular Discharge Current
.equ	CADRCC		= 0xE9		; [MEMORY MAPPED] CC-ADC Regular Charge Current
.equ	CADCSRC		= 0xE8		; [MEMORY MAPPED] CC-ADC Control and Status Register C
.equ	CADCSRB		= 0xE7		; [MEMORY MAPPED] CC-ADC Control and Status Register B
.equ	CADCSRA		= 0xE6		; [MEMORY MAPPED] CC-ADC Control and Status Register A
.equ	CADIC		= 0xE4		; [MEMORY MAPPED] CC-ADC Instantaneous Current
.equ	CADAC3		= 0xE3		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC2		= 0xE2		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC1		= 0xE1		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CADAC0		= 0xE0		; [MEMORY MAPPED] ADC Accumulate Current
.equ	CHGDCSR		= 0xD4		; [MEMORY MAPPED] Charger Detect Control and Status Register
.equ	BGCSR		= 0xD2		; [MEMORY MAPPED] Bandgap Control and Status Register
.equ	BGCRR		= 0xD1		; [MEMORY MAPPED] Bandgap Calibration of Resistor Ladder
.equ	BGCCR		= 0xD0		; [MEMORY MAPPED] Bandgap Calibration Register
.equ	ROCR		= 0xC8		; [MEMORY MAPPED] Regulator Operating Condition Register
.equ	TWBCSR		= 0xBE		; [MEMORY MAPPED] TWI Bus Control and Status Register
.equ	TWAMR		= 0xBD		; [MEMORY MAPPED] TWI (Slave) Address Mask Register
.equ	TWCR		= 0xBC		; [MEMORY MAPPED] TWI Control Register
.equ	TWDR		= 0xBB		; [MEMORY MAPPED] TWI Data register
.equ	TWAR		= 0xBA		; [MEMORY MAPPED] TWI (Slave) Address register
.equ	TWSR		= 0xB9		; [MEMORY MAPPED] TWI Status Register
.equ	TWBR		= 0xB8		; [MEMORY MAPPED] TWI Bit Rate register
.equ	OCR1B		= 0x89		; [MEMORY MAPPED] Output Compare Register B
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Output Compare Register 1A
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer Counter 1 Bytes
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter 1 Control Register A
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register
.equ	VADMUX		= 0x7C		; [MEMORY MAPPED] The VADC multiplexer Selection Register
.equ	VADCSR		= 0x7A		; [MEMORY MAPPED] The VADC Control and Status register
.equ	VADC		= 0x78		; [MEMORY MAPPED] VADC Data Register Bytes
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Enable Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Enable Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	FOSCCAL		= 0x66		; [MEMORY MAPPED] Fast Oscillator Calibration Value
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register 0
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose IO Register 2
.equ	GPIOR1		= 0x2A		; General Purpose IO Register 1
.equ	OCR0B		= 0x29		; Output Compare Register B
.equ	OCR0A		= 0x28		; Output Compare Register 0A
.equ	TCNT0		= 0x26		; Timer Counter 0 Bytes
.equ	TCCR0B		= 0x25		; Timer/Counter0 Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter 0 Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Read/Write Access
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	OSICSR		= 0x17		; Oscillator Sampling Interface Control and Status Register
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter Interrupt Flag register
.equ	PORTC		= 0x08		; Port C Data Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins


; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register VADMUX bits		------------------------
.equ	VADMUX_MASK	= 0x0F		;      - Analog Channel and Gain Selection Bits (4 bits)
.equ	VADMUX0		= 0		;          VADMUX BIT0 position

; ----------	Register VADC bits		------------------------
.equ	VADC_MASK	= 0x0FFF	;      - VADC Data bits (12 bits)
.equ	VADC0		= 0		;          VADC BIT0 position

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

; ----------	Register SPDR bits		------------------------
.equ	SPDR_MASK	= 0xFF		;      - SPI Data bits (8 bits)
.equ	SPDR0		= 0		;          SPDR BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEAR bits		------------------------
.equ	EEAR_MASK	= 0x03FF	;      - EEPROM Address bits (10 bits)
.equ	EEAR0		= 0		;          EEAR BIT0 position

; ----------	Register EEDR bits		------------------------
.equ	EEDR_MASK	= 0xFF		;      - EEPROM Data bits (8 bits)
.equ	EEDR0		= 0		;          EEDR BIT0 position

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

; ----------	Register CADCSRC bits		------------------------
.equ	CADVSE		= 0		; 0x01 - CC-ADC Voltage Scaling Enable

; ----------	Register CADIC bits		------------------------
.equ	CADIC_MASK	= 0xFFFF	;      - CC-ADC Instantaneous Current (16 bits)
.equ	CADIC0		= 0		;          CADIC BIT0 position

; ----------	Register CADAC3 bits		------------------------
.equ	CADAC3_CADAC_MASK= 0xFF		;      - ADC accumulate current bits (8 bits)
.equ	CADAC3_CADAC0	= 0		;          CADAC3_CADAC BIT0 position

; ----------	Register CADAC2 bits		------------------------
.equ	CADAC2_CADAC_MASK= 0xFF		;      - ADC accumulate current bits (8 bits)
.equ	CADAC2_CADAC0	= 0		;          CADAC2_CADAC BIT0 position

; ----------	Register CADAC1 bits		------------------------
.equ	CADAC1_CADAC_MASK= 0xFC		;      - ADC accumulate current bits (6 bits)
.equ	CADAC1_CADAC0	= 2		;          CADAC1_CADAC BIT0 position
.equ	CADAC1_CADAC0_MASK= 0x03		;      - ADC accumulate current bits (2 bits)
.equ	CADAC1_CADAC00	= 0		;          CADAC1_CADAC0 BIT0 position

; ----------	Register CADAC0 bits		------------------------
.equ	CADAC0_CADAC0_MASK= 0xFF		;      - ADC accumulate current bits (8 bits)
.equ	CADAC0_CADAC00	= 0		;          CADAC0_CADAC0 BIT0 position

; ----------	Register CADRCC bits		------------------------
.equ	CADRCC_MASK	= 0xFF		;      - CC-ADC Regular Charge Current (8 bits)
.equ	CADRCC0		= 0		;          CADRCC BIT0 position

; ----------	Register CADRDC bits		------------------------
.equ	CADRDC_MASK	= 0xFF		;      - CC-ADC Regular Discharge Current (8 bits)
.equ	CADRDC0		= 0		;          CADRDC BIT0 position



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

; ----------	Register TWBR bits		------------------------
.equ	TWBR_MASK	= 0xFF		;      - TWI Bit Rate bits (8 bits)
.equ	TWBR0		= 0		;          TWBR BIT0 position

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

; ----------	Register TWDR bits		------------------------
.equ	TWD_MASK	= 0xFF		;      - TWI Data Bits (8 bits)
.equ	TWD0		= 0		;          TWD BIT0 position

; ----------	Register TWAR bits		------------------------
.equ	TWA_MASK	= 0xFE		;      - TWI (Slave) Address register Bits (7 bits)
.equ	TWA0		= 1		;          TWA BIT0 position
.equ	TWGCE		= 0		; 0x01 - TWI General Call Recognition Enable Bit



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
.equ	INT_MASK	= 0x0F		;      - External Interrupt Request 3 Enable (4 bits)
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

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0xFF		;      - Pin Change Enable Mask (8 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0x0F		;      - Pin Change Enable Mask (4 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TCCR1B bits		------------------------
.equ	CS_MASK		= 0x07		;      - Clock Select1 bis (3 bits)
.equ	CS0		= 0		;          CS BIT0 position
; ::::  CS	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/64
;			0x04		; Running, CLK/256
;			0x05		; Running, CLK/1024
;			0x06		; Running, ExtClk Tn Falling Edge
;			0x07		; Running, ExtClk Tn Rising Edge

; ----------	Register TCCR1A bits		------------------------
.equ	TCW1		= 7		; 0x80 - Timer/Counter Width
.equ	ICEN1		= 6		; 0x40 - Input Capture Mode Enable
.equ	ICNC1		= 5		; 0x20 - Input Capture Noise Canceler
.equ	ICES1		= 4		; 0x10 - Input Capture Edge Select
.equ	ICS1		= 3		; 0x08 - Input Capture Select
.equ	WGM10		= 0		; 0x01 - Waveform Generation Mode

; ----------	Register TCNT1 bits		------------------------
.equ	TCNT1_MASK	= 0xFFFF	;      - Timer Counter 1 bits (16 bits)
.equ	TCNT10		= 0		;          TCNT1 BIT0 position

; ----------	Register OCR1A bits		------------------------
.equ	OCR1A_MASK	= 0xFF		;      - Output Compare 1 A bits (8 bits)
.equ	OCR1A0		= 0		;          OCR1A BIT0 position

; ----------	Register OCR1B bits		------------------------
.equ	OCR1B_MASK	= 0xFF		;      - Output Compare 1 B bits (8 bits)
.equ	OCR1B0		= 0		;          OCR1B BIT0 position

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

; ----------	Register TCCR0B bits		------------------------
.equ	CS02		= 2		; 0x04 - Clock Select0 bit 2
.equ	CS01		= 1		; 0x02 - Clock Select0 bit 1
.equ	CS00		= 0		; 0x01 - Clock Select0 bit 0
; ::::  CS00	>>>> This is a part of CLK_SEL_3BIT_EXT enum (see complete values list below)

; ----------	Register TCCR0A bits		------------------------
.equ	TCW0		= 7		; 0x80 - Timer/Counter Width
.equ	ICEN0		= 6		; 0x40 - Input Capture Mode Enable
.equ	ICNC0		= 5		; 0x20 - Input Capture Noise Canceler
.equ	ICES0		= 4		; 0x10 - Input Capture Edge Select
.equ	ICS0		= 3		; 0x08 - Input Capture Select
.equ	WGM00		= 0		; 0x01 - Waveform Generation Mode

; ----------	Register TCNT0 bits		------------------------
.equ	TCNT0_MASK	= 0xFFFF	;      - Timer Counter 0 bits (16 bits)
.equ	TCNT00		= 0		;          TCNT0 BIT0 position

; ----------	Register OCR0A bits		------------------------
.equ	OCR0A_MASK	= 0xFF		;      - Output Compare 0 A bits (8 bits)
.equ	OCR0A0		= 0		;          OCR0A BIT0 position

; ----------	Register OCR0B bits		------------------------
.equ	OCR0B_MASK	= 0xFF		;      - Output Compare 0 B bits (8 bits)
.equ	OCR0B0		= 0		;          OCR0B BIT0 position

; ----------	Register TIMSK0 bits		------------------------
.equ	ICIE0		= 3		; 0x08 - Timer/Counter n Input Capture Interrupt Enable
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	ICF0		= 3		; 0x08 - Timer/Counter 0 Input Capture Flag
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset



; ====	CELL_BALANCING MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register CBCR bits		------------------------
.equ	CBE_MASK	= 0x0F		;      - Cell Balancing Enables (4 bits)
.equ	CBE0		= 0		;          CBE BIT0 position



; ====	BATTERY_PROTECTION MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register BPPLR bits		------------------------
.equ	BPPLE		= 1		; 0x02 - Battery Protection Parameter Lock Enable
.equ	BPPL		= 0		; 0x01 - Battery Protection Parameter Lock

; ----------	Register BPCR bits		------------------------
.equ	EPID		= 5		; 0x20 - External Protection Input Disable
.equ	SCD		= 4		; 0x10 - Short Circuit Protection Disabled
.equ	DOCD		= 3		; 0x08 - Discharge Over-current Protection Disabled
.equ	COCD		= 2		; 0x04 - Charge Over-current Protection Disabled
.equ	DHCD		= 1		; 0x02 - Discharge High-current Protection Disable
.equ	CHCD		= 0		; 0x01 - Charge High-current Protection Disable

; ----------	Register BPHCTR bits		------------------------
.equ	HCPT_MASK	= 0x3F		;      - Battery Protection Short-current Timing bits (6 bits)
.equ	HCPT0		= 0		;          HCPT BIT0 position

; ----------	Register BPOCTR bits		------------------------
.equ	OCPT_MASK	= 0x3F		;      - Battery Protection Over-current Timing bits (6 bits)
.equ	OCPT0		= 0		;          OCPT BIT0 position

; ----------	Register BPSCTR bits		------------------------
.equ	SCPT_MASK	= 0x7F		;      - Battery Protection Short-current Timing bits (7 bits)
.equ	SCPT0		= 0		;          SCPT BIT0 position

; ----------	Register BPCHCD bits		------------------------
.equ	CHCDL_MASK	= 0xFF		;      - Battery Protection Charge-High-current Detection Level bits (8 bits)
.equ	CHCDL0		= 0		;          CHCDL BIT0 position

; ----------	Register BPDHCD bits		------------------------
.equ	DHCDL_MASK	= 0xFF		;      - Battery Protection Discharge-High-current Detection Level bits (8 bits)
.equ	DHCDL0		= 0		;          DHCDL BIT0 position

; ----------	Register BPCOCD bits		------------------------
.equ	COCDL_MASK	= 0xFF		;      - Battery Protection Charge-Over-current Detection Level bits (8 bits)
.equ	COCDL0		= 0		;          COCDL BIT0 position

; ----------	Register BPDOCD bits		------------------------
.equ	DOCDL_MASK	= 0xFF		;      - Battery Protection Discharge-Over-current Detection Level bits (8 bits)
.equ	DOCDL0		= 0		;          DOCDL BIT0 position

; ----------	Register BPSCD bits		------------------------
.equ	SCDL_MASK	= 0xFF		;      - Battery Protection Short-Circuit Detection Level Register bits (8 bits)
.equ	SCDL0		= 0		;          SCDL BIT0 position

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



; ====	CHARGER_DETECT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register CHGDCSR bits		------------------------
.equ	BATTPVL		= 4		; 0x10 - BATT Pin Voltage Level
.equ	CHGDISC_MASK	= 0x0C		;      - Charger Detect Interrupt Sense Control (2 bits)
.equ	CHGDISC0	= 2		;          CHGDISC BIT0 position
.equ	CHGDIF		= 1		; 0x02 - Charger Detect Interrupt Flag
.equ	CHGDIE		= 0		; 0x01 - Charger Detect Interrupt Enable



; ====	VOLTAGE_REGULATOR MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register ROCR bits		------------------------
.equ	ROCS		= 7		; 0x80 - ROC Status
.equ	ROCD		= 4		; 0x10 - ROC Disable
.equ	ROCWIF		= 1		; 0x02 - ROC Warning Interrupt Flag
.equ	ROCWIE		= 0		; 0x01 - ROC Warning Interrupt Enable



; ====	BANDGAP MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register BGCSR bits		------------------------
.equ	BGD		= 5		; 0x20 - Bandgap Disable
.equ	BGSCDE		= 4		; 0x10 - Bandgap Short Circuit Detection Enabled
.equ	BGSCDIF		= 1		; 0x02 - Bandgap Short Circuit Detection Interrupt Flag
.equ	BGSCDIE		= 0		; 0x01 - Bandgap Short Circuit Detection Interrupt Enable

; ----------	Register BGCRR bits		------------------------
.equ	BGCR_MASK	= 0xFF		;      - Bandgap Calibration of Resistor Ladder Bits (8 bits)
.equ	BGCR0		= 0		;          BGCR BIT0 position

; ----------	Register BGCCR bits		------------------------
.equ	BGCC_MASK	= 0x3F		;      - BG Calibration of PTAT Current Bits (6 bits)
.equ	BGCC0		= 0		;          BGCC BIT0 position



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
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	OCDRF		= 4		; 0x10 - OCD Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BODRF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register FOSCCAL bits		------------------------
.equ	FCAL_MASK	= 0xFF		;      - Fast Oscillator Calibration Value (8 bits)
.equ	FCAL0		= 0		;          FCAL BIT0 position

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
;			0x02		; ADC
;			0x04		; Reserved
;			0x06		; Power Save
;			0x08		; Power Off
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR2_MASK	= 0xFF		;      - General Purpose IO bits (8 bits)
.equ	GPIOR20		= 0		;          GPIOR2 BIT0 position

; ----------	Register GPIOR1 bits		------------------------
.equ	GPIOR1_MASK	= 0xFF		;      - General Purpose IO bits (8 bits)
.equ	GPIOR10		= 0		;          GPIOR1 BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR0_MASK	= 0xFF		;      - General Purpose IO bits (8 bits)
.equ	GPIOR00		= 0		;          GPIOR0 BIT0 position

; ----------	Register DIDR0 bits		------------------------
.equ	PA1DID		= 1		; 0x02 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.
.equ	PA0DID		= 0		; 0x01 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.

; ----------	Register PRR0 bits		------------------------
.equ	PRTWI		= 6		; 0x40 - Power Reduction TWI
.equ	PRVRM		= 5		; 0x20 - Power Reduction Voltage Regulator Monitor
.equ	PRSPI		= 3		; 0x08 - Power reduction SPI
.equ	PRTIM1		= 2		; 0x04 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 1		; 0x02 - Power Reduction Timer/Counter0
.equ	PRVADC		= 0		; 0x01 - Power Reduction V-ADC

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x03		;      - Clock Prescaler Select Bits (2 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position



; ====	BOOT_LOAD MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read-While-Write Section Busy
.equ	SIGRD		= 5		; 0x20 - Signature Row Read
.equ	RWWSRE		= 4		; 0x10 - Read-While-Write Section Read Enable
.equ	LBSET		= 3		; 0x08 - Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable




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
; ::::  CLK_SEL_3BIT_EXT	:::: values
;			0b000		; No Clock Source (Stopped)
;			0b001		; Running, No Prescaling
;			0b010		; Running, CLK/8
;			0b011		; Running, CLK/64
;			0b100		; Running, CLK/256
;			0b101		; Running, CLK/1024
;			0b110		; Running, ExtClk Tn Falling Edge
;			0b111		; Running, ExtClk Tn Rising Edge



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 29
.equ	INT_VECTORS_SIZE	= 0x3A
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	BPINT		; Battery Protection Interrupt
;	2	VREGMON		; Voltage regulator monitor interrupt
;	3	INT0		; External Interrupt Request 0
;	4	INT1		; External Interrupt Request 1
;	5	INT2		; External Interrupt Request 2
;	6	INT3		; External Interrupt Request 3
;	7	PCINT0		; Pin Change Interrupt 0
;	8	PCINT1		; Pin Change Interrupt 1
;	9	WDT		; Watchdog Timeout Interrupt
;	10	BGSCD		; Bandgap Buffer Short Circuit Detected
;	11	CHDET		; Charger Detect
;	12	TIMER1_IC	; Timer 1 Input capture
;	13	TIMER1_COMPA	; Timer 1 Compare Match A
;	14	TIMER1_COMPB	; Timer 1 Compare Match B
;	15	TIMER1_OVF	; Timer 1 overflow
;	16	TIMER0_IC	; Timer 0 Input Capture
;	17	TIMER0_COMPA	; Timer 0 Compare Match A
;	18	TIMER0_COMPB	; Timer 0 Compare Match B
;	19	TIMER0_OVF	; Timer 0 Overflow
;	20	TWIBUSCD	; Two-Wire Bus Connect/Disconnect
;	21	TWI		; Two-Wire Serial Interface
;	22	SPI_STC		; SPI Serial transfer complete
;	23	VADC		; Voltage ADC Conversion Complete
;	24	CCADC_CONV	; Coulomb Counter ADC Conversion Complete
;	25	CCADC_REG_CUR	; Coloumb Counter ADC Regular Current
;	26	CCADC_ACC	; Coloumb Counter ADC Accumulator
;	27	EE_READY	; EEPROM Ready
;	28	SPM		; SPM Ready



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega16HVBrevB.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT		= 0x14	; Start-up time 14 CK + 128 ms
;#	.set	OSCSEL		= 0x01	; Default
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(1 <<SPIEN) \
;#				  &  (~SUT_MASK | SUT) \
;#				  &  (~OSCSEL_MASK | OSCSEL)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=1024 words Boot address=$1C00
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(1 <<DUVRDINIT) \
;#				  & ~(0 <<DWEN) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
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
;#	.message "LOW		", FUSES_LOW
;#	.message "HIGH		", FUSES_HIGH
;#	.message "===== Lockbits ======"
;#	.message " LOCKBIT	", LOCKBITS_LOCKBIT
;#	.message "====================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		reti			; BPINT		 - Battery Protection Interrupt
;#		reti			; VREGMON	 - Voltage regulator monitor interrupt
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt 0
;#		reti			; PCINT1	 - Pin Change Interrupt 1
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		reti			; BGSCD		 - Bandgap Buffer Short Circuit Detected
;#		reti			; CHDET		 - Charger Detect
;#		reti			; TIMER1_IC	 - Timer 1 Input capture
;#		reti			; TIMER1_COMPA	 - Timer 1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer 1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer 1 overflow
;#		reti			; TIMER0_IC	 - Timer 0 Input Capture
;#		reti			; TIMER0_COMPA	 - Timer 0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer 0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer 0 Overflow
;#		reti			; TWIBUSCD	 - Two-Wire Bus Connect/Disconnect
;#		reti			; TWI		 - Two-Wire Serial Interface
;#		reti			; SPI_STC	 - SPI Serial transfer complete
;#		reti			; VADC		 - Voltage ADC Conversion Complete
;#		reti			; CCADC_CONV	 - Coulomb Counter ADC Conversion Complete
;#		reti			; CCADC_REG_CUR	 - Coloumb Counter ADC Regular Current
;#		reti			; CCADC_ACC	 - Coloumb Counter ADC Accumulator
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM		 - SPM Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA16HVBREVB_INC_ */

; ************************ END OF FILE *********************************

