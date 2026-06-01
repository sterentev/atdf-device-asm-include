;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA5835
;* Title             : Register/Mask/Bit Definitions for the ATA5835
;* File Name         : ATA5835.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-06-01 14:53:05 UTC
;
;***********************************************************************

#ifndef _ATA5835_INC_
#define _ATA5835_INC_

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
.device	ATA5835
.equ	JTAGID		= 0x946b
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x94
.equ	SIGNATURE2	= 0x6b


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
;   ROM
.equ	ADDR_ROM_START			= 0x0000
.equ	ADDR_ROM_END			= 0x7FFF
.equ	ADDR_ROM_SIZE			= 0x8000
;   FLASH
.equ	ADDR_FLASH_START		= 0x8000
.equ	ADDR_FLASH_END			= 0xD1FF
.equ	ADDR_FLASH_SIZE			= 0x5200

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
.equ	ADDR_MAPPED_IO_END		= 0x01FF
.equ	ADDR_MAPPED_IO_SIZE		= 0x01E0
;   IRAM
.equ	ADDR_IRAM_START			= 0x0200
.equ	ADDR_IRAM_END			= 0x09FF
.equ	ADDR_IRAM_SIZE			= 0x0800

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x03FF
.equ	ADDR_EEPROM_SIZE		= 0x0400
;   CALDATA
.equ	ADDR_CALDATA_START		= 0x0400
.equ	ADDR_CALDATA_END		= 0x047F
.equ	ADDR_CALDATA_SIZE		= 0x0080




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM memory through the Chip Erase cycle
.equ	BOOTRST		= 2		; 0x04 - Select interrupt vector location
.equ	RSTDISBL	= 1		; 0x02 - Disable external Reset
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
.equ	BLB0_MASK	= 0x0C		;      - Application Protection (2 bits)
.equ	BLB00		= 2		;          BLB0 BIT0 position
.equ	BLB1_MASK	= 0x30		;      - Boot Loader Protection (2 bits)
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
;			0x00		; LPM and SPM prohibited in Boot Loader Section
;			0x10		; LPM prohibited in Boot Loader Section
;			0x20		; SPM prohibited in Boot Loader Section
;			0x30		; No lock on SPM and LPM in Boot Loader Section




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	TRCID		= 0x0180	; [MEMORY MAPPED] Trace Identifier
.equ	TRCDR		= 0x017F	; [MEMORY MAPPED] Trace Unit Data Register
.equ	TRCCR		= 0x017E	; [MEMORY MAPPED] Trace Unit Control Register
.equ	LINDAT		= 0x017D	; [MEMORY MAPPED] LIN/UART Data Register
.equ	LINSEL		= 0x017C	; [MEMORY MAPPED] LIN/UART Data Buffer Selection
.equ	LINIDR		= 0x017B	; [MEMORY MAPPED] LIN/UART Identifier Register
.equ	LINDLR		= 0x017A	; [MEMORY MAPPED] LIN/UART Data Length Register
.equ	LINBRRH		= 0x0179	; [MEMORY MAPPED] LIN/UART Baud Rate Register High Byte
.equ	LINBRRL		= 0x0178	; [MEMORY MAPPED] LIN/UART Baud Rate Register Low Byte
.equ	LINBTR		= 0x0177	; [MEMORY MAPPED] LIN/UART Bit Timing Register
.equ	LINERR		= 0x0176	; [MEMORY MAPPED] LIN/UART Error Register
.equ	LINENIR		= 0x0175	; [MEMORY MAPPED] LIN/UART Enable Interrupt Register
.equ	LINSIR		= 0x0174	; [MEMORY MAPPED] LIN Status and Interrupt Register
.equ	LINCR		= 0x0173	; [MEMORY MAPPED] LIN/UART Control Register
.equ	OCGATE		= 0x0172	; [MEMORY MAPPED] Oscillator Calibration Counter Gate
.equ	OCCNT		= 0x0171	; [MEMORY MAPPED] Oscillator Calibration Counter Value
.equ	OCCR		= 0x0170	; [MEMORY MAPPED] Oscillator Calibration Counter Configuration Register
.equ	RSCOM		= 0x016F	; [MEMORY MAPPED] RSSI Compensation Register
.equ	RSHDV		= 0x016E	; [MEMORY MAPPED] RSSI High Band Damping Value
.equ	RSLDV		= 0x016D	; [MEMORY MAPPED] RSSI Low Band Damping Value
.equ	RSIFG		= 0x016C	; [MEMORY MAPPED] RSSI IF Amplifier Gain
.equ	RSHSG		= 0x016B	; [MEMORY MAPPED] RSSI LNA High Sensitivity Gain
.equ	EEST		= 0x016A	; [MEMORY MAPPED] EEPROM Status Register
.equ	PGMST		= 0x0169	; [MEMORY MAPPED] Program Memory Status Register
.equ	EECR2		= 0x0168	; [MEMORY MAPPED] EEPROM Control Register 2
.equ	SFIR		= 0x0167	; [MEMORY MAPPED] SPI FIFO Interrupt Register
.equ	SFFR		= 0x0166	; [MEMORY MAPPED] SPI FIFO Fill Status Register
.equ	DBGSW		= 0x0165	; [MEMORY MAPPED] Debug Support Switch
.equ	DBENC		= 0x0164	; [MEMORY MAPPED] Debounce Enable Port C
.equ	DBENB		= 0x0163	; [MEMORY MAPPED] Debounce Enable Port B
.equ	DBTC		= 0x0162	; [MEMORY MAPPED] Debounce Timer Compare
.equ	DBCR		= 0x0161	; [MEMORY MAPPED] Debounce Control Register
.equ	RSSC		= 0x0160	; [MEMORY MAPPED] RSSI Configuration Register
.equ	RSSH		= 0x015F	; [MEMORY MAPPED] RSSI High Threshold
.equ	RSSL		= 0x015E	; [MEMORY MAPPED] RSSI Low Threshold
.equ	RSSPK		= 0x015D	; [MEMORY MAPPED] RSSI Peak Value
.equ	RSSAV		= 0x015C	; [MEMORY MAPPED] RSSI Average Value
.equ	IDS		= 0x015B	; [MEMORY MAPPED] ID Check Status
.equ	IDC		= 0x015A	; [MEMORY MAPPED] ID Check Configuration
.equ	IDB3		= 0x0159	; [MEMORY MAPPED] ID Check Byte 3
.equ	IDB2		= 0x0158	; [MEMORY MAPPED] ID Check Byte 2
.equ	IDB1		= 0x0157	; [MEMORY MAPPED] ID Check Byte 1
.equ	IDB0		= 0x0156	; [MEMORY MAPPED] ID Check Byte 0
.equ	CRCDOR		= 0x0155	; [MEMORY MAPPED] CRC Data Output Register
.equ	CRCCR		= 0x0154	; [MEMORY MAPPED] CRC Control Register
.equ	RXDSA		= 0x0153	; [MEMORY MAPPED] Receive Data Shift Register Path A
.equ	RXCPHA		= 0x0152	; [MEMORY MAPPED] Rx CRC Polynomial High Byte Path A
.equ	RXCPLA		= 0x0151	; [MEMORY MAPPED] Rx CRC Polynomial Low Byte Path A
.equ	RXCIHA		= 0x0150	; [MEMORY MAPPED] Rx CRC Init Value High Byte Path A
.equ	RXCILA		= 0x014F	; [MEMORY MAPPED] Rx CRC Init Value Low Byte Path A
.equ	RXCSBA		= 0x014E	; [MEMORY MAPPED] Rx CRC Skip Bit Number Path A
.equ	RXCRHA		= 0x014D	; [MEMORY MAPPED] Rx CRC Result High Byte Path A
.equ	RXCRLA		= 0x014C	; [MEMORY MAPPED] Rx CRC Result Low Byte Path A
.equ	RXTLHA		= 0x014B	; [MEMORY MAPPED] Rx Telegram Length High Byte Path A
.equ	RXTLLA		= 0x014A	; [MEMORY MAPPED] Rx Telegram Length Low Byte Path A
.equ	RXDSB		= 0x0149	; [MEMORY MAPPED] Receive Data Shift Register Path B
.equ	RXCPHB		= 0x0148	; [MEMORY MAPPED] Rx CRC Polynomial High Byte Path B
.equ	RXCPLB		= 0x0147	; [MEMORY MAPPED] Rx CRC Polynomial Low Byte Path B
.equ	RXCIHB		= 0x0146	; [MEMORY MAPPED] Rx CRC Init Value High Byte Path B
.equ	RXCILB		= 0x0145	; [MEMORY MAPPED] Rx CRC Init Value Low Byte Path B
.equ	RXCSBB		= 0x0144	; [MEMORY MAPPED] Rx CRC Skip Bit Number Path B
.equ	RXCRHB		= 0x0143	; [MEMORY MAPPED] Rx CRC Result High Byte Path B
.equ	RXCRLB		= 0x0142	; [MEMORY MAPPED] Rx CRC Result Low Byte Path B
.equ	RXTLHB		= 0x0141	; [MEMORY MAPPED] Rx Telegram Length High Byte Path B
.equ	RXTLLB		= 0x0140	; [MEMORY MAPPED] Rx Telegram Length Low Byte Path B
.equ	RXBC2		= 0x013F	; [MEMORY MAPPED] Rx Buffer Configuration 2
.equ	RXBC1		= 0x013E	; [MEMORY MAPPED] Rx Buffer Configuration 1
.equ	TMCR1		= 0x013D	; [MEMORY MAPPED] Tx Modulator Control Register 1
.equ	TMCR2		= 0x013C	; [MEMORY MAPPED] Tx Modulator Control Register 2
.equ	TMSR		= 0x013B	; [MEMORY MAPPED] Tx Modulator Status Register
.equ	TMSSC		= 0x013A	; [MEMORY MAPPED] Tx Modulator Stop Sequence Configuration
.equ	TMTL		= 0x0138	; [MEMORY MAPPED] Tx Modulator Telegram Length
.equ	TMSHR		= 0x0137	; [MEMORY MAPPED] Tx Modulator Shift Register
.equ	TMCP		= 0x0135	; [MEMORY MAPPED] Tx Modulator CRC Polynomial
.equ	TMCI		= 0x0133	; [MEMORY MAPPED] Tx Modulator CRC Init Value
.equ	TMCSB		= 0x0132	; [MEMORY MAPPED] Tx Modulator CRC Skip Bit Number
.equ	TMCR		= 0x0130	; [MEMORY MAPPED] Tx Modulator CRC Result
.equ	TMFSM		= 0x012F	; [MEMORY MAPPED] Tx Modulator Finite State Machine
.equ	SSMFCR		= 0x012E	; [MEMORY MAPPED] Sequencer State Machine Flow Control Register
.equ	SOTTOB		= 0x012D	; [MEMORY MAPPED] Start Of Telegram Time Out Path B
.equ	SOTTOA		= 0x012C	; [MEMORY MAPPED] Start Of Telegram Time Out Path A
.equ	WCOTOB		= 0x012B	; [MEMORY MAPPED] Wake Check Ok Time-Out Path B
.equ	WCOTOA		= 0x012A	; [MEMORY MAPPED] Wake Check Ok Time-Out Path A
.equ	EOTC3B		= 0x0129	; [MEMORY MAPPED] End Of Telegram Conditions 3 Path B
.equ	EOTC2B		= 0x0128	; [MEMORY MAPPED] End Of Telegram Conditions 2 Path B
.equ	EOTC1B		= 0x0127	; [MEMORY MAPPED] End Of Telegram Conditions 1 Path B
.equ	EOTC3A		= 0x0126	; [MEMORY MAPPED] End Of Telegram Conditions 3 Path A
.equ	EOTC2A		= 0x0125	; [MEMORY MAPPED] End Of Telegram Conditions 2 Path A
.equ	EOTC1A		= 0x0124	; [MEMORY MAPPED] End Of Telegram Conditions 1 Path A
.equ	SOTC2B		= 0x0123	; [MEMORY MAPPED] Start Of Telegram Conditions 2 Path B
.equ	SOTC1B		= 0x0122	; [MEMORY MAPPED] Start Of Telegram Conditions 1 Path B
.equ	SOTC2A		= 0x0121	; [MEMORY MAPPED] Start Of Telegram Conditions 2 Path A
.equ	SOTC1A		= 0x0120	; [MEMORY MAPPED] Start Of Telegram Conditions 1 Path A
.equ	SPARE1		= 0x010D	; [MEMORY MAPPED] RF Front End Spare Register 1
.equ	FEBIA		= 0x010C	; [MEMORY MAPPED] RF Front End Amplifier Bias
.equ	FEVCO		= 0x010B	; [MEMORY MAPPED] RF Front End VCO and PLL Control
.equ	FECR		= 0x010A	; [MEMORY MAPPED] RF Front End Control Register
.equ	FETN4		= 0x0109	; [MEMORY MAPPED] RF Front End RC Tuning 4bit Register
.equ	FEMS		= 0x0108	; [MEMORY MAPPED] RF Front End Main and Swallow Counter
.equ	FEBT		= 0x0107	; [MEMORY MAPPED] RF Front End RC Tuning
.equ	FEVCT		= 0x0106	; [MEMORY MAPPED] RF Front End VCO Tuning
.equ	FEPAC		= 0x0105	; [MEMORY MAPPED] RF Front End Power Amplifier Control
.equ	FEAS		= 0x0104	; [MEMORY MAPPED] RF Front End Antenna Switch
.equ	FELNA		= 0x0103	; [MEMORY MAPPED] RF Front End LNA Bias
.equ	FEEN2		= 0x0102	; [MEMORY MAPPED] RF Front End Enable 2
.equ	FEEN1		= 0x0101	; [MEMORY MAPPED] RF Front End Enable 1
.equ	FESR		= 0x0100	; [MEMORY MAPPED] RF Front End Status Register
.equ	GTCR		= 0xFD		; [MEMORY MAPPED] Get Telegram Control Register
.equ	MSMCR4		= 0xFC		; [MEMORY MAPPED] Master State Machine Control Register 4
.equ	MSMCR3		= 0xFB		; [MEMORY MAPPED] Master State Machine Control Register 3
.equ	MSMCR2		= 0xFA		; [MEMORY MAPPED] Master State Machine Control Register 2
.equ	MSMCR1		= 0xF9		; [MEMORY MAPPED] Master State Machine Control Register 1
.equ	SSMXSR		= 0xF8		; [MEMORY MAPPED] Sequencer State Machine Extended State Register
.equ	SSMSTR		= 0xF7		; [MEMORY MAPPED] Sequencer State Machine State Register
.equ	MSMSTR		= 0xF6		; [MEMORY MAPPED] Master State Machine State Register
.equ	SSMIMR		= 0xF5		; [MEMORY MAPPED] Sequencer State Machine Interrupt Mask Register
.equ	SSMIFR		= 0xF4		; [MEMORY MAPPED] Sequencer State Machine Interrupt Flag Register
.equ	SSMSR		= 0xF3		; [MEMORY MAPPED] Sequencer State Machine Status Register
.equ	SSMRR		= 0xF2		; [MEMORY MAPPED] Sequencer State Machine Run Register
.equ	SSMFBR		= 0xF1		; [MEMORY MAPPED] Sequencer State Machine Filter Bandwidth Register
.equ	SSMRCR		= 0xF0		; [MEMORY MAPPED] Sequencer State Machine Rx Control Register
.equ	SSMCR		= 0xEF		; [MEMORY MAPPED] Sequencer State Machine Control Register
.equ	SFC		= 0xEE		; [MEMORY MAPPED] Support FIFO Configuration
.equ	SFI		= 0xED		; [MEMORY MAPPED] Support FIFO Interrupt Mask
.equ	SFD		= 0xEC		; [MEMORY MAPPED] Support FIFO Data
.equ	SFRP		= 0xEB		; [MEMORY MAPPED] Support FIFO Read Pointer
.equ	SFWP		= 0xEA		; [MEMORY MAPPED] Support FIFO Write Pointer
.equ	SFL		= 0xE9		; [MEMORY MAPPED] Support FIFO Fill Level
.equ	SFS		= 0xE8		; [MEMORY MAPPED] Support FIFO Status
.equ	DFC		= 0xE7		; [MEMORY MAPPED] Data FIFO Configuration
.equ	DFI		= 0xE6		; [MEMORY MAPPED] Data FIFO Interrupt Mask
.equ	DFD		= 0xE5		; [MEMORY MAPPED] Data FIFO Data
.equ	DFRP		= 0xE4		; [MEMORY MAPPED] Data FIFO Read Pointer
.equ	DFWP		= 0xE3		; [MEMORY MAPPED] Data FIFO Write Pointer
.equ	DFL		= 0xE2		; [MEMORY MAPPED] Data FIFO Fill Level
.equ	DFTL		= 0xE0		; [MEMORY MAPPED] Data FIFO Telegram Length
.equ	DFS		= 0xDF		; [MEMORY MAPPED] Data FIFO Status
.equ	DCC2		= 0xDE		; [MEMORY MAPPED] DCDC Converter Control 2
.equ	DCC1		= 0xDD		; [MEMORY MAPPED] DCDC Converter Control 1
.equ	RCTUNE4		= 0xDC		; [MEMORY MAPPED] Resistor Capacitor 4 Bit Tuning
.equ	CALRDY		= 0xDA		; [MEMORY MAPPED] Calibration Ready Signature
.equ	DCTST		= 0xD9		; [MEMORY MAPPED] DCDC Converter Test Mode
.equ	DCCAL3		= 0xD8		; [MEMORY MAPPED] DCDC Converter Calibration 3
.equ	DCCAL2		= 0xD7		; [MEMORY MAPPED] DCDC Converter Calibration 2
.equ	DCCAL1		= 0xD6		; [MEMORY MAPPED] DCDC Converter Calibration 1
.equ	SUPCA4		= 0xD5		; [MEMORY MAPPED] Supply Calibration 4
.equ	SUPCA3		= 0xD4		; [MEMORY MAPPED] Supply Calibration 3
.equ	SUPCA2		= 0xD3		; [MEMORY MAPPED] Supply Calibration 2
.equ	SUPCA1		= 0xD2		; [MEMORY MAPPED] Supply Calibration 1
.equ	SUPCR		= 0xD1		; [MEMORY MAPPED] Supply Control Register
.equ	SUPFR		= 0xD0		; [MEMORY MAPPED] Supply Flag Register
.equ	CMOCR		= 0xCF		; [MEMORY MAPPED] Clock Management Override Control Register
.equ	CMSR		= 0xCE		; [MEMORY MAPPED] Clock Management Status Register
.equ	FRCCAL		= 0xCD		; [MEMORY MAPPED] Fast RC Oscillator Calibration
.equ	SRCCAL		= 0xCC		; [MEMORY MAPPED] Slow RC Oscillator Calibration
.equ	XFUSE		= 0xCB		; [MEMORY MAPPED] XROW Fuse
.equ	CLKOCR		= 0xCA		; [MEMORY MAPPED] Clock output control Register
.equ	CLKOD		= 0xC9		; [MEMORY MAPPED] Clock Output Divider
.equ	WUP4A		= 0xC8		; [MEMORY MAPPED] Wake-Up Pattern Byte 4 Path A
.equ	WUP3A		= 0xC7		; [MEMORY MAPPED] Wake-Up Pattern Byte 3 Path A
.equ	WUP2A		= 0xC6		; [MEMORY MAPPED] Wake-Up Pattern Byte 2 Path A
.equ	WUP1A		= 0xC5		; [MEMORY MAPPED] Wake-Up Pattern Byte 1 Path A
.equ	SFID4A		= 0xC4		; [MEMORY MAPPED] Start Frame ID Byte 4 Path A
.equ	SFID3A		= 0xC3		; [MEMORY MAPPED] Start Frame ID Byte 3 Path A
.equ	SFID2A		= 0xC2		; [MEMORY MAPPED] Start Frame ID Byte 2 Path A
.equ	SFID1A		= 0xC1		; [MEMORY MAPPED] Start Frame ID Byte 1 Path A
.equ	WUPLA		= 0xC0		; [MEMORY MAPPED] Wake-Up Pattern Length Path A
.equ	WUPTA		= 0xBF		; [MEMORY MAPPED] Wake-Up Pattern Threshold Path A
.equ	SFIDLA		= 0xBE		; [MEMORY MAPPED] Start Frame ID Length Path A
.equ	SFIDCA		= 0xBD		; [MEMORY MAPPED] Start Frame ID Configuration Path A
.equ	WUP4B		= 0xBC		; [MEMORY MAPPED] Wake-Up Pattern Byte 4 Path B
.equ	WUP3B		= 0xBB		; [MEMORY MAPPED] Wake-Up Pattern Byte 3 Path B
.equ	WUP2B		= 0xBA		; [MEMORY MAPPED] Wake-Up Pattern Byte 2 Path B
.equ	WUP1B		= 0xB9		; [MEMORY MAPPED] Wake-Up Pattern Byte 1 Path B
.equ	SFID4B		= 0xB8		; [MEMORY MAPPED] Start Frame ID Byte 4 Path B
.equ	SFID3B		= 0xB7		; [MEMORY MAPPED] Start Frame ID Byte 3 Path B
.equ	SFID2B		= 0xB6		; [MEMORY MAPPED] Start Frame ID Byte 2 Path B
.equ	SFID1B		= 0xB5		; [MEMORY MAPPED] Start Frame ID Byte 1 Path B
.equ	WUPLB		= 0xB4		; [MEMORY MAPPED] Wake-Up Pattern Length Path B
.equ	WUPTB		= 0xB3		; [MEMORY MAPPED] Wake-Up Pattern Threshold Path B
.equ	SFIDLB		= 0xB2		; [MEMORY MAPPED] Start Frame ID Length Path B
.equ	SFIDCB		= 0xB1		; [MEMORY MAPPED] Start Frame ID Configuration Path B
.equ	CHDN		= 0xB0		; [MEMORY MAPPED] Channel Filter Down Sampling Register
.equ	CHCR		= 0xAF		; [MEMORY MAPPED] Channel Filter Configuration Register
.equ	DMDN		= 0xAE		; [MEMORY MAPPED] Demodulator Down Sampling
.equ	DMCRA		= 0xAD		; [MEMORY MAPPED] Demodulator Control Path A
.equ	DMCRB		= 0xAC		; [MEMORY MAPPED] Demodulator Control Path B
.equ	DMCDA		= 0xAB		; [MEMORY MAPPED] Demodulator Carrier Detect Path A
.equ	DMCDB		= 0xAA		; [MEMORY MAPPED] Demodulator Carrier Detect Path B
.equ	DMMA		= 0xA9		; [MEMORY MAPPED] Demodulator Mode Path A
.equ	DMMB		= 0xA8		; [MEMORY MAPPED] Demodulator Mode Path B
.equ	DMSRA		= 0xA7		; [MEMORY MAPPED] Demodulator Symbol Rate Path A
.equ	DMSRB		= 0xA6		; [MEMORY MAPPED] Demodulator Symbol Rate Path B
.equ	DMPCA		= 0xA5		; [MEMORY MAPPED] Demodulator Pattern Check Control Path A
.equ	DMPCB		= 0xA4		; [MEMORY MAPPED] Demodulator Pattern Check Control Path B
.equ	DMPC		= 0xA3		; [MEMORY MAPPED] Demodulator Pattern Check Control
.equ	DMPATA		= 0xA2		; [MEMORY MAPPED] Demodulator Signal Check Pattern Path A
.equ	DMPATB		= 0xA1		; [MEMORY MAPPED] Demodulator Signal Check Pattern Path B
.equ	RXFOA		= 0xA0		; [MEMORY MAPPED] Received Frequency Offset vs Intermediate Frequency Path A
.equ	RXFOB		= 0x9F		; [MEMORY MAPPED] Received Frequency Offset vs Intermediate Frequency Path B
.equ	SYCA		= 0x9E		; [MEMORY MAPPED] Symbol Check Configuration Path A
.equ	SYCB		= 0x9D		; [MEMORY MAPPED] Symbol Check Configuration Path B
.equ	TEMP		= 0x9B		; [MEMORY MAPPED] Temperature
.equ	RDOCR		= 0x99		; [MEMORY MAPPED] Rx DSP Output Control
.equ	RDSIMR		= 0x98		; [MEMORY MAPPED] Rx DSP Status Interrupt Mask Register
.equ	TESRA		= 0x96		; [MEMORY MAPPED] Telegram Status Register Path A
.equ	TESRB		= 0x95		; [MEMORY MAPPED] Telegram Status Register Path B
.equ	SOTCA		= 0x94		; [MEMORY MAPPED] Start Of Telegram Conditions Path A
.equ	SOTCB		= 0x93		; [MEMORY MAPPED] Start Of Telegram Conditions Path B
.equ	SOTSA		= 0x92		; [MEMORY MAPPED] Start Of Telegram Status Path A
.equ	SOTSB		= 0x91		; [MEMORY MAPPED] Start Of Telegram Status Path B
.equ	GTCCR		= 0x90		; [MEMORY MAPPED] General Timer/Counter Control Register
.equ	T5IMR		= 0x8F		; [MEMORY MAPPED] Timer5 Interrupt Mask Register
.equ	T5CNT		= 0x8D		; [MEMORY MAPPED] Timer5 Counter
.equ	T5CCR		= 0x8C		; [MEMORY MAPPED] Timer5 Configuration and Control Register
.equ	T5OCR		= 0x8A		; [MEMORY MAPPED] Timer5 Output Compare
.equ	T4IMR		= 0x88		; [MEMORY MAPPED] Timer4 Interrupt Mask Register
.equ	T4MRB		= 0x87		; [MEMORY MAPPED] Timer4 Mode Register B
.equ	T4MRA		= 0x86		; [MEMORY MAPPED] Timer4 Mode Register A
.equ	T4ICR		= 0x84		; [MEMORY MAPPED] Timer4 Input Capture
.equ	T4COR		= 0x82		; [MEMORY MAPPED] Timer4 Compare
.equ	T4CNT		= 0x80		; [MEMORY MAPPED] Timer4 Counter
.equ	T3IMR		= 0x7F		; [MEMORY MAPPED] Timer3 Interrupt Mask Register
.equ	T3MRB		= 0x7E		; [MEMORY MAPPED] Timer3 Mode Register B
.equ	T3MRA		= 0x7D		; [MEMORY MAPPED] Timer3 Mode Register A
.equ	T3ICR		= 0x7B		; [MEMORY MAPPED] Timer3 Input Capture
.equ	T3COR		= 0x79		; [MEMORY MAPPED] Timer3 Compare
.equ	T3CNT		= 0x77		; [MEMORY MAPPED] Timer3 Counter
.equ	T2IMR		= 0x76		; [MEMORY MAPPED] Timer2 Interrupt Mask Register
.equ	T2MR		= 0x75		; [MEMORY MAPPED] Timer2 Mode Register
.equ	T2COR		= 0x74		; [MEMORY MAPPED] Timer2 Compare Register
.equ	T2CNT		= 0x73		; [MEMORY MAPPED] Timer2 Counter Register
.equ	T1IMR		= 0x72		; [MEMORY MAPPED] Timer1 Interrupt Mask Register
.equ	T1MR		= 0x71		; [MEMORY MAPPED] Timer1 Mode Register
.equ	T1COR		= 0x70		; [MEMORY MAPPED] Timer1 Compare Register
.equ	T1CNT		= 0x6F		; [MEMORY MAPPED] Timer1 Counter Register
.equ	WDTCR		= 0x6E		; [MEMORY MAPPED] Watchdog Timer0 Control Register
.equ	PCMSK1		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x6B		; [MEMORY MAPPED] External Interrupt Control Register A
.equ	FFREQ2H		= 0x69		; [MEMORY MAPPED] Fractional Frequency 2 High Byte
.equ	FFREQ2M		= 0x68		; [MEMORY MAPPED] Fractional Frequency 2 Middle Byte
.equ	FFREQ2L		= 0x67		; [MEMORY MAPPED] Fractional Frequency 2 Low Byte
.equ	FFREQ1H		= 0x66		; [MEMORY MAPPED] Fractional Frequency 1 High Byte
.equ	FFREQ1M		= 0x65		; [MEMORY MAPPED] Fractional Frequency 1 Middle Byte
.equ	FFREQ1L		= 0x64		; [MEMORY MAPPED] Fractional Frequency 1 Low Byte
.equ	GACDIV		= 0x62		; [MEMORY MAPPED] Gauss Clock Divider
.equ	FSFCR		= 0x61		; [MEMORY MAPPED] Frequency Synthesizer Filter Control Register
.equ	FSEN		= 0x60		; [MEMORY MAPPED] Frequency Synthesizer Enable
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer
.equ	CLPR		= 0x3C		; Clock Prescaler
.equ	CMIMR		= 0x3B		; Clock Management Interrupt Mask Register
.equ	CMCR		= 0x3A		; Clock Management Control Register
.equ	SMCR		= 0x39		; Sleep Mode Control Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	EOTCB		= 0x36		; End Of Telegram Conditions Path B
.equ	EOTSB		= 0x35		; End Of Telegram Status Path B
.equ	EOTCA		= 0x34		; End Of Telegram Conditions Path A
.equ	EOTSA		= 0x33		; End Of Telegram Status Path A
.equ	RDCR		= 0x32		; Rx DSP Control Register
.equ	DWDR		= 0x31		; Debug Wire Data Register
.equ	T0IFR		= 0x2F		; Timer0 Interrupt Flag Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	MCUSR		= 0x2B		; MCU Status Register
.equ	VMCSR		= 0x2A		; Voltage Monitor Control and Status Register
.equ	CRCDIR		= 0x29		; CRC Data Input Register
.equ	EIFR		= 0x28		; External Interrupt Flag Register
.equ	EIMSK		= 0x27		; External Interrupt Mask
.equ	PCICR		= 0x26		; Pin Change Interrupt Control Register
.equ	GPIOR2		= 0x25		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x24		; General Purpose I/O Register 1
.equ	EEPR		= 0x23		; EEPROM Protect Register
.equ	EEAR		= 0x21		; EEPROM Address Register
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR6		= 0x1E		; General Purpose I/O Register 6
.equ	GPIOR5		= 0x1D		; General Purpose I/O Register 5
.equ	GPIOR4		= 0x1C		; General Purpose I/O Register 4
.equ	GPIOR3		= 0x1B		; General Purpose I/O Register 3
.equ	GPIOR0		= 0x1A		; General Purpose I/O Register 0
.equ	T5IFR		= 0x19		; Timer5 Interrupt Flag Register
.equ	T4IFR		= 0x18		; Timer4 Interrupt Flag Register
.equ	T3IFR		= 0x17		; Timer3 Interrupt Flag Register
.equ	T2IFR		= 0x16		; Timer2 Interrupt Flag Register
.equ	T1IFR		= 0x15		; Timer1 Interrupt Flag Register
.equ	T4CR		= 0x14		; Timer4 Control Register
.equ	T3CR		= 0x13		; Timer3 Control Register
.equ	T2CR		= 0x12		; Timer2 Control Register
.equ	T1CR		= 0x11		; Timer1 Control Register
.equ	T0CR		= 0x10		; Timer0 Control Register
.equ	PCIFR		= 0x0F		; Pin Change Interrupt Flag Register
.equ	MCUCR		= 0x0E		; MCU Control Register
.equ	RDSIFR		= 0x0D		; Rx DSP Status Interrupt Flag Register
.equ	FSCR		= 0x0B		; Frequency Synthesizer Control Register
.equ	PORTC		= 0x0A		; Port C Data Register
.equ	DDRC		= 0x09		; Port C Data Direction
.equ	PINC		= 0x08		; Port C Input Pins
.equ	PORTB		= 0x07		; Port B Data Register
.equ	DDRB		= 0x06		; Port B Data Direction
.equ	PINB		= 0x05		; Port B Input Pins
.equ	RDPR		= 0x04		; Rx DSP Power Reduction
.equ	PRR2		= 0x03		; Power Reduction Register 2
.equ	PRR1		= 0x02		; Power Reduction Register 1
.equ	PRR0		= 0x01		; Power Reduction Register 0


