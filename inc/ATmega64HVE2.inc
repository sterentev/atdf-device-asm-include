;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmega64HVE2
;* Title             : Register/Mask/Bit Definitions for the ATmega64HVE2
;* File Name         : ATmega64HVE2.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-01 12:44:52 UTC
;
;***********************************************************************

#ifndef _ATMEGA64HVE2_INC_
#define _ATMEGA64HVE2_INC_

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
.device	ATmega64HVE2
.equ	JTAGID		= 0x9610
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x96
.equ	SIGNATURE2	= 0x10


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
.equ	ADDR_IRAM_END			= 0x10FF
.equ	ADDR_IRAM_SIZE			= 0x1000

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x03FF
.equ	ADDR_EEPROM_SIZE		= 0x0400




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
.equ	BODEN		= 4		; 0x10 - Brown-out detection enabled
.equ	CKDIV8		= 3		; 0x08 - Divide clock by 8
.equ	SUT_MASK	= 0x06		;      - Select start-up time (2 bits)
.equ	SUT0		= 1		;          SUT BIT0 position
.equ	OSCSEL0		= 0		; 0x01 - Oscillator select
; ::::  SUT	:::: bitfield values
;			0x00		; Start-up time 14 CK + 0 ms
;			0x02		; Start-up time 14 CK + 16 ms
;			0x04		; Start-up time 14 CK + 32 ms
;			0x06		; Start-up time 14 CK + 64 ms

; ----------	Register HIGH bits		------------------------
.equ	DWEN		= 3		; 0x08 - Debug Wire enable
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words Boot address=$7E00
;			0x04		; Boot Flash size=1024 words Boot address=$7C00
;			0x02		; Boot Flash size=2048 words Boot address=$7800
;			0x00		; Boot Flash size=4096 words Boot address=$7000




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
.equ	VADAC3		= 0xF6		; [MEMORY MAPPED] V-ADC Accumulated Conversion Result
.equ	VADAC2		= 0xF5		; [MEMORY MAPPED] V-ADC Accumulated Conversion Result
.equ	VADAC1		= 0xF4		; [MEMORY MAPPED] V-ADC Accumulated Conversion Result
.equ	VADAC0		= 0xF3		; [MEMORY MAPPED] V-ADC Accumulated Conversion Result
.equ	VADIC		= 0xF1		; [MEMORY MAPPED] V-ADC Instantaneous Conversion Result
.equ	CADAC3		= 0xF0		; [MEMORY MAPPED] C-ADC Accumulated Conversion Result
.equ	CADAC2		= 0xEF		; [MEMORY MAPPED] C-ADC Accumulated Conversion Result
.equ	CADAC1		= 0xEE		; [MEMORY MAPPED] C-ADC Accumulated Conversion Result
.equ	CADAC0		= 0xED		; [MEMORY MAPPED] C-ADC Accumulated Conversion Result
.equ	CADIC		= 0xEB		; [MEMORY MAPPED] C-ADC Instantaneous Conversion Result
.equ	CADRCL		= 0xE9		; [MEMORY MAPPED] CC-ADC Regulator Current Comparator Threshold Level
.equ	ADIMR		= 0xE8		; [MEMORY MAPPED] ADC Interrupt Mask Register
.equ	ADIFR		= 0xE7		; [MEMORY MAPPED] ADC Interrupt Flag Register
.equ	ADCRE		= 0xE6		; [MEMORY MAPPED] ADC Control Register E
.equ	ADCRD		= 0xE5		; [MEMORY MAPPED] ADC Control Register D
.equ	ADCRC		= 0xE4		; [MEMORY MAPPED] ADC Control Register B
.equ	ADCRB		= 0xE3		; [MEMORY MAPPED] ADC Control Register B
.equ	ADCRA		= 0xE2		; [MEMORY MAPPED] ADC Control Register A
.equ	ADSCSRB		= 0xE1		; [MEMORY MAPPED] ADC Synchronization Control and Status Register
.equ	ADSCSRA		= 0xE0		; [MEMORY MAPPED] ADC Synchronization Control and Status Register
.equ	PBOV		= 0xDC		; [MEMORY MAPPED] Port B Override
.equ	PLLCSR		= 0xD8		; [MEMORY MAPPED] PLL Control and Status Register
.equ	BGLR		= 0xD4		; [MEMORY MAPPED] Band Gap Lock Register
.equ	BGCRA		= 0xD3		; [MEMORY MAPPED] Band Gap Calibration Register A
.equ	BGCRB		= 0xD2		; [MEMORY MAPPED] Band Gap Calibration Register B
.equ	BGCSRA		= 0xD1		; [MEMORY MAPPED] Bandgap Control and Status Register A
.equ	LINDAT		= 0xCA		; [MEMORY MAPPED] LIN Data Register
.equ	LINSEL		= 0xC9		; [MEMORY MAPPED] LIN Data Buffer Selection Register
.equ	LINIDR		= 0xC8		; [MEMORY MAPPED] LIN Identifier Register
.equ	LINDLR		= 0xC7		; [MEMORY MAPPED] LIN Data Length Register
.equ	LINBRRH		= 0xC6		; [MEMORY MAPPED] LIN Baud Rate High Register
.equ	LINBRRL		= 0xC5		; [MEMORY MAPPED] LIN Baud Rate Low Register
.equ	LINBTR		= 0xC4		; [MEMORY MAPPED] LIN Bit Timing Register
.equ	LINERR		= 0xC3		; [MEMORY MAPPED] LIN Error Register
.equ	LINENIR		= 0xC2		; [MEMORY MAPPED] LIN Enable Interrupt Register
.equ	LINSIR		= 0xC1		; [MEMORY MAPPED] LIN Status and Interrupt Register
.equ	LINCR		= 0xC0		; [MEMORY MAPPED] LIN Control Register
.equ	OCR1B		= 0x89		; [MEMORY MAPPED] Output Compare Register B
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Output Compare Register 1A
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer Counter 1  Bytes
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter 1 Control Register A
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Enable Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Enable Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	SOSCCALB	= 0x67		; [MEMORY MAPPED] Oscillator Calibration Register B
.equ	SOSCCALA	= 0x66		; [MEMORY MAPPED] Slow Oscillator Calibration Register A
.equ	PRR0		= 0x64		; [MEMORY MAPPED] Power Reduction Register 0
.equ	WDTCLR		= 0x63		; [MEMORY MAPPED] Watchdog Timer Configuration Lock Register
.equ	WUTCSR		= 0x62		; [MEMORY MAPPED] Wake-up Timer Control and Status Register
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
.equ	TCNT0		= 0x26		; Timer Counter 0  Bytes
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
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter Interrupt Flag register
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Port A Data Direction Register
.equ	PINA		= 0x00		; Port A Input Pins


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



; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PBOV bits		------------------------
.equ	PBOVCE		= 7		; 0x80 - Port B Override Change Enable
.equ	PBOE3		= 3		; 0x08 - Port B Override Enable 3
.equ	PBOE0		= 0		; 0x01 - Port B Override Enable 0



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



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADSCSRA bits		------------------------
.equ	SBSY		= 2		; 0x04 - Synchronization Busy
.equ	SCMD_MASK	= 0x03		;      - Synchronization Command (2 bits)
.equ	SCMD0		= 0		;          SCMD BIT0 position
; ::::  SCMD	:::: bitfield values
;			0x00		; Reserved
;			0x01		; Reset and Synchronize
;			0x02		; Synchronize on next Instantaneous Conversion
;			0x03		; Synchronize on next Accumulated Conversion

; ----------	Register ADSCSRB bits		------------------------
.equ	VADICPS		= 6		; 0x40 - V-ADC Instantaneous Conversion Polarity Status
.equ	VADACRB		= 5		; 0x20 - VADAC Data Read Out Busy
.equ	VADICRB		= 4		; 0x10 - VADIC Data Read Out Busy
.equ	CADICPS		= 2		; 0x04 - C-ADC Instantaneous Conversion Polarity Status
.equ	CADACRB		= 1		; 0x02 - CADAC Data Read Out Busy
.equ	CADICRB		= 0		; 0x01 - CADIC Data Read Out Busy

