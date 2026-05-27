;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA8215
;* Title             : Register/Mask/Bit Definitions for the ATA8215
;* File Name         : ATA8215.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-05-27 14:43:47 UTC
;
;***********************************************************************

#ifndef _ATA8215_INC_
#define _ATA8215_INC_

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
.device	ATA8215
.equ	JTAGID		= 0x9564
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x95
.equ	SIGNATURE2	= 0x64


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
.equ	ADDR_IRAM_END			= 0x05FF
.equ	ADDR_IRAM_SIZE			= 0x0400

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
.equ	AP_MASK		= 0x0C		;      - Application Protection (2 bits)
.equ	AP0		= 2		;          AP BIT0 position
.equ	BLP_MASK	= 0x30		;      - Boot Loader Protection (2 bits)
.equ	BLP0		= 4		;          BLP BIT0 position
; ::::  LB	:::: bitfield values
;			0x00		; Further programming and verification disabled
;			0x02		; Further programming disabled
;			0x03		; No memory lock features enabled
; ::::  AP	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Application Section
;			0x04		; LPM prohibited in Application Section
;			0x08		; SPM prohibited in Application Section
;			0x0C		; No lock on SPM and LPM in Application Section
; ::::  BLP	:::: bitfield values
;			0x00		; LPM and SPM prohibited in Boot Loader Section
;			0x10		; LPM prohibited in Boot Loader Section
;			0x20		; SPM prohibited in Boot Loader Section
;			0x30		; No lock on SPM and LPM in Boot Loader Section