; ====	CALIB MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FRCCAL bits		------------------------
.equ	FRCTC		= 5		; 0x20 - Fast RC Oscillator Temperature Compensation
.equ	FRCCAL_MASK	= 0x1F		;      - Fast RC Oscillator Calibration (5 bits)
.equ	FRCCAL0		= 0		;          FRCCAL BIT0 position

; ----------	Register SRCCAL bits		------------------------
.equ	SRCTC_MASK	= 0xC0		;      - Slow RC Oscillator Temperature Compensation (2 bits)
.equ	SRCTC0		= 6		;          SRCTC BIT0 position
.equ	SRCCAL_MASK	= 0x3F		;      - Slow RC Oscillator Calibration (6 bits)
.equ	SRCCAL0		= 0		;          SRCCAL BIT0 position

; ----------	Register SUPCA1 bits		------------------------
.equ	PVCAL_MASK	= 0xC0		;      - PA Regulator Voltage Calibration (2 bits)
.equ	PVCAL0		= 6		;          PVCAL BIT0 position
.equ	AVCAL_MASK	= 0x30		;      - AVCC Regulator Voltage Calibration (2 bits)
.equ	AVCAL0		= 4		;          AVCAL BIT0 position
.equ	VVCAL_MASK	= 0x0C		;      - VMEM Regulator Voltage Calibration (2 bits)
.equ	VVCAL0		= 2		;          VVCAL BIT0 position
.equ	DVCAL_MASK	= 0x03		;      - DVCC Regulator Voltage Calibration (2 bits)
.equ	DVCAL0		= 0		;          DVCAL BIT0 position

