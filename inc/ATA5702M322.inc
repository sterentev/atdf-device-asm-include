;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATA5702M322
;* Title             : Register/Mask/Bit Definitions for the ATA5702M322
;* File Name         : ATA5702M322.inc
;* Source Date       : 2022-03-03 10:51:00 UTC
;* Make Date         : 2026-06-01 14:53:03 UTC
;
;***********************************************************************

#ifndef _ATA5702M322_INC_
#define _ATA5702M322_INC_

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
.device	ATA5702M322
.equ	JTAGID		= 0x9569
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x95
.equ	SIGNATURE2	= 0x69


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
.equ	ADDR_FLASH_END			= 0xFFFF
.equ	ADDR_FLASH_SIZE			= 0x8000

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
.equ	ADDR_EEPROM_END			= 0x087F
.equ	ADDR_EEPROM_SIZE		= 0x0880




; **********************************************************************
; ***************	FUSES REGISTERS		************************
; **********************************************************************
;
.equ	LOW		= 0x00


; ====	FUSE MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register LOW bits		------------------------
.equ	CKSTART		= 7		; 0x80 - MRC is selected during reset startup phase
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM memory through the Chip Erase cycle
.equ	BOOTRST		= 2		; 0x04 - Select boot reset vector
.equ	EEACC		= 1		; 0x02 - EEPROM Access Control
.equ	PCEE1		= 0		; 0x01 - Protect Customer EEPROM section




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
.equ	SRCCALL		= 0x01FF	; [MEMORY MAPPED] Slow RC oscillator calibration LSB
.equ	PMTER		= 0x01FE	; [MEMORY MAPPED] Power Management Test Enable Register
.equ	TPCALR13	= 0x01FB	; [MEMORY MAPPED] Transponder Calibration Register 13
.equ	TPCALR12	= 0x01FA	; [MEMORY MAPPED] Transponder Calibration Register 12
.equ	TPCALR11	= 0x01F9	; [MEMORY MAPPED] Transponder Calibration Register 11
.equ	SUPCA10		= 0x01F8	; [MEMORY MAPPED] Supply calibration register 10
.equ	SUPCA9		= 0x01F7	; [MEMORY MAPPED] Supply calibration register 9
.equ	SUPCA8		= 0x01F6	; [MEMORY MAPPED] Supply calibration register 8
.equ	SUPCA7		= 0x01F5	; [MEMORY MAPPED] Supply calibration register 7
.equ	SUPCA6		= 0x01F4	; [MEMORY MAPPED] Supply calibration register 6
.equ	SUPCA5		= 0x01F3	; [MEMORY MAPPED] Supply calibration register 5
.equ	SRCTCAL		= 0x01F2	; [MEMORY MAPPED] SRC oscillator Temperature Compensation register
.equ	SRCCAL		= 0x01F1	; [MEMORY MAPPED] Slow RC oscillator calibration
.equ	TMOCR		= 0x01F0	; [MEMORY MAPPED] Timer Modulator Output Control Register
.equ	PDSCR		= 0x01EF	; [MEMORY MAPPED] Pad Driver Strength Control Register
.equ	TW1AMR		= 0x01EE	; [MEMORY MAPPED] TWI1 Address Mask Register
.equ	TW1AR		= 0x01ED	; [MEMORY MAPPED] TWI1 (Slave) Address Register
.equ	TW1DR		= 0x01EC	; [MEMORY MAPPED] TWI1 Data Register
.equ	TW1SR		= 0x01EB	; [MEMORY MAPPED] TWI1 Status Register
.equ	TW1CR		= 0x01EA	; [MEMORY MAPPED] TWI1 Control Register
.equ	TW1BR		= 0x01E9	; [MEMORY MAPPED] TWI1 Bit Rate Register
.equ	CALRDYLF	= 0x01E8	; [MEMORY MAPPED] Calibration ready signature LFVCC
.equ	DBONDR		= 0x01E7	; [MEMORY MAPPED] Downbond Test Register
.equ	VMCR		= 0x01E6	; [MEMORY MAPPED] Voltage Monitor Control Register
.equ	CLPR		= 0x01E5	; [MEMORY MAPPED] Clock Prescaler Register
.equ	CMIMR		= 0x01E4	; [MEMORY MAPPED] Clock interrupt mask Register
.equ	CMCR		= 0x01E3	; [MEMORY MAPPED] Clock Management Control Register
.equ	T3IFR		= 0x01E1	; [MEMORY MAPPED] Timer3 interrupt flag Register
.equ	CRCDIR		= 0x01E0	; [MEMORY MAPPED] CRC Data Input Register
.equ	PHCSR		= 0x01DE	; [MEMORY MAPPED] PH CRC Checksum Register
.equ	PHCRP		= 0x01DC	; [MEMORY MAPPED] PH CRC Polynomial Register
.equ	PHCST		= 0x01DA	; [MEMORY MAPPED] PH CRC Start Value Register
.equ	PHCRCR		= 0x01D9	; [MEMORY MAPPED] Protocol Handler CRC Control Register
.equ	PHIMR		= 0x01D8	; [MEMORY MAPPED] Protocol Handler Interrupt Mask Register
.equ	LDFC		= 0x01D7	; [MEMORY MAPPED] LF Data FIFO Configuration Register
.equ	LDFIM		= 0x01D6	; [MEMORY MAPPED] LF Data FIFO Interrupt Mask Register
.equ	T5IFR		= 0x01D5	; [MEMORY MAPPED] Timer5 Interrupt Flag Register
.equ	LDFRP		= 0x01D4	; [MEMORY MAPPED] LF Data FIFO Read Pointer
.equ	LDFWP		= 0x01D3	; [MEMORY MAPPED] LF Data FIFO Write Pointer
.equ	T4IFR		= 0x01D2	; [MEMORY MAPPED] Timer4 interrupt flag Register
.equ	LDFS		= 0x01D1	; [MEMORY MAPPED] LF Data FIFO Status Register
.equ	RSDBGR		= 0x01C5	; [MEMORY MAPPED] RSSI Debug Register
.equ	SD360R		= 0x01C4	; [MEMORY MAPPED] Sign Detection 360 Degree Result Register
.equ	SD23RR		= 0x01C3	; [MEMORY MAPPED] Sign Detection Channel 2 vs 3 Result Register
.equ	SD13RR		= 0x01C2	; [MEMORY MAPPED] Sign Detection Channel 1 vs 3 Result Register
.equ	SD12RR		= 0x01C1	; [MEMORY MAPPED] Sign Detection Channel 1 vs 2 Result Register
.equ	RSSRCR		= 0x01C0	; [MEMORY MAPPED] RSSI SRC Calibration Register
.equ	RSRES4H		= 0x01BF	; [MEMORY MAPPED] RSSI Result 4 High Byte Register
.equ	RSRES4L		= 0x01BE	; [MEMORY MAPPED] RSSI Result 4 Low Byte Register
.equ	RSRES3H		= 0x01BD	; [MEMORY MAPPED] RSSI Result 3 High Byte Register
.equ	RSRES3L		= 0x01BC	; [MEMORY MAPPED] RSSI Result 3 Low Byte Register
.equ	RSRES2H		= 0x01BB	; [MEMORY MAPPED] RSSI Result 2 High Byte Register
.equ	RSRES2L		= 0x01BA	; [MEMORY MAPPED] RSSI Result 2 Low Byte Register
.equ	RSRES1H		= 0x01B9	; [MEMORY MAPPED] RSSI Result 1 High Byte Register
.equ	RSRES1L		= 0x01B8	; [MEMORY MAPPED] RSSI Result 1 Low Byte Register
.equ	RSDLYR		= 0x01B7	; [MEMORY MAPPED] RSSI Delay Register
.equ	RSCALIB		= 0x01B6	; [MEMORY MAPPED] RSSI Calibration Register
.equ	RSFR		= 0x01B4	; [MEMORY MAPPED] RSSI Flag Register
.equ	RSMS2R		= 0x01B3	; [MEMORY MAPPED] RSSI Measurement Setting 2 Register
.equ	RSMS1R		= 0x01B2	; [MEMORY MAPPED] RSSI Measurement Setting 1 Register
.equ	RSSR		= 0x01B1	; [MEMORY MAPPED] RSSI Status Register
.equ	RSCR		= 0x01B0	; [MEMORY MAPPED] RSSI Control Register
.equ	TW2AMR		= 0x01AF	; [MEMORY MAPPED] TWI2 Address Mask Register
.equ	TW2AR		= 0x01AE	; [MEMORY MAPPED] TWI2 (Slave) Address Register
.equ	TW2DR		= 0x01AD	; [MEMORY MAPPED] TWI2 Data Register
.equ	TW2SR		= 0x01AC	; [MEMORY MAPPED] TWI2 Status Register
.equ	TW2CR		= 0x01AB	; [MEMORY MAPPED] TWI2 Control Register
.equ	TW2BR		= 0x01AA	; [MEMORY MAPPED] TWI2 Bit Rate Register
.equ	LFQC1		= 0x01A9	; [MEMORY MAPPED] LF Receiver Channel 1 Quality Faktor Register
.equ	LFQC2		= 0x01A8	; [MEMORY MAPPED] LF Receiver Channel 2 Quality Faktor Register
.equ	LFQC3		= 0x01A7	; [MEMORY MAPPED] LF Receiver Channel 3 Quality Faktor Register
.equ	LTEMR		= 0x01A6	; [MEMORY MAPPED] LF Timer Event Mask Register
.equ	PHDFR		= 0x01A5	; [MEMORY MAPPED] Protocol Handler Data Frame end Register
.equ	PHTBLR		= 0x01A4	; [MEMORY MAPPED] Protocol Handler Telegram Bit Length Register
.equ	T1IFR		= 0x01A2	; [MEMORY MAPPED] Timer1 Interrupt Flag Register
.equ	LTCOR		= 0x01A1	; [MEMORY MAPPED] LF Timer Compare Register
.equ	LFSTOP		= 0x01A0	; [MEMORY MAPPED] LF Receiver Stop Bit Register
.equ	LFSYLE		= 0x019F	; [MEMORY MAPPED] LF Receiver Synchronization Length Register
.equ	LFSYSY		= 0x019B	; [MEMORY MAPPED] LF Receiver Synchronization Symbols Register
.equ	PHIDFR		= 0x019A	; [MEMORY MAPPED] Protocol Handler ID Frame Register
.equ	PHID1L		= 0x0199	; [MEMORY MAPPED] PH Identifier 1 Length Register
.equ	PHID1		= 0x0195	; [MEMORY MAPPED] PH ID1 Register
.equ	PHID0L		= 0x0194	; [MEMORY MAPPED] PH Identifier 0 Length Register
.equ	PHID0		= 0x0190	; [MEMORY MAPPED] PH ID0 Register
.equ	LFIMR		= 0x018F	; [MEMORY MAPPED] LF Receiver Interrupt Mask Register
.equ	LFCPR		= 0x018E	; [MEMORY MAPPED] LF Receiver Calibration Protect Register
.equ	PHBCRR		= 0x0188	; [MEMORY MAPPED] Protocol Handler Bit Counter Read Register
.equ	GPIOR8		= 0x0187	; [MEMORY MAPPED] General Purpose I/O Register 8
.equ	GPIOR7		= 0x0186	; [MEMORY MAPPED] General Purpose I/O Register 7
.equ	GPIOR6		= 0x0185	; [MEMORY MAPPED] General Purpose I/O Register 6
.equ	GPIOR5		= 0x0184	; [MEMORY MAPPED] General Purpose I/O Register 5
.equ	GPIOR4		= 0x0183	; [MEMORY MAPPED] General Purpose I/O Register 4
.equ	GPIOR3		= 0x0182	; [MEMORY MAPPED] General Purpose I/O Register 3
.equ	AESDR		= 0x0181	; [MEMORY MAPPED] AES Data Register
.equ	AESKR		= 0x0180	; [MEMORY MAPPED] AES Key Register
.equ	AESDPR		= 0x017F	; [MEMORY MAPPED] AES Data Pointer Register
.equ	TPCALR10	= 0x017E	; [MEMORY MAPPED] Transponder Calibration Register 10
.equ	TPCALR9		= 0x017D	; [MEMORY MAPPED] Transponder Calibration Register 9
.equ	TPCALR8		= 0x017C	; [MEMORY MAPPED] Transponder Calibration Register 8
.equ	TPCALR7		= 0x017B	; [MEMORY MAPPED] Transponder Calibration Register 7
.equ	TPCALR6		= 0x017A	; [MEMORY MAPPED] Transponder Calibration Register 6
.equ	TPCALR5		= 0x0179	; [MEMORY MAPPED] Transponder Calibration Register 5
.equ	TPCALR4		= 0x0178	; [MEMORY MAPPED] Transponder Calibration Register 4
.equ	TPCALR3		= 0x0177	; [MEMORY MAPPED] Transponder Calibration Register 3
.equ	TPCALR2		= 0x0176	; [MEMORY MAPPED] Transponder Calibration Register 2
.equ	TPCALR1		= 0x0175	; [MEMORY MAPPED] Transponder Calibration Register 1
.equ	TPCR5		= 0x0173	; [MEMORY MAPPED] Transponder Control Register 5
.equ	TPCR4		= 0x0172	; [MEMORY MAPPED] Transponder Control Register 4
.equ	TPCR3		= 0x0171	; [MEMORY MAPPED] Transponder Control Register 3
.equ	TPECMR		= 0x0170	; [MEMORY MAPPED] Transponder Encoder Mode Register
.equ	TPECR4		= 0x016F	; [MEMORY MAPPED] Transponder Encoder Comparator Register 4
.equ	TPECR3		= 0x016E	; [MEMORY MAPPED] Transponder Encoder Comparator Register 3
.equ	TPECR2		= 0x016D	; [MEMORY MAPPED] Transponder Encoder Comparator Register 2
.equ	TPECR1		= 0x016C	; [MEMORY MAPPED] Transponder Encoder Comparator Register 1
.equ	TPDCR5		= 0x016B	; [MEMORY MAPPED] Transponder Decoder Comparator Register 5
.equ	TPDCR4		= 0x016A	; [MEMORY MAPPED] Transponder Decoder Comparator Register 4
.equ	TPDCR3		= 0x0169	; [MEMORY MAPPED] Transponder Decoder Comparator Register 3
.equ	TPDCR2		= 0x0168	; [MEMORY MAPPED] Transponder Decoder Comparator Register 2
.equ	TPDCR1		= 0x0167	; [MEMORY MAPPED] Transponder Decoder Comparator Register 1
.equ	TPIMR		= 0x0166	; [MEMORY MAPPED] Transponder Interrupt Mask Register
.equ	TPCR1		= 0x0165	; [MEMORY MAPPED] Transponder Control Register 1
.equ	DBEND		= 0x0164	; [MEMORY MAPPED] DeBounce Enable Port D
.equ	T0CR		= 0x0162	; [MEMORY MAPPED] Timer0 Control Register
.equ	PCIFR		= 0x0161	; [MEMORY MAPPED] Pin change Interrupt flag Register
.equ	LFSRCTL		= 0x015C	; [MEMORY MAPPED] LF Receiver SRC Tuning LSB
.equ	EEST		= 0x015B	; [MEMORY MAPPED] EEPROM Status Register
.equ	PGMST		= 0x015A	; [MEMORY MAPPED] Program Memory Status Register
.equ	T2IFR		= 0x0159	; [MEMORY MAPPED] Timer2 Interrupt Flag Register
.equ	SFIR		= 0x0158	; [MEMORY MAPPED] SPI FIFO Interrupt Register
.equ	SFFR		= 0x0157	; [MEMORY MAPPED] SPI FIFO Fill Status Register
.equ	DBGSW		= 0x0156	; [MEMORY MAPPED] Debugging Support Switch
.equ	DBENC		= 0x0155	; [MEMORY MAPPED] DeBounce Enable Port C
.equ	DBENB		= 0x0154	; [MEMORY MAPPED] DeBounce Enable Port B
.equ	DBTC		= 0x0153	; [MEMORY MAPPED] Debounce Timer Compare Register
.equ	DBCR		= 0x0152	; [MEMORY MAPPED] DeBounce Control Register
.equ	LFSRCTM		= 0x0151	; [MEMORY MAPPED] LF Receiver SRC Tuning MSB
.equ	CRCDOR		= 0x0146	; [MEMORY MAPPED] CRC Data Output Register
.equ	CRCCR		= 0x0145	; [MEMORY MAPPED] CRC Control Register
.equ	EEPR3		= 0x013D	; [MEMORY MAPPED] EEPROM Protection Register 3
.equ	EEPR2		= 0x013C	; [MEMORY MAPPED] EEPROM Protection Register 2
.equ	EEPR1		= 0x013B	; [MEMORY MAPPED] EEPROM Protection Register 1
.equ	LFDSR11		= 0x013A	; [MEMORY MAPPED] Low Frequency Decoder Setting Register 11
.equ	LFDSR10		= 0x0139	; [MEMORY MAPPED] LF Decoder Setting 10 Register
.equ	LFDSR9		= 0x0138	; [MEMORY MAPPED] LF Decoder Setting 9 Register
.equ	LFDSR8		= 0x0137	; [MEMORY MAPPED] LF Decoder Setting 8 Register
.equ	LFDSR7		= 0x0136	; [MEMORY MAPPED] LF Decoder Setting 7 Register
.equ	LFDSR6		= 0x0135	; [MEMORY MAPPED] LF Decoder Setting 6 Register
.equ	LFDSR5		= 0x0134	; [MEMORY MAPPED] LF Decoder Setting 5 Register
.equ	LFDSR4		= 0x0133	; [MEMORY MAPPED] LF Receiver Decoder Setting Register 4
.equ	LFDSR3		= 0x0132	; [MEMORY MAPPED] LF Receiver Decoder Setting Register 3
.equ	LFDSR2		= 0x0131	; [MEMORY MAPPED] LF Receiver Decoder Setting Register 2
.equ	LFDSR1		= 0x0130	; [MEMORY MAPPED] LF Receiver Decoder Setting Register 1
.equ	TMCR1		= 0x012E	; [MEMORY MAPPED] Tx Modulator Control Register 1
.equ	TMCR2		= 0x012D	; [MEMORY MAPPED] Tx Modulator Control Register 2
.equ	TMSR		= 0x012C	; [MEMORY MAPPED] Tx Modulator Status Register
.equ	TMSSC		= 0x012B	; [MEMORY MAPPED] Tx Modulator Stop Sequence Configuration
.equ	TMTLL		= 0x0129	; [MEMORY MAPPED] Tx Modulator Telegram Length Register
.equ	TMSHR		= 0x0128	; [MEMORY MAPPED] Tx Modulator Shift Register
.equ	TMCP		= 0x0126	; [MEMORY MAPPED] Tx Modulator CRC Polynomial
.equ	TMCI		= 0x0124	; [MEMORY MAPPED] Tx Modulator CRC Init Value
.equ	TMCSB		= 0x0123	; [MEMORY MAPPED] Tx Modulator CRC Skip Bit Number
.equ	TMCRC		= 0x0121	; [MEMORY MAPPED] Tx Modulator CRC Result
.equ	TMFSM		= 0x0120	; [MEMORY MAPPED] Tx Modulator Finite State Machine
.equ	FETD		= 0x011F	; [MEMORY MAPPED] Front-End Test Data Register
.equ	FETE3		= 0x011E	; [MEMORY MAPPED] Front-End Test Enable Register 3
.equ	FETE2		= 0x011D	; [MEMORY MAPPED] Front-End Test Enable Register 2
.equ	FETE1		= 0x011C	; [MEMORY MAPPED] Front-End Test Enable Register 1
.equ	CLKOCR		= 0x0116	; [MEMORY MAPPED] Clock output control Register
.equ	CLKOD		= 0x0115	; [MEMORY MAPPED] Clock output divider settings Register
.equ	FEBIA		= 0x010E	; [MEMORY MAPPED] Reserved
.equ	FEANT		= 0x010D	; [MEMORY MAPPED] Front-End Antenna
.equ	FEALR		= 0x010C	; [MEMORY MAPPED] Front-End Antenna Level Detector Range
.equ	FEVCO		= 0x010B	; [MEMORY MAPPED] Front-End VCO and PLL control
.equ	FECR		= 0x010A	; [MEMORY MAPPED] Front-End Control Register
.equ	FETN4		= 0x0109	; [MEMORY MAPPED] Front-End RC Tuning 4bit Register
.equ	FEMS		= 0x0108	; [MEMORY MAPPED] Front-End Main and Swallow Control Register
.equ	FEBT		= 0x0107	; [MEMORY MAPPED] Front-End RC Tuning Register
.equ	FEVCT		= 0x0106	; [MEMORY MAPPED] Front-End VCO Tuning Register
.equ	FEPAC		= 0x0105	; [MEMORY MAPPED] Front-End Power Amplifier Control Register
.equ	FEAT		= 0x0104	; [MEMORY MAPPED] Front-End Antenna Tuning
.equ	FELNA		= 0x0103	; [MEMORY MAPPED] Reserved
.equ	FEEN2		= 0x0102	; [MEMORY MAPPED] Front-End Enable Register 2
.equ	FEEN1		= 0x0101	; [MEMORY MAPPED] Front-End Enable Register 1
.equ	FESR		= 0x0100	; [MEMORY MAPPED] Front-End Status Register
.equ	TRCDR		= 0xFF		; [MEMORY MAPPED] Trace Data Register
.equ	TRCID		= 0xFC		; [MEMORY MAPPED] Trace ID Register
.equ	SP2SR		= 0xF9		; [MEMORY MAPPED] SPI2 Status Register
.equ	SP2DR		= 0xF8		; [MEMORY MAPPED] SPI2 Data Register
.equ	SP2CR		= 0xF7		; [MEMORY MAPPED] SPI2 control Register
.equ	MSMCR4		= 0xEF		; [MEMORY MAPPED] Master State Machine Control Register 4
.equ	MSMCR3		= 0xEE		; [MEMORY MAPPED] Master State Machine Control Register 3
.equ	MSMCR2		= 0xED		; [MEMORY MAPPED] Master State Machine Control Register 2
.equ	MSMCR1		= 0xEC		; [MEMORY MAPPED] Master State Machine Control Register 1
.equ	VXMCTRL		= 0xEB		; [MEMORY MAPPED] VX Mode Control Register
.equ	SSMSTR		= 0xEA		; [MEMORY MAPPED] SSM State Register
.equ	MSMSTR		= 0xE9		; [MEMORY MAPPED] Master State Machine state register
.equ	SSMIMR		= 0xE8		; [MEMORY MAPPED] SSM interrupt mask register
.equ	SSMIFR		= 0xE7		; [MEMORY MAPPED] SSM Interrupt Flag Register
.equ	SSMSR		= 0xE6		; [MEMORY MAPPED] SSM Status Register
.equ	SSMRR		= 0xE5		; [MEMORY MAPPED] SSM Run Register
.equ	SSMFBR		= 0xE4		; [MEMORY MAPPED] SSM Filter Bandwidth Register
.equ	GTCCR		= 0xE3		; [MEMORY MAPPED] General Timer/Counter Control Register
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
.equ	DFS		= 0xD2		; [MEMORY MAPPED] Data FIFO Status Register
.equ	CALRDY		= 0xD1		; [MEMORY MAPPED] Calibration ready signature
.equ	SUPCA4		= 0xD0		; [MEMORY MAPPED] Supply calibration register 4
.equ	SUPCA3		= 0xCF		; [MEMORY MAPPED] Supply calibration register 3
.equ	SUPCA2		= 0xCE		; [MEMORY MAPPED] Supply calibration register 2
.equ	SUPCA1		= 0xCD		; [MEMORY MAPPED] Supply calibration register 1
.equ	SUPCR		= 0xCC		; [MEMORY MAPPED] Supply Control Register
.equ	SUPFR		= 0xCB		; [MEMORY MAPPED] Supply Interrupt Flag Register
.equ	CMOCR		= 0xCA		; [MEMORY MAPPED] Clock management override control register
.equ	CMSR		= 0xC9		; [MEMORY MAPPED] Clock management status Register
.equ	RCTCAL		= 0xC8		; [MEMORY MAPPED] RC oscillator Temperature Compensation register
.equ	FRCCAL		= 0xC7		; [MEMORY MAPPED] Fast RC oscillator calibration Register
.equ	MRCCAL		= 0xC6		; [MEMORY MAPPED] Middle RC oscillator calibration Register
.equ	XFUSE		= 0xC5		; [MEMORY MAPPED] 
.equ	LFCALR53	= 0xC4		; [MEMORY MAPPED] LF Receiver Calibration Register 53
.equ	LFCALR52	= 0xC3		; [MEMORY MAPPED] LF Receiver Calibration Register 52
.equ	LFCALR51	= 0xC2		; [MEMORY MAPPED] LF Receiver Calibration Register 51
.equ	LFCALR50	= 0xC1		; [MEMORY MAPPED] LF Receiver Calibration Register 50
.equ	LFCALR49	= 0xC0		; [MEMORY MAPPED] LF Receiver Calibration Register 49
.equ	LFCALR48	= 0xBF		; [MEMORY MAPPED] LF Receiver Calibration Register 48
.equ	LFCALR47	= 0xBE		; [MEMORY MAPPED] LF Receiver Calibration Register 47
.equ	LFCALR46	= 0xBD		; [MEMORY MAPPED] LF Receiver Calibration Register 46
.equ	LFCALR45	= 0xBC		; [MEMORY MAPPED] LF Receiver Calibration Register 45
.equ	LFCALR44	= 0xBB		; [MEMORY MAPPED] LF Receiver Calibration Register 44
.equ	LFCALR43	= 0xBA		; [MEMORY MAPPED] LF Receiver Calibration Register 43
.equ	LFCALR42	= 0xB9		; [MEMORY MAPPED] LF Receiver Calibration Register 42
.equ	LFCALR41	= 0xB8		; [MEMORY MAPPED] LF Receiver Calibration Register 41
.equ	LFCALR40	= 0xB7		; [MEMORY MAPPED] LF Receiver Calibration Register 40
.equ	LFCALR39	= 0xB6		; [MEMORY MAPPED] LF Receiver Calibration Register 39
.equ	LFCALR38	= 0xB5		; [MEMORY MAPPED] LF Receiver Calibration Register 38
.equ	LFCALR37	= 0xB4		; [MEMORY MAPPED] LF Receiver Calibration Register 37
.equ	LFCALR36	= 0xB3		; [MEMORY MAPPED] LF Receiver Calibration Register 36
.equ	LFCALR35	= 0xB2		; [MEMORY MAPPED] LF Receiver Calibration Register 35
.equ	LFCALR34	= 0xB1		; [MEMORY MAPPED] LF Receiver Calibration Register 34
.equ	LFCALR33	= 0xB0		; [MEMORY MAPPED] LF Receiver Calibration Register 33
.equ	LFCALR32	= 0xAF		; [MEMORY MAPPED] LF Receiver Calibration Register 32
.equ	LFCALR31	= 0xAE		; [MEMORY MAPPED] LF Receiver Calibration Register 31
.equ	LFCALR30	= 0xAD		; [MEMORY MAPPED] LF Receiver Calibration Register 30
.equ	LFCALR29	= 0xAC		; [MEMORY MAPPED] LF Receiver Calibration Register 29
.equ	LFCALR28	= 0xAB		; [MEMORY MAPPED] LF Receiver Calibration Register 28
.equ	LFCALR27	= 0xAA		; [MEMORY MAPPED] LF Receiver Calibration Register 27
.equ	LFCALR26	= 0xA9		; [MEMORY MAPPED] LF Receiver Calibration Register 26
.equ	LFCALR25	= 0xA8		; [MEMORY MAPPED] LF Receiver Calibration Register 25
.equ	LFCALR24	= 0xA7		; [MEMORY MAPPED] LF Receiver Calibration Register 24
.equ	LFCALR23	= 0xA6		; [MEMORY MAPPED] LF Receiver Calibration Register 23
.equ	LFCALR22	= 0xA5		; [MEMORY MAPPED] LF Receiver Calibration Register 22
.equ	LFCALR21	= 0xA4		; [MEMORY MAPPED] LF Receiver Calibration Register 21
.equ	LFCALR20	= 0xA3		; [MEMORY MAPPED] LF Receiver Calibration Register 20
.equ	LFCALR19	= 0xA2		; [MEMORY MAPPED] LF Receiver Calibration Register 19
.equ	LFCALR18	= 0xA1		; [MEMORY MAPPED] LF Receiver Calibration Register 18
.equ	LFCALR17	= 0xA0		; [MEMORY MAPPED] LF Receiver Calibration Register 17
.equ	LFCALR16	= 0x9F		; [MEMORY MAPPED] LF Receiver Calibration Register 16
.equ	LFCALR15	= 0x9E		; [MEMORY MAPPED] LF Receiver Calibration Register 15
.equ	LFCALR14	= 0x9D		; [MEMORY MAPPED] LF Receiver Calibration Register 14
.equ	LFCALR13	= 0x9C		; [MEMORY MAPPED] LF Receiver Calibration Register 13
.equ	LFCALR12	= 0x9B		; [MEMORY MAPPED] LF Receiver Calibration Register 12
.equ	LFCALR11	= 0x9A		; [MEMORY MAPPED] LF Receiver Calibration Register 11
.equ	LFCALR10	= 0x99		; [MEMORY MAPPED] LF Receiver Calibration Register 10
.equ	LFCALR9		= 0x98		; [MEMORY MAPPED] LF Receiver Calibration Register 9
.equ	LFCALR8		= 0x97		; [MEMORY MAPPED] LF Receiver Calibration Register 8
.equ	LFCALR7		= 0x96		; [MEMORY MAPPED] LF Receiver Calibration Register 7
.equ	LFCALR6		= 0x95		; [MEMORY MAPPED] LF Receiver Calibration Register 6
.equ	LFCALR5		= 0x94		; [MEMORY MAPPED] LF Receiver Calibration Register 5
.equ	LFCALR4		= 0x93		; [MEMORY MAPPED] LF Receiver Calibration Register 4
.equ	LFCALR3		= 0x92		; [MEMORY MAPPED] LF Receiver Calibration Register 3
.equ	LFCALR2		= 0x91		; [MEMORY MAPPED] LF Receiver Calibration Register 2
.equ	LFCALR1		= 0x90		; [MEMORY MAPPED] LF Receiver Calibration Register 1
.equ	T5IMR		= 0x8F		; [MEMORY MAPPED] Timer5 Interrupt Mask Register
.equ	T5CNT		= 0x8D		; [MEMORY MAPPED] Timer5 Counter
.equ	T5CCR		= 0x8C		; [MEMORY MAPPED] Timer5 Control Register
.equ	T5OCR		= 0x8A		; [MEMORY MAPPED] Timer5 Output Compare Register
.equ	T5TEMP		= 0x89		; [MEMORY MAPPED] Timer5 Temp Register
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
.equ	BBTE2		= 0x6A		; [MEMORY MAPPED] Base Band Test Enable 2
.equ	FFREQ2H		= 0x69		; [MEMORY MAPPED] Fractional Frequency 2 Setting, High Byte
.equ	FFREQ2M		= 0x68		; [MEMORY MAPPED] Fractional Frequency 2 Setting, Middle Byte
.equ	FFREQ2L		= 0x67		; [MEMORY MAPPED] Fractional Frequency 2 Setting, Low Byte
.equ	FFREQ1H		= 0x66		; [MEMORY MAPPED] Fractional Frequency 1 Setting, High Byte
.equ	FFREQ1M		= 0x65		; [MEMORY MAPPED] Fractional Frequency 1 Setting, Middle Byte
.equ	FFREQ1L		= 0x64		; [MEMORY MAPPED] Fractional Frequency 1 Setting, Low Byte
.equ	GACDIV		= 0x62		; [MEMORY MAPPED] Gauss Clock Divider
.equ	FSFCR		= 0x61		; [MEMORY MAPPED] Frequency Synthesizer Filter Control Register
.equ	FSEN		= 0x60		; [MEMORY MAPPED] Frequency Synthesizer Enable register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer
.equ	LFCR3		= 0x3B		; LF Receiver Control Register 3
.equ	LFCR2		= 0x3A		; LF Receiver Control Register 2
.equ	TPSR		= 0x39		; Transponder Status Register
.equ	SMCR		= 0x38		; Sleep mode control Register
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	T0IFR		= 0x32		; Timer0 Interrupt Flag Register
.equ	DWDR		= 0x31		; Debug Wire Data Register
.equ	LFCR1		= 0x30		; LF Receiver Control Register 1
.equ	LFCR0		= 0x2F		; LF Receiver Control Register 0
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI control Register
.equ	MCUSR		= 0x2B		; MCU Status Register
.equ	VMSCR		= 0x2A		; Voltage Monitor Status and Control Register
.equ	LDFCKSW		= 0x29		; LF Data FIFO Clock Switch Register
.equ	EIFR		= 0x28		; External Interrupt Flag Register
.equ	EIMSK		= 0x27		; External Interrupt Mask Register
.equ	PCICR		= 0x26		; Pin change Interrupt control Register
.equ	GPIOR2		= 0x25		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x24		; General Purpose I/O Register 1
.equ	EEPR		= 0x23		; EEPROM Protection Register
.equ	EEAR		= 0x21		; EEPROM Address Register
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	AESSR		= 0x1E		; AES Status Register
.equ	AESCR		= 0x1D		; AES Control Register
.equ	LFFR		= 0x1C		; LF Receiver Flag Register
.equ	PHFR		= 0x1B		; Protocol Handler Flag Register
.equ	PRR0		= 0x1A		; Power reduction Register 0
.equ	LDFD		= 0x19		; LF Data FIFO Data Register
.equ	LDFFL		= 0x18		; LF Data FIFO Fill Level Register
.equ	PHTCR		= 0x17		; PH Telegram Configuration Register
.equ	EECR2		= 0x16		; EEPROM Control Register 2
.equ	LTCMR		= 0x15		; LF Timer Control Mode Register
.equ	T4CR		= 0x14		; Timer4 control Register
.equ	T3CR		= 0x13		; Timer3 control Register
.equ	T2CR		= 0x12		; Timer2 Control Register
.equ	T1CR		= 0x11		; Timer1 control Register
.equ	FSCR		= 0x0F		; Frequency Synthesizer Control Register
.equ	MCUCR		= 0x0E		; MCU control Register
.equ	TPFR		= 0x0D		; Transponder Flag Register
.equ	TPCR2		= 0x0C		; Transponder Control 2 Register
.equ	PORTD		= 0x0B		; Port D Data Register
.equ	DDRD		= 0x0A		; Port D Data Direction Register
.equ	PIND		= 0x09		; Port D Input Pins
.equ	PORTC		= 0x08		; Port C Data Register
.equ	DDRC		= 0x07		; Port C Data Direction Register
.equ	PINC		= 0x06		; Port C Input Pins
.equ	PORTB		= 0x05		; Port B Data Register
.equ	DDRB		= 0x04		; Port B Data Direction Register
.equ	PINB		= 0x03		; Port B Input Pins
.equ	PRR2		= 0x02		; Power reduction register 2
.equ	PRR1		= 0x01		; Power reduction Register 1
.equ	GPIOR0		= 0x00		; General Purpose I/O Register 0