; **********************************************************************
; ***************	DATA REGISTERS		************************
; **********************************************************************
;
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x3C		; Store Program Memory Control and Status Register
.equ	CLPR		= 0x3B		; Clock Prescaler Register
.equ	SMCR		= 0x38		; Sleep mode control Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	MCUSR		= 0x2B		; MCU Status Register
.equ	CRCDIR		= 0x29		; CRC Data Input Register
.equ	MCUCR		= 0x0E		; MCU Control Register
.equ	PORTC		= 0x0A		; Port C Data Register
.equ	DDRC		= 0x09		; Port C Data Direction Register
.equ	PINC		= 0x08		; Port C Input Pins
.equ	PORTB		= 0x07		; Port B Data Register
.equ	DDRB		= 0x06		; Port B Data Direction Register
.equ	PINB		= 0x05		; Port B Input Pins
.equ	PRR2		= 0x03		; Power Reduction Register 2
.equ	PRR1		= 0x02		; Power Reduction Register 1
.equ	PRR0		= 0x01		; Power Reduction Register 0
.equ	SFIR		= 0x0158	; [MEMORY MAPPED] SPI FIFO Interrupt Register
.equ	SFFR		= 0x0157	; [MEMORY MAPPED] SPI FIFO Fill Status Register
.equ	CRCDOR		= 0x0146	; [MEMORY MAPPED] CRC Data Output Register
.equ	CRCCR		= 0x0145	; [MEMORY MAPPED] CRC Control Register
.equ	RSCOM		= 0x015F	; [MEMORY MAPPED] RSSI Compensation Register
.equ	RSHDV		= 0x015E	; [MEMORY MAPPED] RSSI High Band Damping Value
.equ	RSLDV		= 0x015D	; [MEMORY MAPPED] RSSI Low Band Damping Value
.equ	RSIFG		= 0x015C	; [MEMORY MAPPED] RSSI High IF Amplifier Gain
.equ	EEST		= 0x015B	; [MEMORY MAPPED] EEPROM Status Register
.equ	PGMST		= 0x015A	; [MEMORY MAPPED] Program Memory Status Register
.equ	EECR2		= 0x0159	; [MEMORY MAPPED] EEPROM Control Register 2
.equ	DBGSW		= 0x0156	; [MEMORY MAPPED] Debugging Support Switch
.equ	DBENC		= 0x0155	; [MEMORY MAPPED] DeBounce Enable Port C
.equ	DBENB		= 0x0154	; [MEMORY MAPPED] DeBounce Enable Port B
.equ	DBTC		= 0x0153	; [MEMORY MAPPED] Debounce Timer Compare Register
.equ	DBCR		= 0x0152	; [MEMORY MAPPED] DeBounce Control Register
.equ	RSSC		= 0x0151	; [MEMORY MAPPED] RSSI Configuration Register
.equ	RSSH		= 0x0150	; [MEMORY MAPPED] RSSI High Threshold for Signal Check
.equ	RSSL		= 0x014F	; [MEMORY MAPPED] RSSI Low Threshold for Signal Check
.equ	RSSPK		= 0x014E	; [MEMORY MAPPED] RSSI Peak Value
.equ	RSSAV		= 0x014D	; [MEMORY MAPPED] RSSI Average Value
.equ	IDS		= 0x014C	; [MEMORY MAPPED] ID Status
.equ	IDC		= 0x014B	; [MEMORY MAPPED] ID Configuration
.equ	IDB3		= 0x014A	; [MEMORY MAPPED] ID Byte 3
.equ	IDB2		= 0x0149	; [MEMORY MAPPED] ID Byte 2
.equ	IDB1		= 0x0148	; [MEMORY MAPPED] ID Byte 1
.equ	IDB0		= 0x0147	; [MEMORY MAPPED] ID Byte 0
.equ	RXDSA		= 0x0144	; [MEMORY MAPPED] Rx data shift register for data path A
.equ	RXCPHA		= 0x0143	; [MEMORY MAPPED] Rx CRC polynomial (15 bit RXCPA) high byte for data path A
.equ	RXCPLA		= 0x0142	; [MEMORY MAPPED] Rx CRC polynomial low byte for data path A
.equ	RXCIHA		= 0x0141	; [MEMORY MAPPED] Rx CRC Init value (16-bit RXCI) high byte for data path A
.equ	RXCILA		= 0x0140	; [MEMORY MAPPED] Rx CRC Init value (16-bit RXCI) low byte for data path A
.equ	RXCSBA		= 0x013F	; [MEMORY MAPPED] Rx CRC skip bit number for data path A
.equ	RXCRHA		= 0x013E	; [MEMORY MAPPED] Rx CRC result register high byte for data path A
.equ	RXCRLA		= 0x013D	; [MEMORY MAPPED] Rx CRC result register low byte for data path A
.equ	RXTLHA		= 0x013C	; [MEMORY MAPPED] Rx data telegram length register high byte for data path A
.equ	RXTLLA		= 0x013B	; [MEMORY MAPPED] Rx data telegram length register low byte for data path A
.equ	RXDSB		= 0x013A	; [MEMORY MAPPED] Rx data shift register for data path B
.equ	RXCPHB		= 0x0139	; [MEMORY MAPPED] Rx CRC polynomial (15 bit RXCPB) high byte for data path B
.equ	RXCPLB		= 0x0138	; [MEMORY MAPPED] Rx CRC polynomial low byte for data path B
.equ	RXCIHB		= 0x0137	; [MEMORY MAPPED] Rx CRC Init value (16-bit RXCI) high byte for data path B
.equ	RXCILB		= 0x0136	; [MEMORY MAPPED] Rx CRC Init value (16-bit RXCI) low byte for data path B
.equ	RXCSBB		= 0x0135	; [MEMORY MAPPED] Rx CRC skip bit number for data path B
.equ	RXCRHB		= 0x0134	; [MEMORY MAPPED] Rx CRC result register high byte for data path B
.equ	RXCRLB		= 0x0133	; [MEMORY MAPPED] Rx CRC result register low byte for data path B
.equ	RXTLHB		= 0x0132	; [MEMORY MAPPED] Rx data telegram length register high byte for data path B
.equ	RXTLLB		= 0x0131	; [MEMORY MAPPED] Rx data telegram length register low byte for data path B
.equ	RXBC2		= 0x0130	; [MEMORY MAPPED] Rx Buffer configuration register 2
.equ	RXBC1		= 0x012F	; [MEMORY MAPPED] Rx Buffer configuration register 1
.equ	FEBIA		= 0x010E	; [MEMORY MAPPED] Front-End IF Amplifier BIAS
.equ	FEANT		= 0x010D	; [MEMORY MAPPED] Front-End ANTenna
.equ	FEALR		= 0x010C	; [MEMORY MAPPED] Front-End Antenna Level Detector Range
.equ	FEVCO		= 0x010B	; [MEMORY MAPPED] Front-End VCO and PLL control
.equ	FECR		= 0x010A	; [MEMORY MAPPED] Front-End Control Register
.equ	FETN4		= 0x0109	; [MEMORY MAPPED] Front-End RC Tuning 4bit Register
.equ	FEMS		= 0x0108	; [MEMORY MAPPED] Front-End Main and Swallow Control Register
.equ	FEBT		= 0x0107	; [MEMORY MAPPED] Front-End RC Tuning Register
.equ	FEVCT		= 0x0106	; [MEMORY MAPPED] Front-End VCO Tuning Register
.equ	FELNA		= 0x0103	; [MEMORY MAPPED] Front-End LNA Bias Register
.equ	FEEN2		= 0x0102	; [MEMORY MAPPED] Front-End Enable Register 2
.equ	FEEN1		= 0x0101	; [MEMORY MAPPED] Front-End Enable Register 1
.equ	FESR		= 0x0100	; [MEMORY MAPPED] Front-End Status Register
.equ	SSMFCR		= 0xFF		; [MEMORY MAPPED] SSM Flow Control Register
.equ	SOTTOB		= 0xFE		; [MEMORY MAPPED] Start Of Telegram Time Out for path B
.equ	SOTTOA		= 0xFD		; [MEMORY MAPPED] Start Of Telegram Time Out for path A
.equ	WCOTOB		= 0xFC		; [MEMORY MAPPED] Wait check ok time out for path B
.equ	WCOTOA		= 0xFB		; [MEMORY MAPPED] Wait check ok time out for path A
.equ	EOTC3B		= 0xFA		; [MEMORY MAPPED] End Of Telegram Conditions 3 for Path B
.equ	EOTC2B		= 0xF9		; [MEMORY MAPPED] End Of Telegram Conditions 2 for Path B
.equ	EOTC1B		= 0xF8		; [MEMORY MAPPED] End Of Telegram Conditions 1 for Path B
.equ	EOTC3A		= 0xF7		; [MEMORY MAPPED] End Of Telegram Conditions 3 for Path A
.equ	EOTC2A		= 0xF6		; [MEMORY MAPPED] End Of Telegram Conditions 2 for Path A
.equ	EOTC1A		= 0xF5		; [MEMORY MAPPED] End Of Telegram Conditions 1 for Path A
.equ	SOTC2B		= 0xF4		; [MEMORY MAPPED] Start Of Telegram Conditions 2 for Path B
.equ	SOTC1B		= 0xF3		; [MEMORY MAPPED] Start Of Telegram Conditions 1 for Path B
.equ	SOTC2A		= 0xF2		; [MEMORY MAPPED] Start Of Telegram Conditions 2 for Path A
.equ	SOTC1A		= 0xF1		; [MEMORY MAPPED] Start Of Telegram Conditions 1 for Path A
.equ	GTCR		= 0xF0		; [MEMORY MAPPED] Get Telegram Control Register
.equ	MSMCR4		= 0xEF		; [MEMORY MAPPED] Master State Machine Control Register 4
.equ	MSMCR3		= 0xEE		; [MEMORY MAPPED] Master State Machine Control Register 3
.equ	MSMCR2		= 0xED		; [MEMORY MAPPED] Master State Machine Control Register 2
.equ	MSMCR1		= 0xEC		; [MEMORY MAPPED] Master State Machine Control Register 1
.equ	SSMXSR		= 0xEB		; [MEMORY MAPPED] SSM extended State Register
.equ	SSMSTR		= 0xEA		; [MEMORY MAPPED] SSM State Register
.equ	MSMSTR		= 0xE9		; [MEMORY MAPPED] Master State Machine state register
.equ	SSMIMR		= 0xE8		; [MEMORY MAPPED] SSM interrupt mask register
.equ	SSMIFR		= 0xE7		; [MEMORY MAPPED] SSM Interrupt Flag Register
.equ	SSMSR		= 0xE6		; [MEMORY MAPPED] SSM Status Register
.equ	SSMRR		= 0xE5		; [MEMORY MAPPED] SSM Run Register
.equ	SSMFBR		= 0xE4		; [MEMORY MAPPED] SSM Filter Bandwidth Register
.equ	SSMRCR		= 0xE3		; [MEMORY MAPPED] SSM Rx Control Register
.equ	SSMCR		= 0xE2		; [MEMORY MAPPED] SSM Control Register
.equ	SFC		= 0xE1		; [MEMORY MAPPED] Support FIFO Configuration Register
.equ	SFI		= 0xE0		; [MEMORY MAPPED] Support FIFO Interrupt Mask Register
.equ	SFD		= 0xDF		; [MEMORY MAPPED] Support FIFO Data Register
.equ	SFRP		= 0xDE		; [MEMORY MAPPED] Support FIFO Read Pointer
.equ	SFWP		= 0xDD		; [MEMORY MAPPED] Support FIFO Write Pointer
.equ	SFL		= 0xDC		; [MEMORY MAPPED] Support FIFO Fill Level Register
.equ	SFS		= 0xDB		; [MEMORY MAPPED] Support FIFO Status Register
.equ	DFC		= 0xDA		; [MEMORY MAPPED] Data FIFO Configuration Register
.equ	DFI		= 0xD9		; [MEMORY MAPPED] Data FIFO Interrupt Mask Register
.equ	DFD		= 0xD8		; [MEMORY MAPPED] Data FIFO Data Register
.equ	DFRP		= 0xD7		; [MEMORY MAPPED] Data FIFO Read Pointer
.equ	DFWP		= 0xD6		; [MEMORY MAPPED] Data FIFO Write Pointer
.equ	DFL		= 0xD5		; [MEMORY MAPPED] Data FIFO Fill Level Register
.equ	DFTL		= 0xD3		; [MEMORY MAPPED] Data FIFO Telegram Length
.equ	DFS		= 0xD2		; [MEMORY MAPPED] Data FIFO Status Register
.equ	VMCAL		= 0xD1		; [MEMORY MAPPED] Voltage Monitor Calibration register
.equ	CALRDY		= 0xD0		; [MEMORY MAPPED] Calibration ready signature
.equ	SUPCA4		= 0xCF		; [MEMORY MAPPED] Supply calibration register 4
.equ	SUPCA3		= 0xCE		; [MEMORY MAPPED] Supply calibration register 3
.equ	SUPCA2		= 0xCD		; [MEMORY MAPPED] Supply calibration register 2
.equ	SUPCR		= 0xCB		; [MEMORY MAPPED] Supply Control Register
.equ	SUPFR		= 0xCA		; [MEMORY MAPPED] Supply Interrupt Flag Register
.equ	CMOCR		= 0xC9		; [MEMORY MAPPED] Clock management override control register
.equ	CMSR		= 0xC8		; [MEMORY MAPPED] Clock management status Register
.equ	FRCCAL		= 0xC7		; [MEMORY MAPPED] Fast RC oscillator calibration Register
.equ	SRCCAL		= 0xC6		; [MEMORY MAPPED] Slow RC oscillator calibration Register
.equ	XFUSE		= 0xC5		; [MEMORY MAPPED] 
.equ	CLKOCR		= 0xC4		; [MEMORY MAPPED] Clock output control Register
.equ	CLKOD		= 0xC3		; [MEMORY MAPPED] Clock output divider settings Register
.equ	WUP4A		= 0xC2		; [MEMORY MAPPED] Wake-Up Pattern byte 4 for data path A
.equ	WUP3A		= 0xC1		; [MEMORY MAPPED] Wake-Up Pattern byte 3 for data path A
.equ	WUP2A		= 0xC0		; [MEMORY MAPPED] Wake-Up Pattern byte 2 for data path A
.equ	WUP1A		= 0xBF		; [MEMORY MAPPED] Wake-Up Pattern byte 1 for data path A
.equ	SFID4A		= 0xBE		; [MEMORY MAPPED] Start-Frame ID byte 4 for data path A
.equ	SFID3A		= 0xBD		; [MEMORY MAPPED] Start-Frame ID byte 3 for data path A
.equ	SFID2A		= 0xBC		; [MEMORY MAPPED] Start-Frame ID byte 2 for data path A
.equ	SFID1A		= 0xBB		; [MEMORY MAPPED] Start-Frame ID byte 1 for data path A
.equ	WUPLA		= 0xBA		; [MEMORY MAPPED] Wake-Up Pattern Length for data path A
.equ	WUPTA		= 0xB9		; [MEMORY MAPPED] Wake-Up Pattern Threshold for data path A
.equ	SFIDLA		= 0xB8		; [MEMORY MAPPED] Start-Frame ID Length for data path A
.equ	SFIDCA		= 0xB7		; [MEMORY MAPPED] Start-Frame ID Control for data path A
.equ	WUP4B		= 0xB6		; [MEMORY MAPPED] Wake-Up Pattern byte 4 for data path B
.equ	WUP3B		= 0xB5		; [MEMORY MAPPED] Wake-Up Pattern byte 3 for data path B
.equ	WUP2B		= 0xB4		; [MEMORY MAPPED] Wake-Up Pattern byte 2 for data path B
.equ	WUP1B		= 0xB3		; [MEMORY MAPPED] Wake-Up Pattern byte 1 for data path B
.equ	SFID4B		= 0xB2		; [MEMORY MAPPED] Start-Frame ID byte 4 for data path B
.equ	SFID3B		= 0xB1		; [MEMORY MAPPED] Start-Frame ID byte 3 for data path B
.equ	SFID2B		= 0xB0		; [MEMORY MAPPED] Start-Frame ID byte 2 for data path B
.equ	SFID1B		= 0xAF		; [MEMORY MAPPED] Start-Frame ID byte 1 for data path B
.equ	WUPLB		= 0xAE		; [MEMORY MAPPED] Wake-Up Pattern Length for data path B
.equ	WUPTB		= 0xAD		; [MEMORY MAPPED] Wake-Up Pattern Threshold for data path B
.equ	SFIDLB		= 0xAC		; [MEMORY MAPPED] Start-Frame ID Length for data path B
.equ	SFIDCB		= 0xAB		; [MEMORY MAPPED] Start-Frame ID Control for data path B
.equ	CHDN		= 0xAA		; [MEMORY MAPPED] Channel Filter Down Sampling Register
.equ	CHCR		= 0xA9		; [MEMORY MAPPED] Channel Filter Configuration Register
.equ	DMDRA		= 0xA8		; [MEMORY MAPPED] Demodulator Data Rate on path A
.equ	DMDRB		= 0xA7		; [MEMORY MAPPED] Demodulator Data Rate on path B
.equ	DMCRA		= 0xA6		; [MEMORY MAPPED] Demodulator Control Register for path A
.equ	DMCRB		= 0xA5		; [MEMORY MAPPED] Demodulator Control Register for path B
.equ	DMCDA		= 0xA4		; [MEMORY MAPPED] Demodulator Carrier Detect for path A
.equ	DMCDB		= 0xA3		; [MEMORY MAPPED] Demodulator Carrier Detect for path B
.equ	DMMA		= 0xA2		; [MEMORY MAPPED] Demodulator Mode for path A
.equ	DMMB		= 0xA1		; [MEMORY MAPPED] Demodulator Mode for Path B
.equ	RXFOA		= 0xA0		; [MEMORY MAPPED] Received Frequency Offset vs Intermediate Frequency on path A
.equ	RXFOB		= 0x9F		; [MEMORY MAPPED] Received Frequency Offset vs Intermediate Frequency on path B
.equ	SYCA		= 0x9E		; [MEMORY MAPPED] Symbol check configuration for data path A
.equ	SYCB		= 0x9D		; [MEMORY MAPPED] Symbol check configuration for data path B
.equ	TEMPH		= 0x9C		; [MEMORY MAPPED] Temperature High byte
.equ	TEMPL		= 0x9B		; [MEMORY MAPPED] Temperature Low byte
.equ	RDOCR		= 0x99		; [MEMORY MAPPED] Rx DSP output control
.equ	RDSIMR		= 0x98		; [MEMORY MAPPED] Rx DSP status interrupt mask register
.equ	TESRA		= 0x96		; [MEMORY MAPPED] Telegram Status Register on Path A
.equ	TESRB		= 0x95		; [MEMORY MAPPED] Telegram Status Register on Path B
.equ	SOTCA		= 0x94		; [MEMORY MAPPED] Start Of Telegram Conditions for path A
.equ	SOTCB		= 0x93		; [MEMORY MAPPED] Start Of Telegram Conditions for path B
.equ	SOTSA		= 0x92		; [MEMORY MAPPED] Start Of Telegram Status for path A
.equ	SOTSB		= 0x91		; [MEMORY MAPPED] Start Of Telegram Status for path B
.equ	GTCCR		= 0x90		; [MEMORY MAPPED] General Timer/Counter Control Register
.equ	T5IMR		= 0x8F		; [MEMORY MAPPED] Timer5 Interrupt Mask Register
.equ	T5CNT		= 0x8D		; [MEMORY MAPPED] Timer5 Counter
.equ	T5CCR		= 0x8C		; [MEMORY MAPPED] Timer5 Control Register
.equ	T5OCR		= 0x8A		; [MEMORY MAPPED] Timer5 Output Compare Register
.equ	T4IMR		= 0x88		; [MEMORY MAPPED] Timer4 interrupt mask Register
.equ	T4MRB		= 0x87		; [MEMORY MAPPED] Timer4 mode Register
.equ	T4MRA		= 0x86		; [MEMORY MAPPED] Timer4 mode Register
.equ	T4ICR		= 0x84		; [MEMORY MAPPED] Timer4 input capture Register
.equ	T4COR		= 0x82		; [MEMORY MAPPED] Timer4 compare Register
.equ	T4CNT		= 0x80		; [MEMORY MAPPED] Timer4 counter Register
.equ	T3IMR		= 0x7F		; [MEMORY MAPPED] Timer3 interrupt mask Register
.equ	T3MRB		= 0x7E		; [MEMORY MAPPED] Timer3 mode Register
.equ	T3MRA		= 0x7D		; [MEMORY MAPPED] Timer3 mode Register
.equ	T3ICR		= 0x7B		; [MEMORY MAPPED] Timer3 input capture Register
.equ	T3COR		= 0x79		; [MEMORY MAPPED] Timer3 compare Register
.equ	T3CNT		= 0x77		; [MEMORY MAPPED] Timer3 counter Register
.equ	T2IMR		= 0x76		; [MEMORY MAPPED] Timer2 Interrupt Mask Register
.equ	T2MR		= 0x75		; [MEMORY MAPPED] Timer2 Mode Register
.equ	T2COR		= 0x74		; [MEMORY MAPPED] Timer2 Compare Register
.equ	T2CNT		= 0x73		; [MEMORY MAPPED] Timer2 Counter Register
.equ	T1IMR		= 0x72		; [MEMORY MAPPED] Timer1 Interrupt Mask Register
.equ	T1MR		= 0x71		; [MEMORY MAPPED] Timer1 Mode Register
.equ	T1COR		= 0x70		; [MEMORY MAPPED] Timer1 Compare Register
.equ	T1CNT		= 0x6F		; [MEMORY MAPPED] Timer1 Counter Register
.equ	WDTCR		= 0x6E		; [MEMORY MAPPED] Watchdog Timer0 control Register
.equ	PCMSK1		= 0x6D		; [MEMORY MAPPED] Pin change Mask Register 1
.equ	PCMSK0		= 0x6C		; [MEMORY MAPPED] Pin change Mask Register 0
.equ	EICRA		= 0x6B		; [MEMORY MAPPED] External Interrupt control Register
.equ	FFREQ2H		= 0x69		; [MEMORY MAPPED] Fractional Frequency 2 Setting, High Byte
.equ	FFREQ2M		= 0x68		; [MEMORY MAPPED] Fractional Frequency 2 Setting, Middle Byte
.equ	FFREQ2L		= 0x67		; [MEMORY MAPPED] Fractional Frequency 2 Setting, Low Byte
.equ	FFREQ1H		= 0x66		; [MEMORY MAPPED] Fractional Frequency 1 Setting, High Byte
.equ	FFREQ1M		= 0x65		; [MEMORY MAPPED] Fractional Frequency 1 Setting, Middle Byte
.equ	FFREQ1L		= 0x64		; [MEMORY MAPPED] Fractional Frequency 1 Setting, Low Byte
.equ	FSEN		= 0x60		; [MEMORY MAPPED] Frequency Synthesizer Enable register
.equ	CMIMR		= 0x3A		; Clock Interrupt Mask Register
.equ	CMCR		= 0x39		; Clock Management Control Register
.equ	EOTCB		= 0x37		; End Of Telegram Conditions for path B
.equ	EOTSB		= 0x36		; End Of Telegram Status on path B
.equ	EOTCA		= 0x35		; End Of Telegram Conditions for path A
.equ	EOTSA		= 0x34		; End Of Telegram Status on path A
.equ	RDCR		= 0x33		; Rx DSP control register
.equ	DWDR		= 0x31		; debugWire communication Register
.equ	T0IFR		= 0x2F		; Timer0 Interrupt Flag Register
.equ	VMCSR		= 0x2A		; Voltage Monitor Control and Status Register
.equ	EIFR		= 0x28		; External Interrupt Flag Register
.equ	EIMSK		= 0x27		; External Interrupt Mask Register
.equ	PCICR		= 0x26		; Pin change Interrupt control Register
.equ	GPIOR2		= 0x25		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x24		; General Purpose I/O Register 1
.equ	EEPR		= 0x23		; EEPROM Protection Register
.equ	EEAR		= 0x21		; EEPROM Address Register
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR6		= 0x1E		; General Purpose I/O Register 6
.equ	GPIOR5		= 0x1D		; General Purpose I/O Register 5
.equ	GPIOR4		= 0x1C		; General Purpose I/O Register 4
.equ	GPIOR3		= 0x1B		; General Purpose I/O Register 3
.equ	GPIOR0		= 0x1A		; General Purpose I/O Register 0
.equ	T5IFR		= 0x19		; Timer5 Interrupt Flag Register
.equ	T4IFR		= 0x18		; Timer4 interrupt flag Register
.equ	T3IFR		= 0x17		; Timer3 interrupt flag Register
.equ	T2IFR		= 0x16		; Timer2 Interrupt Flag Register
.equ	T1IFR		= 0x15		; Timer1 Interrupt Flag Register
.equ	T4CR		= 0x14		; Timer4 control Register
.equ	T3CR		= 0x13		; Timer3 control Register
.equ	T2CR		= 0x12		; Timer2 Control Register
.equ	T1CR		= 0x11		; Timer1 control Register
.equ	T0CR		= 0x10		; Timer0 Control Register
.equ	PCIFR		= 0x0F		; Pin change Interrupt flag Register
.equ	RDSIFR		= 0x0D		; Rx DSP status interrupt flag register
.equ	RDPR		= 0x04		; Rx DSP power reduction register


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
.equ	CLKOEN		= 2		; 0x04 - Clock output driver enable
.equ	CLKOS_MASK	= 0x03		;      - Clock output source (2 bits)
.equ	CLKOS0		= 0		;          CLKOS BIT0 position