; ----------	Register ADCRA bits		------------------------
.equ	ADPSEL		= 3		; 0x08 - ADC Polarity Select
.equ	ADCMS_MASK	= 0x06		;      - C-ADC Chopper Mode Select (2 bits)
.equ	ADCMS0		= 1		;          ADCMS BIT0 position
.equ	CKSEL		= 0		; 0x01 - Sampling Clock Select
; ::::  ADCMS	:::: bitfield values
;			0x00		; Chopping Disabled
;			0x02		; Automatic Fast Chopping
;			0x04		; Automatic Slow Chopping
;			0x06		; Software Polarity Control
; ::::  CKSEL	:::: bitfield values
;			0x00		; PLL (512kHz output) as sampling clock
;			0x01		; Slow RC Oscillator as sampling clock

; ----------	Register ADCRB bits		------------------------
.equ	ADIDES_MASK	= 0x18		;      - Instantaneous Decimation Ratio Select (2 bits)
.equ	ADIDES0		= 3		;          ADIDES BIT0 position
.equ	ADADES_MASK	= 0x07		;      - Accumulated Decimation Ratio Select (3 bits)
.equ	ADADES0		= 0		;          ADADES BIT0 position
; ::::  ADIDES	:::: bitfield values
;			0x00		; 512
;			0x08		; 256
;			0x10		; 128
;			0x18		; 64
; ::::  ADADES	:::: bitfield values
;			0x00		; 512
;			0x01		; 256
;			0x02		; 128
;			0x03		; 64
;			0x04		; 32
;			0x05		; 16
;			0x06		; 8
;			0x07		; 4

; ----------	Register ADCRC bits		------------------------
.equ	CADEN		= 7		; 0x80 - C-ADC Enable
.equ	CADRCM_MASK	= 0x30		;      - C-ADC Regular Current Comparator Mode (2 bits)
.equ	CADRCM0		= 4		;          CADRCM BIT0 position
.equ	CADRCT_MASK	= 0x0F		;      - C-ADC Regular Current Count Threshold (4 bits)
.equ	CADRCT0		= 0		;          CADRCT BIT0 position
; ::::  CADRCM	:::: bitfield values
;			0x00		; Comparator Disabled
;			0x10		; Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and is reset if Accumulated Current is below threshold.
;			0x20		; Comparator Enabled. Regular Current Counter counts up if Accumulated Current is above threshold and down if Accumulated Current is below threshold.
;			0x30		; Reserved
; ::::  CADRCT	:::: bitfield values
;			0x00		; 1
;			0x01		; 2
;			0x02		; 3
;			0x03		; 4
;			0x04		; 5
;			0x05		; 6
;			0x06		; 7
;			0x07		; 8
;			0x08		; 9
;			0x09		; 10
;			0x0A		; 11
;			0x0B		; 12
;			0x0C		; 13
;			0x0D		; 14
;			0x0E		; 15
;			0x0F		; 16

; ----------	Register ADCRD bits		------------------------
.equ	CADG_MASK	= 0x38		;      - C-ADC Gain (3 bits)
.equ	CADG0		= 3		;          CADG BIT0 position
.equ	CADPDM_MASK	= 0x06		;      - C-ADC Pin Diagnostics Mode (2 bits)
.equ	CADPDM0		= 1		;          CADPDM BIT0 position
.equ	CADDSEL		= 0		; 0x01 - C-ADC Diagnostics Channel Select
; ::::  CADG	:::: bitfield values
;			0x00		; 4x
;			0x08		; 8x
;			0x10		; 16x
;			0x18		; 32x
;			0x20		; 64x
;			0x28		; 128x
;			0x30		; 256x
;			0x38		; Reserved
; ::::  CADPDM	:::: bitfield values
;			0x00		; No current source is enabled
;			0x02		; Current source on PI pin enabled
;			0x04		; Current source on NI pin enabled
;			0x06		; Current source on both PI/NI pins enabled