; ====	AES MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register AESCR bits		------------------------
.equ	AESE		= 7		; 0x80 - AES Enable
.equ	AESLKM		= 6		; 0x40 - AES Load Key Memory
.equ	AESRES		= 5		; 0x20 - AES Reset
.equ	AESXOR		= 4		; 0x10 - AES State XOR load
.equ	AESD		= 3		; 0x08 - AES Direction
.equ	AESIM		= 2		; 0x04 - AES Interrupt Mask
.equ	AESWD		= 1		; 0x02 - AES Write Data
.equ	AESWK		= 0		; 0x01 - AES Write Key

; ----------	Register AESSR bits		------------------------
.equ	AESERF		= 7		; 0x80 - AES Error Flag
.equ	AESRF		= 0		; 0x01 - AES Ready Flag



; ====	CLK MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CLKOCR bits		------------------------
.equ	CLKOEN		= 2		; 0x04 - Clock output driver enable
.equ	CLKOS_MASK	= 0x03		;      - Clock output source (2 bits)
.equ	CLKOS0		= 0		;          CLKOS BIT0 position
; ::::  CLKOS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_frc
;			0x02		; clk_mrc
;			0x03		; clk_xto

; ----------	Register CMOCR bits		------------------------
.equ	FRCACT		= 2		; 0x04 - FRC Active
.equ	MRCAO		= 1		; 0x02 - MRC Always On
.equ	FRCAO		= 0		; 0x01 - FRC Always On