; ----------	Register CMOCR bits		------------------------
.equ	SRCACT		= 3		; 0x08 - SRC Active
.equ	FRCACT		= 2		; 0x04 - FRC Active
.equ	SRCAO		= 1		; 0x02 - SRC Always On
.equ	FRCAO		= 0		; 0x01 - FRC Always On

; ----------	Register CMSR bits		------------------------
.equ	ECF		= 0		; 0x01 - External clock fail

; ----------	Register FRCCAL bits		------------------------
.equ	FRCTC		= 5		; 0x20 - Fast RC oscillator temperature compensation
.equ	FRCCAL_MASK	= 0x1F		;      - Fast RC oscillator calibration (5 bits)
.equ	FRCCAL0		= 0		;          FRCCAL BIT0 position

; ----------	Register PRR0 bits		------------------------
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
.equ	PRRS		= 5		; 0x20 - Power Reduction RSSI Buffer
.equ	PRIDS		= 4		; 0x10 - Power Reduction ID Scan
.equ	PRDF		= 3		; 0x08 - Power Reduction Data FIFO
.equ	PRSF		= 2		; 0x04 - Power Reduction Preamble/RSSI FIFO
.equ	PRXA		= 1		; 0x02 - Power Reduction Rx Buffer A
.equ	PRXB		= 0		; 0x01 - Power Reduction Rx Buffer B

; ----------	Register RDPR bits		------------------------
.equ	RDPRF		= 7		; 0x80 - Rx DSP power reduction register(RDPR) busy flag
.equ	ARDPRF		= 6		; 0x40 - Automatic Rx DSP Power Reduction Flag
.equ	APRPTA		= 5		; 0x20 - Automatic Power Reduction of Path A
.equ	APRPTB		= 4		; 0x10 - Automatic Power Reduction of Path B
.equ	PRTMP		= 3		; 0x08 - Power reduction register for temperature measurement
.equ	PRFLT		= 2		; 0x04 - Power reduction register for the digital channel filter
.equ	PRPTA		= 1		; 0x02 - Power reduction register for the demodulator and receiving path B
.equ	PRPTB		= 0		; 0x01 - Power reduction register for the demodulator and receiving path A

; ----------	Register SRCCAL bits		------------------------
.equ	SRCTC_MASK	= 0xC0		;      - Slow RC oscillator temperature compensation (2 bits)
.equ	SRCTC0		= 6		;          SRCTC BIT0 position
.equ	SRCCAL_MASK	= 0x3F		;      - Slow RC oscillator calibration (6 bits)
.equ	SRCCAL0		= 0		;          SRCCAL BIT0 position



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CLPR bits		------------------------
.equ	CLPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLTPS_MASK	= 0x38		;      - Timer Clock Prescaler Select (3 bits)
.equ	CLTPS0		= 3		;          CLTPS BIT0 position
.equ	CLKPS_MASK	= 0x07		;      - Clock Prescaler Select (3 bits)
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
.equ	CMCCE		= 7		; 0x80 - Clock management control change enable
.equ	CMONEN		= 6		; 0x40 - Clock monitor enable
.equ	SRCD		= 4		; 0x10 - Slow RC oscillator disable
.equ	CCS		= 3		; 0x08 - Core Clock Select
.equ	CMM_MASK	= 0x07		;      - Clock Management Mode (3 bits)
.equ	CMM0		= 0		;          CMM BIT0 position

; ----------	Register CMIMR bits		------------------------
.equ	ECIE		= 0		; 0x01 - External clock interrupt enable

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
.equ	BLBSET		= 3		; 0x08 - Boot Lock Bit Set
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming Enable

; ----------	Register MCUCR bits		------------------------
.equ	PB7HS		= 7		; 0x80 - Port B7 High Side Driver enable
.equ	PB7LS		= 6		; 0x40 - Port B7 Low Side Driver enable
.equ	PB4HS		= 5		; 0x20 - Port B4 High Side Driver enable
.equ	PUD		= 4		; 0x10 - Pull-up Resistors Disable
.equ	ENPS		= 3		; 0x08 - Enable Port Settings
.equ	SPIIO		= 2		; 0x04 - SPI Interrupt Only
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on Reset flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Extended power-save
;			0x04		; Power Down
;			0x06		; Power Save
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Reserved
;			0x0E		; Reserved



; ====	CRC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CRCCR bits		------------------------
.equ	REFLO		= 2		; 0x04 - Reflect Data Output Byte
.equ	REFLI		= 1		; 0x02 - Reflect Data Input Byte
.equ	CRCRS		= 0		; 0x01 - CRC Data Register Reset



; ====	DEBOUNCE MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register DBCR bits		------------------------
.equ	DBHA		= 3		; 0x08 - Debounce Handshake Active
.equ	DBTMS		= 2		; 0x04 - Debounce Timer Mask Select
.equ	DBCS		= 1		; 0x02 - Debounce Clock Select
.equ	DBMD		= 0		; 0x01 - Debounce Mode



; ====	DEBUG MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DBGSW bits		------------------------
.equ	DBGSE		= 7		; 0x80 - Debugging Support Switch Enable
.equ	CPBF		= 6		; 0x40 - CPU Busy Flag
.equ	CPBFOS_MASK	= 0x30		;      - CPU Busy Flag Output Select (2 bits)
.equ	CPBFOS0		= 4		;          CPBFOS BIT0 position
.equ	DBGGS_MASK	= 0x0F		;      - Debugging Support Group Select (4 bits)
.equ	DBGGS0		= 0		;          DBGGS BIT0 position



; ====	DEMOD MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DMCDA bits		------------------------
.equ	DMCTA_MASK	= 0xE0		;      - Demodulator Carrier Detect Time for path A (3 bits)
.equ	DMCTA0		= 5		;          DMCTA BIT0 position
.equ	DMCLA_MASK	= 0x1F		;      - Demodulator Carrier Detect Limit for path A (5 bits)
.equ	DMCLA0		= 0		;          DMCLA BIT0 position