; ----------	Register SUPCA2 bits		------------------------
.equ	BGCAL_MASK	= 0x3F		;      - Band Gap Calibration (6 bits)
.equ	BGCAL0		= 0		;          BGCAL BIT0 position

; ----------	Register SUPCA3 bits		------------------------
.equ	VMOCAL_MASK	= 0xC0		;      - Voltage Monitor Calibration (2 bits)
.equ	VMOCAL0		= 6		;          VMOCAL BIT0 position
.equ	AMCAL_MASK	= 0x30		;      - AVCC Monitor Calibration (2 bits)
.equ	AMCAL0		= 4		;          AMCAL BIT0 position
.equ	VMCAL_MASK	= 0x0C		;      - VMEM Monitor Calibration (2 bits)
.equ	VMCAL0		= 2		;          VMCAL BIT0 position
.equ	DMCAL_MASK	= 0x03		;      - DVCC Monitor Calibration (2 bits)
.equ	DMCAL0		= 0		;          DMCAL BIT0 position

; ----------	Register SUPCA4 bits		------------------------
.equ	PTCAL_MASK	= 0xFF		;      - Bandgap PTAT Calibration (8 bits)
.equ	PTCAL0		= 0		;          PTCAL BIT0 position

; ----------	Register XFUSE bits		------------------------
.equ	CKOUT		= 6		; 0x40 - CP2 Output on Port ckout
.equ	NVPTE		= 4		; 0x10 - NVM Variable Programming Time Enable
.equ	E2PT_MASK	= 0x0C		;      - EEPROM Programming Time (2 bits)
.equ	E2PT0		= 2		;          E2PT BIT0 position
.equ	FLPT_MASK	= 0x03		;      - Flash Memory Programming Time (2 bits)
.equ	FLPT0		= 0		;          FLPT BIT0 position



; ====	CHFLT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CHCR bits		------------------------
.equ	BWM_MASK	= 0x0F		;      - Bandwidth Mode (4 bits)
.equ	BWM0		= 0		;          BWM BIT0 position

; ----------	Register CHDN bits		------------------------
.equ	ADCDN		= 5		; 0x20 - ADC Down Sampling Configuration
.equ	BBDN_MASK	= 0x1F		;      - Baseband Filter Down Sampling Ratio (5 bits)
.equ	BBDN0		= 0		;          BBDN BIT0 position



; ====	CLK MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CLKOCR bits		------------------------
.equ	CLKOEN		= 2		; 0x04 - Clock Output Driver Enable
.equ	CLKOS_MASK	= 0x03		;      - Clock Output Source (2 bits)
.equ	CLKOS0		= 0		;          CLKOS BIT0 position
; ::::  CLKOS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_frc
;			0x02		; clk_adiv
;			0x03		; clk_xto

; ----------	Register CLPR bits		------------------------
.equ	CLPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLTPS_MASK	= 0x38		;      - Timer Clock Prescaler Select (3 bits)
.equ	CLTPS0		= 3		;          CLTPS BIT0 position
.equ	CLKPS_MASK	= 0x07		;      - System Clock Prescaler Select (3 bits)
.equ	CLKPS0		= 0		;          CLKPS BIT0 position
; ::::  CLTPS	:::: bitfield values
;			0x00		; disabled
;			0x08		; 1
;			0x10		; 2
;			0x18		; 4
;			0x20		; 8
;			0x28		; 16
;			0x30		; 32
;			0x38		; 64
; ::::  CLKPS	:::: bitfield values
;			0x00		; 1
;			0x01		; 2
;			0x02		; 4
;			0x03		; 8
;			0x04		; 16
;			0x05		; 32
;			0x06		; 64
;			0x07		; 128

; ----------	Register CMCR bits		------------------------
.equ	CMCCE		= 7		; 0x80 - Clock Management Control Change Enable
.equ	CMONEN		= 6		; 0x40 - Clock Monitor Enable
.equ	CCS		= 3		; 0x08 - Core Clock Select
.equ	CMM_MASK	= 0x07		;      - Clock Management Mode (3 bits)
.equ	CMM0		= 0		;          CMM BIT0 position
; ::::  CMM	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_adiv
;			0x02		; clk_ext
;			0x03		; clk_xto6
;			0x04		; clk_xto4

; ----------	Register CMIMR bits		------------------------
.equ	ECIE		= 0		; 0x01 - External Clock Interrupt Enable

; ----------	Register CMOCR bits		------------------------
.equ	SRCACT		= 3		; 0x08 - SRC Oscillator Active
.equ	FRCACT		= 2		; 0x04 - FRC Oscillator Active
.equ	SRCAO		= 1		; 0x02 - SRC Oscillator Always On
.equ	FRCAO		= 0		; 0x01 - FRC Oscillator Always On

; ----------	Register CMSR bits		------------------------
.equ	ECF		= 0		; 0x01 - External Clock Fail

; ----------	Register PRR0 bits		------------------------
.equ	PRTRC		= 7		; 0x80 - Power Reduction Trace Unit
.equ	PRUART		= 6		; 0x40 - Power Reduction UART
.equ	PRCO		= 5		; 0x20 - Power Reduction Clock Output
.equ	PRVM		= 4		; 0x10 - Power Reduction Voltage Monitor
.equ	PRCRC		= 3		; 0x08 - Power Reduction CRC
.equ	PRTXDC		= 2		; 0x04 - Power Reduction Transmit DSP Control
.equ	PRRXDC		= 1		; 0x02 - Power Reduction Receive DSP Control
.equ	PRSPI		= 0		; 0x01 - Power Reduction Serial Peripheral Interface

; ----------	Register PRR1 bits		------------------------
.equ	PRT5		= 4		; 0x10 - Power Reduction Timer 5
.equ	PRT4		= 3		; 0x08 - Power Reduction Timer 4
.equ	PRT3		= 2		; 0x04 - Power Reduction Timer 3
.equ	PRT2		= 1		; 0x02 - Power Reduction Timer 2
.equ	PRT1		= 0		; 0x01 - Power Reduction Timer 1

