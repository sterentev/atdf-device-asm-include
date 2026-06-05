;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA6285
;* Title             : Register/Mask/Bit Definitions for the ATA6285
;* File Name         : ATA6285.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-06-05 09:18:07 UTC
;
;***********************************************************************

#ifndef _ATA6285_INC_
#define _ATA6285_INC_

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
.device	ATA6285
.equ	JTAGID		= 0x9382
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x93
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
.equ	ADDR_MAPPED_IO_END		= 0x00FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x00E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0100
.equ	ADDR_IRAM_END			= 0x02FF
.equ	ADDR_IRAM_SIZE			= 0x0200

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x013F
.equ	ADDR_EEPROM_SIZE		= 0x0140




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	HIGH		= 0x01
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register HIGH bits		------------------------
.equ	EELOCK		= 7		; 0x80 - Upper EEPROM Locked (disabled)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Boot size select (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Select reset vector
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot size = 128 words
;			0x04		; Boot size = 256 words
;			0x02		; Boot size = 512 words
;			0x00		; Boot size = 1024 words

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTC1
.equ	SUT_CKSEL_MASK	= 0x30		;      - Select Clock Source (2 bits)
.equ	SUT_CKSEL0	= 4		;          SUT_CKSEL BIT0 position
.equ	WDRCON		= 3		; 0x08 - Enable Watchdog RC-Oscillator
.equ	FRCFS		= 2		; 0x04 - Fast RC-Oscillator Frequency select
.equ	BODEN		= 1		; 0x02 - Brown-out detection enabled
.equ	TSRDI		= 0		; 0x01 - Disable Temperatur shutdown Reset 
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms;   [SUT=00]
;			0x10		; Start-up time PWRDWN/RESET: 6 CK/14 CK + 5.7 ms; [SUT=01]
;			0x20		; Start-up time PWRDWN/RESET: 6 CK/14 CK + 90 ms;  [SUT=10]




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
.equ	LFCAL		= 0x86		; [MEMORY MAPPED] [___2 addrs___] LF Calibration Register  Bytes
.equ	LFIDC		= 0x84		; [MEMORY MAPPED] [___2 addrs___] LF ID Compare Register 
.equ	LFHCR		= 0x83		; [MEMORY MAPPED] LF Header Compare Register
.equ	LFRCR		= 0x82		; [MEMORY MAPPED] Low Frequency Receiver Control Register
.equ	LFIMR		= 0x81		; [MEMORY MAPPED] Low Frequency Interrupt Mask Register
.equ	T3IMR		= 0x7F		; [MEMORY MAPPED] Timer3 Interrupt Mask Register
.equ	T3CRB		= 0x7E		; [MEMORY MAPPED] Timer 3 Control Register B
.equ	T3MRB		= 0x7D		; [MEMORY MAPPED] Timer 3 Mode Register B
.equ	T3MRA		= 0x7C		; [MEMORY MAPPED] Timer 3 Mode Register A
.equ	T3CORB		= 0x7A		; [MEMORY MAPPED] [___2 addrs___] Timer3 COmpare Register B  Bytes
.equ	T3CORA		= 0x78		; [MEMORY MAPPED] [___2 addrs___] Timer3 COmpare Register A  Bytes
.equ	T3ICR		= 0x76		; [MEMORY MAPPED] [___2 addrs___] Timer3 Input Capture Register  Bytes
.equ	T2IMR		= 0x74		; [MEMORY MAPPED] Timer 2 Interrupt Mask Register
.equ	T2MRB		= 0x73		; [MEMORY MAPPED] Timer 2 Mode Register B
.equ	T2MRA		= 0x72		; [MEMORY MAPPED] Timer 2 Mode Register A
.equ	T2COR		= 0x70		; [MEMORY MAPPED] [___2 addrs___] Timer2 Compare Register  Bytes
.equ	T2ICR		= 0x6F		; [MEMORY MAPPED] Timer 2 Input Capture Register High Byte
.equ	T2ICRL		= 0x6E		; [MEMORY MAPPED] Timer 2 Input Capture Register Low Byte
.equ	PCMSK2		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6A		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	MSVCAL		= 0x67		; [MEMORY MAPPED] Motion Sensor Voltage Calibration Register
.equ	FRCCAL		= 0x66		; [MEMORY MAPPED] FRC-Oscillator Calibration Register
.equ	SRCCAL		= 0x65		; [MEMORY MAPPED] SRC-Oscillator Calibration Register
.equ	TSCR		= 0x64		; [MEMORY MAPPED] Temperature Sensor Control Register
.equ	SIMSK		= 0x61		; [MEMORY MAPPED] Sensor Interrupt Mask register
.equ	WDTCR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	CLKPR		= 0x3C		; Clock Prescaler Register
.equ	CMIMR		= 0x3B		; Clock Management Interrupt Mask Register
.equ	T0CR		= 0x39		; Timer 0 Control Register
.equ	T1CR		= 0x38		; Timer 1 Control Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	LFRB		= 0x36		; Low Frequency Receive data Buffer
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	LFCDR		= 0x32		; LF receiver Control und Data Register
.equ	LFRR		= 0x30		; LF RSSI Data Register
.equ	T2MDR		= 0x2F		; Timer 2 Modulator Data Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x2A		; General Purpose I/O Register 1
.equ	SCCR		= 0x29		; Sensor Capacitor Control Register
.equ	SCR		= 0x28		; Sensor Control Register
.equ	SVCR		= 0x27		; Sensor Voltage Control Register
.equ	EIMSK		= 0x24		; External Interrupt Mask Register
.equ	PCICR		= 0x23		; Pin Change Interrupt Control Register
.equ	EEAR		= 0x21		; [___2 addrs___] EEPROM Address Register  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose I/O Register 0
.equ	EIFR		= 0x1D		; External Interrupt Flag Register
.equ	T3IFR		= 0x1C		; Timer3 Interrupt Flag Register
.equ	T2IFR		= 0x1B		; Timer2 Interrupt Flag Register
.equ	T10IFR		= 0x1A		; Timer1/0 Interrupt Flag Register
.equ	SSFR		= 0x19		; Sensor Status + Flag Register
.equ	LFFR		= 0x18		; Low Frequency Flag Register
.equ	PCIFR		= 0x17		; Pin Change Interrupt Flag Register
.equ	VMCSR		= 0x16		; Voltage Monitor Control and Status Register
.equ	T3CRA		= 0x14		; Timer 3 Control Register A
.equ	T2CRB		= 0x12		; Timer 2 Control Register B
.equ	T2CRA		= 0x11		; Timer 2 Control Register A
.equ	CMSR		= 0x10		; Clock Management Status Register
.equ	CMCR		= 0x0F		; Clock Management Control Register
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
;
; ----------	REGISTERS PAIRS			------------------------
;    LF Calibration Register  Bytes
.equ	LFCALH		= 0x87
.equ	LFCALL		= 0x86
;    LF ID Compare Register 
.equ	LFIDCH		= 0x85
.equ	LFIDCL		= 0x84
;    Timer3 COmpare Register B  Bytes
.equ	T3CORBH		= 0x7B
.equ	T3CORBL		= 0x7A
;    Timer3 COmpare Register A  Bytes
.equ	T3CORAH		= 0x79
.equ	T3CORAL		= 0x78
;    Timer3 Input Capture Register  Bytes
.equ	T3ICRH		= 0x77
.equ	T3ICRL		= 0x76
;    Timer2 Compare Register  Bytes
.equ	T2CORH		= 0x71
.equ	T2CORL		= 0x70
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    EEPROM Address Register  Bytes
.equ	EEARH		= 0x22
.equ	EEARL		= 0x21


; ====	SENSOR_INTERFACE MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register SCR bits		------------------------
.equ	SMEN		= 3		; 0x08 - Sensor Motion Enable Bit
.equ	SEN_MASK	= 0x06		;      - Sensor enable Bits (2 bits)
.equ	SEN0		= 1		;          SEN BIT0 position
.equ	SMS		= 0		; 0x01 - Sensor Measurement Start Bit

; ----------	Register SCCR bits		------------------------
.equ	SCCS_MASK	= 0x1C		;      - Sensor Capacitor Channel Select Bit2 (3 bits)
.equ	SCCS0		= 2		;          SCCS BIT0 position
.equ	SRCC_MASK	= 0x03		;      - Sensor Reference Charge Current Bit1 (2 bits)
.equ	SRCC0		= 0		;          SRCC BIT0 position

; ----------	Register SIMSK bits		------------------------
.equ	MSIE		= 0		; 0x01 - Motion Sensor Interrupt Enable Bit

; ----------	Register SSFR bits		------------------------
.equ	MSENO		= 1		; 0x02 - Motion Sensor Output
.equ	MSENF		= 0		; 0x01 - Motion Sensor Flag

; ----------	Register TSCR bits		------------------------
.equ	TSSD		= 0		; 0x01 - Temperature Sensor Shutdown mode Disable



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
; ----------	Register CLKPR bits		------------------------
.equ	CLPCE		= 7		; 0x80 - Clock Prescaler Change Enable Bit
.equ	CLTPS_MASK	= 0x38		;      - Clock Timer Prescaler Select Bits (3 bits)
.equ	CLTPS0		= 3		;          CLTPS BIT0 position
.equ	CLKPS_MASK	= 0x07		;      - Clock system Prescaler Select Bits (3 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position

; ----------	Register CMCR bits		------------------------
.equ	CMCCE		= 7		; 0x80 - Clock Management Control Change Enable Bit
.equ	ECINS		= 5		; 0x20 - External Clock Input Select Bit
.equ	CCS		= 4		; 0x10 - Core Clock Select Bit
.equ	CMONEN		= 3		; 0x08 - Clock Monitoring Enable
.equ	SRCD		= 2		; 0x04 - Slow RC-oscillator Disable Bit
.equ	CMM_MASK	= 0x03		;      - Clock Management Mode Bitss (2 bits)
.equ	CMM0		= 0		;          CMM BIT0 position

; ----------	Register CMSR bits		------------------------
.equ	ECF		= 0		; 0x01 - External Clock input Flag Bit

; ----------	Register CMIMR bits		------------------------
.equ	ECIE		= 0		; 0x01 - External Clock input Interrupt Enable Bit

; ----------	Register VMCSR bits		------------------------
.equ	BODLS		= 7		; 0x80 - Brown-Out Detection Level Select Bit
.equ	BODPD		= 6		; 0x40 - Brown-Out Detection on Power-Down Bit
.equ	VMF		= 5		; 0x20 - Voltage Monitor Flag
.equ	VMIM		= 4		; 0x10 - Voltage Monitor Interrupt Mask Bit
.equ	VMLS_MASK	= 0x0E		;      - Voltage Monitor Level Select Bits (3 bits)
.equ	VMLS0		= 1		;          VMLS BIT0 position
.equ	VMEN		= 0		; 0x01 - Voltage Monitor Enable Bit

; ----------	Register SREG bits		------------------------
.equ	SREG_I		= 7		; 0x80 - Global Interrupt Enable
.equ	SREG_T		= 6		; 0x40 - Bit Copy Storage
.equ	SREG_H		= 5		; 0x20 - Half Carry Flag
.equ	SREG_S		= 4		; 0x10 - Sign Bit
.equ	SREG_V		= 3		; 0x08 - Two's Complement Overflow Flag
.equ	SREG_N		= 2		; 0x04 - Negative Flag
.equ	SREG_Z		= 1		; 0x02 - Zero Flag
.equ	SREG_C		= 0		; 0x01 - Carry Flag

; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read-While-Write Section Busy
.equ	RWWSRE		= 4		; 0x10 - Read-While-Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming Enable

; ----------	Register MCUCR bits		------------------------
.equ	PUD		= 4		; 0x10 - 
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	TSRF		= 5		; 0x20 - Temperature Shutdown Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      -  (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - 
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Sensor Noise Reduction
;			0x04		; Power Down
;			0x06		; Reserved
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved



; ====	LFRX MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LFRCR bits		------------------------
.equ	LFCS_MASK	= 0xE0		;      - LF receiver Capacitor Select Bits (3 bits)
.equ	LFCS0		= 5		;          LFCS BIT0 position
.equ	LFRSS		= 4		; 0x10 - LF Receiver Sensitivity Select Bit
.equ	LFWM_MASK	= 0x0C		;      - LF receiver Wake-up Mode Bits (2 bits)
.equ	LFWM0		= 2		;          LFWM BIT0 position
.equ	LFBM		= 1		; 0x02 - LF receiver Burst Mode enable Bit
.equ	LFEN		= 0		; 0x01 - LF receiver Enable Bit

; ----------	Register LFCDR bits		------------------------
.equ	LFSCE		= 7		; 0x80 - LF receiver RSSI Software Capture Enable Bit
.equ	LFRST		= 6		; 0x40 - LF receiver Reset Bit
.equ	LFDO		= 0		; 0x01 - LF receiver Data Output Bit

; ----------	Register LFIMR bits		------------------------
.equ	LFEIM		= 2		; 0x04 - LF receiver End of data Interrupt Mask bit
.equ	LFBIM		= 1		; 0x02 - LF receiver data Buffer Interrupt Mask bit
.equ	LFWIM		= 0		; 0x01 - LF receiver Wake-up Interrupt Mask bit

; ----------	Register LFFR bits		------------------------
.equ	LFRF		= 3		; 0x08 - LF receiver Rssi data Flag
.equ	LFEDF		= 2		; 0x04 - LF receiver End of data Flag
.equ	LFBF		= 1		; 0x02 - LF receiver data Buffer full Flag
.equ	LFWPF		= 0		; 0x01 - LF receiver Wake-up Flag



; ====	EXTERNAL_INTERRUPT MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control 0 Bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position

; ----------	Register EIMSK bits		------------------------
.equ	INT_MASK	= 0x03		;      - External Interrupt Request 1 Enable (2 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x03		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x07		;      - Pin Change Enable Masks (3 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCMSK2 bits		------------------------
.equ	PCMSK2_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK2_PCINT0	= 0		;          PCMSK2_PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x07		;      - Pin Change Interrupt Flags (3 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x07		;      - Pin Change Interrupt Enables (3 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position



; ====	TIMER_COUNTER_1 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T1CR bits		------------------------
.equ	T1IE		= 7		; 0x80 - Timer 1 Interrupt Enable Bit
.equ	T1CS_MASK	= 0x38		;      - Timer 1 Clock Select Bits (3 bits)
.equ	T1CS0		= 3		;          T1CS BIT0 position
.equ	T1PS_MASK	= 0x07		;      - Timer 1 Prescaler Select Bits (3 bits)
.equ	T1PS0		= 0		;          T1PS BIT0 position

; ----------	Register T10IFR bits		------------------------
.equ	T1F		= 1		; 0x02 - Timer 1 Flag Bit
.equ	T0F		= 0		; 0x01 - Timer 0 Flag Bit



; ====	TIMER_COUNTER_2 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T2CRA bits		------------------------
.equ	T2E		= 7		; 0x80 - Timer 2 Enable Bit
.equ	T2TS		= 6		; 0x40 - Timer 2 Toggle with Start Bit
.equ	T2ICS		= 5		; 0x20 - Timer Input Capture Select Bit
.equ	T2CRM		= 3		; 0x08 - Timer 2 Compare Reset Mask Bit
.equ	T2CR		= 2		; 0x04 - Timer2 Counter Reset
.equ	T2CTM		= 1		; 0x02 - Timer 2 Compare Toggle Mask Bit
.equ	T2OTM		= 0		; 0x01 - Timer 2 Overflow Toggle Mask Bit

; ----------	Register T2CRB bits		------------------------
.equ	T2SCE		= 0		; 0x01 - Timer 2 Software Capture Enable Bit

; ----------	Register T2IFR bits		------------------------
.equ	T2TCF		= 5		; 0x20 - Timer2 SSI Transmit Complete Flag Bit
.equ	T2TXF		= 4		; 0x10 - Timer2 SSI Transmit Flag Bit
.equ	T2RXF		= 3		; 0x08 - Timer2 SSI Receive Flag Bit
.equ	T2ICF		= 2		; 0x04 - Timer2 Input Capture Flag Bit
.equ	T2COF		= 1		; 0x02 - Timer 2 Compare Flag Bit
.equ	T2OFF		= 0		; 0x01 - Timer 2 Overflow Flag Bit

; ----------	Register T2IMR bits		------------------------
.equ	T2TCIM		= 5		; 0x20 - Timer2 SSI Transmit Complete Interrupt Mask Bit
.equ	T2TXIM		= 4		; 0x10 - Timer2 SSI Transmit Interrupt Mask Bit
.equ	T2RXIM		= 3		; 0x08 - Timer2 SSI Receive Interrupt Mask Bit
.equ	T2CPIM		= 2		; 0x04 - Timer 2 Capture Interrupt Mask Bit
.equ	T2CIM		= 1		; 0x02 - Timer 2 Compare Interrupt Mask Bit
.equ	T2OIM		= 0		; 0x01 - Timer 2 Overflow Interrupt Mask Bit

; ----------	Register T2MRA bits		------------------------
.equ	T2TP_MASK	= 0xC0		;      - Timer 2 Top select Bits (2 bits)
.equ	T2TP0		= 6		;          T2TP BIT0 position
.equ	T2CNC		= 5		; 0x20 - Timer 2 Input Capture Noise Canceler Bit
.equ	T2CE_MASK	= 0x18		;      - Timer 2 Capture Edge Select Bits (2 bits)
.equ	T2CE0		= 3		;          T2CE BIT0 position
.equ	T2CS_MASK	= 0x07		;      - Timer 2 Clock Select Bits (3 bits)
.equ	T2CS0		= 0		;          T2CS BIT0 position

; ----------	Register T2MRB bits		------------------------
.equ	T2SSIE		= 7		; 0x80 - Timer 2 SSI Enable Bit
.equ	T2CPOL		= 6		; 0x40 - Timer2 Clock Polarity for SSI shift clock
.equ	T2TOP		= 4		; 0x10 - Timer 2 Toggle Output Preset Bit
.equ	T2M_MASK	= 0x0F		;      - Timer 2 Mode Bits (4 bits)
.equ	T2M0		= 0		;          T2M BIT0 position



; ====	TIMER_COUNTER_3 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T3CRA bits		------------------------
.equ	T3E		= 7		; 0x80 - Timer 3 Enable Bit
.equ	T3TS		= 6		; 0x40 - Timer 3 Toggle with Start Bit
.equ	T3CR		= 2		; 0x04 - Timer3 Counter Reset
.equ	T3SCE		= 1		; 0x02 - Timer 3 Software Capture Enable Bit
.equ	T3AC		= 0		; 0x01 - Timer 3 Alternate Compare register sequence bit

; ----------	Register T3CRB bits		------------------------
.equ	T3CPRM		= 6		; 0x40 - Timer 3 CaPture Reset Mask bit
.equ	T3CRMB		= 5		; 0x20 - Timer 3 Compare Reset Mask bit B
.equ	T3SAMB		= 4		; 0x10 - Timer 3 Single Action Mask bit B
.equ	T3CTMB		= 3		; 0x08 - Timer 3 Compare Toggle Mask bit B
.equ	T3CRMA		= 2		; 0x04 - Timer 3 Compare Reset Mask bit A
.equ	T3SAMA		= 1		; 0x02 - Timer 3 Single Action Mask bit A
.equ	T3CTMA		= 0		; 0x01 - Timer 3 Compare Toggle Mask bit A

; ----------	Register T3MRA bits		------------------------
.equ	T3ICS_MASK	= 0xC0		;      - Timer 3 Input Capture Select Bits (2 bits)
.equ	T3ICS0		= 6		;          T3ICS BIT0 position
.equ	T3CNC		= 5		; 0x20 - Timer 3 input Capture Noise Canceler Bit
.equ	T3CE_MASK	= 0x18		;      - Timer 3 Capture Edge select Bits (2 bits)
.equ	T3CE0		= 3		;          T3CE BIT0 position
.equ	T3CS_MASK	= 0x07		;      - Timer 3 Clock Select Bits (3 bits)
.equ	T3CS0		= 0		;          T3CS BIT0 position

; ----------	Register T3IFR bits		------------------------
.equ	T3ICF		= 3		; 0x08 - Timer3 Input Capture Flag bit
.equ	T3COBF		= 2		; 0x04 - Timer3 Compare B Flag bit
.equ	T3COAF		= 1		; 0x02 - Timer3 Compare A Flag bit
.equ	T3OFF		= 0		; 0x01 - Timer3 OverFlow Flag bit

; ----------	Register T3IMR bits		------------------------
.equ	T3CPIM		= 3		; 0x08 - Timer3 Capture Interrupt Mask bit
.equ	T3CBIM		= 2		; 0x04 - Timer3 Compare B Interrupt Mask bit
.equ	T3CAIM		= 1		; 0x02 - Timer3 Compare A Interrupt Mask bit
.equ	T3OIM		= 0		; 0x01 - Timer3 Overflow Interrupt Mask bit

; ----------	Register T3MRB bits		------------------------
.equ	T3TOP		= 4		; 0x10 - Timer 3 Toggle Output Preset Bit
.equ	T3M_MASK	= 0x07		;      - Timer 3 Mode Bits (3 bits)
.equ	T3M0		= 0		;          T3M BIT0 position



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
.equ	WDPS_MASK	= 0x07		;      - Watch Dog Timer Prescaler Select bits (3 bits)
.equ	WDPS0		= 0		;          WDPS BIT0 position



; ====	TIMER_COUNTER_0 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T0CR bits		------------------------
.equ	T0PBS_MASK	= 0xE0		;      - Timer 0 Prescaler B Select Bits (3 bits)
.equ	T0PBS0		= 5		;          T0PBS BIT0 position
.equ	T0PR		= 4		; 0x10 - Timer 0 Prescaler Reset Bit
.equ	T0IE		= 3		; 0x08 - Timer 0 Interrupt Enable Bit
.equ	T0PAS_MASK	= 0x07		;      - Timer 0 Prescaler A Select Bits (3 bits)
.equ	T0PAS0		= 0		;          T0PAS BIT0 position

; ----------	Register T10IFR bits		------------------------
;.equ	T1F		= 1		; 0x02 - Timer 1 Flag Bit
;.equ	T0F		= 0		; 0x01 - Timer 0 Flag Bit



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
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



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 27
.equ	INT_VECTORS_SIZE	= 0x36
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Temperature Shutdown Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	PCINT0		; Pin Change Interrupt Request 0
;	4	PCINT1		; Pin Change Interrupt Request 1
;	5	PCINT2		; Pin Change Interrupt Request 2
;	6	INTVM		; Voltage Monitor Interrupt
;	7	SENINT		; Sensor Interface Interrupt
;	8	INTT0		; Timer0 Interval Interrupt
;	9	LFWP		; LF-Receiver Wake-up Interrupt
;	10	T3CAP		; Timer/Counter3 Capture Event
;	11	T3COMA		; Timer/Counter3 Compare Match A
;	12	T3COMB		; Timer/Counter3 Compare Match B
;	13	T3OVF		; Timer/Counter3 Overflow
;	14	T2CAP		; Timer/Counter2 Capture Event
;	15	T2COM		; Timer/Counter2 Compare Match
;	16	T2OVF		; Timer/Counter2 Overflow
;	17	SPISTC		; SPI Serial Transfer Complete
;	18	LFRXB		; LF Receive Buffer Interrupt
;	19	INTT1		; Timer1 Interval Interrupt
;	20	T2RXB		; Timer2 SSI Receive Buffer Interrupt
;	21	T2TXB		; Timer2 SSI Transmit Buffer Interrupt
;	22	T2TXC		; Timer2 SSI Transmit Complete Interrupt
;	23	LFREOB		; LF-Receiver End of Burst Interrupt
;	24	EXCM		; External Input Clock break down Interrupt
;	25	EEREADY		; EEPROM Ready Interrupt
;	26	SPM_RDY		; Store Program Memory Ready



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATA6285.inc"
;#	
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot size = 512 words
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<EELOCK) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x10	; Start-up time PWRDWN/RESET: 6 CK/14 CK + 5.7 ms; [SUT=01]
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
;#				  &  (~SUT_CKSEL_MASK | SUT_CKSEL) \
;#				  & ~(1 <<WDRCON) \
;#				  & ~(1 <<FRCFS) \
;#				  & ~(1 <<BODEN) \
;#				  & ~(0 <<TSRDI)
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
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Temperature Shutdown Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; INTVM		 - Voltage Monitor Interrupt
;#		reti			; SENINT	 - Sensor Interface Interrupt
;#		reti			; INTT0		 - Timer0 Interval Interrupt
;#		reti			; LFWP		 - LF-Receiver Wake-up Interrupt
;#		reti			; T3CAP		 - Timer/Counter3 Capture Event
;#		reti			; T3COMA	 - Timer/Counter3 Compare Match A
;#		reti			; T3COMB	 - Timer/Counter3 Compare Match B
;#		reti			; T3OVF		 - Timer/Counter3 Overflow
;#		reti			; T2CAP		 - Timer/Counter2 Capture Event
;#		reti			; T2COM		 - Timer/Counter2 Compare Match
;#		reti			; T2OVF		 - Timer/Counter2 Overflow
;#		reti			; SPISTC	 - SPI Serial Transfer Complete
;#		reti			; LFRXB		 - LF Receive Buffer Interrupt
;#		reti			; INTT1		 - Timer1 Interval Interrupt
;#		reti			; T2RXB		 - Timer2 SSI Receive Buffer Interrupt
;#		reti			; T2TXB		 - Timer2 SSI Transmit Buffer Interrupt
;#		reti			; T2TXC		 - Timer2 SSI Transmit Complete Interrupt
;#		reti			; LFREOB	 - LF-Receiver End of Burst Interrupt
;#		reti			; EXCM		 - External Input Clock break down Interrupt
;#		reti			; EEREADY	 - EEPROM Ready Interrupt
;#		reti			; SPM_RDY	 - Store Program Memory Ready
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA6285_INC_ */

; ************************ END OF FILE *********************************