; ----------	Register DMCDB bits		------------------------
.equ	DMCTB_MASK	= 0xE0		;      - Demodulator Carrier Detect Time for path B (3 bits)
.equ	DMCTB0		= 5		;          DMCTB BIT0 position
.equ	DMCLB_MASK	= 0x1F		;      - Demodulator Carrier Detect Limit for path B (5 bits)
.equ	DMCLB0		= 0		;          DMCLB BIT0 position

; ----------	Register DMCRA bits		------------------------
.equ	DMARA		= 7		; 0x80 - Demodulator automatic restart on path A
.equ	SY1TA		= 6		; 0x40 - Symbol check with only 1T on path A
.equ	SASKA		= 5		; 0x20 - Select ASK input for path A
.equ	DMPGA_MASK	= 0x1F		;      - Demodulator PLL loop gain for path A (5 bits)
.equ	DMPGA0		= 0		;          DMPGA BIT0 position

; ----------	Register DMCRB bits		------------------------
.equ	DMARB		= 7		; 0x80 - Demodulator automatic restart on path B
.equ	SY1TB		= 6		; 0x40 - Symbol check with only 1T on path B
.equ	SASKB		= 5		; 0x20 - Select ASK input for path B
.equ	DMPGB_MASK	= 0x1F		;      - Demodulator PLL loop gain for path B (5 bits)
.equ	DMPGB0		= 0		;          DMPGB BIT0 position

; ----------	Register DMDRA bits		------------------------
.equ	DMDNA_MASK	= 0xF0		;      - Demodulator Downsampling on path A (4 bits)
.equ	DMDNA0		= 4		;          DMDNA BIT0 position
.equ	DMAA_MASK	= 0x0F		;      - Demodulator Moving Average Data Rate factor on path A (4 bits)
.equ	DMAA0		= 0		;          DMAA BIT0 position

; ----------	Register DMDRB bits		------------------------
.equ	DMDNB_MASK	= 0xF0		;      - Demodulator Downsampling on path B (4 bits)
.equ	DMDNB0		= 4		;          DMDNB BIT0 position
.equ	DMAB_MASK	= 0x0F		;      - Demodulator Moving Average Data Rate factor on path B (4 bits)
.equ	DMAB0		= 0		;          DMAB BIT0 position

; ----------	Register DMMA bits		------------------------
.equ	DMNEA		= 7		; 0x80 - Demodulator NRZ Enable for path A
.equ	DMHA		= 6		; 0x40 - Demodulator Hold Mode for path A
.equ	DMPA		= 5		; 0x20 - Demodulator Data Polarity Selection for path A
.equ	DMATA_MASK	= 0x1F		;      - Demodulator Amplitude Threshold for path A (5 bits)
.equ	DMATA0		= 0		;          DMATA BIT0 position

; ----------	Register DMMB bits		------------------------
.equ	DMNEB		= 7		; 0x80 - Demodulator NRZ Enable for path B
.equ	DMHB		= 6		; 0x40 - Demodulator Hold Mode for path B
.equ	DMPB		= 5		; 0x20 - Demodulator Data Polarity Selection for path B
.equ	DMATB_MASK	= 0x1F		;      - Demodulator Amplitude Threshold for path B (5 bits)
.equ	DMATB0		= 0		;          DMATB BIT0 position



; ====	DFIFO MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DFC bits		------------------------
.equ	DFDRA		= 7		; 0x80 - Data FIFO Direct Read Access Operational Mode
.equ	DFFLC_MASK	= 0x3F		;      - Data FIFO Fill-Level Configuration (6 bits)
.equ	DFFLC0		= 0		;          DFFLC BIT0 position

; ----------	Register DFI bits		------------------------
.equ	DFERIM		= 1		; 0x02 - Data FIFO Error Interrupt Mask
.equ	DFFLIM		= 0		; 0x01 - Data FIFO Fill-level Interrupt Mask

; ----------	Register DFL bits		------------------------
.equ	DFCLR		= 7		; 0x80 - Data FIFO Clear
.equ	DFFLS_MASK	= 0x3F		;      - Data FIFO Fill Level Status (6 bits)
.equ	DFFLS0		= 0		;          DFFLS BIT0 position

; ----------	Register DFRP bits		------------------------
.equ	DFRP_MASK	= 0x3F		;      - Data FIFO Read Pointer (6 bits)
.equ	DFRP0		= 0		;          DFRP BIT0 position

; ----------	Register DFS bits		------------------------
.equ	DFOFL		= 2		; 0x04 - Data FIFO Overflow Flag
.equ	DFUFL		= 1		; 0x02 - Data FIFO Underflow Flag
.equ	DFFLRF		= 0		; 0x01 - Data FIFO Fill-Level Reached Status Flag

; ----------	Register DFWP bits		------------------------
.equ	DFWP_MASK	= 0x3F		;      - Data FIFO Write Pointer (6 bits)
.equ	DFWP0		= 0		;          DFWP BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	NVMBSY		= 7		; 0x80 - Non-volatile memory busy
.equ	EEPAGE		= 6		; 0x40 - EEPROM page access (multiple bytes access mode)
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
.equ	EEBRE		= 0		; 0x01 - EEPROM Burst Read Enable

; ----------	Register EEPR bits		------------------------
.equ	EEAP_MASK	= 0x0F		;      - EEPROM Access Protection (4 bits)
.equ	EEAP0		= 0		;          EEAP BIT0 position



; ====	FE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FEALR bits		------------------------
.equ	RNGE_MASK	= 0x03		;      - Range of the ANT_TUNE level detector (2 bits)
.equ	RNGE0		= 0		;          RNGE BIT0 position
; ::::  RNGE	:::: bitfield values
;			0x00		; 0..3 dBm
;			0x01		; 4..7 dBm
;			0x02		; 8..14 dBm
;			0x03		; Secure Measurement

; ----------	Register FEANT bits		------------------------
.equ	LVLC_MASK	= 0x0F		;      - antenna signal LeVeL (4 bits)
.equ	LVLC0		= 0		;          LVLC BIT0 position

; ----------	Register FEBIA bits		------------------------
.equ	IFAEN		= 7		; 0x80 - IF Amplifier Enable

; ----------	Register FEBT bits		------------------------
.equ	RTN2_MASK	= 0x0C		;      - Resistor Tuning (2 bits)
.equ	RTN20		= 2		;          RTN2 BIT0 position
.equ	CTN2_MASK	= 0x03		;      - Capacitor Tuning (2 bits)
.equ	CTN20		= 0		;          CTN2 BIT0 position

; ----------	Register FECR bits		------------------------
.equ	ANPS		= 5		; 0x20 - ASK Not DPSK Switch
.equ	PLCKG		= 4		; 0x10 - PLL Lock Detect Gate
.equ	ADHS		= 3		; 0x08 - ADC High Sample Rate
.equ	ANDP		= 2		; 0x04 - Antenna Damping
.equ	S4N3		= 1		; 0x02 - Select 433 Not 315MHz Band
.equ	LBNHB		= 0		; 0x01 - Select Low-Band Not High-Band

; ----------	Register FEEN1 bits		------------------------
.equ	ATEN		= 7		; 0x80 - Antenna Tuning Enable
.equ	PLSP1		= 6		; 0x40 - PLL Speedup 1
.equ	ADCLK		= 5		; 0x20 - ADC Clock enable
.equ	ADEN		= 4		; 0x10 - Analog Digital Converter enable
.equ	LNAEN		= 3		; 0x08 - Low Noise Amplifier enable
.equ	XTOEN		= 2		; 0x04 - Cristal Oscillator enable
.equ	PLCAL		= 1		; 0x02 - PLL calibration mode
.equ	PLEN		= 0		; 0x01 - PLL enable

; ----------	Register FEEN2 bits		------------------------
.equ	XTPEN		= 5		; 0x20 - XTO VPump enable
.equ	PLPEN		= 4		; 0x10 - PLL Post En IQ divider
.equ	TMPM		= 3		; 0x08 - Temperature measurement
.equ	PAEN		= 2		; 0x04 - Power Amplifier enable
.equ	SDRX2		= 1		; 0x02 - Single Pole Double Throw (SPDT) Switch TX
.equ	SDRX		= 0		; 0x01 - Single Pole Double Throw (SPDT) Switch RX

; ----------	Register FELNA bits		------------------------
.equ	LBL_MASK	= 0xF0		;      - LNA Bias Low band (4 bits)
.equ	LBL0		= 4		;          LBL BIT0 position
.equ	LBH_MASK	= 0x0F		;      - LNA Bias High band (4 bits)
.equ	LBH0		= 0		;          LBH BIT0 position

; ----------	Register FEMS bits		------------------------
.equ	PLLM_MASK	= 0xF0		;      - PLL Mode (4 bits)
.equ	PLLM0		= 4		;          PLLM BIT0 position
.equ	PLLS_MASK	= 0x0F		;      - PLL Swallow (4 bits)
.equ	PLLS0		= 0		;          PLLS BIT0 position

; ----------	Register FESR bits		------------------------
.equ	PLCK		= 3		; 0x08 - PLL locked
.equ	XRDY		= 2		; 0x04 - XTO ready
.equ	HBSAT		= 1		; 0x02 - LNA High band saturated
.equ	LBSAT		= 0		; 0x01 - LNA Low band saturated

; ----------	Register FETN4 bits		------------------------
.equ	RTN4_MASK	= 0xF0		;      - 4 bit Resistor Tuning (4 bits)
.equ	RTN40		= 4		;          RTN4 BIT0 position
.equ	CTN4_MASK	= 0x0F		;      - 4 bit Capacitor Tuning (4 bits)
.equ	CTN40		= 0		;          CTN4 BIT0 position

; ----------	Register FEVCO bits		------------------------
.equ	VCOB_MASK	= 0xF0		;      - VCO Bias (4 bits)
.equ	VCOB0		= 4		;          VCOB BIT0 position
.equ	CPCC_MASK	= 0x0F		;      - Charge pump current control (4 bits)
.equ	CPCC0		= 0		;          CPCC BIT0 position

; ----------	Register FEVCT bits		------------------------
.equ	FEVCT_MASK	= 0x0F		;      - Front-End VCO Tuning Register (4 bits)
.equ	FEVCT0		= 0		;          FEVCT BIT0 position



; ====	FREQS MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register FSEN bits		------------------------
.equ	SDEN		= 1		; 0x02 - Sigma-delta Modulator Enable
.equ	SDPU		= 0		; 0x01 - Sigma-delta Modulator Power Up



; ====	FRSYNC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFIDCA bits		------------------------
.equ	SEMEA		= 7		; 0x80 - Serial mode enable for data path A
.equ	SFIDTA_MASK	= 0x1F		;      - Start-Frame ID threshold for data path A (5 bits)
.equ	SFIDTA0		= 0		;          SFIDTA BIT0 position

; ----------	Register SFIDCB bits		------------------------
.equ	SEMEB		= 7		; 0x80 - Serial mode enable for data path B
.equ	SFIDTB_MASK	= 0x1F		;      - Start-Frame ID threshold for data path B (5 bits)
.equ	SFIDTB0		= 0		;          SFIDTB BIT0 position