; ----------	Register CMSR bits		------------------------
.equ	ECF		= 0		; 0x01 - External clock fail

; ----------	Register PRR0 bits		------------------------
.equ	PRTWI1		= 7		; 0x80 - Power Reduction Two Wire Interface 1
.equ	PRCU		= 6		; 0x40 - Power Reduction Crypto Unit
.equ	PRCO		= 5		; 0x20 - Power Reduction Clock Output
.equ	PRVM		= 4		; 0x10 - Power Reduction Voltage Monitor
.equ	PRCRC		= 3		; 0x08 - Power Reduction CRC
.equ	PRTXDC		= 2		; 0x04 - Power Reduction Transmit DSP Control
.equ	PRLFRS		= 1		; 0x02 - Power Reduction LF RSSI
.equ	PRSPI		= 0		; 0x01 - Power Reduction Serial Peripheral Interface

; ----------	Register PRR1 bits		------------------------
.equ	PRLFPH		= 7		; 0x80 - Power Reduction LF Protocol Handler
.equ	PRLFTP		= 6		; 0x40 - Power Reduction LF Transponder
.equ	PRLFR		= 5		; 0x20 - Power Reduction LF Receiver
.equ	PRT5		= 4		; 0x10 - Power Reduction Timer 5
.equ	PRT4		= 3		; 0x08 - Power Reduction Timer 4
.equ	PRT3		= 2		; 0x04 - Power Reduction Timer 3
.equ	PRT2		= 1		; 0x02 - Power Reduction Timer 2
.equ	PRT1		= 0		; 0x01 - Power Reduction Timer 1

; ----------	Register PRR2 bits		------------------------
.equ	PRSSM		= 7		; 0x80 - Power Reduction Sequencer State Machine
.equ	PRTM		= 6		; 0x40 - Power Reduction Tx Modulator
.equ	VXTSDI		= 4		; 0x10 - VX Tri-State Disable
.equ	PRDF		= 3		; 0x08 - Power Reduction Data FIFO
.equ	PRSF		= 2		; 0x04 - Power Reduction Support FIFO
.equ	PRTWI2		= 1		; 0x02 - Power Reduction TWI2
.equ	PRSPI2		= 0		; 0x01 - Power Reduction SPI2



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
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
.equ	CMCCE		= 7		; 0x80 - Clock management control change enable
.equ	CMONEN		= 6		; 0x40 - Clock monitor enable
.equ	CCS		= 3		; 0x08 - Core Clock Select
.equ	CMM_MASK	= 0x07		;      - Clock Management Mode (3 bits)
.equ	CMM0		= 0		;          CMM BIT0 position

; ----------	Register CMIMR bits		------------------------
.equ	ECIE		= 0		; 0x01 - External clock interrupt enable

; ----------	Register MCUCR bits		------------------------
.equ	IVSEL		= 7		; 0x80 - Interrupt Vector Select
.equ	TRCEN		= 6		; 0x40 - Trace Enable
.equ	TRCCE		= 5		; 0x20 - Trace Change Enable
.equ	PUD		= 4		; 0x10 - Pull-up Resistors Disable
.equ	ENPS		= 3		; 0x08 - Enable Port Settings
.equ	SPIIO		= 2		; 0x04 - SPI Interrupt Only
.equ	IVL_MASK	= 0x03		;      - Interrupt Vector Location (2 bits)
.equ	IVL0		= 0		;          IVL BIT0 position
; ::::  IVL	:::: bitfield values
;			0x00		; 0x3600
;			0x01		; 0x4000
;			0x02		; 0x7000
;			0x03		; 0x8000

; ----------	Register MCUSR bits		------------------------
.equ	TPRF		= 5		; 0x20 - Transponder Reset Flag
.equ	DWRF		= 4		; 0x10 - DebugWire Reset Flag
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-On Reset Flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; Power save
;			0x04		; Extended power save
;			0x06		; Power down
;			0x08		; Extended power down
;			0x0A		; Power off

; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read-While-Write Section Busy
.equ	FLSEL_MASK	= 0x38		;      - Fuse Lockbit select (3 bits)
.equ	FLSEL0		= 3		;          FLSEL BIT0 position
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SELFPRGEN	= 0		; 0x01 - Self Programming Enable
; ::::  FLSEL	:::: bitfield values
;			0x00		; ROM/FLASH
;			0x08		; Lockbits
;			0x18		; Security Fuses
;			0x28		; EEPROM Protection Fuse Low
;			0x38		; EEPROM Protection Fuse High

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
.equ	ATEST		= 7		; 0x80 - Analog Test Pins Enable
.equ	CPBF		= 6		; 0x40 - CPU Busy Flag
.equ	CPBFOS_MASK	= 0x30		;      - CPU Busy Flag Output Select (2 bits)
.equ	CPBFOS0		= 4		;          CPBFOS BIT0 position
.equ	DBGGS_MASK	= 0x0F		;      - Debugging Support Group Select (4 bits)
.equ	DBGGS0		= 0		;          DBGGS BIT0 position
; ::::  CPBFOS	:::: bitfield values
;			0x00		; disabled
;			0x10		; PB0
;			0x20		; PB3
;			0x30		; PC1

; ----------	Register DBONDR bits		------------------------
.equ	BTEST6		= 6		; 0x40 - Bond Test 6
.equ	BTEST5		= 5		; 0x20 - Bond Test 5
.equ	BTEST4		= 4		; 0x10 - Bond Test 4
.equ	AGND_LF		= 3		; 0x08 - Bond AGND LF
.equ	ISO_GND		= 2		; 0x04 - Bond ISO SUBS3 GND
.equ	AGND_BB		= 1		; 0x02 - Bond AGND BB
.equ	BBESD		= 0		; 0x01 - Bond BBESD



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

; ----------	Register DFS bits		------------------------
.equ	DFOFL		= 2		; 0x04 - Data FIFO Overflow Flag
.equ	DFUFL		= 1		; 0x02 - Data FIFO Underflow Flag
.equ	DFFLRF		= 0		; 0x01 - Data FIFO Fill-Level Reached Status Flag



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
.equ	E2CF		= 7		; 0x80 - EEPROM Error Correction Code Flag
.equ	E2FF		= 6		; 0x40 - EEPROM error Fault Flag bit
.equ	E2AVF		= 5		; 0x20 - EEPROM Access Violation Flag
.equ	E2CIM		= 1		; 0x02 - EEPROM Error Code Correction Interrupt Mask
.equ	EEBRE		= 0		; 0x01 - EEPROM Burst Read Enable

; ----------	Register EEPR bits		------------------------
.equ	EEAP_MASK	= 0x0F		;      - EEPROM Access Protection (4 bits)
.equ	EEAP0		= 0		;          EEAP BIT0 position

; ----------	Register EEPR1 bits		------------------------
.equ	EEPS7RD		= 7		; 0x80 - EEPROM Protection Section 7 Read Disable
.equ	EEPS7WD		= 6		; 0x40 - EEPROM Protection Section 7 Write Disable
.equ	EEPS6RD		= 5		; 0x20 - EEPROM Protection Section 6 Read Disable
.equ	EEPS6WD		= 4		; 0x10 - EEPROM Protection Section 6 Write Disable
.equ	EEPS5RD		= 3		; 0x08 - EEPROM Protection Section 5 Read Disable
.equ	EEPS5WD		= 2		; 0x04 - EEPROM Protection Section 5 Write Disable
.equ	EEPS4RD		= 1		; 0x02 - EEPROM Protection Section 4 Read Disable
.equ	EEPS4WD		= 0		; 0x01 - EEPROM Protection Section 4 Write Disable

; ----------	Register EEPR2 bits		------------------------
.equ	EEPS11RD	= 7		; 0x80 - EEPROM Protection Section 11 Read Disable
.equ	EEPS11WD	= 6		; 0x40 - EEPROM Protection Section 11 Write Disable
.equ	EEPS10RD	= 5		; 0x20 - EEPROM Protection Section 10 Read Disable
.equ	EEPS10WD	= 4		; 0x10 - EEPROM Protection Section 10 Write Disableble
.equ	EEPS9RD		= 3		; 0x08 - EEPROM Protection Section 9 Read Disable
.equ	EEPS9WD		= 2		; 0x04 - EEPROM Protection Section 9 Write Disable
.equ	EEPS8RD		= 1		; 0x02 - EEPROM Protection Section 8 Read Disable
.equ	EEPS8WD		= 0		; 0x01 - EEPROM Protection Section 8 Write Disable

; ----------	Register EEPR3 bits		------------------------
.equ	EEPS12RD	= 1		; 0x02 - EEPROM Protection Section 12 Read Disable
.equ	EEPS12WD	= 0		; 0x01 - EEPROM Protection Section 12 Write Disable



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

; ----------	Register FEAT bits		------------------------
.equ	FEAT_ANTN_MASK	= 0x0F		;      - Antenna Tuning (4 bits)
.equ	FEAT_ANTN0	= 0		;          FEAT_ANTN BIT0 position

; ----------	Register FEBT bits		------------------------
.equ	RTN2_MASK	= 0x0C		;      - Resistor Tuning (2 bits)
.equ	RTN20		= 2		;          RTN2 BIT0 position
.equ	CTN2_MASK	= 0x03		;      - Capacitor Tuning (2 bits)
.equ	CTN20		= 0		;          CTN2 BIT0 position

; ----------	Register FECR bits		------------------------
.equ	ANPS		= 5		; 0x20 - ASK Not DPSK Switch
.equ	PLCKG		= 4		; 0x10 - PLL Lock Detect Gate
.equ	S4N3		= 1		; 0x02 - Select 433 Not 315MHz Band
.equ	LBNHB		= 0		; 0x01 - Select Low-Band Not High-Band

; ----------	Register FEEN1 bits		------------------------
.equ	ATEN		= 7		; 0x80 - Antenna Tuning Enable
.equ	PLSP1		= 6		; 0x40 - PLL Speedup 1
.equ	XTOEN		= 2		; 0x04 - Cristal Oscillator enable
.equ	PLCAL		= 1		; 0x02 - PLL calibration mode
.equ	PLEN		= 0		; 0x01 - PLL enable

; ----------	Register FEEN2 bits		------------------------
.equ	CPBIA		= 6		; 0x40 - Cap Array Bias
.equ	PLPEN		= 4		; 0x10 - PLL Post En IQ divider
.equ	PAEN		= 2		; 0x04 - Power Amplifier enable

; ----------	Register FEMS bits		------------------------
.equ	PLLM_MASK	= 0xF0		;      - PLL Mode (4 bits)
.equ	PLLM0		= 4		;          PLLM BIT0 position
.equ	PLLS_MASK	= 0x0F		;      - PLL Swallow (4 bits)
.equ	PLLS0		= 0		;          PLLS BIT0 position

; ----------	Register FEPAC bits		------------------------
.equ	PACR_MASK	= 0xFF		;      - Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand (8 bits)
.equ	PACR0		= 0		;          PACR BIT0 position
; ::::  PACR	:::: bitfield values
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
.equ	ANTS		= 4		; 0x10 - Antenna saturated
.equ	PLCK		= 3		; 0x08 - PLL locked
.equ	XRDY		= 2		; 0x04 - XTO ready

; ----------	Register FETE1 bits		------------------------
.equ	FETE1_ANTN	= 7		; 0x80 - 
.equ	VCOT		= 6		; 0x40 - 
.equ	AMPT		= 5		; 0x20 - 
.equ	PATE		= 4		; 0x10 - 
.equ	LNHT		= 3		; 0x08 - 
.equ	LNLT		= 2		; 0x04 - 
.equ	XTOT		= 1		; 0x02 - 
.equ	ADCT		= 0		; 0x01 - 

; ----------	Register FETE2 bits		------------------------
.equ	SWALT		= 7		; 0x80 - 
.equ	PRET		= 6		; 0x40 - 
.equ	DADCT		= 5		; 0x20 - 
.equ	PFDT		= 4		; 0x10 - 
.equ	CPT		= 3		; 0x08 - 
.equ	LFT		= 2		; 0x04 - 
.equ	PPFT		= 1		; 0x02 - 
.equ	RCCT		= 0		; 0x01 - 

; ----------	Register FETE3 bits		------------------------
.equ	RMPTST		= 1		; 0x02 - 
.equ	BIOUT		= 0		; 0x01 - 

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
.equ	PCINT7		= 7		; 0x80 - Pin Change Enable Mask bit 7
.equ	PCINT6		= 6		; 0x40 - Pin Change Enable Mask bit 6
.equ	PCINT5		= 5		; 0x20 - Pin Change Enable Mask bit 5
.equ	PCINT4		= 4		; 0x10 - Pin Change Enable Mask bit 4
.equ	PCINT3		= 3		; 0x08 - Pin Change Enable Mask bit 3
.equ	PCINT2		= 2		; 0x04 - Pin Change Enable Mask bit 2
.equ	PCINT1		= 1		; 0x02 - Pin Change Enable Mask bit 1
.equ	PCINT0		= 0		; 0x01 - Pin Change Enable Mask bit 0