; ----------	Register PRR2 bits		------------------------
.equ	PRSSM		= 7		; 0x80 - Power Reduction Sequencer State Machine
.equ	PRTM		= 6		; 0x40 - Power Reduction Tx Modulator
.equ	PRRS		= 5		; 0x20 - Power Reduction RSSI Buffer
.equ	PRIDS		= 4		; 0x10 - Power Reduction ID Check
.equ	PRDF		= 3		; 0x08 - Power Reduction Data FIFO
.equ	PRSF		= 2		; 0x04 - Power Reduction Support FIFO
.equ	PRXA		= 1		; 0x02 - Power Reduction Rx Buffer A
.equ	PRXB		= 0		; 0x01 - Power Reduction Rx Buffer B

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x06		;      - Sleep Mode Select (2 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Mode Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Power Down
;			0x04		; Reserved
;			0x06		; Power Off



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MCUCR bits		------------------------
.equ	PB7HS		= 7		; 0x80 - Port B7 High Side Driver Enable
.equ	PB7LS		= 6		; 0x40 - Port B7 Low Side Driver Enable
.equ	PB4HS		= 5		; 0x20 - Port B4 High Side Driver Enable
.equ	PUD		= 4		; 0x10 - Pull-up Resistors Disable
.equ	ENPS		= 3		; 0x08 - Enable Port Settings
.equ	SPIIO		= 2		; 0x04 - SPI Interrupt Only
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	DWRF		= 4		; 0x10 - DebugWire Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-On Reset Flag

; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming Enable

; ----------	Register SREG bits		------------------------
.equ	SREG_I		= 7		; 0x80 - Global Interrupt Enable
.equ	SREG_T		= 6		; 0x40 - Bit Copy Storage
.equ	SREG_H		= 5		; 0x20 - Half Carry Flag
.equ	SREG_S		= 4		; 0x10 - Sign Bit
.equ	SREG_V		= 3		; 0x08 - Two's Complement Overflow Flag
.equ	SREG_N		= 2		; 0x04 - Negative Flag
.equ	SREG_Z		= 1		; 0x02 - Zero Flag
.equ	SREG_C		= 0		; 0x01 - Carry Flag



; ====	CRC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CRCCR bits		------------------------
.equ	REFLO		= 2		; 0x04 - Reflect Data Output Byte
.equ	REFLI		= 1		; 0x02 - Reflect Data Input Byte
.equ	CRCRS		= 0		; 0x01 - CRC Data Register Reset



; ====	DEMOD MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DMCDA bits		------------------------
.equ	DMCTA_MASK	= 0xE0		;      - Demodulator Carrier Detect Time Path A (3 bits)
.equ	DMCTA0		= 5		;          DMCTA BIT0 position
.equ	DMCLA_MASK	= 0x1F		;      - Demodulator Carrier Detect Limit Path A (5 bits)
.equ	DMCLA0		= 0		;          DMCLA BIT0 position

; ----------	Register DMCDB bits		------------------------
.equ	DMCTB_MASK	= 0xE0		;      - Demodulator Carrier Detect Time Path B (3 bits)
.equ	DMCTB0		= 5		;          DMCTB BIT0 position
.equ	DMCLB_MASK	= 0x1F		;      - Demodulator Carrier Detect Limit Path B (5 bits)
.equ	DMCLB0		= 0		;          DMCLB BIT0 position

; ----------	Register DMCRA bits		------------------------
.equ	DMARA		= 7		; 0x80 - Demodulator Automatic Restart Path A
.equ	SY1TA		= 6		; 0x40 - Symbol Check with only 1T Path A
.equ	SASKA		= 5		; 0x20 - Select ASK Demodulation Path A
.equ	DMPGA_MASK	= 0x1F		;      - Demodulator PLL Loop Gain Path A (5 bits)
.equ	DMPGA0		= 0		;          DMPGA BIT0 position

; ----------	Register DMCRB bits		------------------------
.equ	DMARB		= 7		; 0x80 - Demodulator Automatic Restart Path B
.equ	SY1TB		= 6		; 0x40 - Symbol Check with only 1T Path B
.equ	SASKB		= 5		; 0x20 - Select ASK Demodulation Path B
.equ	DMPGB_MASK	= 0x1F		;      - Demodulator PLL Loop Gain Path B (5 bits)
.equ	DMPGB0		= 0		;          DMPGB BIT0 position

; ----------	Register DMDN bits		------------------------
.equ	DMDNB_MASK	= 0xF0		;      - Demodulator Down-sampling Path B (4 bits)
.equ	DMDNB0		= 4		;          DMDNB BIT0 position
.equ	DMDNA_MASK	= 0x0F		;      - Demodulator Down-sampling Path A (4 bits)
.equ	DMDNA0		= 0		;          DMDNA BIT0 position

; ----------	Register DMMA bits		------------------------
.equ	DMNEA		= 7		; 0x80 - Demodulator NRZ Enable Path A
.equ	DMHA		= 6		; 0x40 - Demodulator Hold Mode Path A
.equ	DMPA		= 5		; 0x20 - Demodulator Data Polarity Path A
.equ	DMATA_MASK	= 0x1F		;      - Demodulator Amplitude Threshold Path A (5 bits)
.equ	DMATA0		= 0		;          DMATA BIT0 position

; ----------	Register DMMB bits		------------------------
.equ	DMNEB		= 7		; 0x80 - Demodulator NRZ Enable Path B
.equ	DMHB		= 6		; 0x40 - Demodulator Hold Mode Path B
.equ	DMPB		= 5		; 0x20 - Demodulator Data Polarity Path B
.equ	DMATB_MASK	= 0x1F		;      - Demodulator Amplitude Threshold Path B (5 bits)
.equ	DMATB0		= 0		;          DMATB BIT0 position

; ----------	Register DMPC bits		------------------------
.equ	PCENB		= 7		; 0x80 - Pattern Check Enable Path B
.equ	PCSIGB		= 6		; 0x40 - Pattern Check Signal Path B
.equ	PCIALB		= 5		; 0x20 - Pattern Check Ignore Amplitude Low Path B
.equ	PCFTDB		= 4		; 0x10 - Pattern Check Frequency Tracking Disable Path B
.equ	PCENA		= 3		; 0x08 - Pattern Check Enable Path A
.equ	PCSIGA		= 2		; 0x04 - Pattern Check Signal Path A
.equ	PCIALA		= 1		; 0x02 - Pattern Check Ignore Amplitude Low Path A
.equ	PCFTDA		= 0		; 0x01 - Pattern Check Frequency Tracking Disable Path A

; ----------	Register DMPCA bits		------------------------
.equ	PSELA_MASK	= 0xC0		;      - Pattern Select Path A (2 bits)
.equ	PSELA0		= 6		;          PSELA BIT0 position
.equ	PCLENA_MASK	= 0x38		;      - Pattern Check Length Path A (3 bits)
.equ	PCLENA0		= 3		;          PCLENA BIT0 position
.equ	PCSEVA_MASK	= 0x07		;      - Pattern Check Severity Path A (3 bits)
.equ	PCSEVA0		= 0		;          PCSEVA BIT0 position
; ::::  PSELA	:::: bitfield values
;			0x00		; 1T alternating (0x55 0xAA)
;			0x40		; 2T alternating (0x33 0xCC)
;			0x80		; DMPATx defined
;			0xC0		; Manchester conformal
; ::::  PCSEVA	:::: bitfield values
;			0x00		; 12.5%
;			0x01		; 25%
;			0x02		; 37.5%
;			0x03		; 50%
;			0x04		; 62.5%
;			0x05		; 75%
;			0x06		; 87.5%
;			0x07		; 100%

; ----------	Register DMPCB bits		------------------------
.equ	PSELB_MASK	= 0xC0		;      - Pattern Select Path B (2 bits)
.equ	PSELB0		= 6		;          PSELB BIT0 position
.equ	PCLENB_MASK	= 0x38		;      - Pattern Check Length Path B (3 bits)
.equ	PCLENB0		= 3		;          PCLENB BIT0 position
.equ	PCSEVB_MASK	= 0x07		;      - Pattern Check Severity Path B (3 bits)
.equ	PCSEVB0		= 0		;          PCSEVB BIT0 position
; ::::  PSELB	:::: bitfield values
;			0x00		; 1T alternating (0x55 0xAA)
;			0x40		; 2T alternating (0x33 0xCC)
;			0x80		; DMPATx defined
;			0xC0		; Manchester conformal
; ::::  PCSEVB	:::: bitfield values
;			0x00		; 12.5%
;			0x01		; 25%
;			0x02		; 37.5%
;			0x03		; 50%
;			0x04		; 62.5%
;			0x05		; 75%
;			0x06		; 87.5%
;			0x07		; 100%

; ----------	Register SYCA bits		------------------------
.equ	SYTLA_MASK	= 0xF0		;      - Symbol Timing Limit Path A (4 bits)
.equ	SYTLA0		= 4		;          SYTLA BIT0 position
.equ	SYCSA_MASK	= 0x0F		;      - Symbol Check Size Path A (4 bits)
.equ	SYCSA0		= 0		;          SYCSA BIT0 position

; ----------	Register SYCB bits		------------------------
.equ	SYTLB_MASK	= 0xF0		;      - Symbol Timing Limit Path B (4 bits)
.equ	SYTLB0		= 4		;          SYTLB BIT0 position
.equ	SYCSB_MASK	= 0x0F		;      - Symbol Check Size Path B (4 bits)
.equ	SYCSB0		= 0		;          SYCSB BIT0 position



; ====	DFIFO MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DFC bits		------------------------
.equ	DFDRA		= 7		; 0x80 - Data FIFO Direct Read Access Operational Mode
.equ	DFFLC_MASK	= 0x3F		;      - Data FIFO Fill Level Configuration (6 bits)
.equ	DFFLC0		= 0		;          DFFLC BIT0 position

; ----------	Register DFI bits		------------------------
.equ	DFERIM		= 1		; 0x02 - Data FIFO Error Interrupt Mask
.equ	DFFLIM		= 0		; 0x01 - Data FIFO Fill Level Interrupt Mask

; ----------	Register DFL bits		------------------------
.equ	DFCLR		= 7		; 0x80 - Data FIFO Clear
.equ	DFFLS_MASK	= 0x3F		;      - Data FIFO Fill Level Status (6 bits)
.equ	DFFLS0		= 0		;          DFFLS BIT0 position

; ----------	Register DFS bits		------------------------
.equ	DFOFL		= 2		; 0x04 - Data FIFO Overflow Flag
.equ	DFUFL		= 1		; 0x02 - Data FIFO Underflow Flag
.equ	DFFLRF		= 0		; 0x01 - Data FIFO Fill Level Reached Status Flag



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	NVMBSY		= 7		; 0x80 - Non-Volatile Memory Busy
.equ	EEPAGE		= 6		; 0x40 - EEPROM Page Access
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only

; ----------	Register EECR2 bits		------------------------
.equ	EECF		= 7		; 0x80 - EEPROM Error Correction Flag
.equ	EEFF		= 6		; 0x40 - EEPROM Error Fault Flag
.equ	EEBRE		= 0		; 0x01 - EEPROM Burst Read Enable

; ----------	Register EEPR bits		------------------------
.equ	EEAP_MASK	= 0x0F		;      - EEPROM Access Protect (4 bits)
.equ	EEAP0		= 0		;          EEAP BIT0 position

; ----------	Register EEST bits		------------------------
.equ	EESYN_MASK	= 0x0F		;      - EEPROM Syndrome (4 bits)
.equ	EESYN0		= 0		;          EESYN BIT0 position

; ----------	Register PGMST bits		------------------------
.equ	PGMSYN_MASK	= 0x1F		;      - Program Memory Syndrome (5 bits)
.equ	PGMSYN0		= 0		;          PGMSYN BIT0 position



; ====	FE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FEAS bits		------------------------
.equ	SDTX3		= 5		; 0x20 - SPDT RF Switch Tx 3
.equ	SDRX3		= 4		; 0x10 - SPDT RF Switch Rx 3
.equ	SDTX2		= 3		; 0x08 - SPDT RF Switch Tx 2
.equ	SDRX2		= 2		; 0x04 - SPDT RF Switch Rx 2
.equ	SDTX1		= 1		; 0x02 - SPDT RF Switch Tx 1
.equ	SDRX1		= 0		; 0x01 - SPDT RF Switch Rx 1

; ----------	Register FEBIA bits		------------------------
.equ	IFAEN		= 7		; 0x80 - IF Amplifier Enable
.equ	HISEN		= 6		; 0x40 - High Sensitivity Enable

; ----------	Register FEBT bits		------------------------
.equ	RTN2_MASK	= 0x0C		;      - 2 Bit Resistor Tuning (2 bits)
.equ	RTN20		= 2		;          RTN2 BIT0 position
.equ	CTN2_MASK	= 0x03		;      - 2 Bit Capacitor Tuning (2 bits)
.equ	CTN20		= 0		;          CTN2 BIT0 position

; ----------	Register FECR bits		------------------------
.equ	ANPS		= 5		; 0x20 - ASK Not DPSK Switch
.equ	PLCKG		= 4		; 0x10 - PLL Lock Detect Gate
.equ	ADHS		= 3		; 0x08 - ADC High Sample Rate
.equ	ANDP		= 2		; 0x04 - Antenna Damping
.equ	S4N3		= 1		; 0x02 - Select 433MHz Not 315MHz Band
.equ	LBNHB		= 0		; 0x01 - Low-Band Not High-Band

; ----------	Register FEEN1 bits		------------------------
.equ	PLSP1		= 6		; 0x40 - PLL Speedup 1
.equ	ADCLK		= 5		; 0x20 - ADC Clock Enable
.equ	ADEN		= 4		; 0x10 - Analog Digital Converter Enable
.equ	LNAEN		= 3		; 0x08 - Low Noise Amplifier Enable
.equ	XTOEN		= 2		; 0x04 - Crystal Oscillator Enable
.equ	PLCAL		= 1		; 0x02 - PLL Calibration Mode
.equ	PLEN		= 0		; 0x01 - PLL Enable

; ----------	Register FEEN2 bits		------------------------
.equ	XTOEXT		= 7		; 0x80 - XTO External Clock
.equ	XTPEN		= 5		; 0x20 - XTO Voltage Pump Enable
.equ	PLPEN		= 4		; 0x10 - PLL Post Enable
.equ	TMPM		= 3		; 0x08 - Temperature Measurement
.equ	PAEN		= 2		; 0x04 - Power Amplifier Enable

; ----------	Register FELNA bits		------------------------
.equ	LNABH_MASK	= 0xF0		;      - LNA Bias High Sense Mode (4 bits)
.equ	LNABH0		= 4		;          LNABH BIT0 position
.equ	LNABN_MASK	= 0x0F		;      - LNA Bias Normal Sense Mode (4 bits)
.equ	LNABN0		= 0		;          LNABN BIT0 position

; ----------	Register FEMS bits		------------------------
.equ	PLLM_MASK	= 0xF0		;      - PLL Main (4 bits)
.equ	PLLM0		= 4		;          PLLM BIT0 position
.equ	PLLS_MASK	= 0x0F		;      - PLL Swallow (4 bits)
.equ	PLLS0		= 0		;          PLLS BIT0 position

; ----------	Register FEPAC bits		------------------------
.equ	FEPAC_MASK	= 0xFF		;      - RF Front End Power Amplifier Control (8 bits)
.equ	FEPAC0		= 0		;          FEPAC BIT0 position
; ::::  FEPAC	:::: bitfield values
;			0x00		; -11.80  -12.90
;			0x01		; -11.30  -12.33
;			0x02		; -10.70  -11.76
;			0x03		; -10.20  -11.10
;			0x04		;  -9.70  -10.60
;			0x05		;  -9.20  -10.00
;			0x06		;  -8.60   -9.50
;			0x07		;  -8.00   -9.00
;			0x08		;  -7.50   -8.50
;			0x09		;  -7.00   -7.90
;			0x0A		;  -6.40   -7.30
;			0x0B		;  -5.90   -6.80
;			0x0C		;  -5.30   -6.30
;			0x0D		;  -4.77   -5.70
;			0x0E		;  -4.17   -5.20
;			0x0F		;  -3.67   -4.60
;			0x10		;  -3.12   -4.07
;			0x11		;  -2.56   -3.47
;			0x12		;  -2.10   -2.97
;			0x13		;  -1.58   -2.42
;			0x14		;  -1.08   -1.86
;			0x15		;  -0.50   -1.40
;			0x16		;   0.00   -0.88
;			0x17		;   0.41   -0.38
;			0x18		;   1.00    0.20 
;			0x19		;   1.42    0.70 
;			0x1A		;   1.83    1.11 
;			0x1B		;   2.42    1.70 
;			0x1C		;   2.88    2.12 
;			0x1D		;   3.38    2.53 
;			0x1E		;   3.81    3.12 
;			0x1F		;   4.31    3.58 
;			0x20		;   4.72    4.08 
;			0x21		;   5.09    4.51 
;			0x22		;   5.57    5.01 
;			0x23		;   6.00    5.42 
;			0x24		;   6.41    5.79 
;			0x25		;   6.77    6.27 
;			0x26		;   7.19    6.70 
;			0x27		;   7.55    7.11 
;			0x28		;   7.98    7.47 
;			0x29		;   8.40    7.89 
;			0x2A		;   8.79    8.25 
;			0x2B		;   9.11    8.68 
;			0x2C		;   9.46    9.10 
;			0x2D		;   9.82    9.49 
;			0x2E		;  10.18    9.81 
;			0x2F		;  10.60   10.16
;			0x30		;  10.89   10.52
;			0x31		;  11.30   10.88
;			0x32		;  11.62   11.30
;			0x33		;  12.06   11.59
;			0x34		;  12.39   12.00
;			0x35		;  12.82   12.32
;			0x36		;  13.22   12.76
;			0x37		;  13.58   13.09
;			0x38		;  13.95   13.52
;			0x39		;  14.22   13.92
;			0x3A		;  14.41   14.28
;			0x3B		;  14.49   14.65
;			0x3C		;  14.60   14.65
;			0x3D		;  14.60   14.65
;			0x3E		;  14.60   14.65
;			0x3F		;  14.60   14.65

; ----------	Register FESR bits		------------------------
.equ	PLCK		= 3		; 0x08 - PLL Locked
.equ	XRDY		= 2		; 0x04 - XTO Ready
.equ	SAT		= 0		; 0x01 - LNA Saturated

; ----------	Register FETN4 bits		------------------------
.equ	RTN4_MASK	= 0xF0		;      - 4 Bit Resistor Tuning (4 bits)
.equ	RTN40		= 4		;          RTN4 BIT0 position
.equ	CTN4_MASK	= 0x0F		;      - 4 Bit Capacitor Tuning (4 bits)
.equ	CTN40		= 0		;          CTN4 BIT0 position

; ----------	Register FEVCO bits		------------------------
.equ	VCOB_MASK	= 0xF0		;      - VCO Bias (4 bits)
.equ	VCOB0		= 4		;          VCOB BIT0 position
.equ	CPCC_MASK	= 0x0F		;      - Charge Pump Current Control (4 bits)
.equ	CPCC0		= 0		;          CPCC BIT0 position

; ----------	Register SPARE1 bits		------------------------
.equ	CHBIR_MASK	= 0xFF		;      - Calibration of High Band Image Rejection (8 bits)
.equ	CHBIR0		= 0		;          CHBIR BIT0 position



; ====	FREQS MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FSCR bits		------------------------
.equ	PAON		= 7		; 0x80 - Power Amplifier Output is On
.equ	PAOER		= 4		; 0x10 - Power Amplifier Output Enable Register
.equ	TXMS_MASK	= 0x0C		;      - Tx Modulation Source (2 bits)
.equ	TXMS0		= 2		;          TXMS BIT0 position
.equ	SFM		= 1		; 0x02 - Select FSK Modulation
.equ	TXMOD		= 0		; 0x01 - Tx Modulation
; ::::  TXMS	:::: bitfield values
;			0x00		; TXMOD Register
;			0x04		; TMDI Input
;			0x08		; Tx Modulator Serial Out

; ----------	Register FSEN bits		------------------------
.equ	ASEN		= 4		; 0x10 - ASK Shaping Enable
.equ	PEEN		= 3		; 0x08 - Pre-emphasis Filtering Enable
.equ	GAEN		= 2		; 0x04 - Gauss Filtering Enable
.equ	SDEN		= 1		; 0x02 - Sigma-delta Modulator Enable
.equ	SDPU		= 0		; 0x01 - Sigma-delta Modulator Power Up

; ----------	Register FSFCR bits		------------------------
.equ	ASDIV_MASK	= 0xF0		;      - ASK Shaping Divider (4 bits)
.equ	ASDIV0		= 4		;          ASDIV BIT0 position
.equ	BTSEL_MASK	= 0x03		;      - Gauss Filter BT Selection (2 bits)
.equ	BTSEL0		= 0		;          BTSEL BIT0 position
; ::::  BTSEL	:::: bitfield values
;			0x00		; BT=2
;			0x01		; BT=1.5
;			0x02		; BT=1
;			0x03		; BT=0.5



; ====	FRSYNC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFIDCA bits		------------------------
.equ	SEMEA		= 7		; 0x80 - Serial Mode Enable Path A
.equ	SFIDTA_MASK	= 0x1F		;      - Start Frame ID Threshold Path A (5 bits)
.equ	SFIDTA0		= 0		;          SFIDTA BIT0 position

; ----------	Register SFIDCB bits		------------------------
.equ	SEMEB		= 7		; 0x80 - Serial Mode Enable Path B
.equ	SFIDTB_MASK	= 0x1F		;      - Start Frame ID Threshold Path B (5 bits)
.equ	SFIDTB0		= 0		;          SFIDTB BIT0 position



; ====	IDCHK MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register IDC bits		------------------------
.equ	IDCE		= 7		; 0x80 - ID Check Execute
.equ	IDCLR		= 6		; 0x40 - ID Clear
.equ	IDFIM		= 5		; 0x20 - ID Full Interrupt Mask
.equ	IDBO_MASK	= 0x0C		;      - ID Byte Offset (2 bits)
.equ	IDBO0		= 2		;          IDBO BIT0 position
.equ	IDL_MASK	= 0x03		;      - ID Length (2 bits)
.equ	IDL0		= 0		;          IDL BIT0 position

; ----------	Register IDS bits		------------------------
.equ	IDFULL		= 1		; 0x02 - ID Full Flag
.equ	IDOK		= 0		; 0x01 - ID Check Ok Flag



; ====	INT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC1_MASK	= 0x0C		;      - Interrupt Sense Control 1 (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - Interrupt Sense Control 0 (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
; ::::  ISC1	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x04		; Logical Change of INTX
;			0x08		; Falling Edge of INTX
;			0x0C		; Rising Edge of INTX
; ::::  ISC0	:::: bitfield values
;			0x00		; Low Level of INTX
;			0x01		; Logical Change of INTX
;			0x02		; Falling Edge of INTX
;			0x03		; Rising Edge of INTX

; ----------	Register EIFR bits		------------------------
.equ	INTF1		= 1		; 0x02 - External Interrupt Flag 1
.equ	INTF0		= 0		; 0x01 - External Interrupt Flag 0

; ----------	Register EIMSK bits		------------------------
.equ	INT1		= 1		; 0x02 - External Interrupt Request 1 Enable
.equ	INT0		= 0		; 0x01 - External Interrupt Request 0 Enable

; ----------	Register PCICR bits		------------------------
.equ	PCIE1		= 1		; 0x02 - Pin Change Interrupt Enable 1
.equ	PCIE0		= 0		; 0x01 - Pin Change Interrupt Enable 0

; ----------	Register PCIFR bits		------------------------
.equ	PCIF1		= 1		; 0x02 - Pin Change Interrupt Flag 1
.equ	PCIF0		= 0		; 0x01 - Pin Change Interrupt Flag 0

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Mask (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0x3F		;      - Pin Change Enable Mask (6 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position



; ====	LIN_UART MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LINBRRH bits		------------------------
.equ	LINBRRH_LDIV_MASK= 0x0F		;      - LIN/UART Clock Divider (4 bits)
.equ	LINBRRH_LDIV0	= 0		;          LINBRRH_LDIV BIT0 position

; ----------	Register LINBRRL bits		------------------------
.equ	LINBRRL_LDIV_MASK= 0xFF		;      - LIN/UART Clock Divider (8 bits)
.equ	LINBRRL_LDIV0	= 0		;          LINBRRL_LDIV BIT0 position

; ----------	Register LINBTR bits		------------------------
.equ	LDISR		= 7		; 0x80 - LIN/UART Disable Bit Timing Resynchronization
.equ	LBT_MASK	= 0x3F		;      - LIN/UART Bit Timing (6 bits)
.equ	LBT0		= 0		;          LBT BIT0 position

; ----------	Register LINCR bits		------------------------
.equ	LSWRES		= 7		; 0x80 - LIN/UART Software Reset
.equ	LIN13		= 6		; 0x40 - LIN 1.3 Mode
.equ	LCONF_MASK	= 0x30		;      - LIN/UART Configuration (2 bits)
.equ	LCONF0		= 4		;          LCONF BIT0 position
.equ	LENA		= 3		; 0x08 - LIN/UART Enable
.equ	LCMD_MASK	= 0x07		;      - LIN/UART Command and Mode (3 bits)
.equ	LCMD0		= 0		;          LCMD BIT0 position

; ----------	Register LINDAT bits		------------------------
.equ	LDATA_MASK	= 0xFF		;      - LIN/UART Data (8 bits)
.equ	LDATA0		= 0		;          LDATA BIT0 position

; ----------	Register LINDLR bits		------------------------
.equ	LTXDL_MASK	= 0xF0		;      - LIN Transmit Data Length (4 bits)
.equ	LTXDL0		= 4		;          LTXDL BIT0 position
.equ	LRXDL_MASK	= 0x0F		;      - LIN Receive Data Length (4 bits)
.equ	LRXDL0		= 0		;          LRXDL BIT0 position

; ----------	Register LINENIR bits		------------------------
.equ	LENERR		= 3		; 0x08 - LIN/UART Enable Error Interrupt
.equ	LENIDOK		= 2		; 0x04 - LIN Enable Identifier Ok Interrupt
.equ	LENTXOK		= 1		; 0x02 - LIN/UART Enable Transmit Ok Interrupt
.equ	LENRXOK		= 0		; 0x01 - LIN/UART Enable Receive Ok Interrupt

; ----------	Register LINERR bits		------------------------
.equ	LABORT		= 7		; 0x80 - LIN Abort Flag
.equ	LTOERR		= 6		; 0x40 - LIN Frame Time Out Error Flag
.equ	LOVERR		= 5		; 0x20 - LIN/UART Overrun Error Flag
.equ	LFERR		= 4		; 0x10 - LIN/UART Framing Error Flag
.equ	LSERR		= 3		; 0x08 - LIN Synchronization Error Flag
.equ	LPERR		= 2		; 0x04 - LIN Parity Error Flag
.equ	LCERR		= 1		; 0x02 - LIN Checksum Error Flag
.equ	LBERR		= 0		; 0x01 - LIN Bit Error Flag

; ----------	Register LINIDR bits		------------------------
.equ	LP_MASK		= 0xC0		;      - LIN Parity (2 bits)
.equ	LP0		= 6		;          LP BIT0 position
.equ	LID_MASK	= 0x3F		;      - LIN Identifier (6 bits)
.equ	LID0		= 0		;          LID BIT0 position

; ----------	Register LINSEL bits		------------------------
.equ	LAINC		= 3		; 0x08 - LIN Auto Increment of Data Buffer Index Disable
.equ	LINDX_MASK	= 0x07		;      - LIN Data Buffer Index (3 bits)
.equ	LINDX0		= 0		;          LINDX BIT0 position

; ----------	Register LINSIR bits		------------------------
.equ	LIDST_MASK	= 0xE0		;      - LIN Identifier Status (3 bits)
.equ	LIDST0		= 5		;          LIDST BIT0 position
.equ	LBUSY		= 4		; 0x10 - LIN/UART Busy Flag
.equ	LERR		= 3		; 0x08 - LIN/UART Error Flag
.equ	LIDOK		= 2		; 0x04 - LIN Identifier Ok Flag
.equ	LTXOK		= 1		; 0x02 - LIN/UART Transmit Ok Flag
.equ	LRXOK		= 0		; 0x01 - LIN/UART Receive Ok Flag



; ====	OCCOUNT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register OCCR bits		------------------------
.equ	OCSEL		= 1		; 0x02 - Oscillator Calibration Select Target
.equ	OCEN		= 0		; 0x01 - Oscillator Calibration Counter Enable



; ====	PORTS MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DBCR bits		------------------------
.equ	DBTMS		= 2		; 0x04 - Debounce Timer Mask Select
.equ	DBCS		= 1		; 0x02 - Debounce Clock Select
.equ	DBMD		= 0		; 0x01 - Debounce Mode

; ----------	Register DBGSW bits		------------------------
.equ	DBGSE		= 7		; 0x80 - Debug Support Switch Enable
.equ	CPBF		= 6		; 0x40 - CPU Busy Flag
.equ	CPBFOS_MASK	= 0x30		;      - CPU Busy Flag Output Select (2 bits)
.equ	CPBFOS0		= 4		;          CPBFOS BIT0 position
.equ	DBGGS_MASK	= 0x0F		;      - Debug Support Group Select (4 bits)
.equ	DBGGS0		= 0		;          DBGGS BIT0 position
; ::::  CPBFOS	:::: bitfield values
;			0x00		; no output
;			0x10		; PB0
;			0x20		; PB4
;			0x30		; PC1



; ====	RSSIB MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register RSCOM bits		------------------------
.equ	RSHISC		= 2		; 0x04 - RSSI LNA High Sensitivity Compensation
.equ	RSIFC		= 1		; 0x02 - RSSI IF Amplifier Compensation
.equ	RSDC		= 0		; 0x01 - RSSI Damping Compensation

; ----------	Register RSSC bits		------------------------
.equ	RSPKF		= 6		; 0x40 - RSSI Peak Values to SFIFO
.equ	RSHRX		= 5		; 0x20 - RSSI High Band Reception
.equ	RSWLH		= 4		; 0x10 - RSSI Within Low and High Limits
.equ	RSUP_MASK	= 0x0F		;      - RSSI Update Period (4 bits)
.equ	RSUP0		= 0		;          RSUP BIT0 position



; ====	RXBUF MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register RXBC1 bits		------------------------
.equ	RXLSBB		= 7		; 0x80 - Receive Data LSB-First Path B
.equ	RXCBLB_MASK	= 0x60		;      - Receive CRC Bit Length Path B (2 bits)
.equ	RXCBLB0		= 5		;          RXCBLB BIT0 position
.equ	RXCEB		= 4		; 0x10 - RX CRC Enable data path B
.equ	RXLSBA		= 3		; 0x08 - Receive Data LSB-First Path A
.equ	RXCBLA_MASK	= 0x06		;      - Receive CRC Bit Length Path A (2 bits)
.equ	RXCBLA0		= 1		;          RXCBLA BIT0 position
.equ	RXCEA		= 0		; 0x01 - RX CRC Enable data path A
; ::::  RXCBLB	:::: bitfield values
;			0x00		; CRC 4-bit
;			0x20		; CRC 8-bit
;			0x40		; CRC 16-bit
; ::::  RXCBLA	:::: bitfield values
;			0x00		; CRC 4-bit
;			0x02		; CRC 8-bit
;			0x04		; CRC 16-bit

; ----------	Register RXBC2 bits		------------------------
.equ	RXBCLR		= 2		; 0x04 - RX Buffer Clear
.equ	RXBF		= 1		; 0x02 - RX Buffer Finish
.equ	RXBPB		= 0		; 0x01 - RX Buffer Path Select



; ====	RXDSP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EOTCA bits		------------------------
.equ	EOTBFE		= 7		; 0x80 - End Of Telegram Path B Fail Enable
.equ	RRFEA		= 6		; 0x40 - RSSI Range Fail Enable Path A
.equ	TELREA		= 5		; 0x20 - Telegram Length Reached Enable Path A
.equ	TMOFEA		= 4		; 0x10 - Time-Out Fail Enable Path A
.equ	MANFEA		= 3		; 0x08 - Manchester Coding Fail Enable Path A
.equ	SYTFEA		= 2		; 0x04 - Symbol Timing Fail Enable Path A
.equ	AMPFEA		= 1		; 0x02 - Modulation Amplitude Fail Enable Path A
.equ	CARFEA		= 0		; 0x01 - RF Carrier Fail Enable Path A

; ----------	Register EOTCB bits		------------------------
.equ	EOTAFE		= 7		; 0x80 - End Of Telegram Path A Fail Enable
.equ	RRFEB		= 6		; 0x40 - RSSI Range Fail Enable Path B
.equ	TELREB		= 5		; 0x20 - Telegram Length Reached Enable Path B
.equ	TMOFEB		= 4		; 0x10 - Time-Out Fail Enable Path B
.equ	MANFEB		= 3		; 0x08 - Manchester Coding Fail Enable Path B
.equ	SYTFEB		= 2		; 0x04 - Symbol Timing Fail Enable Path B
.equ	AMPFEB		= 1		; 0x02 - Modulation Amplitude Fail Enable Path B
.equ	CARFEB		= 0		; 0x01 - RF Carrier Fail Enable Path B

; ----------	Register EOTSA bits		------------------------
.equ	EOTBF		= 7		; 0x80 - End Of Telegram Path B Fail
.equ	RRFA		= 6		; 0x40 - RSSI Range Fail Path A
.equ	TELRA		= 5		; 0x20 - Telegram Length Reached Path A
.equ	TMOFA		= 4		; 0x10 - Time-Out Fail Path A
.equ	MANFA		= 3		; 0x08 - Manchester Coding Fail Path A
.equ	SYTFA		= 2		; 0x04 - Symbol Timing Fail Path A
.equ	AMPFA		= 1		; 0x02 - Modulation Amplitude Fail Path A
.equ	CARFA		= 0		; 0x01 - RF Carrier Fail Path A

; ----------	Register EOTSB bits		------------------------
.equ	EOTAF		= 7		; 0x80 - End Of Telegram Path A Fail
.equ	RRFB		= 6		; 0x40 - RSSI Range Fail Path B
.equ	TELRB		= 5		; 0x20 - Telegram Length Reached Path B
.equ	TMOFB		= 4		; 0x10 - Time-Out Fail Path B
.equ	MANFB		= 3		; 0x08 - Manchester Coding Fail Path B
.equ	SYTFB		= 2		; 0x04 - Symbol Timing Fail Path B
.equ	AMPFB		= 1		; 0x02 - Modulation Amplitude Fail Path B
.equ	CARFB		= 0		; 0x01 - RF Carrier Fail Path B

; ----------	Register RDCR bits		------------------------
.equ	RDEN		= 2		; 0x04 - Rx DSP Enable
.equ	ADIVEN		= 1		; 0x02 - Divided ADC Clock Enable
.equ	RDPU		= 0		; 0x01 - Rx DSP Power Up

; ----------	Register RDOCR bits		------------------------
.equ	RDSIDB		= 6		; 0x40 - Rx DSP Start Bit Is Data Path B
.equ	RDSIDA		= 5		; 0x20 - Rx DSP Start Bit Is Data Path A
.equ	ETRPB		= 4		; 0x10 - Enable Transparent Raw Data Path B
.equ	ETRPA		= 3		; 0x08 - Enable Transparent Raw Data Path A
.equ	TMDS_MASK	= 0x06		;      - Transparent Mode Data Select (2 bits)
.equ	TMDS0		= 1		;          TMDS BIT0 position

; ----------	Register RDPR bits		------------------------
.equ	RDPRF		= 7		; 0x80 - Rx DSP Power Reduction Register Busy Flag
.equ	ARDPRF		= 6		; 0x40 - Automatic Rx DSP Power Reduction Flag
.equ	APRPTA		= 5		; 0x20 - Automatic Power Reduction Path A
.equ	APRPTB		= 4		; 0x10 - Automatic Power Reduction Path B
.equ	PRTMP		= 3		; 0x08 - Power Reduction Temperature Measurement
.equ	PRFLT		= 2		; 0x04 - Power Reduction Digital Channel Filter
.equ	PRPTA		= 1		; 0x02 - Power Reduction Demodulator and Receiving Path A
.equ	PRPTB		= 0		; 0x01 - Power Reduction Demodulator and Receiving Path B

; ----------	Register RDSIFR bits		------------------------
.equ	WCOB		= 7		; 0x80 - Wake Check Ok Path B
.equ	WCOA		= 6		; 0x40 - Wake Check Ok Path A
.equ	SOTB		= 5		; 0x20 - Start Of Telegram Path B
.equ	SOTA		= 4		; 0x10 - Start Of Telegram Path A
.equ	EOTB		= 3		; 0x08 - End Of Telegram Path B
.equ	EOTA		= 2		; 0x04 - End Of Telegram Path A
.equ	NBITB		= 1		; 0x02 - New Bit Path B
.equ	NBITA		= 0		; 0x01 - New Bit Path A

; ----------	Register RDSIMR bits		------------------------
.equ	WCOBM		= 7		; 0x80 - Wake Check Ok Path B Interrupt Mask
.equ	WCOAM		= 6		; 0x40 - Wake Check Ok Path A Interrupt Mask
.equ	SOTBM		= 5		; 0x20 - Start Of Telegram Path B Interrupt Mask
.equ	SOTAM		= 4		; 0x10 - Start Of Telegram Path A Interrupt Mask
.equ	EOTBM		= 3		; 0x08 - End Of Telegram Path B Interrupt Mask
.equ	EOTAM		= 2		; 0x04 - End Of Telegram Path A Interrupt Mask
.equ	NBITBM		= 1		; 0x02 - New Bit Path B Interrupt Mask
.equ	NBITAM		= 0		; 0x01 - New Bit Path A Interrupt Mask

; ----------	Register SOTCA bits		------------------------
.equ	WCOBOE		= 7		; 0x80 - Wake Check Ok Path B Ok Enable
.equ	RROEA		= 6		; 0x40 - RSSI Range Ok Enable Path A
.equ	SFIDEA		= 5		; 0x20 - Start of Frame Identifier Enable Path A
.equ	WUPEA		= 4		; 0x10 - Wake Up Pattern Enable Path A
.equ	MANOEA		= 3		; 0x08 - Manchester Coding Ok Enable Path A
.equ	SYTOEA		= 2		; 0x04 - Symbol Timing Ok Enable Path A
.equ	AMPOEA		= 1		; 0x02 - Modulation Amplitude Ok Enable Path A
.equ	CAROEA		= 0		; 0x01 - RF Carrier Ok Enable Path A

; ----------	Register SOTCB bits		------------------------
.equ	WCOAOE		= 7		; 0x80 - Wake Check Ok Path A Ok Enable
.equ	RROEB		= 6		; 0x40 - RSSI Range Ok Enable Path B
.equ	SFIDEB		= 5		; 0x20 - Start of Frame Identifier Enable Path B
.equ	WUPEB		= 4		; 0x10 - Wake Up Pattern Enable Path B
.equ	MANOEB		= 3		; 0x08 - Manchester Coding Ok Enable Path B
.equ	SYTOEB		= 2		; 0x04 - Symbol Timing Ok Enable Path B
.equ	AMPOEB		= 1		; 0x02 - Modulation Amplitude Ok Enable Path B
.equ	CAROEB		= 0		; 0x01 - RF Carrier Ok Enable Path B

; ----------	Register SOTSA bits		------------------------
.equ	WCOBO		= 7		; 0x80 - Wake Check Ok Path B Ok
.equ	RROA		= 6		; 0x40 - RSSI Range Ok Path A
.equ	SFIDOA		= 5		; 0x20 - Start of Frame Identifier Ok Path A
.equ	WUPOA		= 4		; 0x10 - Wake Up Pattern Ok Path A
.equ	MANOA		= 3		; 0x08 - Manchester Coding Ok Path A
.equ	SYTOA		= 2		; 0x04 - Symbol Timing Ok Path A
.equ	AMPOA		= 1		; 0x02 - Modulation Amplitude Ok Path A
.equ	CAROA		= 0		; 0x01 - RF Carrier Ok Path A

; ----------	Register SOTSB bits		------------------------
.equ	WCOAO		= 7		; 0x80 - Wake Check Ok Path A Ok
.equ	RROB		= 6		; 0x40 - RSSI Range Ok Path B
.equ	SFIDOB		= 5		; 0x20 - Start of Frame Identifier Ok Path B
.equ	WUPOB		= 4		; 0x10 - Wake Up Pattern Ok Path B
.equ	MANOB		= 3		; 0x08 - Manchester Coding Ok Path B
.equ	SYTOB		= 2		; 0x04 - Symbol Timing Ok Path B
.equ	AMPOB		= 1		; 0x02 - Modulation Amplitude Ok Path B
.equ	CAROB		= 0		; 0x01 - RF Carrier Ok Path B

; ----------	Register TESRA bits		------------------------
.equ	EOTLA_MASK	= 0x06		;      - End of Telegram Location Path A (2 bits)
.equ	EOTLA0		= 1		;          EOTLA BIT0 position
.equ	CRCOA		= 0		; 0x01 - Cyclic Redundancy Check Ok Path A
; ::::  EOTLA	:::: bitfield values
;			0x00		; No EOT
;			0x02		; Before WCO
;			0x04		; Between WCO and SOT
;			0x06		; After SOT

; ----------	Register TESRB bits		------------------------
.equ	EOTLB_MASK	= 0x06		;      - End of Telegram Location Path B (2 bits)
.equ	EOTLB0		= 1		;          EOTLB BIT0 position
.equ	CRCOB		= 0		; 0x01 - Cyclic Redundancy Check Ok Path B
; ::::  EOTLB	:::: bitfield values
;			0x00		; No EOT
;			0x02		; Before WCO
;			0x04		; Between WCO and SOT
;			0x06		; After SOT



; ====	SFIFO MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFC bits		------------------------
.equ	SFDRA		= 7		; 0x80 - Support FIFO Direct Read Access Operational Mode
.equ	SFFLC_MASK	= 0x1F		;      - Support FIFO Fill Level Configuration (5 bits)
.equ	SFFLC0		= 0		;          SFFLC BIT0 position

; ----------	Register SFI bits		------------------------
.equ	SFERIM		= 1		; 0x02 - Support FIFO Error Interrupt Mask
.equ	SFFLIM		= 0		; 0x01 - Support FIFO Fill Level Interrupt Mask

; ----------	Register SFL bits		------------------------
.equ	SFCLR		= 7		; 0x80 - Support FIFO Clear
.equ	SFFLS_MASK	= 0x1F		;      - Support FIFO Fill Level Status (5 bits)
.equ	SFFLS0		= 0		;          SFFLS BIT0 position

; ----------	Register SFS bits		------------------------
.equ	SFOFL		= 2		; 0x04 - Support FIFO Overflow Flag
.equ	SFUFL		= 1		; 0x02 - Support FIFO Underflow Flag
.equ	SFFLRF		= 0		; 0x01 - Support FIFO Fill Level Reached Status Flag



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFFR bits		------------------------
.equ	TFC		= 7		; 0x80 - Transmit Buffer Clear
.equ	TFL_MASK	= 0x70		;      - Transmit Buffer Fill Level (3 bits)
.equ	TFL0		= 4		;          TFL BIT0 position
.equ	RFC		= 3		; 0x08 - Rx Buffer Clear
.equ	RFL_MASK	= 0x07		;      - Receive Buffer Fill Level (3 bits)
.equ	RFL0		= 0		;          RFL BIT0 position

; ----------	Register SFIR bits		------------------------
.equ	STIE		= 7		; 0x80 - SPI Transmit Buffer Interrupt Enable
.equ	TIL_MASK	= 0x70		;      - Transmit Buffer Interrupt Level (3 bits)
.equ	TIL0		= 4		;          TIL BIT0 position
.equ	SRIE		= 3		; 0x08 - SPI Rx Buffer Interrupt Enable
.equ	RIL_MASK	= 0x07		;      - Receive Buffer Interrupt Level (3 bits)
.equ	RIL0		= 0		;          RIL BIT0 position

; ----------	Register SPCR bits		------------------------
.equ	SPIE		= 7		; 0x80 - SPI Interrupt Enable
.equ	SPE		= 6		; 0x40 - SPI Enable
.equ	DORD		= 5		; 0x20 - Data Order
.equ	MSTR		= 4		; 0x10 - Master/Slave Select
.equ	CPOL		= 3		; 0x08 - Clock Polarity
.equ	CPHA		= 2		; 0x04 - Clock Phase
.equ	SPR_MASK	= 0x03		;      - SPI Clock Rate Select (2 bits)
.equ	SPR0		= 0		;          SPR BIT0 position
; ::::  SPR	>>>> This is a part of COMM_SCK_RATE_3BIT enum (see complete values list below)

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	TXIF		= 5		; 0x20 - Tx Buffer Interrupt Flag
.equ	RXIF		= 4		; 0x10 - Rx Buffer Interrupt Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit



; ====	SSM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EOTC1A bits		------------------------
.equ	EOTBFE1		= 7		; 0x80 - End Of Telegram Path B Fail Enable
.equ	RRFEA1		= 6		; 0x40 - RSSI Range Fail Enable Path A
.equ	TELREA1		= 5		; 0x20 - Telegram Length Reached Enable Path A
.equ	TMOFEA1		= 4		; 0x10 - Time-Out Fail Enable Path A
.equ	MANFEA1		= 3		; 0x08 - Manchester Coding Fail Enable Path A
.equ	SYTFEA1		= 2		; 0x04 - Symbol Timing Fail Enable Path A
.equ	AMPFEA1		= 1		; 0x02 - Modulation Amplitude Fail Enable Path A
.equ	CARFEA1		= 0		; 0x01 - RF Carrier Fail Enable Path A

; ----------	Register EOTC1B bits		------------------------
.equ	EOTAFE1		= 7		; 0x80 - End Of Telegram Path A Fail Enable
.equ	RRFEB1		= 6		; 0x40 - RSSI Range Fail Enable Path B
.equ	TELREB1		= 5		; 0x20 - Telegram Length Reached Enable Path B
.equ	TMOFEB1		= 4		; 0x10 - Time-Out Fail Enable Path B
.equ	MANFEB1		= 3		; 0x08 - Manchester Coding Fail Enable Path B
.equ	SYTFEB1		= 2		; 0x04 - Symbol Timing Fail Enable Path B
.equ	AMPFEB1		= 1		; 0x02 - Modulation Amplitude Fail Enable Path B
.equ	CARFEB1		= 0		; 0x01 - RF Carrier Fail Enable Path B

; ----------	Register EOTC2A bits		------------------------
.equ	EOTBFE2		= 7		; 0x80 - End Of Telegram Path B Fail Enable
.equ	RRFEA2		= 6		; 0x40 - RSSI Range Fail Enable Path A
.equ	TELREA2		= 5		; 0x20 - Telegram Length Reached Enable Path A
.equ	TMOFEA2		= 4		; 0x10 - Time-Out Fail Enable Path A
.equ	MANFEA2		= 3		; 0x08 - Manchester Coding Fail Enable Path A
.equ	SYTFEA2		= 2		; 0x04 - Symbol Timing Fail Enable Path A
.equ	AMPFEA2		= 1		; 0x02 - Modulation Amplitude Fail Enable Path A
.equ	CARFEA2		= 0		; 0x01 - RF Carrier Fail Enable Path A

; ----------	Register EOTC2B bits		------------------------
.equ	EOTAFE2		= 7		; 0x80 - End Of Telegram Path A Fail Enable
.equ	RRFEB2		= 6		; 0x40 - RSSI Range Fail Enable Path B
.equ	TELREB2		= 5		; 0x20 - Telegram Length Reached Enable Path B
.equ	TMOFEB2		= 4		; 0x10 - Time-Out Fail Enable Path B
.equ	MANFEB2		= 3		; 0x08 - Manchester Coding Fail Enable Path B
.equ	SYTFEB2		= 2		; 0x04 - Symbol Timing Fail Enable Path B
.equ	AMPFEB2		= 1		; 0x02 - Modulation Amplitude Fail Enable Path B
.equ	CARFEB2		= 0		; 0x01 - RF Carrier Fail Enable Path B

; ----------	Register EOTC3A bits		------------------------
.equ	EOTBFE3		= 7		; 0x80 - End Of Telegram Path B Fail Enable
.equ	RRFEA3		= 6		; 0x40 - RSSI Range Fail Enable Path A
.equ	TELREA3		= 5		; 0x20 - Telegram Length Reached Enable Path A
.equ	TMOFEA3		= 4		; 0x10 - Time-Out Fail Enable Path A
.equ	MANFEA3		= 3		; 0x08 - Manchester Coding Fail Enable Path A
.equ	SYTFEA3		= 2		; 0x04 - Symbol Timing Fail Enable Path A
.equ	AMPFEA3		= 1		; 0x02 - Modulation Amplitude Fail Enable Path A
.equ	CARFEA3		= 0		; 0x01 - RF Carrier Fail Enable Path A

; ----------	Register EOTC3B bits		------------------------
.equ	EOTAFE3		= 7		; 0x80 - End Of Telegram Path A Fail Enable
.equ	RRFEB3		= 6		; 0x40 - RSSI Range Fail Enable Path B
.equ	TELREB3		= 5		; 0x20 - Telegram Length Reached Enable Path B
.equ	TMOFEB3		= 4		; 0x10 - Time-Out Fail Enable Path B
.equ	MANFEB3		= 3		; 0x08 - Manchester Coding Fail Enable Path B
.equ	SYTFEB3		= 2		; 0x04 - Symbol Timing Fail Enable Path B
.equ	AMPFEB3		= 1		; 0x02 - Modulation Amplitude Fail Enable Path B
.equ	CARFEB3		= 0		; 0x01 - RF Carrier Fail Enable Path B

; ----------	Register GTCR bits		------------------------
.equ	IWUPB		= 7		; 0x80 - Intermittent WUP Mode Path B
.equ	DARB		= 6		; 0x40 - Demodulator Automatic Restart Path B
.equ	GAPMB		= 5		; 0x20 - Gap Mode Path B
.equ	RXTEHB		= 4		; 0x10 - Rx Telegram End Handling Path B
.equ	IWUPA		= 3		; 0x08 - Intermittent WUP Mode Path A
.equ	DARA		= 2		; 0x04 - Demodulator Automatic Restart Path A
.equ	GAPMA		= 1		; 0x02 - Gap Mode Path A
.equ	RXTEHA		= 0		; 0x01 - Rx Telegram End Handling Path A

; ----------	Register MSMCR1 bits		------------------------
.equ	MSMSM1_MASK	= 0xF0		;      - Master State Machine Sub-State Machine Select 1 (4 bits)
.equ	MSMSM10		= 4		;          MSMSM1 BIT0 position
.equ	MSMSM0_MASK	= 0x0F		;      - Master State Machine Sub-State Machine Select 0 (4 bits)
.equ	MSMSM00		= 0		;          MSMSM0 BIT0 position
; ::::  MSMSM1	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; RX DSP enable
;			0x40		; RX DSP disable
;			0x50		; TX DSP enable
;			0x60		; TX DSP disable
;			0x70		; RX to TX
;			0x80		; TX to RX
;			0x90		; Get telegram
;			0xA0		; Send telegram
;			0xB0		; Shut down
;			0xC0		; VCO Tuning
; ::::  MSMSM0	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; RX DSP enable
;			0x04		; RX DSP disable
;			0x05		; TX DSP enable
;			0x06		; TX DSP disable
;			0x07		; RX to TX
;			0x08		; TX to RX
;			0x09		; Get telegram
;			0x0A		; Send telegram
;			0x0B		; Shut down
;			0x0C		; VCO Tuning

; ----------	Register MSMCR2 bits		------------------------
.equ	MSMSM3_MASK	= 0xF0		;      - Master State Machine Sub-State Machine Select 3 (4 bits)
.equ	MSMSM30		= 4		;          MSMSM3 BIT0 position
.equ	MSMSM2_MASK	= 0x0F		;      - Master State Machine Sub-State Machine Select 2 (4 bits)
.equ	MSMSM20		= 0		;          MSMSM2 BIT0 position
; ::::  MSMSM3	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; RX DSP enable
;			0x40		; RX DSP disable
;			0x50		; TX DSP enable
;			0x60		; TX DSP disable
;			0x70		; RX to TX
;			0x80		; TX to RX
;			0x90		; Get telegram
;			0xA0		; Send telegram
;			0xB0		; Shut down
;			0xC0		; VCO Tuning
; ::::  MSMSM2	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; RX DSP enable
;			0x04		; RX DSP disable
;			0x05		; TX DSP enable
;			0x06		; TX DSP disable
;			0x07		; RX to TX
;			0x08		; TX to RX
;			0x09		; Get telegram
;			0x0A		; Send telegram
;			0x0B		; Shut down
;			0x0C		; VCO Tuning

; ----------	Register MSMCR3 bits		------------------------
.equ	MSMSM5_MASK	= 0xF0		;      - Master State Machine Sub-State Machine Select 5 (4 bits)
.equ	MSMSM50		= 4		;          MSMSM5 BIT0 position
.equ	MSMSM4_MASK	= 0x0F		;      - Master State Machine Sub-State Machine Select 4 (4 bits)
.equ	MSMSM40		= 0		;          MSMSM4 BIT0 position
; ::::  MSMSM5	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; RX DSP enable
;			0x40		; RX DSP disable
;			0x50		; TX DSP enable
;			0x60		; TX DSP disable
;			0x70		; RX to TX
;			0x80		; TX to RX
;			0x90		; Get telegram
;			0xA0		; Send telegram
;			0xB0		; Shut down
;			0xC0		; VCO Tuning
; ::::  MSMSM4	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; RX DSP enable
;			0x04		; RX DSP disable
;			0x05		; TX DSP enable
;			0x06		; TX DSP disable
;			0x07		; RX to TX
;			0x08		; TX to RX
;			0x09		; Get telegram
;			0x0A		; Send telegram
;			0x0B		; Shut down
;			0x0C		; VCO Tuning

; ----------	Register MSMCR4 bits		------------------------
.equ	MSMSM7_MASK	= 0xF0		;      - Master State Machine Sub-State Machine Select 7 (4 bits)
.equ	MSMSM70		= 4		;          MSMSM7 BIT0 position
.equ	MSMSM6_MASK	= 0x0F		;      - Master State Machine Sub-State Machine Select 6 (4 bits)
.equ	MSMSM60		= 0		;          MSMSM6 BIT0 position
; ::::  MSMSM7	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; RX DSP enable
;			0x40		; RX DSP disable
;			0x50		; TX DSP enable
;			0x60		; TX DSP disable
;			0x70		; RX to TX
;			0x80		; TX to RX
;			0x90		; Get telegram
;			0xA0		; Send telegram
;			0xB0		; Shut down
;			0xC0		; VCO Tuning
; ::::  MSMSM6	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; RX DSP enable
;			0x04		; RX DSP disable
;			0x05		; TX DSP enable
;			0x06		; TX DSP disable
;			0x07		; RX to TX
;			0x08		; TX to RX
;			0x09		; Get telegram
;			0x0A		; Send telegram
;			0x0B		; Shut down
;			0x0C		; VCO Tuning

; ----------	Register MSMSTR bits		------------------------
.equ	SSMMST_MASK	= 0x1F		;      - Sequencer State Machine Master State (5 bits)
.equ	SSMMST0		= 0		;          SSMMST BIT0 position

; ----------	Register SOTC1A bits		------------------------
.equ	WCOBOE1		= 7		; 0x80 - Wake Check Ok Path B Ok Enable
.equ	RROEA1		= 6		; 0x40 - RSSI Range Ok Enable Path A
.equ	SFIDEA1		= 5		; 0x20 - Start of Frame Identifier Enable Path A
.equ	WUPEA1		= 4		; 0x10 - Wake Up Pattern Enable Path A
.equ	MANOEA1		= 3		; 0x08 - Manchester Coding Ok Enable Path A
.equ	SYTOEA1		= 2		; 0x04 - Symbol Timing Ok Enable Path A
.equ	AMPOEA1		= 1		; 0x02 - Modulation Amplitude Ok Enable Path A
.equ	CAROEA1		= 0		; 0x01 - RF Carrier Ok Enable Path A

; ----------	Register SOTC1B bits		------------------------
.equ	WCOAOE1		= 7		; 0x80 - Wake Check Ok Path A Ok Enable
.equ	RROEB1		= 6		; 0x40 - RSSI Range Ok Enable Path B
.equ	SFIDEB1		= 5		; 0x20 - Start of Frame Identifier Enable Path B
.equ	WUPEB1		= 4		; 0x10 - Wake Up Pattern Enable Path B
.equ	MANOEB1		= 3		; 0x08 - Manchester Coding Ok Enable Path B
.equ	SYTOEB1		= 2		; 0x04 - Symbol Timing Ok Enable Path B
.equ	AMPOEB1		= 1		; 0x02 - Modulation Amplitude Ok Enable Path B
.equ	CAROEB1		= 0		; 0x01 - RF Carrier Ok Enable Path B

; ----------	Register SOTC2A bits		------------------------
.equ	WCOBOE2		= 7		; 0x80 - Wake Check Ok Path B Ok Enable
.equ	RROEA2		= 6		; 0x40 - RSSI Range Ok Enable Path A
.equ	SFIDEA2		= 5		; 0x20 - Start of Frame Identifier Enable Path A
.equ	WUPEA2		= 4		; 0x10 - Wake Up Pattern Enable Path A
.equ	MANOEA2		= 3		; 0x08 - Manchester Coding Ok Enable Path A
.equ	SYTOEA2		= 2		; 0x04 - Symbol Timing Ok Enable Path A
.equ	AMPOEA2		= 1		; 0x02 - Modulation Amplitude Ok Enable Path A
.equ	CAROEA2		= 0		; 0x01 - RF Carrier Ok Enable Path A

; ----------	Register SOTC2B bits		------------------------
.equ	WCOAOE2		= 7		; 0x80 - Wake Check Ok Path A Ok Enable
.equ	RROEB2		= 6		; 0x40 - RSSI Range Ok Enable Path B
.equ	SFIDEB2		= 5		; 0x20 - Start of Frame Identifier Enable Path B
.equ	WUPEB2		= 4		; 0x10 - Wake Up Pattern Enable Path B
.equ	MANOEB2		= 3		; 0x08 - Manchester Coding Ok Enable Path B
.equ	SYTOEB2		= 2		; 0x04 - Symbol Timing Ok Enable Path B
.equ	AMPOEB2		= 1		; 0x02 - Modulation Amplitude Ok Enable Path B
.equ	CAROEB2		= 0		; 0x01 - RF Carrier Ok Enable Path B

; ----------	Register SSMCR bits		------------------------
.equ	SETRPB		= 7		; 0x80 - SSM Enable Raw Transparent Path B
.equ	SETRPA		= 6		; 0x40 - SSM Enable Transparent Path A
.equ	SSMTAE		= 5		; 0x20 - SSM Tx ASK-Shaping Enable
.equ	SSMPVE		= 4		; 0x10 - SSM PA Voltage Enable
.equ	SSMTPE		= 3		; 0x08 - SSM Tx Preemphasis Enable
.equ	SSMTGE		= 2		; 0x04 - SSM Tx Gauss Shaping Enable
.equ	SSMTM		= 1		; 0x02 - SSM Temperature Measurement
.equ	SSMTX		= 0		; 0x01 - SSM Tx

; ----------	Register SSMFBR bits		------------------------
.equ	SSMPLDT		= 5		; 0x20 - SSM PLL Lock Delay Time
.equ	SSMHADT		= 4		; 0x10 - SSM Half Antenna Damping Delay Time
.equ	SSMDFDT		= 3		; 0x08 - SSM Double Filter Delay Time
.equ	SSMFID_MASK	= 0x07		;      - SSM Filter Delay (3 bits)
.equ	SSMFID0		= 0		;          SSMFID BIT0 position
; ::::  SSMFID	:::: bitfield values
;			0x00		; 380us (25kHz)
;			0x01		; 202us (50kHz)
;			0x02		; 135us (80kHz)
;			0x03		;  75us (165kHz)
;			0x04		;  58.5us (235kHz)
;			0x05		;  45us (360kHz)

; ----------	Register SSMFCR bits		------------------------
.equ	SSMCEH		= 3		; 0x08 - SSM Continuous Start Telegram End Handling
.equ	SSMSEH		= 2		; 0x04 - SSM Single Start Telegram End Handling
.equ	SSMIDSF		= 1		; 0x02 - SSM ID Scan Fail
.equ	SSMIDSO		= 0		; 0x01 - SSM ID Scan OK

; ----------	Register SSMIFR bits		------------------------
.equ	SSMIF		= 0		; 0x01 - SSM Interrupt Flag

; ----------	Register SSMIMR bits		------------------------
.equ	SSMIM		= 0		; 0x01 - SSM Interrupt Mask

; ----------	Register SSMRCR bits		------------------------
.equ	SSMTMOE		= 7		; 0x80 - SSM Transparent Output Enable
.equ	SSMIDSE		= 6		; 0x40 - SSM ID Check Enable
.equ	SSMIFA		= 5		; 0x20 - SSM IF Amplifier Enable
.equ	SSMPVS		= 4		; 0x10 - SSM Path Valid After SOT
.equ	SSMHIS		= 3		; 0x08 - SSM High Sensitivity Enable
.equ	SSMAD		= 2		; 0x04 - SSM Antenna Damping Disable
.equ	SSMPB		= 1		; 0x02 - SSM Path B
.equ	SSMPA		= 0		; 0x01 - SSM Path A

; ----------	Register SSMRR bits		------------------------
.equ	SSMST		= 1		; 0x02 - SSM Stop
.equ	SSMR		= 0		; 0x01 - SSM Run

; ----------	Register SSMSR bits		------------------------
.equ	SSMERR		= 7		; 0x80 - SSM Error
.equ	SSMESM_MASK	= 0x0F		;      - SSM Error State Machine (4 bits)
.equ	SSMESM0		= 0		;          SSMESM BIT0 position

; ----------	Register SSMSTR bits		------------------------
.equ	SSMSTA_MASK	= 0x3F		;      - SSM State A (6 bits)
.equ	SSMSTA0		= 0		;          SSMSTA BIT0 position

; ----------	Register SSMXSR bits		------------------------
.equ	SSMSTB_MASK	= 0x3F		;      - SSM State B (6 bits)
.equ	SSMSTB0		= 0		;          SSMSTB BIT0 position



; ====	SUP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DCC1 bits		------------------------
.equ	DCCDIV_MASK	= 0x30		;      - DCDC Converter Clock Divider (2 bits)
.equ	DCCDIV0		= 4		;          DCCDIV BIT0 position
.equ	DCHSSW		= 1		; 0x02 - DCDC Converter High Side Switch
.equ	DCEN		= 0		; 0x01 - DCDC Converter Enable
; ::::  DCCDIV	:::: bitfield values
;			0x00		; 16 (375kHz)
;			0x10		; 12 (500kHz)
;			0x20		;  8 (750kHz)
;			0x30		;  6 (1MHz)

; ----------	Register DCC2 bits		------------------------
.equ	DCDRV_MASK	= 0x30		;      - DCDC Converter Driver Strength (2 bits)
.equ	DCDRV0		= 4		;          DCDRV BIT0 position
.equ	DCCLIM_MASK	= 0x0C		;      - DCDC Converter Current Limit (2 bits)
.equ	DCCLIM0		= 2		;          DCCLIM BIT0 position
.equ	DCVOUT_MASK	= 0x03		;      - DCDC Converter Output Voltage (2 bits)
.equ	DCVOUT0		= 0		;          DCVOUT BIT0 position
; ::::  DCVOUT	:::: bitfield values
;			0x00		; 2.2V
;			0x01		; 2.5V
;			0x02		; 2.8V
;			0x03		; 3.3V

; ----------	Register DCCAL1 bits		------------------------
.equ	ZCCAL_MASK	= 0xF0		;      - Zero Crossing Calibration (4 bits)
.equ	ZCCAL0		= 4		;          ZCCAL BIT0 position
.equ	CCAL_MASK	= 0x0F		;      - Current Limit Calibration (4 bits)
.equ	CCAL0		= 0		;          CCAL BIT0 position

; ----------	Register DCCAL2 bits		------------------------
.equ	OFCAL_MASK	= 0xF0		;      - Offset Calibration (4 bits)
.equ	OFCAL0		= 4		;          OFCAL BIT0 position
.equ	DTCAL_MASK	= 0x0F		;      - Dead Time Calibration (4 bits)
.equ	DTCAL0		= 0		;          DTCAL BIT0 position

; ----------	Register DCCAL3 bits		------------------------
.equ	SAWCAL_MASK	= 0x03		;      - Ramp Calibration (2 bits)
.equ	SAWCAL0		= 0		;          SAWCAL BIT0 position

; ----------	Register DCTST bits		------------------------
.equ	DCTST_MASK	= 0x1F		;      - DCDC Converter Test Mode (5 bits)
.equ	DCTST0		= 0		;          DCTST BIT0 position

; ----------	Register RCTUNE4 bits		------------------------
.equ	RTUNE4_MASK	= 0xF0		;      - 4 Bit Resistor Tuning (4 bits)
.equ	RTUNE40		= 4		;          RTUNE4 BIT0 position
.equ	CTUNE4_MASK	= 0x0F		;      - 4 Bit Capacitor Tuning (4 bits)
.equ	CTUNE40		= 0		;          CTUNE4 BIT0 position

; ----------	Register SUPCR bits		------------------------
.equ	AVDIC		= 6		; 0x40 - AVCC Double Internal Current
.equ	AVEN		= 5		; 0x20 - AVCC Enable
.equ	PVDIC		= 4		; 0x10 - Power Amplifier Regulator Double Internal Current
.equ	PV22		= 3		; 0x08 - Power Amplifier Voltage 2.2V
.equ	PVEN		= 2		; 0x04 - Power Amplifier Voltage Supply Enable
.equ	AVCCLM		= 1		; 0x02 - AVCC Low Interrupt Mask
.equ	AVCCRM		= 0		; 0x01 - AVCC Reset Interrupt Mask

; ----------	Register SUPFR bits		------------------------
.equ	DCERF		= 3		; 0x08 - DCDC Converter Error Flag
.equ	DCRDYF		= 2		; 0x04 - DCDC Converter Ready Flag
.equ	AVCCLF		= 1		; 0x02 - AVCC Low Flag
.equ	AVCCRF		= 0		; 0x01 - AVCC Reset Flag



; ====	TIMER0_WDT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register T0CR bits		------------------------
.equ	T0PR		= 4		; 0x10 - Timer0 Prescaler Reset
.equ	T0IE		= 3		; 0x08 - Timer0 Interrupt Enable
.equ	T0PS_MASK	= 0x07		;      - Timer0 Prescaler Select (3 bits)
.equ	T0PS0		= 0		;          T0PS BIT0 position

; ----------	Register T0IFR bits		------------------------
.equ	T0F		= 0		; 0x01 - Timer0 Flag

; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watchdog Enable
.equ	WDPS_MASK	= 0x07		;      - Watchdog Prescaler Select (3 bits)
.equ	WDPS0		= 0		;          WDPS BIT0 position



; ====	TIMER1 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register T1CR bits		------------------------
.equ	T1ENA		= 7		; 0x80 - Timer1 Enable
.equ	T1TOS		= 6		; 0x40 - Timer1 Toggle with Start
.equ	T1RES		= 5		; 0x20 - Timer1 Reset
.equ	T1TOP		= 4		; 0x10 - Timer1 Toggle Output Preset
.equ	T1CRM		= 2		; 0x04 - Timer1 Compare Reset Mask
.equ	T1CTM		= 1		; 0x02 - Timer1 Compare Toggle Mask
.equ	T1OTM		= 0		; 0x01 - Timer1 Overflow Toggle Mask

; ----------	Register T1IFR bits		------------------------
.equ	T1COF		= 1		; 0x02 - Timer1 Compare Flag
.equ	T1OFF		= 0		; 0x01 - Timer1 Overflow Flag

; ----------	Register T1IMR bits		------------------------
.equ	T1CIM		= 1		; 0x02 - Timer1 Compare Interrupt Mask
.equ	T1OIM		= 0		; 0x01 - Timer1 Overflow Interrupt Mask

; ----------	Register T1MR bits		------------------------
.equ	T1DC_MASK	= 0xC0		;      - Timer1 Duty Cycle (2 bits)
.equ	T1DC0		= 6		;          T1DC BIT0 position
.equ	T1PS_MASK	= 0x3C		;      - Timer1 Prescaler Select (4 bits)
.equ	T1PS0		= 2		;          T1PS BIT0 position
.equ	T1CS_MASK	= 0x03		;      - Timer1 Clock Select (2 bits)
.equ	T1CS0		= 0		;          T1CS BIT0 position
; ::::  T1CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_frc
;			0x02		; clk_T
;			0x03		; clk_xto4



; ====	TIMER2 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register T2CR bits		------------------------
.equ	T2ENA		= 7		; 0x80 - Timer2 Enable
.equ	T2TOS		= 6		; 0x40 - Timer2 Toggle with Start
.equ	T2RES		= 5		; 0x20 - Timer2 Reset
.equ	T2TOP		= 4		; 0x10 - Timer2 Toggle Output Preset
.equ	T2CRM		= 2		; 0x04 - Timer2 Compare Reset Mask
.equ	T2CTM		= 1		; 0x02 - Timer2 Compare Toggle Mask
.equ	T2OTM		= 0		; 0x01 - Timer2 Overflow Toggle Mask

; ----------	Register T2IFR bits		------------------------
.equ	T2COF		= 1		; 0x02 - Timer2 Compare Flag
.equ	T2OFF		= 0		; 0x01 - Timer2 Overflow Flag

; ----------	Register T2IMR bits		------------------------
.equ	T2CIM		= 1		; 0x02 - Timer2 Compare Interrupt Mask
.equ	T2OIM		= 0		; 0x01 - Timer2 Overflow Interrupt Mask

; ----------	Register T2MR bits		------------------------
.equ	T2DC_MASK	= 0xC0		;      - Timer2 Duty Cycle (2 bits)
.equ	T2DC0		= 6		;          T2DC BIT0 position
.equ	T2PS_MASK	= 0x3C		;      - Timer2 Prescaler Select (4 bits)
.equ	T2PS0		= 2		;          T2PS BIT0 position
.equ	T2CS_MASK	= 0x03		;      - Timer2 Clock Select (2 bits)
.equ	T2CS0		= 0		;          T2CS BIT0 position
; ::::  T2CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_vdiv
;			0x02		; clk_T
;			0x03		; clk_xto4



; ====	TIMER3 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register T3CR bits		------------------------
.equ	T3ENA		= 7		; 0x80 - Timer3 Enable
.equ	T3TOS		= 6		; 0x40 - Timer3 Toggle with Start
.equ	T3RES		= 5		; 0x20 - Timer3 Reset
.equ	T3TOP		= 4		; 0x10 - Timer3 Toggle Output Preset
.equ	T3CPRM		= 3		; 0x08 - Timer3 Capture Reset Mask
.equ	T3CRM		= 2		; 0x04 - Timer3 Compare Reset Mask
.equ	T3CTM		= 1		; 0x02 - Timer3 Compare Toggle Mask
.equ	T3OTM		= 0		; 0x01 - Timer3 Overflow Toggle Mask

; ----------	Register T3IFR bits		------------------------
.equ	T3ICF		= 2		; 0x04 - Timer3 Input Capture Flag
.equ	T3COF		= 1		; 0x02 - Timer3 Compare Flag
.equ	T3OFF		= 0		; 0x01 - Timer3 Overflow Flag

; ----------	Register T3IMR bits		------------------------
.equ	T3CPIM		= 2		; 0x04 - Timer3 Capture Interrupt Mask
.equ	T3CIM		= 1		; 0x02 - Timer3 Compare Interrupt Mask
.equ	T3OIM		= 0		; 0x01 - Timer3 Overflow Interrupt Mask

; ----------	Register T3MRA bits		------------------------
.equ	T3PS_MASK	= 0x1C		;      - Timer3 Prescaler Select (3 bits)
.equ	T3PS0		= 2		;          T3PS BIT0 position
.equ	T3CS_MASK	= 0x03		;      - Timer3 Clock Select (2 bits)
.equ	T3CS0		= 0		;          T3CS BIT0 position
; ::::  T3CS	:::: bitfield values
;			0x00		; clk_frc
;			0x01		; clk_T
;			0x02		; clk_xto4
;			0x03		; clk_xto2

; ----------	Register T3MRB bits		------------------------
.equ	T3ICS_MASK	= 0xE0		;      - Timer3 Input Capture Select (3 bits)
.equ	T3ICS0		= 5		;          T3ICS BIT0 position
.equ	T3CE_MASK	= 0x18		;      - Timer3 Capture Edge Select (2 bits)
.equ	T3CE0		= 3		;          T3CE BIT0 position
.equ	T3CNC		= 2		; 0x04 - Timer3 Input Capture Noise Canceller
.equ	T3SCE		= 1		; 0x02 - Timer3 Software Capture Enable
; ::::  T3ICS	:::: bitfield values
;			0x00		; clk_T2
;			0x20		; trpa
;			0x40		; trpb
;			0x60		; ticp
;			0x80		; clk_src
; ::::  T3CE	:::: bitfield values
;			0x00		; disable
;			0x08		; rising edge
;			0x10		; falling edge
;			0x18		; both edges



; ====	TIMER4 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register T4CR bits		------------------------
.equ	T4ENA		= 7		; 0x80 - Timer4 Enable
.equ	T4TOS		= 6		; 0x40 - Timer4 Toggle with Start
.equ	T4RES		= 5		; 0x20 - Timer4 Reset
.equ	T4TOP		= 4		; 0x10 - Timer4 Toggle Output Preset
.equ	T4CPRM		= 3		; 0x08 - Timer4 Capture Reset Mask
.equ	T4CRM		= 2		; 0x04 - Timer4 Compare Reset Mask
.equ	T4CTM		= 1		; 0x02 - Timer4 Compare Toggle Mask
.equ	T4OTM		= 0		; 0x01 - Timer4 Overflow Toggle Mask

; ----------	Register T4IFR bits		------------------------
.equ	T4ICF		= 2		; 0x04 - Timer4 Input Capture Flag
.equ	T4COF		= 1		; 0x02 - Timer4 Compare Flag
.equ	T4OFF		= 0		; 0x01 - Timer4 Overflow Flag

; ----------	Register T4IMR bits		------------------------
.equ	T4CPIM		= 2		; 0x04 - Timer4 Capture Interrupt Mask
.equ	T4CIM		= 1		; 0x02 - Timer4 Compare Interrupt Mask
.equ	T4OIM		= 0		; 0x01 - Timer4 Overflow Interrupt Mask

; ----------	Register T4MRA bits		------------------------
.equ	T4PS_MASK	= 0x1C		;      - Timer4 Prescaler Select (3 bits)
.equ	T4PS0		= 2		;          T4PS BIT0 position
.equ	T4CS_MASK	= 0x03		;      - Timer4 Clock Select (2 bits)
.equ	T4CS0		= 0		;          T4CS BIT0 position
; ::::  T4CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_T
;			0x02		; clk_xto6
;			0x03		; clk_frc

; ----------	Register T4MRB bits		------------------------
.equ	T4ICS_MASK	= 0xE0		;      - Timer4 Input Capture Select (3 bits)
.equ	T4ICS0		= 5		;          T4ICS BIT0 position
.equ	T4CE_MASK	= 0x18		;      - Timer4 Capture Edge Select (2 bits)
.equ	T4CE0		= 3		;          T4CE BIT0 position
.equ	T4CNC		= 2		; 0x04 - Timer4 Input Capture Noise Canceller
.equ	T4SCE		= 1		; 0x02 - Timer4 Software Capture Enable
; ::::  T4ICS	:::: bitfield values
;			0x00		; clk_T2
;			0x20		; trpa
;			0x40		; trpb
;			0x60		; ticp
;			0x80		; clk_src
; ::::  T4CE	:::: bitfield values
;			0x00		; disable
;			0x08		; rising edge
;			0x10		; falling edge
;			0x18		; both edges



; ====	TIMER5 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer Synchronization Mode
.equ	PSR10		= 0		; 0x01 - Prescaler Reset

; ----------	Register T5CCR bits		------------------------
.equ	T5CTC		= 3		; 0x08 - Timer5 Clear Counter on Compare Match
.equ	T5CS_MASK	= 0x07		;      - Timer5 Clock Select (3 bits)
.equ	T5CS0		= 0		;          T5CS BIT0 position
; ::::  T5CS	:::: bitfield values
;			0x00		; No Clock Source (Stopped)
;			0x01		; Running, No Prescaling
;			0x02		; Running, CLK/8
;			0x03		; Running, CLK/32
;			0x04		; Running, CLK/64
;			0x05		; Running, CLK/128
;			0x06		; Running, CLK/256
;			0x07		; Running, CLK/1024

; ----------	Register T5IFR bits		------------------------
.equ	T5COF		= 1		; 0x02 - Timer5 Compare Flag
.equ	T5OFF		= 0		; 0x01 - Timer5 Overflow Flag

; ----------	Register T5IMR bits		------------------------
.equ	T5CIM		= 1		; 0x02 - Timer5 Compare Interrupt Mask
.equ	T5OIM		= 0		; 0x01 - Timer5 Overflow Interrupt Mask



; ====	TRACE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TRCCR bits		------------------------
.equ	TRCEN		= 1		; 0x02 - Trace Unit Enable
.equ	TRCCE		= 0		; 0x01 - Trace Unit Change Enable



; ====	TXM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TMCR1 bits		------------------------
.equ	TMCIM		= 4		; 0x10 - Tx Modulator Transmission Complete Interrupt Mask
.equ	TMSCS		= 3		; 0x08 - Tx Modulator Serial Output Clock Select
.equ	TMPIS_MASK	= 0x07		;      - Tx Modulator Port Interface Select (3 bits)
.equ	TMPIS0		= 0		;          TMPIS BIT0 position
; ::::  TMPIS	:::: bitfield values
;			0x00		; Port C3
;			0x01		; M2 - Toggle Register Timer2
;			0x02		; M3 - Toggle Register Timer3
;			0x03		; M4 - Toggle Register Timer4
;			0x04		; SO Tx Modulator Serial Output
;			0x05		; M1 - Toggle Register Timer1

; ----------	Register TMCR2 bits		------------------------
.equ	TMLSB		= 6		; 0x40 - Tx Modulator Most Significant Bit First
.equ	TMSSE		= 5		; 0x20 - Tx Modulator Stop Sequence Enable
.equ	TMPOL		= 4		; 0x10 - Tx Modulator Polarity
.equ	TMNRZE		= 3		; 0x08 - Tx Modulator NRZ Mode Enable
.equ	TMCRCL_MASK	= 0x06		;      - Tx Modulator CRC Length (2 bits)
.equ	TMCRCL0		= 1		;          TMCRCL BIT0 position
.equ	TMCRCE		= 0		; 0x01 - Tx Modulator CRC Enable
; ::::  TMCRCL	:::: bitfield values
;			0x00		; CRC 4-bit
;			0x02		; CRC 8-bit
;			0x04		; CRC 16-bit

; ----------	Register TMFSM bits		------------------------
.equ	TMMSM_MASK	= 0x70		;      - Tx Modulator Master State Machine (3 bits)
.equ	TMMSM0		= 4		;          TMMSM BIT0 position
.equ	TMSSM_MASK	= 0x0F		;      - Tx Modulator Sub State Machine (4 bits)
.equ	TMSSM0		= 0		;          TMSSM BIT0 position

; ----------	Register TMSR bits		------------------------
.equ	TMTCF		= 0		; 0x01 - Tx Modulator Transmission Complete Status Flag

; ----------	Register TMSSC bits		------------------------
.equ	TMSSH		= 7		; 0x80 - Tx Modulator Stop Sequence Hold Mode
.equ	TMSSL_MASK	= 0x70		;      - Tx Modulator Stop Sequence Length (3 bits)
.equ	TMSSL0		= 4		;          TMSSL BIT0 position
.equ	TMSSP_MASK	= 0x0F		;      - Tx Modulator Stop Sequence Pattern (4 bits)
.equ	TMSSP0		= 0		;          TMSSP BIT0 position



; ====	VMON MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register VMCSR bits		------------------------
.equ	VMF		= 5		; 0x20 - Voltage Monitor Flag
.equ	VMIM		= 4		; 0x10 - Voltage Monitor Interrupt Mask
.equ	VMLS_MASK	= 0x0F		;      - Voltage Monitor Level Select (4 bits)
.equ	VMLS0		= 0		;          VMLS BIT0 position
; ::::  VMLS	:::: bitfield values
;			0x00		; disable
;			0x01		; 2.0V
;			0x02		; 2.1V
;			0x03		; 2.2V
;			0x04		; 2.3V
;			0x05		; 2.4V
;			0x06		; 2.5V
;			0x07		; 2.6V
;			0x08		; 2.7V
;			0x09		; 2.8V
;			0x0A		; 2.9V
;			0x0B		; 3.0V
;			0x0C		; 3.1V
;			0x0D		; 3.2V
;			0x0E		; 3.3V
;			0x0F		; 3.4V




; **********************************************************************
; ***************	EXTRA BITFIELDS VALUES	************************
; **********************************************************************
;
; ::::  COMM_SCK_RATE_3BIT	:::: values
;			0b000		; clkio/4
;			0b001		; clkio/16
;			0b010		; clkio/64
;			0b011		; clkio/128
;			0b100		; clkio/2
;			0b101		; clkio/8
;			0b110		; clkio/32
;			0b111		; clkio/64



; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 44
.equ	INT_VECTORS_SIZE	= 0x58
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	PCI0		; Pin Change Interrupt Request 0
;	4	PCI1		; Pin Change Interrupt Request 1
;	5	VMON		; Voltage Monitoring Interrupt
;	6	AVCCR		; AVCC Reset Interrupt
;	7	AVCCL		; AVCC Low Interrupt
;	8	T0INT		; Timer 0 Interval Interrupt
;	9	T1COMP		; Timer/Counter1 Compare Match Interrupt
;	10	T1OVF		; Timer/Counter1 Overflow Interrupt
;	11	T2COMP		; Timer/Counter2 Compare Match Interrupt
;	12	T2OVF		; Timer/Counter2 Overflow Interrupt
;	13	T3CAP		; Timer/Counter3 Capture Event Interrupt
;	14	T3COMP		; Timer/Counter3 Compare Match Interrupt
;	15	T3OVF		; Timer/Counter3 Overflow Interrupt
;	16	T4CAP		; Timer/Counter4 Capture Event Interrupt
;	17	T4COMP		; Timer/Counter4 Compare Match Interrupt
;	18	T4OVF		; Timer/Counter4 Overflow Interrupt
;	19	T5COMP		; Timer/Counter5 Compare Match Interrupt
;	20	T5OVF		; Timer/Counter5 Overflow Interrupt
;	21	SPI		; SPI Serial Transfer Complete Interrupt
;	22	SRX_FIFO	; SPI Rx Buffer Interrupt
;	23	STX_FIFO	; SPI Tx Buffer Interrupt
;	24	LINTC		; LIN/UART Transfer Complete Interrupt
;	25	LINERR		; LIN/UART Error Interrupt
;	26	SSM		; Sequencer State Machine Interrupt
;	27	DFFLR		; Data FIFO fill level reached Interrupt
;	28	DFOUE		; Data FIFO overflow or underflow error Interrupt
;	29	SFFLR		; RSSI/Preamble FIFO fill level reached Interrupt
;	30	SFOUE		; RSSI/Preamble FIFO overflow or underflow error Interrupt
;	31	TMTCF		; Tx Modulator Telegram Finish Interrupt
;	32	UHF_WCOA	; UHF receiver wake up ok on Rx path A
;	33	UHF_WCOB	; UHF receiver wake up ok on Rx path B
;	34	UHF_SOTA	; UHF receiver start of telegram ok on Rx path A
;	35	UHF_SOTB	; UHF receiver start of telegram ok on Rx path B
;	36	UHF_EOTA	; UHF receiver end of telegram on Rx path A
;	37	UHF_EOTB	; UHF receiver end of telegram on Rx path B
;	38	UHF_NBITA	; UHF receiver new bit on Rx path A
;	39	UHF_NBITB	; UHF receiver new bit on Rx path B
;	40	EXCM		; External input Clock monitoring Interrupt
;	41	ERDY		; EEPROM Ready Interrupt
;	42	SPMR		; Store Program Memory Ready
;	43	IDFULL		; IDSCAN Full Interrupt



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATA5835.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<CKDIV8) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(0 <<BOOTRST) \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(0 <<EXTCLKEN)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	BLB0		= 0x0C	; No lock on SPM and LPM in Application Section
;#	.set	BLB1		= 0x30	; No lock on SPM and LPM in Boot Loader Section
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
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; PCI0		 - Pin Change Interrupt Request 0
;#		reti			; PCI1		 - Pin Change Interrupt Request 1
;#		reti			; VMON		 - Voltage Monitoring Interrupt
;#		reti			; AVCCR		 - AVCC Reset Interrupt
;#		reti			; AVCCL		 - AVCC Low Interrupt
;#		reti			; T0INT		 - Timer 0 Interval Interrupt
;#		reti			; T1COMP	 - Timer/Counter1 Compare Match Interrupt
;#		reti			; T1OVF		 - Timer/Counter1 Overflow Interrupt
;#		reti			; T2COMP	 - Timer/Counter2 Compare Match Interrupt
;#		reti			; T2OVF		 - Timer/Counter2 Overflow Interrupt
;#		reti			; T3CAP		 - Timer/Counter3 Capture Event Interrupt
;#		reti			; T3COMP	 - Timer/Counter3 Compare Match Interrupt
;#		reti			; T3OVF		 - Timer/Counter3 Overflow Interrupt
;#		reti			; T4CAP		 - Timer/Counter4 Capture Event Interrupt
;#		reti			; T4COMP	 - Timer/Counter4 Compare Match Interrupt
;#		reti			; T4OVF		 - Timer/Counter4 Overflow Interrupt
;#		reti			; T5COMP	 - Timer/Counter5 Compare Match Interrupt
;#		reti			; T5OVF		 - Timer/Counter5 Overflow Interrupt
;#		reti			; SPI		 - SPI Serial Transfer Complete Interrupt
;#		reti			; SRX_FIFO	 - SPI Rx Buffer Interrupt
;#		reti			; STX_FIFO	 - SPI Tx Buffer Interrupt
;#		reti			; LINTC		 - LIN/UART Transfer Complete Interrupt
;#		reti			; LINERR	 - LIN/UART Error Interrupt
;#		reti			; SSM		 - Sequencer State Machine Interrupt
;#		reti			; DFFLR		 - Data FIFO fill level reached Interrupt
;#		reti			; DFOUE		 - Data FIFO overflow or underflow error Interrupt
;#		reti			; SFFLR		 - RSSI/Preamble FIFO fill level reached Interrupt
;#		reti			; SFOUE		 - RSSI/Preamble FIFO overflow or underflow error Interrupt
;#		reti			; TMTCF		 - Tx Modulator Telegram Finish Interrupt
;#		reti			; UHF_WCOA	 - UHF receiver wake up ok on Rx path A
;#		reti			; UHF_WCOB	 - UHF receiver wake up ok on Rx path B
;#		reti			; UHF_SOTA	 - UHF receiver start of telegram ok on Rx path A
;#		reti			; UHF_SOTB	 - UHF receiver start of telegram ok on Rx path B
;#		reti			; UHF_EOTA	 - UHF receiver end of telegram on Rx path A
;#		reti			; UHF_EOTB	 - UHF receiver end of telegram on Rx path B
;#		reti			; UHF_NBITA	 - UHF receiver new bit on Rx path A
;#		reti			; UHF_NBITB	 - UHF receiver new bit on Rx path B
;#		reti			; EXCM		 - External input Clock monitoring Interrupt
;#		reti			; ERDY		 - EEPROM Ready Interrupt
;#		reti			; SPMR		 - Store Program Memory Ready
;#		reti			; IDFULL	 - IDSCAN Full Interrupt
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA5835_INC_ */

; ************************ END OF FILE *********************************