; ----------	Register SFIDLA bits		------------------------
.equ	SFIDLA_MASK	= 0x3F		;      - Start-Frame ID Length for data path A (6 bits)
.equ	SFIDLA0		= 0		;          SFIDLA BIT0 position

; ----------	Register SFIDLB bits		------------------------
.equ	SFIDLB_MASK	= 0x3F		;      - Start-Frame ID Length for data path B (6 bits)
.equ	SFIDLB0		= 0		;          SFIDLB BIT0 position

; ----------	Register WUPLA bits		------------------------
.equ	WUPLA_MASK	= 0x3F		;      - Wake-Up Pattern Length for data path A (6 bits)
.equ	WUPLA0		= 0		;          WUPLA BIT0 position

; ----------	Register WUPLB bits		------------------------
.equ	WUPLB_MASK	= 0x3F		;      - Wake-Up Pattern Length for data path B (6 bits)
.equ	WUPLB0		= 0		;          WUPLB BIT0 position

; ----------	Register WUPTA bits		------------------------
.equ	WUPTA_MASK	= 0x1F		;      - Wake-Up Pattern Threshold for data path A (5 bits)
.equ	WUPTA0		= 0		;          WUPTA BIT0 position

; ----------	Register WUPTB bits		------------------------
.equ	WUPTB_MASK	= 0x1F		;      - Wake-Up Pattern Threshold for data path B (5 bits)
.equ	WUPTB0		= 0		;          WUPTB BIT0 position



; ====	IDSCAN MODULE REGISTERS BITS DEFINITION		========
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
.equ	IDOK		= 0		; 0x01 - ID Scan Ok Flag



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
.equ	PCINT0		= 0		; 0x01 - Pin Change Enable Mask bit 0
.equ	PCINT1		= 1		; 0x02 - Pin Change Enable Mask bit 1
.equ	PCINT2		= 2		; 0x04 - Pin Change Enable Mask bit 2
.equ	PCINT3		= 3		; 0x08 - Pin Change Enable Mask bit 3
.equ	PCINT4		= 4		; 0x10 - Pin Change Enable Mask bit 4
.equ	PCINT5		= 5		; 0x20 - Pin Change Enable Mask bit 5
.equ	PCINT6		= 6		; 0x40 - Pin Change Enable Mask bit 6
.equ	PCINT7		= 7		; 0x80 - Pin Change Enable Mask bit 7

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT8		= 0		; 0x01 - Pin Change Enable Mask bit 8
.equ	PCINT9		= 1		; 0x02 - Pin Change Enable Mask bit 9
.equ	PCINT10		= 2		; 0x04 - Pin Change Enable Mask bit 10
.equ	PCINT11		= 3		; 0x08 - Pin Change Enable Mask bit 11
.equ	PCINT12		= 4		; 0x10 - Pin Change Enable Mask bit 12
.equ	PCINT13		= 5		; 0x20 - Pin Change Enable Mask bit 13



; ====	MEM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEST bits		------------------------
.equ	EESYN_MASK	= 0x0F		;      - EEPROM Syndrome (4 bits)
.equ	EESYN0		= 0		;          EESYN BIT0 position

; ----------	Register PGMST bits		------------------------
.equ	PGMSYN_MASK	= 0x1F		;      - Program Memory Syndrome (5 bits)
.equ	PGMSYN0		= 0		;          PGMSYN BIT0 position



; ====	RSSIB MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register RSCOM bits		------------------------
.equ	RSIFC		= 1		; 0x02 - RSSI IF Amplifier Compensation
.equ	RSDC		= 0		; 0x01 - RSSI Damping Compensation

; ----------	Register RSSC bits		------------------------
.equ	RSPKF		= 6		; 0x40 - RSSI Peak Values to SFIFO
.equ	RSHRX		= 5		; 0x20 - RSSI High Band Reception
.equ	RSWLH		= 4		; 0x10 - RSSI within Low and High Limits
.equ	RSUP_MASK	= 0x0F		;      - RSSI Update Period (4 bits)
.equ	RSUP0		= 0		;          RSUP BIT0 position



; ====	RXBUF MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register RXBC1 bits		------------------------
.equ	RXMSBB		= 7		; 0x80 - Receive Data MSB-first for data path B
.equ	RXCBLB_MASK	= 0x60		;      - Receive CRC Bit Lengths setting for data path B (2 bits)
.equ	RXCBLB0		= 5		;          RXCBLB BIT0 position
.equ	RXCEB		= 4		; 0x10 - RX CRC Enable data path B
.equ	RXMSBA		= 3		; 0x08 - Receive Data MSB-first for data path A
.equ	RXCBLA_MASK	= 0x06		;      - Receive CRC Bit Lengths setting for data path A (2 bits)
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
.equ	RXBPB		= 0		; 0x01 - RX Buffer Path B select signal

; ----------	Register RXTLHA bits		------------------------
.equ	RXTLHA3		= 3		; 0x08 - RXTL (Receive Telegram Length) register High byte for data path A bit 3
.equ	RXTLHA2		= 2		; 0x04 - RXTL (Receive Telegram Length) register High byte for data path A bit 2
.equ	RXTLHA1		= 1		; 0x02 - RXTL (Receive Telegram Length) register High byte for data path A bit 1
.equ	RXTLHA0		= 0		; 0x01 - RXTL (Receive Telegram Length) register High byte for data path A bit 0

; ----------	Register RXTLHB bits		------------------------
.equ	RXTLHB3		= 3		; 0x08 - RXTL (Receive Telegram Length) register High byte for data path B bit 3
.equ	RXTLHB2		= 2		; 0x04 - RXTL (Receive Telegram Length) register High byte for data path B bit 2
.equ	RXTLHB1		= 1		; 0x02 - RXTL (Receive Telegram Length) register High byte for data path B bit 1
.equ	RXTLHB0		= 0		; 0x01 - RXTL (Receive Telegram Length) register High byte for data path B bit 0



; ====	RXDSP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EOTCA bits		------------------------
.equ	EOTBFE		= 7		; 0x80 - End Of Telegram on path B Fail Enable
.equ	RRFEA		= 6		; 0x40 - RSSI Range Fail Enable on path A
.equ	TELREA		= 5		; 0x20 - Telegram Length Reached Enable on path A
.equ	TMOFEA		= 4		; 0x10 - Time-Out Fail Enable on path A
.equ	MANFEA		= 3		; 0x08 - MANchester Coding Failed Enable for path A
.equ	SYTFEA		= 2		; 0x04 - SYmbol Timing check Failed Enable for path A
.equ	AMPFEA		= 1		; 0x02 - AMPlitude Failed Enable for path A
.equ	CARFEA		= 0		; 0x01 - CARrier check Failed Enable for path A

; ----------	Register EOTCB bits		------------------------
.equ	EOTAFE		= 7		; 0x80 - End Of Telegram on path B Fail Enable
.equ	RRFEB		= 6		; 0x40 - RSSI Range Fail Enable on path B
.equ	TELREB		= 5		; 0x20 - Telegram Length Reached Enable on path B
.equ	TMOFEB		= 4		; 0x10 - Time-Out Fail Enable on path B
.equ	MANFEB		= 3		; 0x08 - MANchester Coding Failed Enable for path B
.equ	SYTFEB		= 2		; 0x04 - SYmbol Timing check Failed Enable for path B
.equ	AMPFEB		= 1		; 0x02 - AMPlitude Failed Enable for path B
.equ	CARFEB		= 0		; 0x01 - CARrier check Failed Enable for path B

; ----------	Register EOTSA bits		------------------------
.equ	EOTBF		= 7		; 0x80 - End Of Telegram on path B Flag
.equ	RRFA		= 6		; 0x40 - RSSI Range Fail on path A
.equ	TELRA		= 5		; 0x20 - Telegram Length Reached on path A
.equ	TMOFA		= 4		; 0x10 - Time-Out Fail on path A
.equ	MANFA		= 3		; 0x08 - MANchester coding Failed on path A
.equ	SYTFA		= 2		; 0x04 - SYmbol Timing check Failed on path A
.equ	AMPFA		= 1		; 0x02 - AMPlitude Failed on path A
.equ	CARFA		= 0		; 0x01 - CARrier check Failed on path A

; ----------	Register EOTSB bits		------------------------
.equ	EOTAF		= 7		; 0x80 - End Of Telegram on path A Flag
.equ	RRFB		= 6		; 0x40 - RSSI Range Fail on path B
.equ	TELRB		= 5		; 0x20 - Telegram Length Reached on path B
.equ	TMOFB		= 4		; 0x10 - Time-Out Fail on path B
.equ	MANFB		= 3		; 0x08 - MANchester coding Failed on path B
.equ	SYTFB		= 2		; 0x04 - SYmbol Timing check Failed on path B
.equ	AMPFB		= 1		; 0x02 - AMPlitude Failed on path B
.equ	CARFB		= 0		; 0x01 - CARrier check Failed on path B

; ----------	Register RDCR bits		------------------------
.equ	RDEN		= 2		; 0x04 - Rx DSP enable
.equ	ADIVEN		= 1		; 0x02 - Divided ADC clock enable
.equ	RDPU		= 0		; 0x01 - Rx DSP Power Up

; ----------	Register RDOCR bits		------------------------
.equ	RDSIDB		= 6		; 0x40 - Rx DSP Start bit Is Data for path B
.equ	RDSIDA		= 5		; 0x20 - Rx DSP Start bit Is Data for path A
.equ	ETRPB		= 4		; 0x10 - Enable Transparent Path B
.equ	ETRPA		= 3		; 0x08 - Enable Transparent Path A
.equ	TMDS_MASK	= 0x06		;      - Transparent Mode Data Select (2 bits)
.equ	TMDS0		= 1		;          TMDS BIT0 position

; ----------	Register RDSIFR bits		------------------------
.equ	WCOB		= 7		; 0x80 - Wake Conditions Ok on path B
.equ	WCOA		= 6		; 0x40 - Wake Conditions Ok on path A
.equ	SOTB		= 5		; 0x20 - Start Of Telegram on path B
.equ	SOTA		= 4		; 0x10 - Start Of Telegram on path A
.equ	EOTB		= 3		; 0x08 - End Of Telegram on path B
.equ	EOTA		= 2		; 0x04 - End Of Telegram on path A
.equ	NBITB		= 1		; 0x02 - New Bit on Rx path B
.equ	NBITA		= 0		; 0x01 - New Bit on Rx path A

; ----------	Register RDSIMR bits		------------------------
.equ	WCOBM		= 7		; 0x80 - Wake Conditions Ok on path B interrupt mask register
.equ	WCOAM		= 6		; 0x40 - Wake Conditions Ok on path A interrupt mask register
.equ	SOTBM		= 5		; 0x20 - Start Of Telegram on Rx path B interrupt mask register
.equ	SOTAM		= 4		; 0x10 - Start Of Telegram on Rx path A interrupt mask register
.equ	EOTBM		= 3		; 0x08 - End Of Telegram on Rx path B interrupt mask register
.equ	EOTAM		= 2		; 0x04 - End Of Telegram on Rx path A interrupt mask register
.equ	NBITBM		= 1		; 0x02 - New bit on Rx path B interrupt mask register
.equ	NBITAM		= 0		; 0x01 - New bit on Rx path A interrupt mask register