; ----------	Register PCMSK1 bits		------------------------
.equ	PCINT15		= 7		; 0x80 - Pin Change Enable Mask bit 15
.equ	PCINT14		= 6		; 0x40 - Pin Change Enable Mask bit 14
.equ	PCINT13		= 5		; 0x20 - Pin Change Enable Mask bit 13
.equ	PCINT12		= 4		; 0x10 - Pin Change Enable Mask bit 12
.equ	PCINT11		= 3		; 0x08 - Pin Change Enable Mask bit 11
.equ	PCINT10		= 2		; 0x04 - Pin Change Enable Mask bit 10
.equ	PCINT9		= 1		; 0x02 - Pin Change Enable Mask bit 9
.equ	PCINT8		= 0		; 0x01 - Pin Change Enable Mask bit 8



; ====	LED MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PDSCR bits		------------------------
.equ	ATBSEL		= 7		; 0x80 - Analog Testbus Select
.equ	RSSISEL		= 6		; 0x40 - Testmode Enable for RSSI Measurement
.equ	STBTEST		= 5		; 0x20 - Standby Test Enable
.equ	PDSC_MASK	= 0x1F		;      - Pad Driver Strength Control (5 bits)
.equ	PDSC0		= 0		;          PDSC BIT0 position



; ====	LF_FIFO MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LDFC bits		------------------------
.equ	LDFMSB		= 6		; 0x40 - LF Data FIFO MSB alignment bit
.equ	LDFFLC_MASK	= 0x3F		;      - LF Data FIFO Fill-Level Configuration (6 bits)
.equ	LDFFLC0		= 0		;          LDFFLC BIT0 position

; ----------	Register LDFCKSW bits		------------------------
.equ	LDFSCKS		= 1		; 0x02 - LF Data FIFO Synchronous Clock Status
.equ	LDFSCSW		= 0		; 0x01 - LF Data FIFO Synchronous Clock Switch

; ----------	Register LDFFL bits		------------------------
.equ	LDFCLR		= 7		; 0x80 - LF Data FIFO Clear
.equ	LDFFL_MASK	= 0x3F		;      - LF Data Fifo Fill Level (6 bits)
.equ	LDFFL0		= 0		;          LDFFL BIT0 position

; ----------	Register LDFIM bits		------------------------
.equ	LDFEIM		= 1		; 0x02 - LF Data FIFO Error Interrupt Mask
.equ	LDFFLIM		= 0		; 0x01 - LF Data FIFO Fill-level Interrupt Mask

; ----------	Register LDFRP bits		------------------------
.equ	LDFRP_MASK	= 0x3F		;      - LF Data FIFO Read Pointer (6 bits)
.equ	LDFRP0		= 0		;          LDFRP BIT0 position

; ----------	Register LDFS bits		------------------------
.equ	LDFOF		= 2		; 0x04 - LF Data FIFO OverFlow flag
.equ	LDFUF		= 1		; 0x02 - LF Data FIFO UnderFlow flag
.equ	LDFFLR		= 0		; 0x01 - LF Data FIFO Fill-Level Reached flag

; ----------	Register LDFWP bits		------------------------
.equ	LDFWP_MASK	= 0x3F		;      - LF Data FIFO Write Pointer bit 5 (6 bits)
.equ	LDFWP0		= 0		;          LDFWP BIT0 position



; ====	LF_PROTOCOL_HANDLER MODULE REGISTERS BITS DEFINITION========
;
; ----------	Register PHCRCR bits		------------------------
.equ	CRCEN		= 7		; 0x80 - CRC Enable
.equ	CRCSE1		= 5		; 0x20 - CRC size bit 1
.equ	CRCSE0		= 4		; 0x10 - CRC size bit 0
.equ	CRCFR		= 2		; 0x04 - CRC ID Frame

; ----------	Register PHFR bits		------------------------
.equ	PHID1F		= 5		; 0x20 - Protocol Handler IDentifier 1 Flag
.equ	PHID0F		= 4		; 0x10 - Protocol Handler IDentifier 0 Flag
.equ	PHIDFF		= 3		; 0x08 - Protocol Handler ID Frame Flag
.equ	PHDFF		= 2		; 0x04 - Protocol Handler Date Frame Flag
.equ	PHTBLF		= 1		; 0x02 - Protocol Handler Telegram Bit Length Flag
.equ	CRCEF		= 0		; 0x01 - PH CRC Error Status Flag

; ----------	Register PHIMR bits		------------------------
.equ	PHID1IM		= 5		; 0x20 - Protocol Handler IDentifier 1 Interrupt Mask
.equ	PHID0IM		= 4		; 0x10 - Protocol Handler IDentifier 0 Interrupt Mask
.equ	PHIDFIM		= 3		; 0x08 - Protocol Handler ID Frame Interrupt Mask
.equ	PHDFIM		= 2		; 0x04 - Protocol Handler Date Frame Interrupt Mask
.equ	PHTBLIM		= 1		; 0x02 - Protocol Handler Telegram Bit Length Interrupt Mask

; ----------	Register PHTCR bits		------------------------
.equ	CSM		= 7		; 0x80 - Continue or Single receive Mode
.equ	CPM		= 6		; 0x40 - Continuous Pattern Mode
.equ	FRFIFO		= 5		; 0x20 - ID Frame stored in FIFO



; ====	LF_RECEIVER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LFCR0 bits		------------------------
.equ	LFRRT_MASK	= 0xC0		;      - LF Receiver Reset Time (2 bits)
.equ	LFRRT0		= 6		;          LFRRT BIT0 position
.equ	LFMG		= 5		; 0x20 - LF Receiver Maximum Gain Select
.equ	LFBR_MASK	= 0x18		;      - LF Receiver Bit Rate (2 bits)
.equ	LFBR0		= 3		;          LFBR BIT0 position
.equ	LFCE3		= 2		; 0x04 - LF Receiver Channel 3 Enable
.equ	LFCE2		= 1		; 0x02 - LF Receiver Channel 2 Enable
.equ	LFCE1		= 0		; 0x01 - LF Receiver Channel 1 Enable
; ::::  LFRRT	:::: bitfield values
;			0x00		; 128 us
;			0x40		; 160 us
;			0x80		; 192 us
;			0xC0		; 224 us
; ::::  LFBR	:::: bitfield values
;			0x00		; 1.95 kBit/s
;			0x08		; 3.90 kBit/s
;			0x10		; 7.81 kBit/s

; ----------	Register LFCR1 bits		------------------------
.equ	LFRE		= 7		; 0x80 - LF Receiver Enable
.equ	LFPEEN		= 6		; 0x40 - LF Port Event Enable
.equ	ADTHEN		= 5		; 0x20 - Adapt Threshold Enable
.equ	FLLEN		= 4		; 0x10 - FLL Enable
.equ	ARMDE		= 3		; 0x08 - Analog Reset Manchester Detector Enable
.equ	LFFM1		= 2		; 0x04 - LF Function Mode bit 1
.equ	RSST_MASK	= 0x03		;      - RSSI Startup Time (2 bits)
.equ	RSST0		= 0		;          RSST BIT0 position
; ::::  RSST	:::: bitfield values
;			0x00		; 256 us
;			0x01		; 384 us
;			0x02		; 512 us
;			0x03		; 640 us

; ----------	Register LFCR2 bits		------------------------
.equ	LFVC_MASK	= 0xE0		;      - LF Velocity Control (3 bits)
.equ	LFVC0		= 5		;          LFVC BIT0 position
.equ	LFDAMP		= 2		; 0x04 - LF coil Damping level select
.equ	LFSEN_MASK	= 0x03		;      - LF Sensitivity Mode (2 bits)
.equ	LFSEN0		= 0		;          LFSEN BIT0 position
; ::::  LFSEN	:::: bitfield values
;			0x00		; High Sensitivity
;			0x01		; Medium Sensitivity
;			0x02		; Low Sensitivity

; ----------	Register LFCR3 bits		------------------------
.equ	LFSBEN		= 7		; 0x80 - LF Standby mode Enable
.equ	LFTS_MASK	= 0x70		;      - LF Standby Time (3 bits)
.equ	LFTS0		= 4		;          LFTS BIT0 position
.equ	LFTON		= 3		; 0x08 - LF On Time with Activated Standby Mode
.equ	LFRCPM		= 2		; 0x04 - LF RC Pump mode Enable
.equ	LFRCPCEN	= 1		; 0x02 - LF RC Pump Continuous Enable
.equ	LFRCTEN		= 0		; 0x01 - LF RC Trim Enable
; ::::  LFTS	:::: bitfield values
;			0x00		;  384 us
;			0x10		;  768 us
;			0x20		; 1152 us
;			0x30		; 1536 us
;			0x40		; 2304 us
;			0x50		; 3072 us
;			0x60		; 4608 us
;			0x70		; 6144 us

; ----------	Register LFDSR1 bits		------------------------
.equ	CTTHA_MASK	= 0x30		;      - Count Threshold A (2 bits)
.equ	CTTHA0		= 4		;          CTTHA BIT0 position
.equ	HITHA_MASK	= 0x0C		;      - High Threshold A (2 bits)
.equ	HITHA0		= 2		;          HITHA BIT0 position
.equ	LOTHA_MASK	= 0x03		;      - Low Threshold A (2 bits)
.equ	LOTHA0		= 0		;          LOTHA BIT0 position

; ----------	Register LFDSR10 bits		------------------------
.equ	STBTH_MASK	= 0xC0		;      - Stop Bit Correlator Threshold (2 bits)
.equ	STBTH0		= 6		;          STBTH BIT0 position
.equ	FCL_MASK	= 0x3F		;      - Frequency Control Limit (6 bits)
.equ	FCL0		= 0		;          FCL BIT0 position

; ----------	Register LFDSR11 bits		------------------------
.equ	TINITB_MASK	= 0xF0		;      - Time Init B (4 bits)
.equ	TINITB0		= 4		;          TINITB BIT0 position
.equ	TINITA_MASK	= 0x0F		;      - Time Init A (4 bits)
.equ	TINITA0		= 0		;          TINITA BIT0 position

; ----------	Register LFDSR2 bits		------------------------
.equ	CTTHB_MASK	= 0x30		;      - Count Threshold B (2 bits)
.equ	CTTHB0		= 4		;          CTTHB BIT0 position
.equ	HITHB_MASK	= 0x0C		;      - High Threshold B (2 bits)
.equ	HITHB0		= 2		;          HITHB BIT0 position
.equ	LOTHB_MASK	= 0x03		;      - Low Threshold B (2 bits)
.equ	LOTHB0		= 0		;          LOTHB BIT0 position

; ----------	Register LFDSR3 bits		------------------------
.equ	QCTH_MASK	= 0x38		;      - Quality Check Threshold (3 bits)
.equ	QCTH0		= 3		;          QCTH BIT0 position
.equ	PBDTH_MASK	= 0x03		;      - Preburst Detection Threshold (2 bits)
.equ	PBDTH0		= 0		;          PBDTH BIT0 position

; ----------	Register LFDSR4 bits		------------------------
.equ	SRSTC_MASK	= 0xC0		;      - Sync Restart Control (2 bits)
.equ	SRSTC0		= 6		;          SRSTC BIT0 position
.equ	SCTHA_MASK	= 0x38		;      - Sync Count Threshold A (3 bits)
.equ	SCTHA0		= 3		;          SCTHA BIT0 position
.equ	SDTHA_MASK	= 0x07		;      - Sync Detection Threshold A (3 bits)
.equ	SDTHA0		= 0		;          SDTHA BIT0 position

; ----------	Register LFDSR5 bits		------------------------
.equ	SSUTB		= 7		; 0x80 - Snyc Start-Up Time B
.equ	SSUTA		= 6		; 0x40 - Snyc Start-Up Time A
.equ	SCTHB_MASK	= 0x38		;      - Sync Count Threshold B (3 bits)
.equ	SCTHB0		= 3		;          SCTHB BIT0 position
.equ	SDTHB_MASK	= 0x07		;      - Sync Detection Threshold B (3 bits)
.equ	SDTHB0		= 0		;          SDTHB BIT0 position

; ----------	Register LFDSR6 bits		------------------------
.equ	TODS_MASK	= 0x38		;      - Time Out Timer Delta Sync detect (3 bits)
.equ	TODS0		= 3		;          TODS BIT0 position
.equ	TODU_MASK	= 0x07		;      - Time Out Decode Unit (3 bits)
.equ	TODU0		= 0		;          TODU BIT0 position

; ----------	Register LFDSR7 bits		------------------------
.equ	MDG_MASK	= 0xC0		;      - FLL Manchester Detector Gain (2 bits)
.equ	MDG0		= 6		;          MDG BIT0 position
.equ	MDSP_MASK	= 0x30		;      - FLL Manchester Detector Speed (2 bits)
.equ	MDSP0		= 4		;          MDSP BIT0 position
.equ	PBG_MASK	= 0x0C		;      - FLL Preburst Gain (2 bits)
.equ	PBG0		= 2		;          PBG BIT0 position
.equ	PBSP_MASK	= 0x03		;      - FLL Preburst Speed (2 bits)
.equ	PBSP0		= 0		;          PBSP BIT0 position

; ----------	Register LFDSR8 bits		------------------------
.equ	ASWTH_MASK	= 0x70		;      - Adaptive Switch Threshold (3 bits)
.equ	ASWTH0		= 4		;          ASWTH BIT0 position
.equ	LGFE		= 3		; 0x08 - Loop Gain Fading Enable
.equ	CLD_MASK	= 0x07		;      - Counter Limit Delta (3 bits)
.equ	CLD0		= 0		;          CLD BIT0 position

; ----------	Register LFDSR9 bits		------------------------
.equ	STW_MASK	= 0x1F		;      - Step Width (5 bits)
.equ	STW0		= 0		;          STW BIT0 position

; ----------	Register LFFR bits		------------------------
.equ	LFES		= 7		; 0x80 - LF Envelope Signal
.equ	LFSD		= 6		; 0x40 - LF Signal Detect
.equ	LFTOF		= 3		; 0x08 - LF telegram Time Out Flag
.equ	LFEOF		= 2		; 0x04 - LF End of Telegram Flag
.equ	LFDEF		= 1		; 0x02 - LF Decoder Error Flag
.equ	LFSYDF		= 0		; 0x01 - LF Synchronization Detect Flag

; ----------	Register LFIMR bits		------------------------
.equ	LFEOIM		= 2		; 0x04 - LF End Of telegram Interrupt Mask
.equ	LFDEIM		= 1		; 0x02 - LF Decoder Error Interrupt Mask
.equ	LFSYDIM		= 0		; 0x01 - LF Synchronization Detected Interrupt Mask

; ----------	Register LFQC1 bits		------------------------
.equ	LFCS1_MASK	= 0xF0		;      - LF capacitor select channel 1 (4 bits)
.equ	LFCS10		= 4		;          LFCS1 BIT0 position
.equ	LFQS1_MASK	= 0x0F		;      - LF resistor select channel 1 (4 bits)
.equ	LFQS10		= 0		;          LFQS1 BIT0 position

; ----------	Register LFQC2 bits		------------------------
.equ	LFCS2_MASK	= 0xF0		;      - LF capacitor select channel 2 (4 bits)
.equ	LFCS20		= 4		;          LFCS2 BIT0 position
.equ	LFQS2_MASK	= 0x0F		;      - LF resistor select channel 2 (4 bits)
.equ	LFQS20		= 0		;          LFQS2 BIT0 position

; ----------	Register LFQC3 bits		------------------------
.equ	LFCS3_MASK	= 0xF0		;      - LF capacitor select channel 3 (4 bits)
.equ	LFCS30		= 4		;          LFCS3 BIT0 position
.equ	LFQS3_MASK	= 0x0F		;      - LF resistor select channel 3 (4 bits)
.equ	LFQS30		= 0		;          LFQS3 BIT0 position

; ----------	Register LFSRCTL bits		------------------------
.equ	LFSRCT0		= 0		; 0x01 - LF Receiver SRC Tuning Tuning value