; ----------	Register ADCRE bits		------------------------
.equ	VADEN		= 7		; 0x80 - V-ADC Enable
.equ	VADREFS		= 5		; 0x20 - V-ADC Reference Select
.equ	VADPDM_MASK	= 0x18		;      - V-ADC Pin Diagnostics Mode (2 bits)
.equ	VADPDM0		= 3		;          VADPDM BIT0 position
.equ	VADMUX_MASK	= 0x07		;      - V-ADC Channel Select (3 bits)
.equ	VADMUX0		= 0		;          VADMUX BIT0 position
; ::::  VADREFS	:::: bitfield values
;			0x00		; VREF as reference
;			0x20		; AVDD/3 as reference (for diagnosis purpose)
; ::::  VADPDM	:::: bitfield values
;			0x00		; No current source is enabled
;			0x08		; Current source on PV pin enabled
;			0x10		; Current source on NV pin enabled
;			0x18		; Current source on both PV/NV pins enabled
; ::::  VADMUX	:::: bitfield values
;			0x00		; PV - NV
;			0x01		; ADC0 - SGND
;			0x02		; ADC1 - SGND
;			0x03		; VTEMP - GND
;			0x04		; DIAGNOSIS - GND (VREF/TBD)
;			0x05		; Reserved
;			0x06		; Reserved
;			0x07		; Reserved

; ----------	Register ADIFR bits		------------------------
.equ	VADACIF		= 5		; 0x20 - V-ADC Accumulated Voltage Interrupt Flag
.equ	VADICIF		= 4		; 0x10 - V-DAC Instantaneous Voltage Interrupt Flag
.equ	CADRCIF		= 2		; 0x04 - C-ADC Regulator Current Interrupt Flag
.equ	CADACIF		= 1		; 0x02 - C-ADC Accumulated Current Interrupt Flag
.equ	CADICIF		= 0		; 0x01 - C-ADC Instantaneous Current Interrupt Flag

; ----------	Register ADIMR bits		------------------------
.equ	VADACIE		= 5		; 0x20 - V-ADC Accumulated Voltage Interrupt Enable
.equ	VADICIE		= 4		; 0x10 - V-DAC Instantaneous Voltage Interrupt Enable
.equ	CADRCIE		= 2		; 0x04 - C-ADC Regulator Current Interrupt Enable
.equ	CADACIE		= 1		; 0x02 - C-ADC Accumulated Current Interrupt Enable
.equ	CADICIE		= 0		; 0x01 - C-ADC Instantaneous Current Interrupt Enable



; ====	BANDGAP MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register BGCSRA bits		------------------------
.equ	BGSC_MASK	= 0x07		;      - Band Gap Sample Configuration (3 bits)
.equ	BGSC0		= 0		;          BGSC BIT0 position

; ----------	Register BGCRA bits		------------------------
.equ	BGCN_MASK	= 0xFF		;      - Band Gap Calibration Nominal (8 bits)
.equ	BGCN0		= 0		;          BGCN BIT0 position

; ----------	Register BGCRB bits		------------------------
.equ	BGCL_MASK	= 0xFF		;      - Band Gap Calibration Linear (8 bits)
.equ	BGCL0		= 0		;          BGCL BIT0 position

; ----------	Register BGLR bits		------------------------
.equ	BGPLE		= 1		; 0x02 - Band Gap Lock Enable
.equ	BGPL		= 0		; 0x01 - Band Gap Lock



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

; ----------	Register PLLCSR bits		------------------------
.equ	SWEN		= 5		; 0x20 - PLL Software Enable
.equ	LOCK		= 4		; 0x10 - PLL Lock
.equ	PLLCIF		= 1		; 0x02 - PLL Lock Change Interrupt Flag
.equ	PLLCIE		= 0		; 0x01 - PLL Lock Change Interrupt Enable

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Extended Standby

; ----------	Register DIDR0 bits		------------------------
.equ	PA1DID		= 1		; 0x02 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.
.equ	PA0DID		= 0		; 0x01 - When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.