; ----------	Register SOTCA bits		------------------------
.equ	WCOBOE		= 7		; 0x80 - Wake Check OK from path B Ok Enable
.equ	RROEA		= 6		; 0x40 - RSSI Range OK Enable for path A
.equ	SFIDEA		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path A
.equ	WUPEA		= 4		; 0x10 - Wake Up Pattern match Enabled for path A
.equ	MANOEA		= 3		; 0x08 - Manchester Coding Ok Enabled for path A
.equ	SYTOEA		= 2		; 0x04 - Symbol Timing Ok Enabled for path A
.equ	AMPOEA		= 1		; 0x02 - AMPlitude Ok Enabled for path A
.equ	CAROEA		= 0		; 0x01 - CARrier check Ok Enabled for path A

; ----------	Register SOTCB bits		------------------------
.equ	WCOAOE		= 7		; 0x80 - Wake Check OK from path A Ok Enable
.equ	RROEB		= 6		; 0x40 - RSSI Range OK Enable for path B
.equ	SFIDEB		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path B
.equ	WUPEB		= 4		; 0x10 - Wake Up Pattern match Enabled for path B
.equ	MANOEB		= 3		; 0x08 - Manchester Coding Ok Enabled for path B
.equ	SYTOEB		= 2		; 0x04 - Symbol Timing Ok Enabled for path B
.equ	AMPOEB		= 1		; 0x02 - AMPlitude Ok Enabled for path B
.equ	CAROEB		= 0		; 0x01 - CARrier check Ok Enabled for path B

; ----------	Register SOTSA bits		------------------------
.equ	WCOBO		= 7		; 0x80 - Wake Check Ok on path B Ok
.equ	RROA		= 6		; 0x40 - RSSI Range Ok on Path A
.equ	SFIDOA		= 5		; 0x20 - Start of Frame IDentifier matched on path A
.equ	WUPOA		= 4		; 0x10 - Wake Up Pattern matched on path A
.equ	MANOA		= 3		; 0x08 - Manchester Coding Ok on path A
.equ	SYTOA		= 2		; 0x04 - Symbol Timing Ok on path A
.equ	AMPOA		= 1		; 0x02 - AMPlitude Ok on path A
.equ	CAROA		= 0		; 0x01 - CARrier check Ok on path A

; ----------	Register SOTSB bits		------------------------
.equ	WCOAO		= 7		; 0x80 - Wake Check Ok on path A Ok
.equ	RROB		= 6		; 0x40 - RSSI Range Ok on Path B
.equ	SFIDOB		= 5		; 0x20 - Start of Frame IDentifier matched on path B
.equ	WUPOB		= 4		; 0x10 - Wake Up Pattern matched on path B
.equ	MANOB		= 3		; 0x08 - Manchester Coding Ok on path B
.equ	SYTOB		= 2		; 0x04 - Symbol Timing Ok on path B
.equ	AMPOB		= 1		; 0x02 - AMPlitude Ok on path B
.equ	CAROB		= 0		; 0x01 - CARrier check Ok on path B

; ----------	Register TESRA bits		------------------------
.equ	EOTLA_MASK	= 0x06		;      - End of Telegram Location on path A (2 bits)
.equ	EOTLA0		= 1		;          EOTLA BIT0 position
.equ	CRCOA		= 0		; 0x01 - Cyclic Redundancy Check Ok on path A
; ::::  EOTLA	:::: bitfield values
;			0x00		; No EOT
;			0x02		; Before WCO
;			0x04		; Between WCO and SOT
;			0x06		; After SOT

; ----------	Register TESRB bits		------------------------
.equ	EOTLB_MASK	= 0x06		;      - End of Telegram Location on path B (2 bits)
.equ	EOTLB0		= 1		;          EOTLB BIT0 position
.equ	CRCOB		= 0		; 0x01 - Cyclic Redundancy Check Ok on path B
; ::::  EOTLB	:::: bitfield values
;			0x00		; No EOT
;			0x02		; Before WCO
;			0x04		; Between WCO and SOT
;			0x06		; After SOT



; ====	SFIFO MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFC bits		------------------------
.equ	SFDRA		= 7		; 0x80 - Support FIFO Direct Read Access Operational Mode
.equ	SFFLC_MASK	= 0x1F		;      - Support FIFO Fill-Level Configuration (5 bits)
.equ	SFFLC0		= 0		;          SFFLC BIT0 position

; ----------	Register SFI bits		------------------------
.equ	SFERIM		= 1		; 0x02 - Support FIFO Error Interrupt Mask
.equ	SFFLIM		= 0		; 0x01 - Support FIFO Fill-level Interrupt Mask

; ----------	Register SFL bits		------------------------
.equ	SFCLR		= 7		; 0x80 - Support FIFO Clear
.equ	SFFLS_MASK	= 0x1F		;      - Support FIFO Fill Level Status (5 bits)
.equ	SFFLS0		= 0		;          SFFLS BIT0 position

; ----------	Register SFRP bits		------------------------
.equ	SFRP_MASK	= 0x1F		;      - Support FIFO Read Pointer (5 bits)
.equ	SFRP0		= 0		;          SFRP BIT0 position

; ----------	Register SFS bits		------------------------
.equ	SFOFL		= 2		; 0x04 - Support FIFO Overflow Flag
.equ	SFUFL		= 1		; 0x02 - Support FIFO Underflow Flag
.equ	SFFLRF		= 0		; 0x01 - Support FIFO Fill-Level Reached Status Flag

; ----------	Register SFWP bits		------------------------
.equ	SFWP_MASK	= 0x1F		;      - Support FIFO Write Pointer (5 bits)
.equ	SFWP0		= 0		;          SFWP BIT0 position



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	TXIF		= 5		; 0x20 - Tx Buffer Interrupt Flag
.equ	RXIF		= 4		; 0x10 - Rx Buffer Interrupt Flag
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

; ----------	Register SFFR bits		------------------------
.equ	TFC		= 7		; 0x80 - SPI Tx Buffer Clear
.equ	TFL_MASK	= 0x70		;      - SPI Transmit Buffer Fill Level (3 bits)
.equ	TFL0		= 4		;          TFL BIT0 position
.equ	RFC		= 3		; 0x08 - SPI Rx Buffer Clear
.equ	RFL_MASK	= 0x07		;      - SPI Receive Buffer Fill Level (3 bits)
.equ	RFL0		= 0		;          RFL BIT0 position

; ----------	Register SFIR bits		------------------------
.equ	STIE		= 7		; 0x80 - SPI Tx Buffer Interrupt Enable
.equ	TIL_MASK	= 0x70		;      - SPI Transmit Buffer Interrupt Level (3 bits)
.equ	TIL0		= 4		;          TIL BIT0 position
.equ	SRIE		= 3		; 0x08 - SPI Rx Buffer Interrupt Enable
.equ	RIL_MASK	= 0x07		;      - SPI Receive Buffer Interrupt Level (3 bits)
.equ	RIL0		= 0		;          RIL BIT0 position



; ====	SSM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EOTC1A bits		------------------------
.equ	EOTBFE1		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEA1		= 6		; 0x40 - RSSI Range Fail Enable on Path A
.equ	TELREA1		= 5		; 0x20 - Telegram Length Reached Enable on Path A
.equ	TMOFEA1		= 4		; 0x10 - Time-Out Fail Enable on Path A
.equ	MANFEA1		= 3		; 0x08 - MANchester Coding Failed Enable for Path A
.equ	SYTFEA1		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path A
.equ	AMPFEA1		= 1		; 0x02 - AMPlitude Failed Enable for path A
.equ	CARFEA1		= 0		; 0x01 - CARrier check Failed Enable for path A

; ----------	Register EOTC1B bits		------------------------
.equ	EOTAFE1		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEB1		= 6		; 0x40 - RSSI Range Fail Enable on Path B
.equ	TELREB1		= 5		; 0x20 - Telegram Length Reached Enable on Path B
.equ	TMOFEB1		= 4		; 0x10 - Time-Out Fail Enable on Path B
.equ	MANFEB1		= 3		; 0x08 - MANchester Coding Failed Enable for Path B
.equ	SYTFEB1		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path B
.equ	AMPFEB1		= 1		; 0x02 - AMPlitude Failed Enable for path B
.equ	CARFEB1		= 0		; 0x01 - CARrier check Failed Enable for path B

; ----------	Register EOTC2A bits		------------------------
.equ	EOTBFE2		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEA2		= 6		; 0x40 - RSSI Range Fail Enable on Path A
.equ	TELREA2		= 5		; 0x20 - Telegram Length Reached Enable on Path A
.equ	TMOFEA2		= 4		; 0x10 - Time-Out Fail Enable on Path A
.equ	MANFEA2		= 3		; 0x08 - MANchester Coding Failed Enable for Path A
.equ	SYTFEA2		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path A
.equ	AMPFEA2		= 1		; 0x02 - AMPlitude Failed Enable for path A
.equ	CARFEA2		= 0		; 0x01 - CARrier check Failed Enable for path A

; ----------	Register EOTC2B bits		------------------------
.equ	EOTAFE2		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEB2		= 6		; 0x40 - RSSI Range Fail Enable on Path B
.equ	TELREB2		= 5		; 0x20 - Telegram Length Reached Enable on Path B
.equ	TMOFEB2		= 4		; 0x10 - Time-Out Fail Enable on Path B
.equ	MANFEB2		= 3		; 0x08 - MANchester Coding Failed Enable for Path B
.equ	SYTFEB2		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path B
.equ	AMPFEB2		= 1		; 0x02 - AMPlitude Failed Enable for path B
.equ	CARFEB2		= 0		; 0x01 - CARrier check Failed Enable for path B

; ----------	Register EOTC3A bits		------------------------
.equ	EOTBFE3		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEA3		= 6		; 0x40 - RSSI Range Fail Enable on Path A
.equ	TELREA3		= 5		; 0x20 - Telegram Length Reached Enable on Path A
.equ	TMOFEA3		= 4		; 0x10 - Time-Out Fail Enable on Path A
.equ	MANFEA3		= 3		; 0x08 - MANchester Coding Failed Enable for Path A
.equ	SYTFEA3		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path A
.equ	AMPFEA3		= 1		; 0x02 - AMPlitude Failed Enable for path A
.equ	CARFEA3		= 0		; 0x01 - CARrier check Failed Enable for path A

; ----------	Register EOTC3B bits		------------------------
.equ	EOTAFE3		= 7		; 0x80 - End Of Telegram on Path B Fail Enable
.equ	RRFEB3		= 6		; 0x40 - RSSI Range Fail Enable on Path B
.equ	TELREB3		= 5		; 0x20 - Telegram Length Reached Enable on Path B
.equ	TMOFEB3		= 4		; 0x10 - Time-Out Fail Enable on Path B
.equ	MANFEB3		= 3		; 0x08 - MANchester Coding Failed Enable for Path B
.equ	SYTFEB3		= 2		; 0x04 - SYmbol Timing check Failed Enable for Path B
.equ	AMPFEB3		= 1		; 0x02 - AMPlitude Failed Enable for path B
.equ	CARFEB3		= 0		; 0x01 - CARrier check Failed Enable for path B