; ----------	Register LFSRCTM bits		------------------------
.equ	LFSRCT8		= 7		; 0x80 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT7		= 6		; 0x40 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT6		= 5		; 0x20 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT5		= 4		; 0x10 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT4		= 3		; 0x08 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT3		= 2		; 0x04 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT2		= 1		; 0x02 - LF Receiver SRC Tuning Tuning value
.equ	LFSRCT1		= 0		; 0x01 - LF Receiver SRC Tuning Tuning value

; ----------	Register LFSTOP bits		------------------------
.equ	LFSTL_MASK	= 0x70		;      - LF Stop Bits Length (3 bits)
.equ	LFSTL0		= 4		;          LFSTL BIT0 position
.equ	LFSTSY_MASK	= 0x0F		;      - LF Stop Bits Symbols (4 bits)
.equ	LFSTSY0		= 0		;          LFSTSY BIT0 position

; ----------	Register LFSYLE bits		------------------------
.equ	LFSYLE_MASK	= 0x3F		;      -  (6 bits)
.equ	LFSYLE0		= 0		;          LFSYLE BIT0 position



; ====	LF_RSSI MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register RSCALIB bits		------------------------
.equ	RSCALIB7	= 7		; 0x80 - RSSI Calibration Bit 7
.equ	RSCALIB6	= 6		; 0x40 - RSSI Calibration Bit 6
.equ	RSCALIB5	= 5		; 0x20 - RSSI Calibration Bit 5
.equ	RSCALIB4	= 4		; 0x10 - RSSI Calibration Bit 4
.equ	RSCALIB3	= 3		; 0x08 - RSSI Calibration Bit 3
.equ	RSCALIB2	= 2		; 0x04 - RSSI Calibration Bit 2
.equ	RSCALIB1	= 1		; 0x02 - RSSI Calibration Bit 1
.equ	RSCALIB0	= 0		; 0x01 - RSSI Calibration Bit 0

; ----------	Register RSCR bits		------------------------
.equ	RSRES		= 7		; 0x80 - RSSI Reset Bit
.equ	RSMODE1		= 5		; 0x20 - RSSI Mode Bit 1
.equ	RSMODE0		= 4		; 0x10 - RSSI Mode Bit 0
.equ	RSOFM		= 3		; 0x08 - RSSI Operation Flag Mask Bit
.equ	RSEOR		= 2		; 0x04 - RSSI End Operation Request Bit
.equ	RSOS		= 1		; 0x02 - RSSI Operation Start Bit
.equ	RSSDEN		= 0		; 0x01 - RSSI Sign Detection Enable Bit

; ----------	Register RSDBGR bits		------------------------
.equ	RSDBGEN		= 7		; 0x80 - RSSI Debug Enable Bit
.equ	RSDBGS1		= 6		; 0x40 - RSSI Debug Select Bit 1
.equ	RSDBGS0		= 5		; 0x20 - RSSI Debug Select Bit 0
.equ	RSHOME		= 4		; 0x10 - RSSI Hold Measurement Bit
.equ	RSFPD		= 3		; 0x08 - RSSI Fix Pre-Divider Bit
.equ	RSINFM		= 2		; 0x04 - RSSI Infinity Measurement Bit
.equ	RSSANA		= 0		; 0x01 - RSSI Set Analog Bit

; ----------	Register RSDLYR bits		------------------------
.equ	RSRD1		= 7		; 0x80 - RSSI Range Delay Bit 1
.equ	RSRD0		= 6		; 0x40 - RSSI Range Delay Bit 0
.equ	RSTRD5		= 5		; 0x20 - RSSI Tracking Delay Bit 5
.equ	RSTRD4		= 4		; 0x10 - RSSI Tracking Delay Bit 4
.equ	RSTRD3		= 3		; 0x08 - RSSI Tracking Delay Bit 3
.equ	RSTRD2		= 2		; 0x04 - RSSI Tracking Delay Bit 2
.equ	RSTRD1		= 1		; 0x02 - RSSI Tracking Delay Bit 1
.equ	RSTRD0		= 0		; 0x01 - RSSI Tracking Delay Bit 0

; ----------	Register RSFR bits		------------------------
.equ	RSAOOR3		= 7		; 0x80 - RSSI Averaging Out of Range Channel 3 Bit
.equ	RSAOOR2		= 6		; 0x40 - RSSI Averaging Out of Range Channel 2 Bit
.equ	RSAOOR1		= 5		; 0x20 - RSSI Averaging Out of Range Channel 1 Bit
.equ	RSOFF		= 3		; 0x08 - RSSI Operation Finish Flag Bit
.equ	RSOOR3		= 2		; 0x04 - RSSI Out of Range Channel 3 Bit
.equ	RSOOR2		= 1		; 0x02 - RSSI Out of Range Channel 2 Bit
.equ	RSOOR1		= 0		; 0x01 - RSSI Out of Range Channel 1 Bit

; ----------	Register RSMS1R bits		------------------------
.equ	RSSCAL		= 7		; 0x80 - RSSI Set Calibration Bit
.equ	RSSSV		= 6		; 0x40 - RSSI Show Sample Value Bit
.equ	RSCMS		= 5		; 0x20 - RSSI Current Mode Select Bit
.equ	RSSTIM		= 4		; 0x10 - RSSI Stimulus Bit
.equ	RSINTM		= 3		; 0x08 - RSSI internal Measurement Bit
.equ	RSCH3E		= 2		; 0x04 - RSSI Channel 3 Enable Bit
.equ	RSCH2E		= 1		; 0x02 - RSSI Channel 2 Enable Bit
.equ	RSCH1E		= 0		; 0x01 - RSSI Channel 1 Enable Bit

; ----------	Register RSMS2R bits		------------------------
.equ	RSAVGS3		= 7		; 0x80 - RSSI Average Select Bit 3
.equ	RSAVGS2		= 6		; 0x40 - RSSI Average Select Bit 2
.equ	RSAVGS1		= 5		; 0x20 - RSSI Average Select Bit 1
.equ	RSAVGS0		= 4		; 0x10 - RSSI Average Select Bit 0
.equ	RSSADR3		= 3		; 0x08 - RSSI Sample Address Bit 3
.equ	RSSADR2		= 2		; 0x04 - RSSI Sample Address Bit 2
.equ	RSSADR1		= 1		; 0x02 - RSSI Sample Address Bit 1
.equ	RSSADR0		= 0		; 0x01 - RSSI Sample Address Bit 0

; ----------	Register RSRES1H bits		------------------------
.equ	RSRES1H7	= 7		; 0x80 - RSSI Result 1 High Byte Bit 7
.equ	RSRES1H6	= 6		; 0x40 - RSSI Result 1 High Byte Bit 6
.equ	RSRES1H5	= 5		; 0x20 - RSSI Result 1 High Byte Bit 5
.equ	RSRES1H4	= 4		; 0x10 - RSSI Result 1 High Byte Bit 4
.equ	RSRES1H3	= 3		; 0x08 - RSSI Result 1 High Byte Bit 3
.equ	RSRES1H2	= 2		; 0x04 - RSSI Result 1 High Byte Bit 2
.equ	RSRES1H1	= 1		; 0x02 - RSSI Result 1 High Byte Bit 1
.equ	RSRES1H0	= 0		; 0x01 - RSSI Result 1 High Byte Bit 0

; ----------	Register RSRES1L bits		------------------------
.equ	RSRES1L7	= 7		; 0x80 - RSSI Result 1 Low Byte Bit 7
.equ	RSRES1L6	= 6		; 0x40 - RSSI Result 1 Low Byte Bit 6
.equ	RSRES1L5	= 5		; 0x20 - RSSI Result 1 Low Byte Bit 5
.equ	RSRES1L4	= 4		; 0x10 - RSSI Result 1 Low Byte Bit 4
.equ	RSRES1L3	= 3		; 0x08 - RSSI Result 1 Low Byte Bit 3
.equ	RSRES1L2	= 2		; 0x04 - RSSI Result 1 Low Byte Bit 2
.equ	RSRES1L1	= 1		; 0x02 - RSSI Result 1 Low Byte Bit 1
.equ	RSRES1L0	= 0		; 0x01 - RSSI Result 1 Low Byte Bit 0

; ----------	Register RSRES2H bits		------------------------
.equ	RSRES2H7	= 7		; 0x80 - RSSI Result 2 High Byte Bit 7
.equ	RSRES2H6	= 6		; 0x40 - RSSI Result 2 High Byte Bit 6
.equ	RSRES2H5	= 5		; 0x20 - RSSI Result 2 High Byte Bit 5
.equ	RSRES2H4	= 4		; 0x10 - RSSI Result 2 High Byte Bit 4
.equ	RSRES2H3	= 3		; 0x08 - RSSI Result 2 High Byte Bit 3
.equ	RSRES2H2	= 2		; 0x04 - RSSI Result 2 High Byte Bit 2
.equ	RSRES2H1	= 1		; 0x02 - RSSI Result 2 High Byte Bit 1
.equ	RSRES2H0	= 0		; 0x01 - RSSI Result 2 High Byte Bit 0

; ----------	Register RSRES2L bits		------------------------
.equ	RSRES2L7	= 7		; 0x80 - RSSI Result 2 Low Byte Bit 7
.equ	RSRES2L6	= 6		; 0x40 - RSSI Result 2 Low Byte Bit 6
.equ	RSRES2L5	= 5		; 0x20 - RSSI Result 2 Low Byte Bit 5
.equ	RSRES2L4	= 4		; 0x10 - RSSI Result 2 Low Byte Bit 4
.equ	RSRES2L3	= 3		; 0x08 - RSSI Result 2 Low Byte Bit 3
.equ	RSRES2L2	= 2		; 0x04 - RSSI Result 2 Low Byte Bit 2
.equ	RSRES2L1	= 1		; 0x02 - RSSI Result 2 Low Byte Bit 1
.equ	RSRES2L0	= 0		; 0x01 - RSSI Result 2 Low Byte Bit 0

; ----------	Register RSRES3H bits		------------------------
.equ	RSRES3H7	= 7		; 0x80 - RSSI Result 3 High Byte Bit 7
.equ	RSRES3H6	= 6		; 0x40 - RSSI Result 3 High Byte Bit 6
.equ	RSRES3H5	= 5		; 0x20 - RSSI Result 3 High Byte Bit 5
.equ	RSRES3H4	= 4		; 0x10 - RSSI Result 3 High Byte Bit 4
.equ	RSRES3H3	= 3		; 0x08 - RSSI Result 3 High Byte Bit 3
.equ	RSRES3H2	= 2		; 0x04 - RSSI Result 3 High Byte Bit 2
.equ	RSRES3H1	= 1		; 0x02 - RSSI Result 3 High Byte Bit 1
.equ	RSRES3H0	= 0		; 0x01 - RSSI Result 3 High Byte Bit 0

; ----------	Register RSRES3L bits		------------------------
.equ	RSRES3L7	= 7		; 0x80 - RSSI Result 3 Low Byte Bit 7
.equ	RSRES3L6	= 6		; 0x40 - RSSI Result 3 Low Byte Bit 6
.equ	RSRES3L5	= 5		; 0x20 - RSSI Result 3 Low Byte Bit 5
.equ	RSRES3L4	= 4		; 0x10 - RSSI Result 3 Low Byte Bit 4
.equ	RSRES3L3	= 3		; 0x08 - RSSI Result 3 Low Byte Bit 3
.equ	RSRES3L2	= 2		; 0x04 - RSSI Result 3 Low Byte Bit 2
.equ	RSRES3L1	= 1		; 0x02 - RSSI Result 3 Low Byte Bit 1
.equ	RSRES3L0	= 0		; 0x01 - RSSI Result 3 Low Byte Bit 0

; ----------	Register RSRES4H bits		------------------------
.equ	RSRES4H7	= 7		; 0x80 - RSSI Result 4 High Byte Bit 7
.equ	RSRES4H6	= 6		; 0x40 - RSSI Result 4 High Byte Bit 6
.equ	RSRES4H5	= 5		; 0x20 - RSSI Result 4 High Byte Bit 5
.equ	RSRES4H4	= 4		; 0x10 - RSSI Result 4 High Byte Bit 4
.equ	RSRES4H3	= 3		; 0x08 - RSSI Result 4 High Byte Bit 3
.equ	RSRES4H2	= 2		; 0x04 - RSSI Result 4 High Byte Bit 2
.equ	RSRES4H1	= 1		; 0x02 - RSSI Result 4 High Byte Bit 1
.equ	RSRES4H0	= 0		; 0x01 - RSSI Result 4 High Byte Bit 0

; ----------	Register RSRES4L bits		------------------------
.equ	RSRES4L7	= 7		; 0x80 - RSSI Result 4 Low Byte Bit 7
.equ	RSRES4L6	= 6		; 0x40 - RSSI Result 4 Low Byte Bit 6
.equ	RSRES4L5	= 5		; 0x20 - RSSI Result 4 Low Byte Bit 5
.equ	RSRES4L4	= 4		; 0x10 - RSSI Result 4 Low Byte Bit 4
.equ	RSRES4L3	= 3		; 0x08 - RSSI Result 4 Low Byte Bit 3
.equ	RSRES4L2	= 2		; 0x04 - RSSI Result 4 Low Byte Bit 2
.equ	RSRES4L1	= 1		; 0x02 - RSSI Result 4 Low Byte Bit 1
.equ	RSRES4L0	= 0		; 0x01 - RSSI Result 4 Low Byte Bit 0

; ----------	Register RSSR bits		------------------------
.equ	RSSVLD		= 1		; 0x02 - RSSI Sample Valid Bit
.equ	RSRDY		= 0		; 0x01 - RSSI Ready Bit

; ----------	Register RSSRCR bits		------------------------
.equ	SRCSTEP1	= 7		; 0x80 - RSSI SRC Step Bit 1
.equ	SRCSTEP0	= 6		; 0x40 - RSSI SRC Step Bit 0
.equ	SRCCLR		= 4		; 0x10 - RSSI SRC Clear Bit
.equ	SRCMIN1		= 3		; 0x08 - RSSI SRC Minimum Value Bit 1
.equ	SRCMIN0		= 2		; 0x04 - RSSI SRC Minimum Value Bit 0
.equ	SRCMODE1	= 1		; 0x02 - RSSI SRC Calibration Mode Bit 1
.equ	SRCMODE0	= 0		; 0x01 - RSSI SRC Calibration Mode Bit 0

; ----------	Register SD12RR bits		------------------------
.equ	SD12RR7		= 7		; 0x80 - Sign Detection Channel 1 vs 2 Result Bit 7
.equ	SD12RR6		= 6		; 0x40 - Sign Detection Channel 1 vs 2 Result Bit 6
.equ	SD12RR5		= 5		; 0x20 - Sign Detection Channel 1 vs 2 Result Bit 5
.equ	SD12RR4		= 4		; 0x10 - Sign Detection Channel 1 vs 2 Result Bit 4
.equ	SD12RR3		= 3		; 0x08 - Sign Detection Channel 1 vs 2 Result Bit 3
.equ	SD12RR2		= 2		; 0x04 - Sign Detection Channel 1 vs 2 Result Bit 2
.equ	SD12RR1		= 1		; 0x02 - Sign Detection Channel 1 vs 2 Result Bit 1
.equ	SD12RR0		= 0		; 0x01 - Sign Detection Channel 1 vs 2 Result Bit 0

; ----------	Register SD13RR bits		------------------------
.equ	SD13RR7		= 7		; 0x80 - Sign Detection Channel 1 vs 3 Result Bit 7
.equ	SD13RR6		= 6		; 0x40 - Sign Detection Channel 1 vs 3 Result Bit 6
.equ	SD13RR5		= 5		; 0x20 - Sign Detection Channel 1 vs 3 Result Bit 5
.equ	SD13RR4		= 4		; 0x10 - Sign Detection Channel 1 vs 3 Result Bit 4
.equ	SD13RR3		= 3		; 0x08 - Sign Detection Channel 1 vs 3 Result Bit 3
.equ	SD13RR2		= 2		; 0x04 - Sign Detection Channel 1 vs 3 Result Bit 2
.equ	SD13RR1		= 1		; 0x02 - Sign Detection Channel 1 vs 3 Result Bit 1
.equ	SD13RR0		= 0		; 0x01 - Sign Detection Channel 1 vs 3 Result Bit 0