; ----------	Register PRR0 bits		------------------------
.equ	PRLIN		= 3		; 0x08 - Power Reduction LIN UART Interface
.equ	PRSPI		= 2		; 0x04 - Power reduction SPI
.equ	PRTIM1		= 1		; 0x02 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 0		; 0x01 - Power Reduction Timer/Counter0

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x03		;      - Clock Prescaler Select Bits (2 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC01		= 1		; 0x02 - External Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - External Interrupt Sense Control 0 Bit 0
; ::::  ISC00	>>>> This is a part of INTERRUPT_SENSE_CONTROL enum (see complete values list below)

; ----------	Register EIMSK bits		------------------------
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable

; ----------	Register EIFR bits		------------------------
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x03		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x03		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position



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

; ----------	Register WDTCLR bits		------------------------
.equ	WDCL_MASK	= 0x06		;      - Watchdog Timer Configuration Lock bits (2 bits)
.equ	WDCL0		= 1		;          WDCL BIT0 position
.equ	WDCLE		= 0		; 0x01 - Watchdog Timer Configuration Lock Enable



; ====	WAKEUP_TIMER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register WUTCSR bits		------------------------
.equ	WUTIF		= 7		; 0x80 - Wake-up Timer Interrupt Flag
.equ	WUTIE		= 6		; 0x40 - Wake-up Timer Interrupt Enable
.equ	WUTR		= 4		; 0x10 - Wake-up Timer Reset
.equ	WUTE		= 3		; 0x08 - Wake-up Timer Enable
.equ	WUTP_MASK	= 0x07		;      - Wake-up Timer Prescaler Bits (3 bits)
.equ	WUTP0		= 0		;          WUTP BIT0 position




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
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	INT0		; External Interrupt 0
;	2	PCINT0		; Pin Change Interrupt 0
;	3	PCINT1		; Pin Change Interrupt 1
;	4	WDT		; Watchdog Timeout Interrupt
;	5	WAKEUP		; Wakeup Timer Overflow
;	6	TIMER1_IC	; Timer 1 Input capture
;	7	TIMER1_COMPA	; Timer 1 Compare Match A
;	8	TIMER1_COMPB	; Timer 1 Compare Match B
;	9	TIMER1_OVF	; Timer 1 overflow
;	10	TIMER0_IC	; Timer 0 Input Capture
;	11	TIMER0_COMPA	; Timer 0 Compare Match A
;	12	TIMER0_COMPB	; Timer 0 Compare Match B
;	13	TIMER0_OVF	; Timer 0 Overflow
;	14	LIN_STATUS	; LIN Status Interrupt
;	15	LIN_ERROR	; LIN Error Interrupt
;	16	SPI_STC		; SPI Serial transfer complete
;	17	VADC_CONV	; Voltage ADC Instantaneous Conversion Complete
;	18	VADC_ACC	; Voltage ADC Accumulated Conversion Complete
;	19	CADC_CONV	; C-ADC Instantaneous Conversion Complete
;	20	CADC_REG_CUR	; C-ADC Regular Current
;	21	CADC_ACC	; C-ADC Accumulated Conversion Complete
;	22	EE_READY	; EEPROM Ready
;	23	SPM		; SPM Ready
;	24	PLL		; PLL Lock Change Interrupt



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmega64HVE2.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT		= 0x06	; Start-up time 14 CK + 64 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<BODEN) \
;#				  & ~(1 <<CKDIV8) \
;#				  &  (~SUT_MASK | SUT) \
;#				  & ~(0 <<OSCSEL0)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=2048 words Boot address=$7800
;#	.set	FUSES_HIGH	= 0xFF \
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
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt 0
;#		reti			; PCINT1	 - Pin Change Interrupt 1
;#		reti			; WDT		 - Watchdog Timeout Interrupt
;#		reti			; WAKEUP	 - Wakeup Timer Overflow
;#		reti			; TIMER1_IC	 - Timer 1 Input capture
;#		reti			; TIMER1_COMPA	 - Timer 1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer 1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer 1 overflow
;#		reti			; TIMER0_IC	 - Timer 0 Input Capture
;#		reti			; TIMER0_COMPA	 - Timer 0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer 0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer 0 Overflow
;#		reti			; LIN_STATUS	 - LIN Status Interrupt
;#		reti			; LIN_ERROR	 - LIN Error Interrupt
;#		reti			; SPI_STC	 - SPI Serial transfer complete
;#		reti			; VADC_CONV	 - Voltage ADC Instantaneous Conversion Complete
;#		reti			; VADC_ACC	 - Voltage ADC Accumulated Conversion Complete
;#		reti			; CADC_CONV	 - C-ADC Instantaneous Conversion Complete
;#		reti			; CADC_REG_CUR	 - C-ADC Regular Current
;#		reti			; CADC_ACC	 - C-ADC Accumulated Conversion Complete
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM		 - SPM Ready
;#		reti			; PLL		 - PLL Lock Change Interrupt
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGA64HVE2_INC_ */

; ************************ END OF FILE *********************************