; ----------	Register GTCR bits		------------------------
.equ	IWUPB		= 7		; 0x80 - Intermittent WUP Mode Path B
.equ	DARB		= 6		; 0x40 - Demodulator Automatic Restart on Path B
.equ	GAPMB		= 5		; 0x20 - Gap Mode Path B
.equ	RXTEHB		= 4		; 0x10 - Rx Telegram End Handling Path B
.equ	IWUPA		= 3		; 0x08 - Intermittent WUP Mode Path A
.equ	DARA		= 2		; 0x04 - Demodulator Automatic Restart on Path A
.equ	GAPMA		= 1		; 0x02 - Gap Mode Path A
.equ	RXTEHA		= 0		; 0x01 - Rx Telegram End Handling Path A

; ----------	Register MSMCR1 bits		------------------------
.equ	MSMSM0_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 0 (4 bits)
.equ	MSMSM00		= 0		;          MSMSM0 BIT0 position
.equ	MSMSM1_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 1 (4 bits)
.equ	MSMSM10		= 4		;          MSMSM1 BIT0 position
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
;			0x0D		; Antenna Tuning
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
;			0xD0		; Antenna Tuning

; ----------	Register MSMCR2 bits		------------------------
.equ	MSMSM2_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 2 (4 bits)
.equ	MSMSM20		= 0		;          MSMSM2 BIT0 position
.equ	MSMSM3_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 3 (4 bits)
.equ	MSMSM30		= 4		;          MSMSM3 BIT0 position
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
;			0x0D		; Antenna Tuning
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
;			0xD0		; Antenna Tuning

; ----------	Register MSMCR3 bits		------------------------
.equ	MSMSM4_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 4 (4 bits)
.equ	MSMSM40		= 0		;          MSMSM4 BIT0 position
.equ	MSMSM5_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 5 (4 bits)
.equ	MSMSM50		= 4		;          MSMSM5 BIT0 position
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
;			0x0D		; Antenna Tuning
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
;			0xD0		; Antenna Tuning

; ----------	Register MSMCR4 bits		------------------------
.equ	MSMSM6_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 6 (4 bits)
.equ	MSMSM60		= 0		;          MSMSM6 BIT0 position
.equ	MSMSM7_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 7 (4 bits)
.equ	MSMSM70		= 4		;          MSMSM7 BIT0 position
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
;			0x0D		; Antenna Tuning
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
;			0xD0		; Antenna Tuning

; ----------	Register MSMSTR bits		------------------------
.equ	SSMMST_MASK	= 0x1F		;      - Sequencer State Machine Master State (5 bits)
.equ	SSMMST0		= 0		;          SSMMST BIT0 position

; ----------	Register SOTC1A bits		------------------------
.equ	WCOBOE1		= 7		; 0x80 - Wake Check OK from path B Ok Enable
.equ	RROEA1		= 6		; 0x40 - RSSI Range OK Enable for path A
.equ	SFIDEA1		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path A
.equ	WUPEA1		= 4		; 0x10 - Wake Up Pattern match Enabled for path A
.equ	MANOEA1		= 3		; 0x08 - Manchester Coding Ok Enabled for path A
.equ	SYTOEA1		= 2		; 0x04 - Symbol Timing Ok Enabled for path A
.equ	AMPOEA1		= 1		; 0x02 - AMPlitude Ok Enabled for path A
.equ	CAROEA1		= 0		; 0x01 - CARrier check Ok Enabled for path A

; ----------	Register SOTC1B bits		------------------------
.equ	WCOAOE1		= 7		; 0x80 - Wake Check Ok on path B Ok
.equ	RROEB1		= 6		; 0x40 - RSSI Range Ok on Path A
.equ	SFIDEB1		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path B
.equ	WUPEB1		= 4		; 0x10 - Wake Up Pattern match Enabled for path B
.equ	MANOEB1		= 3		; 0x08 - Manchester Coding Ok Enabled for path B
.equ	SYTOEB1		= 2		; 0x04 - Symbol Timing Ok Enabled for path B
.equ	AMPOEB1		= 1		; 0x02 - AMPlitude Ok Enabled for path B
.equ	CAROEB1		= 0		; 0x01 - CARrier check Ok Enabled for path B

; ----------	Register SOTC2A bits		------------------------
.equ	WCOBOE2		= 7		; 0x80 - Wake Check OK from path B Ok Enable
.equ	RROEA2		= 6		; 0x40 - RSSI Range OK Enable for path A
.equ	SFIDEA2		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path A
.equ	WUPEA2		= 4		; 0x10 - Wake Up Pattern match Enabled for path A
.equ	MANOEA2		= 3		; 0x08 - Manchester Coding Ok Enabled for path A
.equ	SYTOEA2		= 2		; 0x04 - Symbol Timing Ok Enabled for path A
.equ	AMPOEA2		= 1		; 0x02 - AMPlitude Ok Enabled for path A
.equ	CAROEA2		= 0		; 0x01 - CARrier check Ok Enabled for path A

; ----------	Register SOTC2B bits		------------------------
.equ	WCOAOE2		= 7		; 0x80 - Wake Check Ok on path B Ok
.equ	RROEB2		= 6		; 0x40 - RSSI Range Ok on Path A
.equ	SFIDEB2		= 5		; 0x20 - Start of Frame IDentifier match Enabled for path B
.equ	WUPEB2		= 4		; 0x10 - Wake Up Pattern match Enabled for path B
.equ	MANOEB2		= 3		; 0x08 - Manchester Coding Ok Enabled for path B
.equ	SYTOEB2		= 2		; 0x04 - Symbol Timing Ok Enabled for path B
.equ	AMPOEB2		= 1		; 0x02 - AMPlitude Ok Enabled for path B
.equ	CAROEB2		= 0		; 0x01 - CARrier check Ok Enabled for path B

; ----------	Register SSMCR bits		------------------------
.equ	SETRPB		= 7		; 0x80 - Sequencer State Machine Enable Transparent Path B
.equ	SETRPA		= 6		; 0x40 - Sequencer State Machine Enable Transparent Path A
.equ	SSMTAE		= 5		; 0x20 - Sequencer State Machine Tx Ask-Shaping Enable
.equ	SSMPVE		= 4		; 0x10 - Sequencer State Machine PV Enable
.equ	SSMTPE		= 3		; 0x08 - Sequencer State Machine Tx Preemphasis Enable
.equ	SSMTGE		= 2		; 0x04 - Sequencer State Machine Tx Gauss Enable
.equ	SSMTM		= 1		; 0x02 - Sequencer State Machine Temperature Measurement
.equ	SSMTX		= 0		; 0x01 - Sequencer State Machine Tx

; ----------	Register SSMFBR bits		------------------------
.equ	SSMPLDT		= 5		; 0x20 - Sequencer State Machine PLL Lock Delay Time
.equ	SSMHADT		= 4		; 0x10 - Sequencer State Machine Half Antennadamping Delay Time
.equ	SSMDFDT		= 3		; 0x08 - Sequencer State Machine Double Filter Delay Time
.equ	SSMFID_MASK	= 0x07		;      - Sequencer State Machine Filter Delay (3 bits)
.equ	SSMFID0		= 0		;          SSMFID BIT0 position

; ----------	Register SSMFCR bits		------------------------
.equ	SSMIDSF		= 1		; 0x02 - Sequencer State Machine ID Scan Fail
.equ	SSMIDSO		= 0		; 0x01 - Sequencer State Machine ID Scan OK

; ----------	Register SSMIFR bits		------------------------
.equ	SSMIF		= 0		; 0x01 - Sequencer State Machine Interrupt Flag

; ----------	Register SSMIMR bits		------------------------
.equ	SSMIM		= 0		; 0x01 - Sequencer State Machine Interrupt Mask

; ----------	Register SSMRCR bits		------------------------
.equ	SSMTMOE		= 7		; 0x80 - Sequencer State Machine Transparent Mode Output Enable
.equ	SSMIDSE		= 6		; 0x40 - Sequencer State Machine ID Scan Enable
.equ	SSMIFA		= 5		; 0x20 - Sequencer State Machine IF Amplifier Enable
.equ	SSMPVS		= 4		; 0x10 - Sequencer State Machine Path Valid After SOT
.equ	SSMADB		= 3		; 0x08 - Sequencer State Machine Antenna Damping Disable Path B
.equ	SSMADA		= 2		; 0x04 - Sequencer State Machine Antenna Damping Disable Path A
.equ	SSMPB		= 1		; 0x02 - Sequencer State Machine Path B
.equ	SSMPA		= 0		; 0x01 - Sequencer State Machine Path A

; ----------	Register SSMRR bits		------------------------
.equ	SSMST		= 1		; 0x02 - Sequencer State Machine Stop
.equ	SSMR		= 0		; 0x01 - Sequencer State Machine Run

; ----------	Register SSMSR bits		------------------------
.equ	SSMERR		= 7		; 0x80 - Sequencer State Machine Error
.equ	SSMESM_MASK	= 0x0F		;      - Sequencer State Machine Error State Machine (4 bits)
.equ	SSMESM0		= 0		;          SSMESM BIT0 position

; ----------	Register SSMSTR bits		------------------------
.equ	SSMSTA_MASK	= 0x3F		;      - Sequencer State Machine State A (6 bits)
.equ	SSMSTA0		= 0		;          SSMSTA BIT0 position

; ----------	Register SSMXSR bits		------------------------
.equ	SSMSTB_MASK	= 0x3F		;      - Sequencer State Machine State B (6 bits)
.equ	SSMSTB0		= 0		;          SSMSTB BIT0 position



; ====	SUP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SUPCA2 bits		------------------------
.equ	BGCAL_MASK	= 0x0F		;      - Band Gap Calibration (4 bits)
.equ	BGCAL0		= 0		;          BGCAL BIT0 position

; ----------	Register SUPCA3 bits		------------------------
.equ	DCAL6		= 6		; 0x40 - DVCC Reset Threshold Calibration bit 6
.equ	DCAL5		= 5		; 0x20 - DVCC Reset Threshold Calibration bit 5
.equ	DCAL4		= 4		; 0x10 - DVCC Reset Threshold Calibration bit 4
.equ	ACAL7		= 3		; 0x08 - AVCC Reset Threshold Calibration bit 7
.equ	ACAL6		= 2		; 0x04 - AVCC Reset Threshold Calibration bit 6
.equ	ACAL5		= 1		; 0x02 - AVCC Reset Threshold Calibration bit 5
.equ	ACAL4		= 0		; 0x01 - AVCC Reset Threshold Calibration bit 4

; ----------	Register SUPCA4 bits		------------------------
.equ	DCAL3		= 7		; 0x80 - DVCC Regulator Output Voltage Calibration bit 3
.equ	DCAL2		= 6		; 0x40 - DVCC Regulator Output Voltage Calibration bit 2
.equ	DCAL1		= 5		; 0x20 - DVCC Regulator Output Voltage Calibration bit 1
.equ	DCAL0		= 4		; 0x10 - DVCC Regulator Output Voltage Calibration bit 0
.equ	ACAL3		= 3		; 0x08 - AVCC Regulator Output Voltage Calibration bit 3
.equ	ACAL2		= 2		; 0x04 - AVCC Regulator Output Voltage Calibration bit 2
.equ	ACAL1		= 1		; 0x02 - AVCC Regulator Output Voltage Calibration bit 1
.equ	ACAL0		= 0		; 0x01 - AVCC Regulator Output Voltage Calibration bit 0