; ----------	Register SD23RR bits		------------------------
.equ	SD23RR7		= 7		; 0x80 - Sign Detection Channel 2 vs 3 Result Bit 7
.equ	SD23RR6		= 6		; 0x40 - Sign Detection Channel 2 vs 3 Result Bit 6
.equ	SD23RR5		= 5		; 0x20 - Sign Detection Channel 2 vs 3 Result Bit 5
.equ	SD23RR4		= 4		; 0x10 - Sign Detection Channel 2 vs 3 Result Bit 4
.equ	SD23RR3		= 3		; 0x08 - Sign Detection Channel 2 vs 3 Result Bit 3
.equ	SD23RR2		= 2		; 0x04 - Sign Detection Channel 2 vs 3 Result Bit 2
.equ	SD23RR1		= 1		; 0x02 - Sign Detection Channel 2 vs 3 Result Bit 1
.equ	SD23RR0		= 0		; 0x01 - Sign Detection Channel 2 vs 3 Result Bit 0

; ----------	Register SD360R bits		------------------------
.equ	SD360R7		= 7		; 0x80 - Sign Detection 360 Degree Result Bit 7
.equ	SD360R6		= 6		; 0x40 - Sign Detection 360 Degree Result Bit 6
.equ	SD360R5		= 5		; 0x20 - Sign Detection 360 Degree Result Bit 5
.equ	SD360R4		= 4		; 0x10 - Sign Detection 360 Degree Result Bit 4
.equ	SD360R3		= 3		; 0x08 - Sign Detection 360 Degree Result Bit 3
.equ	SD360R2		= 2		; 0x04 - Sign Detection 360 Degree Result Bit 2
.equ	SD360R1		= 1		; 0x02 - Sign Detection 360 Degree Result Bit 1
.equ	SD360R0		= 0		; 0x01 - Sign Detection 360 Degree Result Bit 0



; ====	LF_TIMER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LTCMR bits		------------------------
.equ	LTENA		= 7		; 0x80 - LF Timer Enable
.equ	LTSM		= 6		; 0x40 - LF Timer Start Mode
.equ	LTCM		= 5		; 0x20 - LF Timer Continuous Mode
.equ	LTCIM		= 4		; 0x10 - LF Timer Compare Interrupt Mask
.equ	LTCRM		= 3		; 0x08 - LF Timer Compare Reset Mask
.equ	LTPS2		= 2		; 0x04 - LF Timer Prescaler Select bit 2
.equ	LTPS1		= 1		; 0x02 - LF Timer Prescaler Select bit 1
.equ	LTPS0		= 0		; 0x01 - LF Timer Prescaler Select bit 0

; ----------	Register LTEMR bits		------------------------
.equ	LTCOF		= 7		; 0x80 - LF Timer Compare Flag
.equ	EOFEM		= 6		; 0x40 - End OF telegram Event Mask
.equ	FLEM		= 5		; 0x20 - Fill Level reached Event Mask
.equ	TBLEM		= 4		; 0x10 - Telegram Bit Length reached Event Mask
.equ	DFEM		= 3		; 0x08 - Data Frame end reached Event Mask
.equ	IDFEM		= 2		; 0x04 - Identifier Frame Event Mask
.equ	ID1EM		= 1		; 0x02 - ID1 Event Mask
.equ	ID0EM		= 0		; 0x01 - ID0 Event Mask



; ====	LF_TRANSPONDER MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register TPCR1 bits		------------------------
.equ	TPMODE		= 7		; 0x80 - Transponder Mode
.equ	TPDFCP_MASK	= 0x60		;      - Transponder Decoder Field Clock Prescaler value (2 bits)
.equ	TPDFCP0		= 5		;          TPDFCP BIT0 position
.equ	TPBR		= 4		; 0x10 - Transponder Bit Rate
.equ	TPQPLM		= 2		; 0x04 - Transponder Quadrature Pulse Length Operation Modulation
; ::::  TPDFCP	:::: bitfield values
;			0x00		; Field Clock / 1
;			0x20		; Field Clock / 1
;			0x40		; Field Clock / 2
;			0x60		; Field Clock / 4

; ----------	Register TPCR2 bits		------------------------
.equ	TPWDLV_MASK	= 0x60		;      - Transponder watch dog value for No Field timeout (with SRC clk) (2 bits)
.equ	TPWDLV0		= 5		;          TPWDLV BIT0 position
.equ	TPNFTO		= 4		; 0x10 - Transponder No Field Timeout enable
.equ	TPD		= 3		; 0x08 - Transponder Disable
.equ	TPPSD		= 2		; 0x04 - Transponder Power Switch Disable
.equ	TPMOD		= 1		; 0x02 - Transponder Modulation
.equ	TPMA		= 0		; 0x01 - Transponder Mode Acknowledge
; ::::  TPWDLV	:::: bitfield values
;			0x00		; 1.024 ms
;			0x20		; 2.048 ms
;			0x40		; 3.072 ms
;			0x60		; 4.096 ms

; ----------	Register TPCR3 bits		------------------------
.equ	TPRCD		= 5		; 0x20 - Transponder Reception Continuous Damping
.equ	TPTLIW		= 2		; 0x04 - Transponder Transmit Listen Window
.equ	TPRD		= 1		; 0x02 - Transponder Receive Data
.equ	TPTD		= 0		; 0x01 - Transponder Transmit Data

; ----------	Register TPCR4 bits		------------------------
.equ	TPBCM		= 4		; 0x10 - Transponder Battery Charge Mode
.equ	TPBCCS_MASK	= 0x0F		;      - Transponder Battery Charge Current Select (4 bits)
.equ	TPBCCS0		= 0		;          TPBCCS BIT0 position

; ----------	Register TPCR5 bits		------------------------
.equ	TPMD_MASK	= 0x70		;      - Transponder Modulation Damping Select (3 bits)
.equ	TPMD0		= 4		;          TPMD BIT0 position
.equ	TPMUD_MASK	= 0x07		;      - Transponder Modulation Undamped Level Select (3 bits)
.equ	TPMUD0		= 0		;          TPMUD BIT0 position
; ::::  TPMUD	:::: bitfield values
;			0x00		; 5.0 V
;			0x01		; 5.4 V
;			0x02		; 5.8 V
;			0x03		; 6.2 V
;			0x04		; 6.6 V
;			0x05		; 7.0 V
;			0x07		; Up to OVP

; ----------	Register TPDCR1 bits		------------------------
.equ	TPDCL1_MASK	= 0x3F		;      - Transponder Decode Comparator Length value 1 (6 bits)
.equ	TPDCL10		= 0		;          TPDCL1 BIT0 position

; ----------	Register TPDCR2 bits		------------------------
.equ	TPDCL2_MASK	= 0x3F		;      - Transponder Decode Comparator Length value 2 (6 bits)
.equ	TPDCL20		= 0		;          TPDCL2 BIT0 position

; ----------	Register TPDCR3 bits		------------------------
.equ	TPDCL3_MASK	= 0x3F		;      - Transponder Decode Comparator Length value 3 (6 bits)
.equ	TPDCL30		= 0		;          TPDCL3 BIT0 position

; ----------	Register TPDCR4 bits		------------------------
.equ	TPDCL4_MASK	= 0x3F		;      - Transponder Decode Comparator Length value 4 (6 bits)
.equ	TPDCL40		= 0		;          TPDCL4 BIT0 position

; ----------	Register TPDCR5 bits		------------------------
.equ	TPDCL5_MASK	= 0x3F		;      - Transponder Decode Comparator Length value 5 (6 bits)
.equ	TPDCL50		= 0		;          TPDCL5 BIT0 position

; ----------	Register TPECMR bits		------------------------
.equ	TPECM4_MASK	= 0xC0		;      - Transponder Encoder Mode 4 (2 bits)
.equ	TPECM40		= 6		;          TPECM4 BIT0 position
.equ	TPECM3_MASK	= 0x30		;      - Transponder Encoder Mode 3 (2 bits)
.equ	TPECM30		= 4		;          TPECM3 BIT0 position
.equ	TPECM2_MASK	= 0x0C		;      - Transponder Encoder Mode 2 (2 bits)
.equ	TPECM20		= 2		;          TPECM2 BIT0 position
.equ	TPECM1_MASK	= 0x03		;      - Transponder Encoder Mode 1 (2 bits)
.equ	TPECM10		= 0		;          TPECM1 BIT0 position
; ::::  TPECM4	:::: bitfield values
;			0x00		; Manchester
;			0x40		; Biphase
;			0x80		; NRZ
;			0xC0		; Manchester
; ::::  TPECM3	:::: bitfield values
;			0x00		; Manchester
;			0x10		; Biphase
;			0x20		; NRZ
;			0x30		; Manchester
; ::::  TPECM2	:::: bitfield values
;			0x00		; Manchester
;			0x04		; Biphase
;			0x08		; NRZ
;			0x0C		; Manchester
; ::::  TPECM1	:::: bitfield values
;			0x00		; Manchester
;			0x01		; Biphase
;			0x02		; NRZ
;			0x03		; Manchester

; ----------	Register TPECR1 bits		------------------------
.equ	TPECL1_MASK	= 0xFF		;      - Transponder Encode Comparator Length value 1 (8 bits)
.equ	TPECL10		= 0		;          TPECL1 BIT0 position

; ----------	Register TPECR2 bits		------------------------
.equ	TPECL2_MASK	= 0xFF		;      - Transponder Encode Comparator Length value 2 (8 bits)
.equ	TPECL20		= 0		;          TPECL2 BIT0 position

; ----------	Register TPECR3 bits		------------------------
.equ	TPECL3_MASK	= 0xFF		;      - Transponder Encode Comparator Length value 3 (8 bits)
.equ	TPECL30		= 0		;          TPECL3 BIT0 position

; ----------	Register TPECR4 bits		------------------------
.equ	TPECL4_MASK	= 0xFF		;      - Transponder Encode Comparator Length value 4 (8 bits)
.equ	TPECL40		= 0		;          TPECL4 BIT0 position

; ----------	Register TPFR bits		------------------------
.equ	TPBERF		= 3		; 0x08 - Transponder Bit Error Flag
.equ	TPNFTF		= 2		; 0x04 - Transponder No Field Timeout Flag
.equ	TPFTF		= 1		; 0x02 - Transponder Field Timeout Flag
.equ	TPF		= 0		; 0x01 - Transponder Flag

; ----------	Register TPIMR bits		------------------------
.equ	TPBERIM		= 3		; 0x08 - Transponder Bit Error Interrupt Mask
.equ	TPNFTIM		= 2		; 0x04 - Transponder No Field Timeout Interrupt Mask
.equ	TPFTIM		= 1		; 0x02 - Transponder Field Timeout Interrupt Mask
.equ	TPIM		= 0		; 0x01 - Transponder Interrupt Mask

; ----------	Register TPSR bits		------------------------
.equ	TPBCOK		= 3		; 0x08 - Transponder Battery Charge OK
.equ	TPPSW		= 2		; 0x04 - Transponder Power Switch
.equ	TPGAP		= 1		; 0x02 - Transponder GAP Signal
.equ	TPA		= 0		; 0x01 - Transponder Active



; ====	MEM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EEST bits		------------------------
.equ	EESYN_MASK	= 0x0F		;      - EEPROM Syndrome (4 bits)
.equ	EESYN0		= 0		;          EESYN BIT0 position

; ----------	Register PGMST bits		------------------------
.equ	PGMSYN_MASK	= 0x1F		;      - Program Memory Syndrome (5 bits)
.equ	PGMSYN0		= 0		;          PGMSYN BIT0 position



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

; ----------	Register SFS bits		------------------------
.equ	SFOFL		= 2		; 0x04 - Support FIFO Overflow Flag
.equ	SFUFL		= 1		; 0x02 - Support FIFO Underflow Flag
.equ	SFFLRF		= 0		; 0x01 - Support FIFO Fill-Level Reached Status Flag



; ====	SPI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SFFR bits		------------------------
.equ	TFC		= 7		; 0x80 - SPI Tx Buffer Clear
.equ	TFL_MASK	= 0x70		;      - Transmit Buffer Fill Level (3 bits)
.equ	TFL0		= 4		;          TFL BIT0 position
.equ	RFC		= 3		; 0x08 - Rx Buffer Clear
.equ	RFL_MASK	= 0x07		;      - Receive Buffer Fill Level (3 bits)
.equ	RFL0		= 0		;          RFL BIT0 position

; ----------	Register SFIR bits		------------------------
.equ	STIE		= 7		; 0x80 - SPI Rx Buffer Interrupt Enable
.equ	TIL_MASK	= 0x70		;      - Transmit Buffer Interrupt Level (3 bits)
.equ	TIL0		= 4		;          TIL BIT0 position
.equ	SRIE		= 3		; 0x08 - Rx Buffer Interrupt Enable
.equ	RIL_MASK	= 0x07		;      - Receive Buffer Interrupt Level (3 bits)
.equ	RIL0		= 0		;          RIL BIT0 position

; ----------	Register SPCR bits		------------------------
.equ	SPIE		= 7		; 0x80 - Spe Interrupt Enable
.equ	SPE		= 6		; 0x40 - SPI Enable
.equ	DORD		= 5		; 0x20 - Data Order
.equ	MSTR		= 4		; 0x10 - Master/Slave Select
.equ	CPOL		= 3		; 0x08 - Clock Polarity
.equ	CPHA		= 2		; 0x04 - Clock Phase
.equ	SPR_MASK	= 0x03		;      - SPI Clock Rate Select (2 bits)
.equ	SPR0		= 0		;          SPR BIT0 position
; ::::  SPR	:::: bitfield values
;			0x00		; clkio/4
;			0x01		; clkio/16
;			0x02		; clkio/64
;			0x03		; clkio/128

; ----------	Register SPSR bits		------------------------
.equ	SPIF		= 7		; 0x80 - SPI Interrupt Flag
.equ	TXIF		= 5		; 0x20 - Tx Buffer Interrupt Flag
.equ	RXIF		= 4		; 0x10 - Rx Buffer Interrupt Flag
.equ	SPI2X		= 0		; 0x01 - Double SPI Speed Bit



; ====	SPI2 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register SP2CR bits		------------------------
.equ	SP2IE		= 7		; 0x80 - Spi2 Interrupt Enable
.equ	SP2E		= 6		; 0x40 - SPI2 Enable
.equ	DORD2		= 5		; 0x20 - Data Order
.equ	MSTR2		= 4		; 0x10 - Master/Slave Select
.equ	CPOL2		= 3		; 0x08 - Clock Polarity
.equ	CPHA2		= 2		; 0x04 - Clock Phase
.equ	SP2R_MASK	= 0x03		;      - SPI2 Clock Rate Select (2 bits)
.equ	SP2R0		= 0		;          SP2R BIT0 position
; ::::  SP2R	:::: bitfield values
;			0x00		; clkio/4
;			0x01		; clkio/16
;			0x02		; clkio/64
;			0x03		; clkio/128

; ----------	Register SP2SR bits		------------------------
.equ	SP2IF		= 7		; 0x80 - SPI2 Interrupt Flag
.equ	WCOL2		= 6		; 0x40 - Write Colliion Flag
.equ	SPI22X		= 0		; 0x01 - Double SPI2 Speed Bit



; ====	SSM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register MSMCR1 bits		------------------------
.equ	MSMSM0_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 0 (4 bits)
.equ	MSMSM00		= 0		;          MSMSM0 BIT0 position
.equ	MSMSM1_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 1 (4 bits)
.equ	MSMSM10		= 4		;          MSMSM1 BIT0 position
; ::::  MSMSM0	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; TX DSP enable
;			0x04		; TX DSP disable
;			0x05		; Send telegram
;			0x06		; Shut down
;			0x07		; VCO Tuning
;			0x08		; Antenna Tuning
; ::::  MSMSM1	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; TX DSP enable
;			0x40		; TX DSP disable
;			0x50		; Send telegram
;			0x60		; Shut down
;			0x70		; VCO Tuning
;			0x80		; Antenna Tuning

; ----------	Register MSMCR2 bits		------------------------
.equ	MSMSM2_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 2 (4 bits)
.equ	MSMSM20		= 0		;          MSMSM2 BIT0 position
.equ	MSMSM3_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 3 (4 bits)
.equ	MSMSM30		= 4		;          MSMSM3 BIT0 position
; ::::  MSMSM2	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; TX DSP enable
;			0x04		; TX DSP disable
;			0x05		; Send telegram
;			0x06		; Shut down
;			0x07		; VCO Tuning
;			0x08		; Antenna Tuning
; ::::  MSMSM3	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; TX DSP enable
;			0x40		; TX DSP disable
;			0x50		; Send telegram
;			0x60		; Shut down
;			0x70		; VCO Tuning
;			0x80		; Antenna Tuning

