;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA5790
;* Title             : Register/Mask/Bit Definitions for the ATA5790
;* File Name         : ATA5790.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-06-01 12:44:56 UTC
;
;***********************************************************************

#ifndef _ATA5790_INC_
#define _ATA5790_INC_

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
.device	ATA5790
.equ	JTAGID		= 0x9461
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x61


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
.equ	ADDR_BOOT_SECTION_1_START	= 0x3800
.equ	ADDR_BOOT_SECTION_1_END		= 0x3FFF
.equ	ADDR_BOOT_SECTION_1_SIZE	= 0x0800

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
.equ	ADDR_EEPROM_END			= 0x07FF
.equ	ADDR_EEPROM_SIZE		= 0x0800




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	DWEN		= 6		; 0x40 - DebugWIRE Enable
.equ	SPIEN		= 5		; 0x20 - SPI Enable
.equ	WDTON		= 4		; 0x10 - Enable Watchdog Timer
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	Reserved	= 2		; 0x04 - This fuse bit must be set. 
.equ	_32OEN		= 1		; 0x02 - Enables the 32 kHz oscillator.
.equ	EXTCLKEN	= 0		; 0x01 - External Clock enable




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
.equ	CRCSR		= 0xAF		; [MEMORY MAPPED] CRC Status Register
.equ	CRCCR		= 0xAE		; [MEMORY MAPPED] CRC Control Register
.equ	CRCDR		= 0xAD		; [MEMORY MAPPED] CRC Data Register
.equ	TMSR		= 0xAB		; [MEMORY MAPPED] Timer Modulator Shift Register
.equ	TMTDR		= 0xAA		; [MEMORY MAPPED] Timer Modulator Transmit Data Register
.equ	TMBDR		= 0xA9		; [MEMORY MAPPED] Timer Modulator Biphase Data Register
.equ	TMMDR		= 0xA8		; [MEMORY MAPPED] Timer Modulator Manchester Data Register
.equ	RTCDR		= 0x9F		; [MEMORY MAPPED] Real Time Clock Data Register
.equ	RTCCR		= 0x9E		; [MEMORY MAPPED] Real-Time Clock Control Register
.equ	TPIMR		= 0x9C		; [MEMORY MAPPED] Transponder Interrupt Mask Register
.equ	LFCC3		= 0x98		; [MEMORY MAPPED] Low Frequency Channel Capacity select register 3
.equ	LFCC2		= 0x97		; [MEMORY MAPPED] Low Frequency Channel Capacity select register 2
.equ	LFCC1		= 0x96		; [MEMORY MAPPED] Low Frequency Channel Capacity select register 1
.equ	LFRSD3		= 0x95		; [MEMORY MAPPED] LF RSSI Data Register 3
.equ	LFRSD2		= 0x94		; [MEMORY MAPPED] LF RSSI Data Register 2
.equ	LFRSD1		= 0x93		; [MEMORY MAPPED] LF RSSI Data Register 1
.equ	LFRDF		= 0x92		; [MEMORY MAPPED] LF Receive Data Frame Register
.equ	LFID1M		= 0x91		; [MEMORY MAPPED] LF Identifier 1 Mask Register
.equ	LFID0M		= 0x90		; [MEMORY MAPPED] LF Identifier 0 Mask Register
.equ	LFRD3		= 0x8F		; [MEMORY MAPPED] LF Receive Data Register Byte 3
.equ	LFRD2		= 0x8E		; [MEMORY MAPPED] LF Receive Data Register Byte 2
.equ	LFRD1		= 0x8D		; [MEMORY MAPPED] LF Receive Data Register Byte 1
.equ	LFRD0		= 0x8C		; [MEMORY MAPPED] LF Receive Data Register Byte 0
.equ	LFID13		= 0x8B		; [MEMORY MAPPED] LF ID 1 Data Register Byte 3
.equ	LFID12		= 0x8A		; [MEMORY MAPPED] LF ID 1 Data Register Byte 2
.equ	LFID11		= 0x89		; [MEMORY MAPPED] LF ID 1 Data Register Byte 1
.equ	LFID10		= 0x88		; [MEMORY MAPPED] LF ID 1 Data Register Byte 0
.equ	LFID03		= 0x87		; [MEMORY MAPPED] LF ID 0 Data Register Byte 3
.equ	LFID02		= 0x86		; [MEMORY MAPPED] LF ID 0 Data Register Byte 2
.equ	LFID01		= 0x85		; [MEMORY MAPPED] LF ID 0 Data Register Byte 1
.equ	LFID00		= 0x84		; [MEMORY MAPPED] LF ID 0 Data Register Byte 0
.equ	LFCAD		= 0x83		; [MEMORY MAPPED] LF Clock Adjustment Data Register
.equ	LFIMR		= 0x82		; [MEMORY MAPPED] LF Interrupt Mask Register
.equ	TMIMR		= 0x7F		; [MEMORY MAPPED] Timer Modulator Interrupt Mask Register
.equ	TMMR		= 0x7E		; [MEMORY MAPPED] Timer Modulator Mode Register
.equ	TMCR		= 0x7D		; [MEMORY MAPPED] Timer Modulator Control Register
.equ	T3IMR		= 0x7B		; [MEMORY MAPPED] Timer3 Interrupt Mask Register
.equ	T3MRB		= 0x7A		; [MEMORY MAPPED] Timer 3 Mode Register B
.equ	T3MRA		= 0x79		; [MEMORY MAPPED] Timer 3 Mode Register A
.equ	T3ICR		= 0x78		; [MEMORY MAPPED] Timer3 Input Capture Register
.equ	T3COR		= 0x77		; [MEMORY MAPPED] Timer3 COmpare Register
.equ	T3CNT		= 0x76		; [MEMORY MAPPED] Timer3 Counter Register
.equ	T2IMR		= 0x74		; [MEMORY MAPPED] Timer 2 Interrupt Mask Register
.equ	T2MR		= 0x73		; [MEMORY MAPPED] Timer 2 Mode Register
.equ	T2COR		= 0x71		; [MEMORY MAPPED] Timer2 Compare Register
.equ	T2CNT		= 0x70		; [MEMORY MAPPED] Timer 2 Counter Register
.equ	LDCR		= 0x6D		; [MEMORY MAPPED] LED Driver Control Register
.equ	PCMSK1		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6A		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	FRCCAL		= 0x66		; [MEMORY MAPPED] FRC-Oscillator Calibration Register
.equ	SRCCAL		= 0x65		; [MEMORY MAPPED] SRC-Oscillator Calibration Register
.equ	PRR1		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	PRR0		= 0x63		; [MEMORY MAPPED] Power Reduction Register
.equ	WDTCR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	CLKPR		= 0x3C		; Clock Prescaler Register
.equ	CMIMR		= 0x3B		; Clock Management Interrupt Mask Register
.equ	T0CR		= 0x39		; Timer 0 Control Register
.equ	T1CR		= 0x38		; Timer 1 Control Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	LFSR		= 0x36		; LF Status Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	LFRDB		= 0x32		; LF Receiver Data Buffer
.equ	LFCR1		= 0x30		; LF receiver Control Register 1
.equ	LFCR0		= 0x2F		; Low Frequency Receiver Control Register 0
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	VMCR		= 0x2B		; Voltage Monitor Control Register
.equ	AESKR		= 0x2A		; AES Key Register
.equ	AESDR		= 0x29		; AES Data Register
.equ	TMDR		= 0x28		; Timer Modulator Data Register
.equ	EIMSK		= 0x27		; External Interrupt Mask Register
.equ	PCICR		= 0x26		; Pin Change Interrupt Control Register
.equ	EECCR		= 0x24		; EEPROM Error Correction Code Register
.equ	EEPR		= 0x23		; EEPROM Protect Register
.equ	EEAR		= 0x21		; EEPROM Address Register  Bytes
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR		= 0x1E		; General Purpose I/O Register 0
.equ	EIFR		= 0x1D		; External Interrupt Flag Register
.equ	T3IFR		= 0x1C		; Timer3 Interrupt Flag Register
.equ	T2IFR		= 0x1B		; Timer2 Interrupt Flag Register
.equ	T1IFR		= 0x1A		; Timer1 Interrupt Flag Register
.equ	T0IFR		= 0x19		; Timer0 Interrupt Flag Register
.equ	LFFR		= 0x18		; LF Flag Register
.equ	PCIFR		= 0x17		; Pin Change Interrupt Flag Register
.equ	VMSR		= 0x16		; Voltage Monitor Status Register
.equ	TMIFR		= 0x15		; Timer Modulator Interrupt Flag Register
.equ	AESSR		= 0x14		; AES Status Register
.equ	AESCR		= 0x13		; AES Control Register
.equ	T3CR		= 0x12		; Timer 3 Control Register
.equ	T2CR		= 0x11		; Timer 2 Control Register
.equ	CMSR		= 0x10		; Clock Management Status Register
.equ	CMCR		= 0x0F		; Clock Management Control Register
.equ	TPFR		= 0x0E		; Transponder Status & Flag Register
.equ	TPCR		= 0x0D		; Transponder Control Register
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins


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
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable Bit
.equ	CLTPS_MASK	= 0x38		;      - Clock Timer Prescaler Select Bits (3 bits)
.equ	CLTPS0		= 3		;          CLTPS BIT0 position
.equ	CLKPS_MASK	= 0x07		;      - Clock system Prescaler Select Bits (3 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position

; ----------	Register CMCR bits		------------------------
.equ	CMCCE		= 7		; 0x80 - Clock Management Control Change Enable Bit
.equ	CMONEN		= 6		; 0x40 - Clock Monitoring Enable Bit
.equ	ECINS		= 5		; 0x20 - External Clock Input Select Bit
.equ	CCS		= 4		; 0x10 - Core Clock Select Bit
.equ	CO32D		= 3		; 0x08 - Crystal Oscillator 32 kHz Disable Bit
.equ	SRCD		= 2		; 0x04 - Slow RC-oscillator Disable Bit
.equ	CMM_MASK	= 0x03		;      - Clock Management Mode Bitss (2 bits)
.equ	CMM0		= 0		;          CMM BIT0 position

; ----------	Register CMSR bits		------------------------
.equ	RTCF		= 2		; 0x04 - Real-Time Clock Flag
.equ	SXF		= 1		; 0x02 - Slow Crystal Oscillator Flag
.equ	ECF		= 0		; 0x01 - External Clock input Flag Bit

; ----------	Register CMIMR bits		------------------------
.equ	RTCIE		= 2		; 0x04 - Real-Time Clock Interrupt Enable Bit
.equ	SXIE		= 1		; 0x02 - Slow Crystal Oscillator Interrupt Enable Bit
.equ	ECIE		= 0		; 0x01 - External Clock input Interrupt Enable Bit

; ----------	Register VMCR bits		------------------------
.equ	BODLS		= 7		; 0x80 - Brown-Out Detection Level Select Bit
.equ	BODPD		= 6		; 0x40 - Brown-Out Detection on Power-Down Bit
.equ	VMPS		= 5		; 0x20 - Voltage Monitor Power supply Select Bit
.equ	VMIM		= 4		; 0x10 - Voltage Monitor Interrupt Mask Bit
.equ	VMLS_MASK	= 0x0F		;      - Voltage Monitor Level Select Bits (4 bits)
.equ	VMLS0		= 0		;          VMLS BIT0 position

; ----------	Register VMSR bits		------------------------
.equ	VMF		= 0		; 0x01 - Voltage Monitor Flag

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
.equ	SIGRD		= 5		; 0x20 - Signature Row Read Bit
.equ	RWWSRE		= 4		; 0x10 - Read-While-Write section read enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Self Programming Enable

; ----------	Register MCUCR bits		------------------------
.equ	PUD		= 4		; 0x10 - Pull-up Disable Flag
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	TPRF		= 5		; 0x20 - TransPonder Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select Bit2 (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable Bit
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Extended power-save
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved

; ----------	Register PRR0 bits		------------------------
.equ	PRVM		= 7		; 0x80 - Power Reduction Voltage Monitor
.equ	PRDS		= 6		; 0x40 - Power Reduction IR Driver Stage
.equ	PRCU		= 5		; 0x20 - Power Reduction Crypto Unit
.equ	PRTM		= 4		; 0x10 - Power Reduction Timer Modulator
.equ	PRT3		= 3		; 0x08 - Power Reduction Timer3
.equ	PRT2		= 2		; 0x04 - Power Reduction Timer2
.equ	PRT1		= 1		; 0x02 - Power Reduction Timer1
.equ	PRLFR		= 0		; 0x01 - Power Reduction LF-Receiver Interface

; ----------	Register PRR1 bits		------------------------
.equ	PRSPI		= 1		; 0x02 - Power Reduction Serial Peripheral Interface
.equ	PRCI		= 0		; 0x01 - Power Reduction Contactless Interface



; ====	AFE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TPCR bits		------------------------
.equ	TPD		= 7		; 0x80 - Transponder Disable Bit
.equ	TPPSD		= 6		; 0x40 - Transponder Power Switch Disable Bit
.equ	TPMD_MASK	= 0x30		;      - Transponder Modulation Damping level select Bit1 (2 bits)
.equ	TPMD0		= 4		;          TPMD BIT0 position
.equ	TPMS_MASK	= 0x0C		;      - Transponder Modulation Select Bits (2 bits)
.equ	TPMS0		= 2		;          TPMS BIT0 position
.equ	TPMOD		= 1		; 0x02 - Transponder Modulator Bit
.equ	TPMA		= 0		; 0x01 - Transponder Mode Acknowledgment Bit

; ----------	Register TPIMR bits		------------------------
.equ	TPIM		= 0		; 0x01 - Transponder Interrupt Mask Bit

; ----------	Register TPFR bits		------------------------
.equ	TPPSW		= 3		; 0x08 - Transponder Power Switch Bit
.equ	TPGAP		= 2		; 0x04 - Transponder Gap Signal Bit
.equ	TPA		= 1		; 0x02 - Transponder Active Bit
.equ	TPF		= 0		; 0x01 - Transponder Flag



; ====	DDDLFRX MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LFCR0 bits		------------------------
.equ	LFVC_MASK	= 0xC0		;      - LF Receiver Velocity Control Bits (2 bits)
.equ	LFVC0		= 6		;          LFVC BIT0 position
.equ	LFMG		= 5		; 0x20 - LF receiver Max Gain Bit
.equ	LFRBS		= 4		; 0x10 - LF Receiver Buffer Data Frame Select Bit
.equ	LFBRS		= 3		; 0x08 - LF receiver Baud Rate Select Bit
.equ	LFCE_MASK	= 0x07		;      - LF receiver Channel Enable Bits (3 bits)
.equ	LFCE0		= 0		;          LFCE BIT0 position

; ----------	Register LFCR1 bits		------------------------
.equ	LFRE		= 7		; 0x80 - LF Receiver Enable Bit
.equ	LFQCE		= 6		; 0x40 - LF Receiver Quality Check Bit
.equ	LFRMSA		= 5		; 0x20 - LF receiver Rssi Measurement Start Additional Bit
.equ	LFRMS		= 4		; 0x10 - LF receiver RSSI Measurement Start Bit
.equ	LFFM_MASK	= 0x0C		;      - LF Function Mode Bits (2 bits)
.equ	LFFM0		= 2		;          LFFM BIT0 position
.equ	LFM_MASK	= 0x03		;      - LF Mode Bits (2 bits)
.equ	LFM0		= 0		;          LFM BIT0 position

; ----------	Register LFID0M bits		------------------------
.equ	ID0E		= 7		; 0x80 - Identifier 0 Enable Bit
.equ	ID0FS_MASK	= 0x1F		;      - Identifier 0 Frame Select Bits (5 bits)
.equ	ID0FS0		= 0		;          ID0FS BIT0 position

; ----------	Register LFID1M bits		------------------------
.equ	ID1E		= 7		; 0x80 - Identifier 1 Enable Bit
.equ	ID1FS_MASK	= 0x1F		;      - Identifier 1 Frame Select Bits (5 bits)
.equ	ID1FS0		= 0		;          ID1FS BIT0 position

; ----------	Register LFRDF bits		------------------------
.equ	RDFE		= 7		; 0x80 - Receive Data Frame Enable Bit
.equ	RDFS_MASK	= 0x1F		;      - Receive Data Frame Select Bits (5 bits)
.equ	RDFS0		= 0		;          RDFS BIT0 position

; ----------	Register LFIMR bits		------------------------
.equ	LFMDIM		= 6		; 0x40 - LF Manchester Decoder Error Interrupt Mask Bit
.equ	LFSDIM		= 5		; 0x20 - LF Signal Detected Interrupt Mask Bit
.equ	LFRSIM		= 4		; 0x10 - LF RSSI Data Interrupt Mask Bit
.equ	LFDBIM		= 3		; 0x08 - LF Receiver Data Buffer Interrupt Mask Bit
.equ	LFFEIM		= 2		; 0x04 - LF Receiver Frame End Interrupt Mask Bit
.equ	LFID1IM		= 1		; 0x02 - LF Identifier 1 Interrupt Mask Bit
.equ	LFID0IM		= 0		; 0x01 - LF Identifier 0 Interrupt Mask Bit

; ----------	Register LFFR bits		------------------------
.equ	LFCAF		= 7		; 0x80 - LF Clock Adjustment Flag
.equ	LFMDF		= 6		; 0x40 - LF Manchester Decoder Error Flag
.equ	LFSDF		= 5		; 0x20 - LF Signal Detect Flag
.equ	LFRSF		= 4		; 0x10 - LF RSSI Data Flag
.equ	LFDBF		= 3		; 0x08 - LF Data Buffer Full Flag
.equ	LFFEF		= 2		; 0x04 - LF Frame End Flag
.equ	LFID1F		= 1		; 0x02 - LF Identifier 1 Flag
.equ	LFID0F		= 0		; 0x01 - LF Identifier 0 Flag

; ----------	Register LFSR bits		------------------------
.equ	LFSD		= 1		; 0x02 - LF Signal Data Bit
.equ	LFES		= 0		; 0x01 - LF Envelope Signal Bit



; ====	IRLED MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LDCR bits		------------------------
.equ	LDCS_MASK	= 0x06		;      - LED Driver Current Select Bits (2 bits)
.equ	LDCS0		= 1		;          LDCS BIT0 position
.equ	LDE		= 0		; 0x01 - LED Driver Enable Bit



; ====	AES MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register AESCR bits		------------------------
.equ	AESE		= 7		; 0x80 - AES Enable Bit
.equ	AESRES		= 5		; 0x20 - AES Reset Bit
.equ	AESXOR		= 4		; 0x10 - AES State XOR load bit
.equ	AESD		= 3		; 0x08 - AES Direction Bit
.equ	AESIM		= 2		; 0x04 - AES Interrupt Mask Bit
.equ	AESWD		= 1		; 0x02 - AES Write Data Bit
.equ	AESWK		= 0		; 0x01 - AES Write Key Bit

; ----------	Register AESSR bits		------------------------
.equ	AESERF		= 7		; 0x80 - AES Error Flag Bit
.equ	AESRF		= 0		; 0x01 - AES Ready Flag Bit

; ----------	Register AESKR bits		------------------------
.equ	AESKR_MASK	= 0xFF		;      - AES Key Register Bits (8 bits)
.equ	AESKR0		= 0		;          AESKR BIT0 position



; ====	MOD MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TMCR bits		------------------------
.equ	TMSSIE		= 7		; 0x80 - Timer Modulator SSI Enable Bit
.equ	TMCPOL		= 6		; 0x40 - Timer Modulator Clock Polarity for SSI shift clock
.equ	MI4S_MASK	= 0x30		;      - Modulator Interface 4 Select Bits (2 bits)
.equ	MI4S0		= 4		;          MI4S BIT0 position
.equ	MI2S_MASK	= 0x0C		;      - Modulator Interface 2 Select Bits (2 bits)
.equ	MI2S0		= 2		;          MI2S BIT0 position
.equ	MI1S_MASK	= 0x03		;      - Modulator Interface 1 Select Bits (2 bits)
.equ	MI1S0		= 0		;          MI1S BIT0 position

; ----------	Register TMMR bits		------------------------
.equ	TM12S		= 7		; 0x80 - Timer Modulator 1/2 output Select bit
.equ	TMMS_MASK	= 0x60		;      - Timer Modulator Mode Select Bits (2 bits)
.equ	TMMS0		= 5		;          TMMS BIT0 position
.equ	MOUTC		= 4		; 0x10 - Modulator OUT signal Complement Bit
.equ	MSCS_MASK	= 0x0C		;      - Modulator Shift Clock Select Bits (2 bits)
.equ	MSCS0		= 2		;          MSCS BIT0 position
.equ	MOS_MASK	= 0x03		;      - Modulator Output Select Bits (2 bits)
.equ	MOS0		= 0		;          MOS BIT0 position

; ----------	Register TMIFR bits		------------------------
.equ	TMTXS		= 4		; 0x10 - Timer Modulator SSI Transmit Status Bit
.equ	TMRXS		= 3		; 0x08 - Timer Modulator SSI Receive Status Bit
.equ	TMTCF		= 2		; 0x04 - Timer Modulator SSI Transmit Complete Flag Bit
.equ	TMTXF		= 1		; 0x02 - Timer Modulator SSI Transmit Flag Bit
.equ	TMRXF		= 0		; 0x01 - Timer Modulator SSI Receive Flag Bit

; ----------	Register TMIMR bits		------------------------
.equ	TMTCIM		= 2		; 0x04 - Timer Modulator SSI Transmit Complete Interrupt Mask Bit
.equ	TMTXIM		= 1		; 0x02 - Timer Modulator SSI Transmit Interrupt Mask Bit
.equ	TMRXIM		= 0		; 0x01 - Timer Modulator SSI Receive Interrupt Mask Bit



; ====	VMON MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register VMCR bits		------------------------
;.equ	BODLS		= 7		; 0x80 - Brown-Out Detection Level Bit
;.equ	BODPD		= 6		; 0x40 - Brown-Out Detection on Power-Down Bit
;.equ	VMPS		= 5		; 0x20 - Voltage Monitor Power Supply Voltage Select Bit
;.equ	VMIM		= 4		; 0x10 - Voltag Monitor Interrupt Mask bit
;.equ	VMLS_MASK	= 0x0F		;      - Voltage Monitor Level Select Bits (4 bits)
;.equ	VMLS0		= 0		;          VMLS BIT0 position

; ----------	Register VMSR bits		------------------------
;.equ	VMF		= 0		; 0x01 - Voltage Monitor Flag



; ====	EXTERNAL_INTERRUPT MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC01		= 1		; 0x02 - External Interrupt Sense Control 0 Bit 1
.equ	ISC00		= 0		; 0x01 - External Interrupt Sense Control 0 Bit 0

; ----------	Register EIMSK bits		------------------------
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable

; ----------	Register EIFR bits		------------------------
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0

; ----------	Register PCMSK0 bits		------------------------
.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
;.equ	PCINT_MASK	= 0xFF		;      - Pin Change Enable Masks (8 bits)
;.equ	PCINT0		= 0		;          PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x03		;      - Pin Change Interrupt Flags (2 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x03		;      - Pin Change Interrupt Enables (2 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECCR bits		------------------------
.equ	EEL_MASK	= 0x0F		;      - EEPROM Lookup Table Data Bits (4 bits)
.equ	EEL0		= 0		;          EEL BIT0 position

; ----------	Register EEPR bits		------------------------
.equ	EEAP_MASK	= 0x0F		;      - EEPROM Access Protect Bits (4 bits)
.equ	EEAP0		= 0		;          EEAP BIT0 position

; ----------	Register EECR bits		------------------------
.equ	EELP		= 6		; 0x40 - EEPROM Low Power Pump Enable Bit
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable



; ====	TIMER_COUNTER_0 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T0CR bits		------------------------
.equ	T0PR		= 4		; 0x10 - Timer 0 Prescaler Reset Bit
.equ	T0IE		= 3		; 0x08 - Timer 0 Interrupt Enable Bit
.equ	T0PS_MASK	= 0x07		;      - Timer 0 Prescaler Select Bits (3 bits)
.equ	T0PS0		= 0		;          T0PS BIT0 position

; ----------	Register T0IFR bits		------------------------
.equ	T0F		= 0		; 0x01 - Timer 0 Flag Bit



; ====	TIMER_COUNTER_1 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T1CR bits		------------------------
.equ	T1E		= 7		; 0x80 - Timer 1 Enable Bit
.equ	T1CS_MASK	= 0x18		;      - Timer 1 Clock Select Bits (2 bits)
.equ	T1CS0		= 3		;          T1CS BIT0 position
.equ	T1IE		= 2		; 0x04 - Timer 1 Interrupt Enable Bit
.equ	T1PS_MASK	= 0x03		;      - Timer 1 Prescaler Select Bits (2 bits)
.equ	T1PS0		= 0		;          T1PS BIT0 position

; ----------	Register T1IFR bits		------------------------
.equ	T1F		= 0		; 0x01 - Timer 1 Flag Bit



; ====	TIMER_COUNTER_2 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T2CR bits		------------------------
.equ	T2E		= 7		; 0x80 - Timer 2 Enable Bit
.equ	T2TS		= 6		; 0x40 - Timer 2 Toggle with Start Bit
.equ	T2RES		= 5		; 0x20 - Timer 2 Reset Bit
.equ	T2TOP		= 4		; 0x10 - Toggle Output Preset Bit
.equ	T2GRM		= 3		; 0x08 - Timer 2 Gap Reset Mask Bit
.equ	T2CRM		= 2		; 0x04 - Timer2 Compare Reset Mask Bit
.equ	T2CTM		= 1		; 0x02 - Timer 2 Compare Toggle Mask Bit
.equ	T2OTM		= 0		; 0x01 - Timer 2 Overflow Toggle Mask Bit

; ----------	Register T2IFR bits		------------------------
.equ	T2COF		= 1		; 0x02 - Timer 2 Compare Flag Bit
.equ	T2OFF		= 0		; 0x01 - Timer 2 Overflow Flag Bit

; ----------	Register T2IMR bits		------------------------
.equ	T2CIM		= 1		; 0x02 - Timer 2 Compare Interrupt Mask Bit
.equ	T2OIM		= 0		; 0x01 - Timer 2 Overflow Interrupt Mask Bit

; ----------	Register T2MR bits		------------------------
.equ	T2D_MASK	= 0xC0		;      - Timer 2 Duty Cycle Bits (2 bits)
.equ	T2D0		= 6		;          T2D BIT0 position
.equ	T2PS_MASK	= 0x38		;      - Timer 2 Prescaler Select Bits (3 bits)
.equ	T2PS0		= 3		;          T2PS BIT0 position
.equ	T2CS_MASK	= 0x07		;      - Timer 2 Clock Select Bits (3 bits)
.equ	T2CS0		= 0		;          T2CS BIT0 position



; ====	TIMER_COUNTER_3 MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register T3CR bits		------------------------
.equ	T3E		= 7		; 0x80 - Timer 3 Enable Bit
.equ	T3CPTM		= 6		; 0x40 - Timer 3 Capture Toggle Mask Bit
.equ	T3RES		= 5		; 0x20 - Timer 3 Reset Bit
.equ	T3TOP		= 4		; 0x10 - Timer 3 Toggle Output Preset Bit
.equ	T3CPRM		= 3		; 0x08 - Timer 3 Capture Reset Mask Bit
.equ	T3CRM		= 2		; 0x04 - Timer3 Compare Reset Mask Bit
.equ	T3CTM		= 1		; 0x02 - Timer 3 Compare Toggle Mask Bit
.equ	T3OTM		= 0		; 0x01 - Timer 3 Overflow Toggle Mask Bit

; ----------	Register T3MRA bits		------------------------
.equ	T3ICS_MASK	= 0xC0		;      - Timer 3 Input Capture Select Bits (2 bits)
.equ	T3ICS0		= 6		;          T3ICS BIT0 position
.equ	T3CNC		= 5		; 0x20 - Timer 3 Input Capture Noise Canceler Bit
.equ	T3CE_MASK	= 0x18		;      - Timer 3 Capture Edge select Bits (2 bits)
.equ	T3CE0		= 3		;          T3CE BIT0 position
.equ	T3SCE		= 2		; 0x04 - Timer 3 Software Capture Enable Bit
.equ	T3CS_MASK	= 0x03		;      - Timer 3 Clock Select Bits (2 bits)
.equ	T3CS0		= 0		;          T3CS BIT0 position

; ----------	Register T3MRB bits		------------------------
.equ	T3PS_MASK	= 0x07		;      - Timer 3 Prescaler Select Bits (3 bits)
.equ	T3PS0		= 0		;          T3PS BIT0 position

; ----------	Register T3IFR bits		------------------------
.equ	T3ICF		= 2		; 0x04 - Timer3 Input Capture Flag bit
.equ	T3COF		= 1		; 0x02 - Timer3 Compare Flag bit
.equ	T3OFF		= 0		; 0x01 - Timer3 OverFlow Flag bit

; ----------	Register T3IMR bits		------------------------
.equ	T3CPIM		= 2		; 0x04 - Timer3 Capture Interrupt Mask bit
.equ	T3CIM		= 1		; 0x02 - Timer3 Compare Interrupt Mask bit
.equ	T3OIM		= 0		; 0x01 - Timer3 Overflow Interrupt Mask bit



; ====	RTC_TIMER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register RTCCR bits		------------------------
.equ	RTCR		= 0		; 0x01 - Real-Time Counter Reset Bit



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
.equ	WDPS_MASK	= 0x07		;      - Watch Dog Timer Prescaler Select bits (3 bits)
.equ	WDPS0		= 0		;          WDPS BIT0 position



; ====	CRC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CRCCR bits		------------------------
.equ	CRCRS		= 7		; 0x80 - CRC Reset Bit
.equ	REFLO		= 5		; 0x20 - Reflect Output Data Bit
.equ	REFLI		= 4		; 0x10 - Reflect Input Data Bit
.equ	CRCSEL		= 3		; 0x08 - CRC Mode Select Bit
.equ	CRCN_MASK	= 0x07		;      - Partial CRC Computation Bits (3 bits)
.equ	CRCN0		= 0		;          CRCN BIT0 position

; ----------	Register CRCSR bits		------------------------
.equ	CRCBF		= 0		; 0x01 - CRC Busy Flag




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
.equ	INT_VECTORS_NUM		= 30
.equ	INT_VECTORS_SIZE	= 0x3C
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Transponder Reset
;	1	TPINT		; Transponder Mode Interrupt
;	2	INT0		; External Interrupt Request 0
;	3	PCINT0		; Pin Change Interrupt Request 0
;	4	PCINT1		; Pin Change Interrupt Request 1
;	5	VMINT		; Voltage Monitoring Interrupt
;	6	T0INT		; Timer0 Interval Interrupt
;	7	LFID0INT	; LF-Receiver Identifier 0 Interrupt
;	8	LFID1INT	; LF-Receiver Identifier 1 Interrupt
;	9	LFFEINT		; LF-Receiver Frame End Interrupt
;	10	LFDBINT		; LF-Receiver Data Buffer full Interrupt
;	11	T3CAPINT	; Timer/Counter3 Capture Event Interrupt
;	12	T3COMINT	; Timer/Counter3 Compare Match Interrupt
;	13	T3OVFINT	; Timer/Counter3 Overflow Interrupt
;	14	T2COMINT	; Timer/Counter2 Compare Match Interrupt
;	15	T2OVFINT	; Timer/Counter2 Overflow Interrupt
;	16	T1INT		; Timer 1 Interval Interrupt
;	17	SPISTC		; SPI Serial Transfer Complete Interrupt
;	18	TMRXBINT	; Timer Modulator SSI Receive Buffer Interrupt
;	19	TMTXBINT	; Timer Modulator SSI Transmit Buffer Interrupt
;	20	TMTXCINT	; Timer Modulator Transmit Complete Interrupt
;	21	AESINT		; AES Interrupt
;	22	LFRSSINT	; LF-Receiver RSSi measurement Interrupt
;	23	LFSDINT		; LF-Receiver Signal Detect Interrupt
;	24	LFMDINT		; LF-Receiver Manchester Decoder error Interrupt 
;	25	EXCMINT		; External Input Clock Monitoring Interrupt
;	26	EXXMINT		; External XTAL Oscillator Break Down Interrupt
;	27	RTCINT		; Real Time Clock Interrupt
;	28	EEREADY		; EEPROM Ready Interrupt
;	29	SPMREADY	; Store Program Memory Ready 



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATA5790.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(1 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(1 <<Reserved) \
;#				  & ~(1 <<_32OEN) \
;#				  & ~(0 <<EXTCLKEN)
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
;#	.message "===== Lockbits ======"
;#	.message " LOCKBIT	", LOCKBITS_LOCKBIT
;#	.message "====================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and Transponder Reset
;#		reti			; TPINT		 - Transponder Mode Interrupt
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; VMINT		 - Voltage Monitoring Interrupt
;#		reti			; T0INT		 - Timer0 Interval Interrupt
;#		reti			; LFID0INT	 - LF-Receiver Identifier 0 Interrupt
;#		reti			; LFID1INT	 - LF-Receiver Identifier 1 Interrupt
;#		reti			; LFFEINT	 - LF-Receiver Frame End Interrupt
;#		reti			; LFDBINT	 - LF-Receiver Data Buffer full Interrupt
;#		reti			; T3CAPINT	 - Timer/Counter3 Capture Event Interrupt
;#		reti			; T3COMINT	 - Timer/Counter3 Compare Match Interrupt
;#		reti			; T3OVFINT	 - Timer/Counter3 Overflow Interrupt
;#		reti			; T2COMINT	 - Timer/Counter2 Compare Match Interrupt
;#		reti			; T2OVFINT	 - Timer/Counter2 Overflow Interrupt
;#		reti			; T1INT		 - Timer 1 Interval Interrupt
;#		reti			; SPISTC	 - SPI Serial Transfer Complete Interrupt
;#		reti			; TMRXBINT	 - Timer Modulator SSI Receive Buffer Interrupt
;#		reti			; TMTXBINT	 - Timer Modulator SSI Transmit Buffer Interrupt
;#		reti			; TMTXCINT	 - Timer Modulator Transmit Complete Interrupt
;#		reti			; AESINT	 - AES Interrupt
;#		reti			; LFRSSINT	 - LF-Receiver RSSi measurement Interrupt
;#		reti			; LFSDINT	 - LF-Receiver Signal Detect Interrupt
;#		reti			; LFMDINT	 - LF-Receiver Manchester Decoder error Interrupt 
;#		reti			; EXCMINT	 - External Input Clock Monitoring Interrupt
;#		reti			; EXXMINT	 - External XTAL Oscillator Break Down Interrupt
;#		reti			; RTCINT	 - Real Time Clock Interrupt
;#		reti			; EEREADY	 - EEPROM Ready Interrupt
;#		reti			; SPMREADY	 - Store Program Memory Ready 
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA5790_INC_ */

; ************************ END OF FILE *********************************