; ----------	Register SUPCR bits		------------------------
.equ	AVDIC		= 6		; 0x40 - AVCC Double Internal Current
.equ	AVEN		= 5		; 0x20 - AVCC Enable
.equ	DVDIS		= 4		; 0x10 - DVCC Disable
.equ	PVEN		= 2		; 0x04 - Power amplifier Voltage supply Enable
.equ	AVCCLM		= 1		; 0x02 - AVCC Low Interrupt Mask Bit
.equ	AVCCRM		= 0		; 0x01 - AVCC Reset Interrupt Mask Bit

; ----------	Register SUPFR bits		------------------------
.equ	AVCCLF		= 1		; 0x02 - AVCC low interrupt flag
.equ	AVCCRF		= 0		; 0x01 - AVCC reset interrupt flag

; ----------	Register VMCAL bits		------------------------
.equ	VMCAL_MASK	= 0x07		;      - Voltage monitor calibration (3 bits)
.equ	VMCAL0		= 0		;          VMCAL BIT0 position

; ----------	Register VMCSR bits		------------------------
.equ	VMF		= 5		; 0x20 - Voltage Monitor Flag
.equ	VMIM		= 4		; 0x10 - Voltage Monitor Interrupt Mask
.equ	VMLS_MASK	= 0x0F		;      - Voltage Monitor Level Select (4 bits)
.equ	VMLS0		= 0		;          VMLS BIT0 position



; ====	SYMCH MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SYCA bits		------------------------
.equ	SYTLA_MASK	= 0xF0		;      - Symbol timing limit for path A (4 bits)
.equ	SYTLA0		= 4		;          SYTLA BIT0 position
.equ	SYCSA_MASK	= 0x0F		;      - Symbol Check check size for data path A (4 bits)
.equ	SYCSA0		= 0		;          SYCSA BIT0 position

; ----------	Register SYCB bits		------------------------
.equ	SYTLB_MASK	= 0xF0		;      - Symbol timing limit for path B (4 bits)
.equ	SYTLB0		= 4		;          SYTLB BIT0 position
.equ	SYCSB_MASK	= 0x0F		;      - Symbol Check check size for data path B (4 bits)
.equ	SYCSB0		= 0		;          SYCSB BIT0 position



; ====	TIMER0_WDT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register T0CR bits		------------------------
.equ	T0PR		= 4		; 0x10 - Timer 0 Prescaler Reset
.equ	T0IE		= 3		; 0x08 - Timer 0 Interrupt Enable
.equ	T0PS_MASK	= 0x07		;      - Timer 0 Prescaler Select (3 bits)
.equ	T0PS0		= 0		;          T0PS BIT0 position

; ----------	Register T0IFR bits		------------------------
.equ	T0F		= 0		; 0x01 - Timer0 Flag

; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watchdog System Reset Enable
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
.equ	T3CPRM		= 3		; 0x08 - Timer3 CaPture reset Mask
.equ	T3CRM		= 2		; 0x04 - Timer3 Compare Reset Mask
.equ	T3CTM		= 1		; 0x02 - Timer3 Compare Toggle Mask
.equ	T3OTM		= 0		; 0x01 - Timer3 Overflow Toggle Mask

; ----------	Register T3IFR bits		------------------------
.equ	T3ICF		= 2		; 0x04 - Timer3 Input Capture Flag
.equ	T3COF		= 1		; 0x02 - Timer3 Compare Flag
.equ	T3OFF		= 0		; 0x01 - Timer3 OverFlow Flag

; ----------	Register T3IMR bits		------------------------
.equ	T3CPIM		= 2		; 0x04 - Timer3 Capture Interrupt Mask
.equ	T3CIM		= 1		; 0x02 - Timer3 Compare Interrupt Mask
.equ	T3OIM		= 0		; 0x01 - Timer3 Overflow Interrupt Mask

; ----------	Register T3MRA bits		------------------------
.equ	T3PS_MASK	= 0x1C		;      - Timer3 Prescaler Select (3 bits)
.equ	T3PS0		= 2		;          T3PS BIT0 position
.equ	T3CS_MASK	= 0x03		;      - Timer 3 Clock Select (2 bits)
.equ	T3CS0		= 0		;          T3CS BIT0 position
; ::::  T3CS	:::: bitfield values
;			0x00		; clk_frc
;			0x01		; clk_T
;			0x02		; clk_xto4
;			0x03		; clk_xto2

; ----------	Register T3MRB bits		------------------------
.equ	T3ICS_MASK	= 0xE0		;      - Timer3 Input Capture Select (3 bits)
.equ	T3ICS0		= 5		;          T3ICS BIT0 position
.equ	T3CE_MASK	= 0x18		;      - Timer3 Capture Edge select (2 bits)
.equ	T3CE0		= 3		;          T3CE BIT0 position
.equ	T3CNC		= 2		; 0x04 - Timer3 input Capture Noise Canceller
.equ	T3SCE		= 1		; 0x02 - Timer3 Software Capture Enable
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
.equ	T4CPRM		= 3		; 0x08 - Timer4 CaPture reset Mask
.equ	T4CRM		= 2		; 0x04 - Timer4 Compare Reset Mask
.equ	T4CTM		= 1		; 0x02 - Timer4 Compare Toggle Mask
.equ	T4OTM		= 0		; 0x01 - Timer4 Overflow Toggle Mask

; ----------	Register T4IFR bits		------------------------
.equ	T4ICF		= 2		; 0x04 - Timer4 Input Capture Flag
.equ	T4COF		= 1		; 0x02 - Timer4 Compare Flag
.equ	T4OFF		= 0		; 0x01 - Timer4 OverFlow Flag

; ----------	Register T4IMR bits		------------------------
.equ	T4CPIM		= 2		; 0x04 - Timer4 Capture Interrupt Mask
.equ	T4CIM		= 1		; 0x02 - Timer4 Compare Interrupt Mask
.equ	T4OIM		= 0		; 0x01 - Timer4 Overflow Interrupt Mask

; ----------	Register T4MRA bits		------------------------
.equ	T4PS_MASK	= 0x1C		;      - Timer 4 Prescaler Select (3 bits)
.equ	T4PS0		= 2		;          T4PS BIT0 position
.equ	T4CS_MASK	= 0x03		;      - Timer 4 Clock Select (2 bits)
.equ	T4CS0		= 0		;          T4CS BIT0 position
; ::::  T4CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_T
;			0x02		; clk_xto6
;			0x03		; clk_frc

; ----------	Register T4MRB bits		------------------------
.equ	T4ICS_MASK	= 0xE0		;      - Timer4 Input Capture Select (3 bits)
.equ	T4ICS0		= 5		;          T4ICS BIT0 position
.equ	T4CE_MASK	= 0x18		;      - Timer4 Capture Edge select (2 bits)
.equ	T4CE0		= 3		;          T4CE BIT0 position
.equ	T4CNC		= 2		; 0x04 - Timer4 input Capture Noise Canceller
.equ	T4SCE		= 1		; 0x02 - Timer4 Software Capture Enable



; ====	TIMER5 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSR10		= 0		; 0x01 - PreScaler Reset

; ----------	Register T5CCR bits		------------------------
.equ	T5CTC		= 3		; 0x08 - Clear Timer5 on Compare Match
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
.equ	T5COF		= 1		; 0x02 - Timer5 Output Compare Output Match Flag
.equ	T5OFF		= 0		; 0x01 - Timer5 Output Overflow Flag

; ----------	Register T5IMR bits		------------------------
.equ	T5CIM		= 1		; 0x02 - Timer5 Output Compare Interrupt Mask
.equ	T5OIM		= 0		; 0x01 - Timer5 Output Overflow Interrupt Mask




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
.equ	INT_VECTORS_NUM		= 42
.equ	INT_VECTORS_SIZE	= 0x54
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
;	24	SSM		; Sequencer State Machine Interrupt
;	25	DFFLR		; Data FIFO fill level reached Interrupt
;	26	DFOUE		; Data FIFO overflow or underflow error Interrupt
;	27	SFFLR		; RSSI/Preamble FIFO fill level reached Interrupt
;	28	SFOUE		; RSSI/Preamble FIFO overflow or underflow error Interrupt
;	29	TMTCF		; Tx Modulator Telegram Finish Interrupt
;	30	UHF_WCOB	; UHF receiver wake up ok on Rx path B
;	31	UHF_WCOA	; UHF receiver wake up ok on Rx path A
;	32	UHF_SOTB	; UHF receiver start of telegram ok on Rx path B
;	33	UHF_SOTA	; UHF receiver start of telegram ok on Rx path A
;	34	UHF_EOTB	; UHF receiver end of telegram on Rx path B
;	35	UHF_EOTA	; UHF receiver end of telegram on Rx path A
;	36	UHF_NBITB	; UHF receiver new bit on Rx path B
;	37	UHF_NBITA	; UHF receiver new bit on Rx path A
;	38	EXCM		; External input Clock monitoring Interrupt
;	39	ERDY		; EEPROM Ready Interrupt
;	40	SPMR		; Store Program Memory Ready
;	41	IDFULL		; IDSCAN Full Interrupt


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	INT_RESET	; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT_INT0	; INT0		 - External Interrupt Request 0
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
;#		reti			; SSM		 - Sequencer State Machine Interrupt
;#		reti			; DFFLR		 - Data FIFO fill level reached Interrupt
;#		reti			; DFOUE		 - Data FIFO overflow or underflow error Interrupt
;#		reti			; SFFLR		 - RSSI/Preamble FIFO fill level reached Interrupt
;#		reti			; SFOUE		 - RSSI/Preamble FIFO overflow or underflow error Interrupt
;#		reti			; TMTCF		 - Tx Modulator Telegram Finish Interrupt
;#		reti			; UHF_WCOB	 - UHF receiver wake up ok on Rx path B
;#		reti			; UHF_WCOA	 - UHF receiver wake up ok on Rx path A
;#		reti			; UHF_SOTB	 - UHF receiver start of telegram ok on Rx path B
;#		reti			; UHF_SOTA	 - UHF receiver start of telegram ok on Rx path A
;#		reti			; UHF_EOTB	 - UHF receiver end of telegram on Rx path B
;#		reti			; UHF_EOTA	 - UHF receiver end of telegram on Rx path A
;#		reti			; UHF_NBITB	 - UHF receiver new bit on Rx path B
;#		reti			; UHF_NBITA	 - UHF receiver new bit on Rx path A
;#		reti			; EXCM		 - External input Clock monitoring Interrupt
;#		reti			; ERDY		 - EEPROM Ready Interrupt
;#		reti			; SPMR		 - Store Program Memory Ready
;#		reti			; IDFULL	 - IDSCAN Full Interrupt
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	INT_RESET:
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA8215_INC_ */

; ************************ END OF FILE *********************************