; ----------	Register MSMCR3 bits		------------------------
.equ	MSMSM4_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 4 (4 bits)
.equ	MSMSM40		= 0		;          MSMSM4 BIT0 position
.equ	MSMSM5_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 5 (4 bits)
.equ	MSMSM50		= 4		;          MSMSM5 BIT0 position
; ::::  MSMSM4	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; TX DSP enable
;			0x04		; TX DSP disable
;			0x05		; Send telegram
;			0x06		; Shut down
;			0x07		; VCO Tuning
;			0x08		; Antenna Tuning
; ::::  MSMSM5	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; TX DSP enable
;			0x40		; TX DSP disable
;			0x50		; Send telegram
;			0x60		; Shut down
;			0x70		; VCO Tuning
;			0x80		; Antenna Tuning

; ----------	Register MSMCR4 bits		------------------------
.equ	MSMSM6_MASK	= 0x0F		;      - Master State Machine SubState Machine Select 6 (4 bits)
.equ	MSMSM60		= 0		;          MSMSM6 BIT0 position
.equ	MSMSM7_MASK	= 0xF0		;      - Master State Machine SubState Machine Select 7 (4 bits)
.equ	MSMSM70		= 4		;          MSMSM7 BIT0 position
; ::::  MSMSM6	:::: bitfield values
;			0x00		; None/Stop
;			0x01		; PLL en
;			0x02		; PLL lock
;			0x03		; TX DSP enable
;			0x04		; TX DSP disable
;			0x05		; Send telegram
;			0x06		; Shut down
;			0x07		; VCO Tuning
;			0x08		; Antenna Tuning
; ::::  MSMSM7	:::: bitfield values
;			0x00		; None/Stop
;			0x10		; PLL en
;			0x20		; PLL lock
;			0x30		; TX DSP enable
;			0x40		; TX DSP disable
;			0x50		; Send telegram
;			0x60		; Shut down
;			0x70		; VCO Tuning
;			0x80		; Antenna Tuning

; ----------	Register MSMSTR bits		------------------------
.equ	SSMMST_MASK	= 0x1F		;      - Sequencer State Machine Master State (5 bits)
.equ	SSMMST0		= 0		;          SSMMST BIT0 position

; ----------	Register SSMCR bits		------------------------
.equ	SSMTAE		= 5		; 0x20 - Sequencer State Machine Tx Ask-Shaping Enable
.equ	SSMPVE		= 4		; 0x10 - Sequencer State Machine PV Enable
.equ	SSMTPE		= 3		; 0x08 - Sequencer State Machine Tx Preemphasis Enable
.equ	SSMTGE		= 2		; 0x04 - Sequencer State Machine Tx Gauss Enable

; ----------	Register SSMFBR bits		------------------------
.equ	SSMPLDT		= 5		; 0x20 - Sequencer State Machine PLL Lock Delay Time

; ----------	Register SSMIFR bits		------------------------
.equ	SSMIF		= 0		; 0x01 - Sequencer State Machine Interrupt Flag

; ----------	Register SSMIMR bits		------------------------
.equ	SSMIM		= 0		; 0x01 - Sequencer State Machine Interrupt Mask

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



; ====	SUP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register RCTCAL bits		------------------------
.equ	DI_MRCBG	= 4		; 0x10 - Disable MRC Oscillator Bandgap
.equ	MRCTC_MASK	= 0x0E		;      - Medium frequency RC Oscillator Temperature Compensation (3 bits)
.equ	MRCTC0		= 1		;          MRCTC BIT0 position
.equ	FRCTC		= 0		; 0x01 - FRC Oscillator Temperature Compensation bit

; ----------	Register SUPCA1 bits		------------------------
.equ	PVCAL_MASK	= 0xF0		;      - Power Amplifier Regulator Calibration (4 bits)
.equ	PVCAL0		= 4		;          PVCAL BIT0 position
.equ	PVDIC		= 3		; 0x08 - Power Amplifier Regulator Double Internal Current
.equ	PV22		= 2		; 0x04 - Power Amplifier Voltage 2.2V

; ----------	Register SUPCA2 bits		------------------------
.equ	BGCAL_MASK	= 0x0F		;      - Band Gap Calibration (4 bits)
.equ	BGCAL0		= 0		;          BGCAL BIT0 position

; ----------	Register SUPCA3 bits		------------------------
.equ	ACAL_MASK	= 0xFF		;      - AVCC Regulator Output Voltage Calibration (8 bits)
.equ	ACAL0		= 0		;          ACAL BIT0 position

; ----------	Register SUPCA4 bits		------------------------
.equ	ICONST_MASK	= 0x3F		;      - ICONST Constant current of bandgap (6 bits)
.equ	ICONST0		= 0		;          ICONST BIT0 position

; ----------	Register SUPCA5 bits		------------------------
.equ	IPTAT_MASK	= 0x3F		;      - IPTAT current of bandgap (6 bits)
.equ	IPTAT0		= 0		;          IPTAT BIT0 position

; ----------	Register SUPCA6 bits		------------------------
.equ	VBGTR_MASK	= 0xFF		;      - Threshold voltage of bandgap (8 bits)
.equ	VBGTR0		= 0		;          VBGTR BIT0 position

; ----------	Register SUPCA7 bits		------------------------
.equ	LFVCCBD_MASK	= 0x38		;      - VREF voltage for LFVCC Brown-out-Detector (3 bits)
.equ	LFVCCBD0	= 3		;          LFVCCBD BIT0 position
.equ	VCCCAL_MASK	= 0x07		;      - LFVCC and DVCC Output Voltage Calibration (3 bits)
.equ	VCCCAL0		= 0		;          VCCCAL BIT0 position

; ----------	Register SUPCA8 bits		------------------------
.equ	DVCCBD_MASK	= 0x38		;      - VREF voltage for DVCC Brown-out-Detector (3 bits)
.equ	DVCCBD0		= 3		;          DVCCBD BIT0 position
.equ	VSWBD_MASK	= 0x07		;      - VSIG voltage for LFVCC Brown-out-Detector (3 bits)
.equ	VSWBD0		= 0		;          VSWBD BIT0 position

; ----------	Register SUPCA9 bits		------------------------
.equ	VMEM_MASK	= 0xFF		;      - VMEM ldo voltage (8 bits)
.equ	VMEM0		= 0		;          VMEM BIT0 position

; ----------	Register SUPCR bits		------------------------
.equ	VMEMEN		= 7		; 0x80 - Memory Voltage Regulator Enable
.equ	VMRESM		= 6		; 0x40 - VMEM Reset Mask
.equ	DVHEN		= 5		; 0x20 - DVCC High Current Mode Enable
.equ	AVEN		= 4		; 0x10 - AVCC Enable
.equ	AVDIC		= 3		; 0x08 - AVCC Double Internal Current
.equ	PVEN		= 2		; 0x04 - Power amplifier Voltage supply Enable
.equ	AVCCLM		= 1		; 0x02 - AVCC Low Interrupt Mask
.equ	AVCCRM		= 0		; 0x01 - AVCC Reset Interrupt Mask

; ----------	Register SUPFR bits		------------------------
.equ	AVCCLF		= 1		; 0x02 - AVCC low interrupt flag
.equ	AVCCRF		= 0		; 0x01 - AVCC reset interrupt flag

; ----------	Register VMCR bits		------------------------
.equ	VMRS		= 7		; 0x80 - Voltage Monitor Range Select
.equ	VMPS_MASK	= 0x60		;      - Voltage Monitor Power Supply Select (2 bits)
.equ	VMPS0		= 5		;          VMPS BIT0 position
.equ	VMIM		= 4		; 0x10 - Voltage Monitor Interrupt Mask
.equ	VMLS_MASK	= 0x0F		;      - Voltage Monitor Level Select (4 bits)
.equ	VMLS0		= 0		;          VMLS BIT0 position

; ----------	Register VMSCR bits		------------------------
.equ	VMDIH		= 1		; 0x02 - Voltage Monitor Disable Hysteresis
.equ	VMF		= 0		; 0x01 - Voltage Monitor Flag



; ====	TIMER0_WDT MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register T0CR bits		------------------------
.equ	T0PR		= 4		; 0x10 - Timer0 Prescaler Reset
.equ	T0IE		= 3		; 0x08 - Timer0 Interrupt Enable
.equ	T0PS_MASK	= 0x07		;      - Timer0 Prescaler Select (3 bits)
.equ	T0PS0		= 0		;          T0PS BIT0 position
; ::::  T0PS	:::: bitfield values
;			0x00		; 0.256ms typ
;			0x01		; 1ms typ
;			0x02		; 8ms typ
;			0x03		; 0.5s typ
;			0x04		; 1s typ
;			0x05		; 8s typ
;			0x06		; 67s typ
;			0x07		; 134s typ

; ----------	Register T0IFR bits		------------------------
.equ	T0F		= 0		; 0x01 - Timer0 Flag

; ----------	Register WDTCR bits		------------------------
.equ	WDCE		= 4		; 0x10 - Watchdog Change Enable
.equ	WDE		= 3		; 0x08 - Watchdog System Reset Enable
.equ	WDPS_MASK	= 0x07		;      - Watchdog Prescaler Select (3 bits)
.equ	WDPS0		= 0		;          WDPS BIT0 position
; ::::  WDPS	:::: bitfield values
;			0x00		; 1ms typ (0.85ms min)
;			0x01		; 4ms typ (3.4ms min)
;			0x02		; 32ms typ (27ms min)
;			0x03		; 2.1s typ (1.75s min)
;			0x04		; 4.2s typ (3.5s min)
;			0x05		; 16.8s typ (14s min)
;			0x06		; 134s typ (110s min)
;			0x07		; 268s typ (220s min)



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
; ::::  T1DC	:::: bitfield values
;			0x00		; Bypass
;			0x40		; Duty cycle 1/1 (div 2)
;			0x80		; Duty cycle 1/2 (div 3)
;			0xC0		; Duty cycle 1/3 (div 4)
; ::::  T1CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_frc
;			0x02		; clk_T
;			0x03		; clk_mrc



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
; ::::  T2DC	:::: bitfield values
;			0x00		; Bypass
;			0x40		; Duty cycle 1/1 (div 2)
;			0x80		; Duty cycle 1/2 (div 3)
;			0xC0		; Duty cycle 1/3 (div 4)
; ::::  T2CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_mrc
;			0x02		; clk_T
;			0x03		; clk_xto4



; ====	TIMER3 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register T3CR bits		------------------------
.equ	T3ENA		= 7		; 0x80 - Timer3 Enable
.equ	T3TOS		= 6		; 0x40 - Timer3 Toggle with Start
.equ	T3RES		= 5		; 0x20 - Timer3 Reset
.equ	T3TOP		= 4		; 0x10 - Timer3 Toggle Output Preset
.equ	T3CPRM		= 3		; 0x08 - Timer3 CaPture Reset Mask
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
.equ	T3CS_MASK	= 0x03		;      - Timer3 Clock Select (2 bits)
.equ	T3CS0		= 0		;          T3CS BIT0 position
; ::::  T3CS	:::: bitfield values
;			0x00		; clk_frc
;			0x01		; clk_T
;			0x02		; clk_xto4
;			0x03		; clk_TEI

; ----------	Register T3MRB bits		------------------------
.equ	T3ICS_MASK	= 0xE0		;      - Timer3 Input Capture Select (3 bits)
.equ	T3ICS0		= 5		;          T3ICS BIT0 position
.equ	T3CE_MASK	= 0x18		;      - Timer3 Capture Edge select (2 bits)
.equ	T3CE0		= 3		;          T3CE BIT0 position
.equ	T3CNC		= 2		; 0x04 - Timer3 input Capture Noise Canceller
.equ	T3SCE		= 1		; 0x02 - Timer3 Software Capture Enable
; ::::  T3ICS	:::: bitfield values
;			0x00		; clk_T2
;			0x20		; clk_T1
;			0x40		; clk_T4
;			0x60		; TICP
;			0x80		; LFES
;			0xA0		; clk_src
;			0xC0		; TPGAP
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
.equ	T4CPRM		= 3		; 0x08 - Timer4 CaPture Reset Mask
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
.equ	T4PS_MASK	= 0x1C		;      - Timer4 Prescaler Select (3 bits)
.equ	T4PS0		= 2		;          T4PS BIT0 position
.equ	T4CS_MASK	= 0x03		;      - Timer4 Clock Select (2 bits)
.equ	T4CS0		= 0		;          T4CS BIT0 position
; ::::  T4CS	:::: bitfield values
;			0x00		; clk_src
;			0x01		; clk_T
;			0x02		; clk_mrc
;			0x03		; clk_frc

; ----------	Register T4MRB bits		------------------------
.equ	T4ICS_MASK	= 0xE0		;      - Timer4 Input Capture Select (3 bits)
.equ	T4ICS0		= 5		;          T4ICS BIT0 position
.equ	T4CE_MASK	= 0x18		;      - Timer4 Capture Edge select (2 bits)
.equ	T4CE0		= 3		;          T4CE BIT0 position
.equ	T4CNC		= 2		; 0x04 - Timer4 input Capture Noise Canceller
.equ	T4SCE		= 1		; 0x02 - Timer4 Software Capture Enable
; ::::  T4ICS	:::: bitfield values
;			0x00		; clk_T2
;			0x20		; clk_T1
;			0x40		; clk_T3
;			0x60		; TICP
;			0x80		; LFES
;			0xA0		; clk_src
;			0xC0		; TPGAP
; ::::  T4CE	:::: bitfield values
;			0x00		; disable
;			0x08		; rising edge
;			0x10		; falling edge
;			0x18		; both edges



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



; ====	TMO MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TMOCR bits		------------------------
.equ	TO4PIS_MASK	= 0xC0		;      - Timer modulator Output 4 Port Interface Select (2 bits)
.equ	TO4PIS0		= 6		;          TO4PIS BIT0 position
.equ	TO3PIS_MASK	= 0x30		;      - Timer modulator Output 3 Port Interface Select (2 bits)
.equ	TO3PIS0		= 4		;          TO3PIS BIT0 position
.equ	TO2PIS_MASK	= 0x0C		;      - Timer modulator Output 2 Port Interface Select (2 bits)
.equ	TO2PIS0		= 2		;          TO2PIS BIT0 position
.equ	TO1PIS_MASK	= 0x03		;      - Timer modulator Output 1 Port Interface Select (2 bits)
.equ	TO1PIS0		= 0		;          TO1PIS BIT0 position
; ::::  TO4PIS	:::: bitfield values
;			0x00		; Port D5 Data Register
;			0x40		; M1 - Toggle Register Timer1
;			0x80		; M2 - Toggle Register Timer2
;			0xC0		; M3 - Toggle Register Timer3
; ::::  TO3PIS	:::: bitfield values
;			0x00		; Port D4 Data Register
;			0x10		; M1 - Toggle Register Timer1
;			0x20		; M3 - Toggle Register Timer3
;			0x30		; M4 - Toggle Register Timer4
; ::::  TO2PIS	:::: bitfield values
;			0x00		; Port D3 Data Register
;			0x04		; M1 - Toggle Register Timer1
;			0x08		; M2 - Toggle Register Timer2
;			0x0C		; M4 - Toggle Register Timer4
; ::::  TO1PIS	:::: bitfield values
;			0x00		; Port D2 Data Register
;			0x01		; M1 - Toggle Register Timer1
;			0x02		; M2 - Toggle Register Timer2
;			0x03		; M3 - Toggle Register Timer3



; ====	TPLF_CAL MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register LFCALR1 bits		------------------------
.equ	SEL150M_MASK	= 0xE0		;      - Bandgap Calibration of VREF1 (3 bits)
.equ	SEL150M0	= 5		;          SEL150M BIT0 position
.equ	ICOMPRT_MASK	= 0x18		;      - icomp_range_trim (2 bits)
.equ	ICOMPRT0	= 3		;          ICOMPRT BIT0 position
.equ	LFSTC_MASK	= 0x07		;      - lf_stim_trim_current (3 bits)
.equ	LFSTC0		= 0		;          LFSTC BIT0 position

; ----------	Register LFCALR2 bits		------------------------
.equ	TIKOMPD		= 7		; 0x80 - trim_ikomp_data
.equ	LFSRM		= 6		; 0x40 - lf_stim_res_mode
.equ	LFSTRES_MASK	= 0x3F		;      - lf_stim_trim_res (6 bits)
.equ	LFSTRES0	= 0		;          LFSTRES BIT0 position

; ----------	Register LFCALR3 bits		------------------------
.equ	TCGAIN1_MASK	= 0xFF		;      - Trim coarse gain (8 bits)
.equ	TCGAIN10	= 0		;          TCGAIN1 BIT0 position

; ----------	Register LFCALR4 bits		------------------------
.equ	TCGAIN27	= 7		; 0x80 - Trim coarse gain bit 15
.equ	TCGAIN26	= 6		; 0x40 - Trim coarse gain bit 14
.equ	TCGAIN25	= 5		; 0x20 - Trim coarse gain bit 13
.equ	TCGAIN24	= 4		; 0x10 - Trim coarse gain bit 12
.equ	TCGAIN23	= 3		; 0x08 - Trim coarse gain bit 11
.equ	TCGAIN22	= 2		; 0x04 - Trim coarse gain bit 10
.equ	TCGAIN21	= 1		; 0x02 - Trim coarse gain bit 9
.equ	TCGAIN20	= 0		; 0x01 - Trim coarse gain bit 8

; ----------	Register LFCALR5 bits		------------------------
.equ	TCGAIN37	= 7		; 0x80 - Trim coarse gain bit 23
.equ	TCGAIN36	= 6		; 0x40 - Trim coarse gain bit 22
.equ	TCGAIN35	= 5		; 0x20 - Trim coarse gain bit 21
.equ	TCGAIN34	= 4		; 0x10 - Trim coarse gain bit 20
.equ	TCGAIN32	= 2		; 0x04 - Trim coarse gain bit 18
.equ	TCGAIN31	= 1		; 0x02 - Trim coarse gain bit 17
.equ	TCGAIN30	= 0		; 0x01 - Trim coarse gain bit 16

; ----------	Register LFCALR6 bits		------------------------
.equ	TCGAIN44	= 4		; 0x10 - Trim coarse gain bit 28
.equ	TCGAIN43	= 3		; 0x08 - Trim coarse gain bit 27
.equ	TCGAIN42	= 2		; 0x04 - Trim coarse gain bit 26
.equ	TCGAIN41	= 1		; 0x02 - Trim coarse gain bit 25
.equ	TCGAIN40	= 0		; 0x01 - Trim coarse gain bit 24

; ----------	Register LFCPR bits		------------------------
.equ	LFCPCE		= 7		; 0x80 - LF Calibration Protect Change Enable
.equ	TPCD		= 6		; 0x40 - Transponder Constant Disable
.equ	LFCALRY		= 1		; 0x02 - LF Calibration Ready
.equ	LFCALP		= 0		; 0x01 - LF Calibration Protection

; ----------	Register SRCCAL bits		------------------------
.equ	SRCCAL8		= 7		; 0x80 - Slow RC oscillator calibration bit 8
.equ	SRCCAL7		= 6		; 0x40 - Slow RC oscillator calibration bit 7
.equ	SRCCAL6		= 5		; 0x20 - Slow RC oscillator calibration bit 6
.equ	SRCCAL5		= 4		; 0x10 - Slow RC oscillator calibration bit 5
.equ	SRCCAL4		= 3		; 0x08 - Slow RC oscillator calibration bit 4
.equ	SRCCAL3		= 2		; 0x04 - Slow RC oscillator calibration bit 3
.equ	SRCCAL2		= 1		; 0x02 - Slow RC oscillator calibration bit 2
.equ	SRCCAL1		= 0		; 0x01 - Slow RC oscillator calibration bit 1

; ----------	Register SRCCALL bits		------------------------
.equ	SRCCAL0		= 0		; 0x01 - Slow RC oscillator calibration bit 0

; ----------	Register SRCTCAL bits		------------------------
.equ	HOLD_SRC	= 7		; 0x80 - Stop SRC-Osccillator output
.equ	DIS_SRC		= 6		; 0x40 - Disable SRC Bandgap
.equ	SRCS_MASK	= 0x18		;      - SRC Oscillator Select delta current (2 bits)
.equ	SRCS0		= 3		;          SRCS BIT0 position
.equ	SRCTC_MASK	= 0x07		;      - SRC Oscillator Temperature Compensation (3 bits)
.equ	SRCTC0		= 0		;          SRCTC BIT0 position

; ----------	Register TPCALR1 bits		------------------------
.equ	TPBG_IREF_MASK	= 0x3F		;      - Transponder Bandgap IREF (6 bits)
.equ	TPBG_IREF0	= 0		;          TPBG_IREF BIT0 position

; ----------	Register TPCALR11 bits		------------------------
.equ	TPCALR117	= 7		; 0x80 - 
.equ	TPCALR116	= 6		; 0x40 - 
.equ	TPCALR115	= 5		; 0x20 - 
.equ	ENVSWBD		= 4		; 0x10 - Enable VSW Brown Out Detection
.equ	ENLFBD		= 3		; 0x08 - Enable LFVCC Brown Out Detection
.equ	ENDVBD		= 2		; 0x04 - Enable DVCC Brown Out Detection
.equ	MTBTR1		= 1		; 0x02 - Measurement Buffer Trimming bit 1
.equ	MTBTR0		= 0		; 0x01 - Measurement Buffer Trimming bit 0

; ----------	Register TPCALR12 bits		------------------------
.equ	TPCALR127	= 7		; 0x80 - 
.equ	TPCALR126	= 6		; 0x40 - 
.equ	TPCALR125	= 5		; 0x20 - 
.equ	TPCALR124	= 4		; 0x10 - 
.equ	TPCALR123	= 3		; 0x08 - 
.equ	TPCALR122	= 2		; 0x04 - 
.equ	TPCALR121	= 1		; 0x02 - 
.equ	TPDMOD		= 0		; 0x01 - Transponder Direct Modulation

; ----------	Register TPCALR2 bits		------------------------
.equ	TPBG_UREF_MASK	= 0x7F		;      - Transponder Bandgap UREF (7 bits)
.equ	TPBG_UREF0	= 0		;          TPBG_UREF BIT0 position

; ----------	Register TPCALR3 bits		------------------------
.equ	TPORTH_MASK	= 0x18		;      - Transponder Power On Reset Threshold (2 bits)
.equ	TPORTH0		= 3		;          TPORTH BIT0 position
.equ	LFVCC_TPCAL2	= 2		; 0x04 - Not used
.equ	LFVCC_TPCAL1	= 1		; 0x02 - Not used
.equ	LFVCC_TPCAL0	= 0		; 0x01 - Not used

; ----------	Register TPCALR4 bits		------------------------
.equ	COMPVC_CAL_MASK	= 0x18		;      - Comparator VC Calibration (2 bits)
.equ	COMPVC_CAL0	= 3		;          COMPVC_CAL BIT0 position
.equ	TPINIT_CAL_MASK	= 0x07		;      - Transponder Init Calibration (3 bits)
.equ	TPINIT_CAL0	= 0		;          TPINIT_CAL BIT0 position



; ====	TWI1 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TW1AMR bits		------------------------
.equ	TW1AM_MASK	= 0xFE		;      - TWI1 Address Mask (7 bits)
.equ	TW1AM0		= 1		;          TW1AM BIT0 position

; ----------	Register TW1AR bits		------------------------
.equ	TW1A_MASK	= 0xFE		;      - TWI1 (Slave) Address (7 bits)
.equ	TW1A0		= 1		;          TW1A BIT0 position
.equ	TW1GCE		= 0		; 0x01 - TWI1 General Call Recognition Enable

; ----------	Register TW1CR bits		------------------------
.equ	TW1INT		= 7		; 0x80 - TWI1 Interrupt Flag
.equ	TW1EA		= 6		; 0x40 - TWI1 Enable Acknowledge
.equ	TW1STA		= 5		; 0x20 - TWI1 START Condition
.equ	TW1STO		= 4		; 0x10 - TWI1 STOP Condition
.equ	TW1WC		= 3		; 0x08 - TWI1 Write Collision Flag
.equ	TW1EN		= 2		; 0x04 - TWI1 Enable
.equ	TW1IE		= 0		; 0x01 - TWI1 Interrupt Enable

; ----------	Register TW1SR bits		------------------------
.equ	TW1S_MASK	= 0xF8		;      - TWI1 Status (5 bits)
.equ	TW1S0		= 3		;          TW1S BIT0 position
.equ	TW1PS_MASK	= 0x03		;      - TWI1 Prescaler (2 bits)
.equ	TW1PS0		= 0		;          TW1PS BIT0 position
; ::::  TW1PS	:::: bitfield values
;			0x00		; 1
;			0x01		; 4
;			0x02		; 16
;			0x03		; 64



; ====	TWI2 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TW2AMR bits		------------------------
.equ	TW2AM_MASK	= 0xFE		;      - TWI2 Address Mask (7 bits)
.equ	TW2AM0		= 1		;          TW2AM BIT0 position

; ----------	Register TW2AR bits		------------------------
.equ	TW2A_MASK	= 0xFE		;      - TWI2 (Slave) Address (7 bits)
.equ	TW2A0		= 1		;          TW2A BIT0 position
.equ	TW2GCE		= 0		; 0x01 - TWI2 General Call Recognition Enable

; ----------	Register TW2CR bits		------------------------
.equ	TW2INT		= 7		; 0x80 - TWI2 Interrupt Flag
.equ	TW2EA		= 6		; 0x40 - TWI2 Enable Acknowledge
.equ	TW2STA		= 5		; 0x20 - TWI2 START Condition
.equ	TW2STO		= 4		; 0x10 - TWI2 STOP Condition
.equ	TW2WC		= 3		; 0x08 - TWI2 Write Collision Flag
.equ	TW2EN		= 2		; 0x04 - TWI2 Enable
.equ	TW2IE		= 0		; 0x01 - TWI2 Interrupt Enable

; ----------	Register TW2SR bits		------------------------
.equ	TW2S_MASK	= 0xF8		;      - TWI2 Status (5 bits)
.equ	TW2S0		= 3		;          TW2S BIT0 position
.equ	TW2PS_MASK	= 0x03		;      - TWI2 Prescaler (2 bits)
.equ	TW2PS0		= 0		;          TW2PS BIT0 position
; ::::  TW2PS	:::: bitfield values
;			0x00		; 1
;			0x01		; 4
;			0x02		; 16
;			0x03		; 64



; ====	TXDSP MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register BBTE2 bits		------------------------
.equ	DITDIS		= 1		; 0x02 - Dither Disable on Sigma Delta Modulator
.equ	TDEPO		= 0		; 0x01 - Tx DSP External Pin Output

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
.equ	ANTT		= 5		; 0x20 - Antenna Tuning Active
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
;			0x00		; BT = 2
;			0x01		; BT = 1.5
;			0x02		; BT = 1
;			0x03		; BT = 0.5



; ====	TXM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TMCR1 bits		------------------------
.equ	TMCIM		= 4		; 0x10 - Tx Modulator Transmission Complete Interrupt Mask
.equ	TMSCS		= 3		; 0x08 - Tx Modulator Serial Output Clock Select
.equ	TMPIS_MASK	= 0x07		;      - Tx Modulator Port Interface Select (3 bits)
.equ	TMPIS0		= 0		;          TMPIS BIT0 position
; ::::  TMPIS	:::: bitfield values
;			0x00		; Port D1
;			0x01		; M2 - Toggle Register Timer2
;			0x02		; M3 - Toggle Register Timer3
;			0x03		; M4 - Toggle Register Timer4
;			0x04		; SO Tx Modulator Serial Output
;			0x05		; M1 - Toggle Register Timer1

; ----------	Register TMCR2 bits		------------------------
.equ	TMLSB		= 6		; 0x40 - Tx Modulator Least Significant Bit First
.equ	TMSSE		= 5		; 0x20 - Tx Modulator Stop Sequence Enable
.equ	TMPOL		= 4		; 0x10 - Tx Modulator Polarity
.equ	TMNRZE		= 3		; 0x08 - Tx Modulator NRZ Mode Enable
.equ	TMCRCSE_MASK	= 0x06		;      - Tx Modulator CRC Select (2 bits)
.equ	TMCRCSE0	= 1		;          TMCRCSE BIT0 position
.equ	TMCRCE		= 0		; 0x01 - Tx Modulator CRC Enable
; ::::  TMCRCSE	:::: bitfield values
;			0x00		; CRC 4-bit
;			0x02		; CRC 8-bit
;			0x06		; CRC 16-bit

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



; ====	VX_MODE MODULE REGISTERS BITS DEFINITION	========
;
; ----------	Register VXMCTRL bits		------------------------
.equ	EN_VX_IN	= 4		; 0x10 - Enable VX Inputs
.equ	EN_VX_OUT	= 3		; 0x08 - Enable PB4 as an VX/VBAT Supply Output
.equ	EN_VX		= 2		; 0x04 - Enable the VX_LDO
.equ	VX_SEL1		= 1		; 0x02 - Select VX voltage level
.equ	VX_SEL0		= 0		; 0x01 - Select VX voltage level




; **********************************************************************
; ***************	INTERRUPT VECTORS	************************
; **********************************************************************
;
.equ	INT_VECTORS_NUM		= 51
.equ	INT_VECTORS_SIZE	= 0x66
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
;	8	T0INT		; Timer0 Interval Interrupt
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
;	30	AES		; AES Krypto Unit Interrupt
;	31	TPINT		; Transponder Mode Interrupt
;	32	TPTOERR		; Transponder Timeout Error Interrupt
;	33	LFID0INT	; LF receiver Identifier 0 Interrupt
;	34	LFID1INT	; LF receiver Identifier 1 Interrupt
;	35	LFFEINT		; LF receiver Frame End Interrupt
;	36	LFBCR		; LF receiver Bit Count Reached Interrupt
;	37	LFPBD		; LF receiver PreBurst Detected Interrupt
;	38	LFDE		; LF receiver Decoder Error Interrupt
;	39	LFEOT		; LF receiver End of Telegram Interrupt
;	40	LFTCOR		; LF receiver Timer Compare Match Interrupt
;	41	LFRSCO		; LF receiver RSSI measurement Interrupt
;	42	LDFFLR		; LF Data FIFO Fill Level Reached Interrupt
;	43	LDFOUE		; LF Data FIFO Overflow or Underflow Error Interrupt
;	44	EXCM		; External input Clock monitoring Interrupt
;	45	E2CINT		; EEPROM Error Correction Interrupt
;	46	ERDY		; EEPROM Ready Interrupt
;	47	SPMR		; Store Program Memory Ready
;	48	TWI1		; TWI1 Interrupt
;	49	SPI2		; SPI2 Interrupt
;	50	TWI2		; TWI2 Interrupt



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATA5702M322.inc"
;#	
;#	; FUSES LOW byte (addr 0x00)
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(0 <<CKSTART) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  & ~(0 <<BOOTRST) \
;#				  & ~(0 <<EEACC) \
;#				  & ~(0 <<PCEE1)
;#	; LOCKBITS LOCKBIT byte (addr 0x00)
;#	.set	LB		= 0x03	; No memory lock features enabled
;#	.set	LOCKBITS_LOCKBIT= 0xFF \
;#				  &  (~LB_MASK | LB)
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
;#		reti			; T0INT		 - Timer0 Interval Interrupt
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
;#		reti			; AES		 - AES Krypto Unit Interrupt
;#		reti			; TPINT		 - Transponder Mode Interrupt
;#		reti			; TPTOERR	 - Transponder Timeout Error Interrupt
;#		reti			; LFID0INT	 - LF receiver Identifier 0 Interrupt
;#		reti			; LFID1INT	 - LF receiver Identifier 1 Interrupt
;#		reti			; LFFEINT	 - LF receiver Frame End Interrupt
;#		reti			; LFBCR		 - LF receiver Bit Count Reached Interrupt
;#		reti			; LFPBD		 - LF receiver PreBurst Detected Interrupt
;#		reti			; LFDE		 - LF receiver Decoder Error Interrupt
;#		reti			; LFEOT		 - LF receiver End of Telegram Interrupt
;#		reti			; LFTCOR	 - LF receiver Timer Compare Match Interrupt
;#		reti			; LFRSCO	 - LF receiver RSSI measurement Interrupt
;#		reti			; LDFFLR	 - LF Data FIFO Fill Level Reached Interrupt
;#		reti			; LDFOUE	 - LF Data FIFO Overflow or Underflow Error Interrupt
;#		reti			; EXCM		 - External input Clock monitoring Interrupt
;#		reti			; E2CINT	 - EEPROM Error Correction Interrupt
;#		reti			; ERDY		 - EEPROM Ready Interrupt
;#		reti			; SPMR		 - Store Program Memory Ready
;#		reti			; TWI1		 - TWI1 Interrupt
;#		reti			; SPI2		 - SPI2 Interrupt
;#		reti			; TWI2		 - TWI2 Interrupt
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATA5702M322_INC_ */

; ************************ END OF FILE *********************************

