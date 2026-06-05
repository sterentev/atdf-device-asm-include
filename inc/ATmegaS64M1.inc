;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATmegaS64M1
;* Title             : Register/Mask/Bit Definitions for the ATmegaS64M1
;* File Name         : ATmegaS64M1.inc
;* Source Date       : 2026-01-22 07:11:00 UTC
;* Make Date         : 2026-06-05 09:18:04 UTC
;
;***********************************************************************

#ifndef _ATMEGAS64M1_INC_
#define _ATMEGAS64M1_INC_

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
.device	ATmegaS64M1
.equ	JTAGID		= 0x9684
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x96
.equ	SIGNATURE2	= 0x84


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
.equ	ADDR_IRAM_END			= 0x10FF
.equ	ADDR_IRAM_SIZE			= 0x1000

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x07FF
.equ	ADDR_EEPROM_SIZE		= 0x0800

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
.equ	PSCRB		= 5		; 0x20 - PSC Reset Behavior
.equ	PSCRVA		= 4		; 0x10 - PSCOUTnA Reset Value
.equ	PSCRVB		= 3		; 0x08 - PSC0UTnB Reset Value
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector Trigger Level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x06		; Brown-out detection at VCC=4.5 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x03		; Brown-out detection at VCC=4.4 V
;			0x02		; Brown-out detection at VCC=4.2 V
;			0x01		; Brown-out detection at VCC=2.8 V
;			0x00		; Brown-out detection at VCC=2.6 V

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PC6 as i/o pin)
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BOOTSZ_MASK	= 0x06		;      - Select Boot Size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Select Reset Vector
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=512 words Boot address=$7E00
;			0x04		; Boot Flash size=1024 words Boot address=$7C00
;			0x02		; Boot Flash size=2048 words Boot address=$7800
;			0x00		; Boot Flash size=4096 words Boot address=$7000

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTD1
.equ	SUT_CKSEL_MASK	= 0x3F		;      - Select Clock Source (6 bits)
.equ	SUT_CKSEL0	= 0		;          SUT_CKSEL BIT0 position
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x10		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms
;			0x20		; Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms
;			0x12		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4.1 ms
;			0x22		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;			0x08		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x18		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x28		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x38		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x09		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x19		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x29		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x39		; Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3A		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3B		; Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3C		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3D		; Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x0E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms
;			0x1E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms
;			0x2E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms
;			0x3E		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms
;			0x0F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms
;			0x1F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x2F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms
;			0x3F		; Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms
;			0x03		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x13		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4.1 ms
;			0x23		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 1K CK/14 CK + 65 ms
;			0x33		; PLL clock 16 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms
;			0x01		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 0 ms
;			0x11		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 4 ms
;			0x21		; PLL clock /4; PLL input: Ext. Clock; Start-up time PWRDWN/RESET: 6K CK/14 CK + 64 ms
;			0x05		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x15		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms
;			0x25		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms
;			0x35		; PLL clock /4; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms
;			0x04		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 0 ms
;			0x14		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 1K CK/14 CK + 4 ms
;			0x24		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4 ms
;			0x34		; Ext. Crystal Osc.; PLL input: Ext. Crystal Osc.; Start-up time PWRDWN/RESET: 16K CK/14 CK + 64 ms




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
.equ	CANMSG		= 0xFA		; [MEMORY MAPPED] Message Data Register
.equ	CANSTM		= 0xF8		; [MEMORY MAPPED] [___2 addrs___] Time Stamp Register
.equ	CANIDM1		= 0xF7		; [MEMORY MAPPED] Identifier Mask Register 1
.equ	CANIDM2		= 0xF6		; [MEMORY MAPPED] Identifier Mask Register 2
.equ	CANIDM3		= 0xF5		; [MEMORY MAPPED] Identifier Mask Register 3
.equ	CANIDM4		= 0xF4		; [MEMORY MAPPED] Identifier Mask Register 4
.equ	CANIDT1		= 0xF3		; [MEMORY MAPPED] Identifier Tag Register 1
.equ	CANIDT2		= 0xF2		; [MEMORY MAPPED] Identifier Tag Register 2
.equ	CANIDT3		= 0xF1		; [MEMORY MAPPED] Identifier Tag Register 3
.equ	CANIDT4		= 0xF0		; [MEMORY MAPPED] Identifier Tag Register 4
.equ	CANCDMOB	= 0xEF		; [MEMORY MAPPED] MOb Control and DLC Register
.equ	CANSTMOB	= 0xEE		; [MEMORY MAPPED] MOb Status Register
.equ	CANPAGE		= 0xED		; [MEMORY MAPPED] Page MOb Register
.equ	CANHPMOB	= 0xEC		; [MEMORY MAPPED] Highest Priority MOb Register
.equ	CANREC		= 0xEB		; [MEMORY MAPPED] Receive Error Counter Register
.equ	CANTEC		= 0xEA		; [MEMORY MAPPED] Transmit Error Counter Register
.equ	CANTTC		= 0xE8		; [MEMORY MAPPED] [___2 addrs___] TTC Timer Register
.equ	CANTIM		= 0xE6		; [MEMORY MAPPED] [___2 addrs___] Timer Register
.equ	CANTCON		= 0xE5		; [MEMORY MAPPED] Timer Control Register
.equ	CANBT3		= 0xE4		; [MEMORY MAPPED] CAN Bit Timing Register 3
.equ	CANBT2		= 0xE3		; [MEMORY MAPPED] CAN Bit Timing Register 2
.equ	CANBT1		= 0xE2		; [MEMORY MAPPED] CAN Bit Timing Register 1
.equ	CANSIT1		= 0xE1		; [MEMORY MAPPED] CAN Status Interrupt MOb Register 1 (empty)
.equ	CANSIT2		= 0xE0		; [MEMORY MAPPED] CAN Status Interrupt MOb Register 2
.equ	CANIE1		= 0xDF		; [MEMORY MAPPED] Enable Interrupt MOb Register 1 (empty)
.equ	CANIE2		= 0xDE		; [MEMORY MAPPED] Enable Interrupt MOb Register 2
.equ	CANEN1		= 0xDD		; [MEMORY MAPPED] Enable MOb Register 1(empty)
.equ	CANEN2		= 0xDC		; [MEMORY MAPPED] Enable MOb Register 2
.equ	CANGIE		= 0xDB		; [MEMORY MAPPED] CAN General Interrupt Enable Register
.equ	CANGIT		= 0xDA		; [MEMORY MAPPED] CAN General Interrupt Register Flags
.equ	CANGSTA		= 0xD9		; [MEMORY MAPPED] CAN General Status Register
.equ	CANGCON		= 0xD8		; [MEMORY MAPPED] CAN General Control Register
.equ	LINDAT		= 0xD2		; [MEMORY MAPPED] LIN Data Register
.equ	LINSEL		= 0xD1		; [MEMORY MAPPED] LIN Data Buffer Selection Register
.equ	LINIDR		= 0xD0		; [MEMORY MAPPED] LIN Identifier Register
.equ	LINDLR		= 0xCF		; [MEMORY MAPPED] LIN Data Length Register
.equ	LINBRR		= 0xCD		; [MEMORY MAPPED] [___2 addrs___] LIN Baud Rate Register
.equ	LINBTR		= 0xCC		; [MEMORY MAPPED] LIN Bit Timing Register
.equ	LINERR		= 0xCB		; [MEMORY MAPPED] LIN Error Register
.equ	LINENIR		= 0xCA		; [MEMORY MAPPED] LIN Enable Interrupt Register
.equ	LINSIR		= 0xC9		; [MEMORY MAPPED] LIN Status and Interrupt Register
.equ	LINCR		= 0xC8		; [MEMORY MAPPED] LIN Control Register
.equ	PIFR		= 0xBC		; [MEMORY MAPPED] PSC Interrupt Flag Register
.equ	PIM		= 0xBB		; [MEMORY MAPPED] PSC Interrupt Mask Register
.equ	PMIC2		= 0xBA		; [MEMORY MAPPED] PSC Module 2 Input Control Register
.equ	PMIC1		= 0xB9		; [MEMORY MAPPED] PSC Module 1 Input Control Register
.equ	PMIC0		= 0xB8		; [MEMORY MAPPED] PSC Module 0 Input Control Register
.equ	PCTL		= 0xB7		; [MEMORY MAPPED] PSC Control Register
.equ	POC		= 0xB6		; [MEMORY MAPPED] PSC Output Configuration
.equ	PCNF		= 0xB5		; [MEMORY MAPPED] PSC Configuration Register
.equ	PSYNC		= 0xB4		; [MEMORY MAPPED] PSC Synchro Configuration
.equ	POCR_RB		= 0xB2		; [MEMORY MAPPED] [___2 addrs___] PSC Output Compare RB Register 
.equ	POCR2SB		= 0xB0		; [MEMORY MAPPED] [___2 addrs___] PSC Module 2 Output Compare SB Register 
.equ	POCR2RA		= 0xAE		; [MEMORY MAPPED] [___2 addrs___] PSC Module 2 Output Compare RA Register 
.equ	POCR2SA		= 0xAC		; [MEMORY MAPPED] [___2 addrs___] PSC Module 2 Output Compare SA Register 
.equ	POCR1SB		= 0xAA		; [MEMORY MAPPED] [___2 addrs___] PSC Module 1 Output Compare SB Register 
.equ	POCR1RA		= 0xA8		; [MEMORY MAPPED] [___2 addrs___] PSC Module 1 Output Compare RA Register 
.equ	POCR1SA		= 0xA6		; [MEMORY MAPPED] [___2 addrs___] PSC Output Compare SA Register 
.equ	POCR0SB		= 0xA4		; [MEMORY MAPPED] [___2 addrs___] PSC Output Compare SB Register 
.equ	POCR0RA		= 0xA2		; [MEMORY MAPPED] [___2 addrs___] PSC Module 0 Output Compare RA Register 
.equ	POCR0SA		= 0xA0		; [MEMORY MAPPED] [___2 addrs___] PSC Module 0 Output Compare SA Register 
.equ	AC3CON		= 0x97		; [MEMORY MAPPED] Analog Comparator 3 Control Register
.equ	AC2CON		= 0x96		; [MEMORY MAPPED] Analog Comparator 2 Control Register
.equ	AC1CON		= 0x95		; [MEMORY MAPPED] Analog Comparator 1 Control Register
.equ	AC0CON		= 0x94		; [MEMORY MAPPED] Analog Comparator 0 Control Register
.equ	DAC		= 0x91		; [MEMORY MAPPED] [___2 addrs___] DAC Data Register
.equ	DACON		= 0x90		; [MEMORY MAPPED] DAC Control Register
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Output Compare Register B
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Output Compare Register A
.equ	ICR1		= 0x86		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1 Input Capture Register
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] [___2 addrs___] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	ADMUX		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register
.equ	ADC		= 0x78		; [MEMORY MAPPED] [___2 addrs___] ADC Data Register  Bytes
.equ	AMP2CSR		= 0x77		; [MEMORY MAPPED] Amplifier 2 Control and Status Register
.equ	AMP1CSR		= 0x76		; [MEMORY MAPPED] Amplifier 1 Control and Status Register
.equ	AMP0CSR		= 0x75		; [MEMORY MAPPED] Amplifier 0 Control and Status Register
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK3		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 3
.equ	PCMSK2		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6A		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	OSCCAL		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Value
.equ	PRR		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] 
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; [___2 addrs___] Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control Register
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	ACSR		= 0x30		; Analog Comparator Status Register
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	PLLCSR		= 0x29		; PLL Control And Status Register
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register B
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register A
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0B		= 0x25		; Timer/Counter Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter  Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; [___2 addrs___] EEPROM Read/Write Access
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose IO Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	GPIOR2		= 0x1A		; General Purpose IO Register 2
.equ	GPIOR1		= 0x19		; General Purpose IO Register 1
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PORTE		= 0x0E		; Port E Data Register
.equ	DDRE		= 0x0D		; Port E Data Direction Register
.equ	PINE		= 0x0C		; Port E Input Pins
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
;    Time Stamp Register
.equ	CANSTMH		= 0xF9
.equ	CANSTML		= 0xF8
;    TTC Timer Register
.equ	CANTTCH		= 0xE9
.equ	CANTTCL		= 0xE8
;    Timer Register
.equ	CANTIMH		= 0xE7
.equ	CANTIML		= 0xE6
;    LIN Baud Rate Register
.equ	LINBRRH		= 0xCE
.equ	LINBRRL		= 0xCD
;    PSC Output Compare RB Register 
.equ	POCR_RBH	= 0xB3
.equ	POCR_RBL	= 0xB2
;    PSC Module 2 Output Compare SB Register 
.equ	POCR2SBH	= 0xB1
.equ	POCR2SBL	= 0xB0
;    PSC Module 2 Output Compare RA Register 
.equ	POCR2RAH	= 0xAF
.equ	POCR2RAL	= 0xAE
;    PSC Module 2 Output Compare SA Register 
.equ	POCR2SAH	= 0xAD
.equ	POCR2SAL	= 0xAC
;    PSC Module 1 Output Compare SB Register 
.equ	POCR1SBH	= 0xAB
.equ	POCR1SBL	= 0xAA
;    PSC Module 1 Output Compare RA Register 
.equ	POCR1RAH	= 0xA9
.equ	POCR1RAL	= 0xA8
;    PSC Output Compare SA Register 
.equ	POCR1SAH	= 0xA7
.equ	POCR1SAL	= 0xA6
;    PSC Output Compare SB Register 
.equ	POCR0SBH	= 0xA5
.equ	POCR0SBL	= 0xA4
;    PSC Module 0 Output Compare RA Register 
.equ	POCR0RAH	= 0xA3
.equ	POCR0RAL	= 0xA2
;    PSC Module 0 Output Compare SA Register 
.equ	POCR0SAH	= 0xA1
.equ	POCR0SAL	= 0xA0
;    DAC Data Register
.equ	DACH		= 0x92
.equ	DACL		= 0x91
;    Timer/Counter1 Output Compare Register B
.equ	OCR1BH		= 0x8B
.equ	OCR1BL		= 0x8A
;    Timer/Counter1 Output Compare Register A
.equ	OCR1AH		= 0x89
.equ	OCR1AL		= 0x88
;    Timer/Counter1 Input Capture Register
.equ	ICR1H		= 0x87
.equ	ICR1L		= 0x86
;    Timer/Counter1  Bytes
.equ	TCNT1H		= 0x85
.equ	TCNT1L		= 0x84
;    ADC Data Register  Bytes
.equ	ADCH		= 0x79
.equ	ADCL		= 0x78
;    Stack Pointer 
.equ	SPH		= 0x3E
.equ	SPL		= 0x3D
;    EEPROM Read/Write Access
.equ	EEARH		= 0x22
.equ	EEARL		= 0x21


; ====	CAN MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register CANGCON bits		------------------------
.equ	ABRQ		= 7		; 0x80 - Abort Request
.equ	OVRQ		= 6		; 0x40 - Overload Frame Request
.equ	TTC		= 5		; 0x20 - Time Trigger Communication
.equ	SYNTTC		= 4		; 0x10 - Synchronization of TTC
.equ	LISTEN		= 3		; 0x08 - Listening Mode
.equ	TEST		= 2		; 0x04 - Test Mode
.equ	ENASTB		= 1		; 0x02 - Enable / Standby
.equ	SWRES		= 0		; 0x01 - Software Reset Request

; ----------	Register CANGSTA bits		------------------------
.equ	OVFG		= 6		; 0x40 - Overload Frame Flag
.equ	TXBSY		= 4		; 0x10 - Transmitter Busy
.equ	RXBSY		= 3		; 0x08 - Receiver Busy
.equ	ENFG		= 2		; 0x04 - Enable Flag
.equ	BOFF		= 1		; 0x02 - Bus Off Mode
.equ	ERRP		= 0		; 0x01 - Error Passive Mode

; ----------	Register CANGIT bits		------------------------
.equ	CANIT		= 7		; 0x80 - General Interrupt Flag
.equ	BOFFIT		= 6		; 0x40 - Bus Off Interrupt Flag
.equ	OVRTIM		= 5		; 0x20 - Overrun CAN Timer Flag
.equ	BXOK		= 4		; 0x10 - Burst Receive Interrupt Flag
.equ	SERG		= 3		; 0x08 - Stuff Error General Flag
.equ	CERG		= 2		; 0x04 - CRC Error General Flag
.equ	FERG		= 1		; 0x02 - Form Error General Flag
.equ	AERG		= 0		; 0x01 - Acknowledgement Error General Flag

; ----------	Register CANGIE bits		------------------------
.equ	ENIT		= 7		; 0x80 - Enable all Interrupts
.equ	ENBOFF		= 6		; 0x40 - Enable Bus Off Interrupt
.equ	ENRX		= 5		; 0x20 - Enable Receive Interrupt
.equ	ENTX		= 4		; 0x10 - Enable Transmit Interrupt
.equ	ENERR		= 3		; 0x08 - Enable MOb Error Interrupt
.equ	ENBX		= 2		; 0x04 - Enable Burst Receive Interrupt
.equ	ENERG		= 1		; 0x02 - Enable General Error Interrupt
.equ	ENOVRT		= 0		; 0x01 - Enable CAN Timer Overrun Interrupt

; ----------	Register CANEN2 bits		------------------------
.equ	ENMOB_MASK	= 0x3F		;      - Enable MObs (6 bits)
.equ	ENMOB0		= 0		;          ENMOB BIT0 position

; ----------	Register CANIE2 bits		------------------------
.equ	IEMOB_MASK	= 0x3F		;      - Interrupt Enable  MObs (6 bits)
.equ	IEMOB0		= 0		;          IEMOB BIT0 position

; ----------	Register CANSIT2 bits		------------------------
.equ	SIT_MASK	= 0x3F		;      - Status of Interrupt MObs (6 bits)
.equ	SIT0		= 0		;          SIT BIT0 position

; ----------	Register CANBT1 bits		------------------------
.equ	BRP_MASK	= 0x7E		;      - Baud Rate Prescaler bits (6 bits)
.equ	BRP0		= 1		;          BRP BIT0 position

; ----------	Register CANBT2 bits		------------------------
.equ	SJW_MASK	= 0x60		;      - Re-Sync Jump Width bits (2 bits)
.equ	SJW0		= 5		;          SJW BIT0 position
.equ	PRS_MASK	= 0x0E		;      - Propagation Time Segment bits (3 bits)
.equ	PRS0		= 1		;          PRS BIT0 position

; ----------	Register CANBT3 bits		------------------------
.equ	PHS2_MASK	= 0x70		;      - Phase Segment 2 bits (3 bits)
.equ	PHS20		= 4		;          PHS2 BIT0 position
.equ	PHS1_MASK	= 0x0E		;      - Phase Segment 1 bits (3 bits)
.equ	PHS10		= 1		;          PHS1 BIT0 position
.equ	SMP		= 0		; 0x01 - Sample Type

; ----------	Register CANHPMOB bits		------------------------
.equ	HPMOB_MASK	= 0xF0		;      - Highest Priority MOb Number bits (4 bits)
.equ	HPMOB0		= 4		;          HPMOB BIT0 position
.equ	CGP_MASK	= 0x0F		;      - CAN General Purpose bits (4 bits)
.equ	CGP0		= 0		;          CGP BIT0 position

; ----------	Register CANPAGE bits		------------------------
.equ	MOBNB_MASK	= 0xF0		;      - MOb Number bits (4 bits)
.equ	MOBNB0		= 4		;          MOBNB BIT0 position
.equ	AINC		= 3		; 0x08 - MOb Data Buffer Auto Increment (Active Low)
.equ	INDX_MASK	= 0x07		;      - Data Buffer Index bits (3 bits)
.equ	INDX0		= 0		;          INDX BIT0 position

; ----------	Register CANSTMOB bits		------------------------
.equ	DLCW		= 7		; 0x80 - Data Length Code Warning on MOb
.equ	TXOK		= 6		; 0x40 - Transmit OK on MOb
.equ	RXOK		= 5		; 0x20 - Receive OK on MOb
.equ	BERR		= 4		; 0x10 - Bit Error on MOb
.equ	SERR		= 3		; 0x08 - Stuff Error on MOb
.equ	CERR		= 2		; 0x04 - CRC Error on MOb
.equ	FERR		= 1		; 0x02 - Form Error on MOb
.equ	AERR		= 0		; 0x01 - Acknowledgement Error on MOb

; ----------	Register CANCDMOB bits		------------------------
.equ	CONMOB_MASK	= 0xC0		;      - MOb Config bits (2 bits)
.equ	CONMOB0		= 6		;          CONMOB BIT0 position
.equ	RPLV		= 5		; 0x20 - Reply Valid
.equ	IDE		= 4		; 0x10 - Identifier Extension
.equ	DLC_MASK	= 0x0F		;      - Data Length Code bits (4 bits)
.equ	DLC0		= 0		;          DLC BIT0 position

; ----------	Register CANIDT4 bits		------------------------
.equ	CANIDT4_IDT_MASK= 0xF8		;      - Identifier Tag (5 bits)
.equ	CANIDT4_IDT0	= 3		;          CANIDT4_IDT BIT0 position
.equ	RTRTAG		= 2		; 0x04 - Remote Transmission Request Tag
.equ	RB1TAG		= 1		; 0x02 - Reserved Bit 1 Tag
.equ	RB0TAG		= 0		; 0x01 - Reserved Bit 0 Tag

; ----------	Register CANIDT3 bits		------------------------
.equ	CANIDT3_IDT_MASK= 0xFF		;      - Identifier Tag (8 bits)
.equ	CANIDT3_IDT0	= 0		;          CANIDT3_IDT BIT0 position

; ----------	Register CANIDT2 bits		------------------------
.equ	CANIDT2_IDT_MASK= 0xFF		;      - Identifier Tag (8 bits)
.equ	CANIDT2_IDT0	= 0		;          CANIDT2_IDT BIT0 position

; ----------	Register CANIDT1 bits		------------------------
.equ	CANIDT1_IDT_MASK= 0xFF		;      - Identifier Tag (8 bits)
.equ	CANIDT1_IDT0	= 0		;          CANIDT1_IDT BIT0 position

; ----------	Register CANIDM4 bits		------------------------
.equ	IDEMSK		= 0		; 0x01 - Identifier Extension Mask
.equ	RTRMSK		= 2		; 0x04 - Remote Transmission Request Mask
.equ	CANIDM4_IDMSK_MASK= 0xF8		;      - Identifier Mask (5 bits)
.equ	CANIDM4_IDMSK0	= 3		;          CANIDM4_IDMSK BIT0 position

; ----------	Register CANIDM3 bits		------------------------
.equ	CANIDM3_IDMSK_MASK= 0xFF		;      - Identifier Mask (8 bits)
.equ	CANIDM3_IDMSK0	= 0		;          CANIDM3_IDMSK BIT0 position

; ----------	Register CANIDM2 bits		------------------------
.equ	CANIDM2_IDMSK_MASK= 0xFF		;      - Identifier Mask (8 bits)
.equ	CANIDM2_IDMSK0	= 0		;          CANIDM2_IDMSK BIT0 position

; ----------	Register CANIDM1 bits		------------------------
.equ	CANIDM1_IDMSK_MASK= 0xFF		;      - Identifier Mask (8 bits)
.equ	CANIDM1_IDMSK0	= 0		;          CANIDM1_IDMSK BIT0 position



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register AC0CON bits		------------------------
.equ	AC0EN		= 7		; 0x80 - Analog Comparator 0 Enable Bit
.equ	AC0IE		= 6		; 0x40 - Analog Comparator 0 Interrupt Enable Bit
.equ	AC0IS_MASK	= 0x30		;      - Analog Comparator 0  Interrupt Select Bits (2 bits)
.equ	AC0IS0		= 4		;          AC0IS BIT0 position
.equ	ACCKSEL		= 3		; 0x08 - Analog Comparator Clock Select
.equ	AC0M_MASK	= 0x07		;      - Analog Comparator 0 Multiplexer Register (3 bits)
.equ	AC0M0		= 0		;          AC0M BIT0 position

; ----------	Register AC1CON bits		------------------------
.equ	AC1EN		= 7		; 0x80 - Analog Comparator 1 Enable Bit
.equ	AC1IE		= 6		; 0x40 - Analog Comparator 1 Interrupt Enable Bit
.equ	AC1IS_MASK	= 0x30		;      - Analog Comparator 1  Interrupt Select Bit (2 bits)
.equ	AC1IS0		= 4		;          AC1IS BIT0 position
.equ	AC1ICE		= 3		; 0x08 - Analog Comparator 1 Interrupt Capture Enable Bit
.equ	AC1M_MASK	= 0x07		;      - Analog Comparator 1 Multiplexer Register (3 bits)
.equ	AC1M0		= 0		;          AC1M BIT0 position
; ::::  AC1IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register AC2CON bits		------------------------
.equ	AC2EN		= 7		; 0x80 - Analog Comparator 2 Enable Bit
.equ	AC2IE		= 6		; 0x40 - Analog Comparator 2 Interrupt Enable Bit
.equ	AC2IS_MASK	= 0x30		;      - Analog Comparator 2  Interrupt Select Bit (2 bits)
.equ	AC2IS0		= 4		;          AC2IS BIT0 position
.equ	AC2M_MASK	= 0x07		;      - Analog Comparator 2 Multiplexer Register (3 bits)
.equ	AC2M0		= 0		;          AC2M BIT0 position
; ::::  AC2IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register AC3CON bits		------------------------
.equ	AC3EN		= 7		; 0x80 - Analog Comparator 3 Enable Bit
.equ	AC3IE		= 6		; 0x40 - Analog Comparator 3 Interrupt Enable Bit
.equ	AC3IS_MASK	= 0x30		;      - Analog Comparator 3  Interrupt Select Bit (2 bits)
.equ	AC3IS0		= 4		;          AC3IS BIT0 position
.equ	AC3M_MASK	= 0x07		;      - Analog Comparator 3 Multiplexer Register (3 bits)
.equ	AC3M0		= 0		;          AC3M BIT0 position
; ::::  AC3IS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x10		; Reserved
;			0x20		; Interrupt on Falling Edge
;			0x30		; Interrupt on Rising Edge

; ----------	Register ACSR bits		------------------------
.equ	AC3IF		= 7		; 0x80 - Analog Comparator 3 Interrupt Flag Bit
.equ	AC2IF		= 6		; 0x40 - Analog Comparator 2 Interrupt Flag Bit
.equ	AC1IF		= 5		; 0x20 - Analog Comparator 1  Interrupt Flag Bit
.equ	AC0IF		= 4		; 0x10 - Analog Comparator 0 Interrupt Flag Bit
.equ	AC3O		= 3		; 0x08 - Analog Comparator 3 Output Bit
.equ	AC2O		= 2		; 0x04 - Analog Comparator 2 Output Bit
.equ	AC1O		= 1		; 0x02 - Analog Comparator 1 Output Bit
.equ	AC0O		= 0		; 0x01 - Analog Comparator 0 Output Bit



; ====	DAC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register DAC bits		------------------------
.equ	DAC_MASK	= 0xFFFF	;      - DAC Data Register Bits (16 bits)
.equ	DAC0		= 0		;          DAC BIT0 position

; ----------	Register DACON bits		------------------------
.equ	DAATE		= 7		; 0x80 - DAC Auto Trigger Enable Bit
.equ	DATS_MASK	= 0x70		;      - DAC Trigger Selection Bits (3 bits)
.equ	DATS0		= 4		;          DATS BIT0 position
.equ	DALA		= 2		; 0x04 - DAC Left Adjust
.equ	DAOE		= 1		; 0x02 - DAC Output Enable
.equ	DAEN		= 0		; 0x01 - DAC Enable Bit
; ::::  DATS	:::: bitfield values
;			0x00		; Analog Comparator 0
;			0x10		; Analog Comparator 1
;			0x20		; External Interrupt Request 0
;			0x30		; Timer/Counter0 Compare Match A
;			0x40		; Timer/Counter0 Overflow
;			0x50		; Timer/Counter1 Compare Match B
;			0x60		; Timer/Counter1 Overflow
;			0x70		; Timer/Counter1 Capture Event



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
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
.equ	SPIPS		= 7		; 0x80 - SPI Pin Select
.equ	PUD		= 4		; 0x10 - Pull-up disable
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select
.equ	IVCE		= 0		; 0x01 - Interrupt Vector Change Enable

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register OSCCAL bits		------------------------
.equ	OSCCAL_MASK	= 0xFF		;      - Oscillator Calibration  (8 bits)
.equ	OSCCAL0		= 0		;          OSCCAL BIT0 position

; ----------	Register CLKPR bits		------------------------
.equ	CLKPCE		= 7		; 0x80 - Clock Prescaler Change Enable
.equ	CLKPS_MASK	= 0x0F		;      - Clock Prescaler Select (4 bits)
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

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x0E		;      - Sleep Mode Select bits (3 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Reserved
;			0x08		; Reserved
;			0x0A		; Reserved
;			0x0C		; Standby
;			0x0E		; Reserved

; ----------	Register GPIOR2 bits		------------------------
.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 2 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR1 bits		------------------------
;.equ	GPIOR_MASK	= 0xFF		;      - General Purpose IO Register 1 bis (8 bits)
;.equ	GPIOR0		= 0		;          GPIOR BIT0 position

; ----------	Register GPIOR0 bits		------------------------
.equ	GPIOR07		= 7		; 0x80 - General Purpose IO Register 0 bit 7
.equ	GPIOR06		= 6		; 0x40 - General Purpose IO Register 0 bit 6
.equ	GPIOR05		= 5		; 0x20 - General Purpose IO Register 0 bit 5
.equ	GPIOR04		= 4		; 0x10 - General Purpose IO Register 0 bit 4
.equ	GPIOR03		= 3		; 0x08 - General Purpose IO Register 0 bit 3
.equ	GPIOR02		= 2		; 0x04 - General Purpose IO Register 0 bit 2
.equ	GPIOR01		= 1		; 0x02 - General Purpose IO Register 0 bit 1
.equ	GPIOR00		= 0		; 0x01 - General Purpose IO Register 0 bit 0

; ----------	Register PLLCSR bits		------------------------
.equ	PLLF		= 2		; 0x04 - PLL Factor
.equ	PLLE		= 1		; 0x02 - PLL Enable
.equ	PLOCK		= 0		; 0x01 - PLL Lock Detector

; ----------	Register PRR bits		------------------------
.equ	PRCAN		= 6		; 0x40 - Power Reduction CAN
.equ	PRPSC		= 5		; 0x20 - Power Reduction PSC
.equ	PRTIM1		= 4		; 0x10 - Power Reduction Timer/Counter1
.equ	PRTIM0		= 3		; 0x08 - Power Reduction Timer/Counter0
.equ	PRSPI		= 2		; 0x04 - Power Reduction Serial Peripheral Interface
.equ	PRLIN		= 1		; 0x02 - Power Reduction LIN UART
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TCCR0B bits		------------------------
.equ	FOC0A		= 7		; 0x80 - Force Output Compare A
.equ	FOC0B		= 6		; 0x40 - Force Output Compare B
.equ	WGM02		= 3		; 0x08 - 
.equ	CS0_MASK	= 0x07		;      - Clock Select (3 bits)
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

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	ICPSEL1		= 6		; 0x40 - Timer/Counter1 Input Capture Selection
.equ	PSRSYNC		= 0		; 0x01 - Timer/Counter Prescaler Reset



; ====	TC16 MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TIMSK1 bits		------------------------
.equ	ICIE1		= 5		; 0x20 - Timer/Counter1 Input Capture Interrupt Enable
.equ	OCIE1B		= 2		; 0x04 - Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	OCIE1A		= 1		; 0x02 - Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	TOIE1		= 0		; 0x01 - Timer/Counter1 Overflow Interrupt Enable

; ----------	Register TIFR1 bits		------------------------
.equ	ICF1		= 5		; 0x20 - Input Capture Flag 1
.equ	OCF1B		= 2		; 0x04 - Output Compare Flag 1B
.equ	OCF1A		= 1		; 0x02 - Output Compare Flag 1A
.equ	TOV1		= 0		; 0x01 - Timer/Counter1 Overflow Flag

; ----------	Register TCCR1A bits		------------------------
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode for Channel A (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode for Channel B (2 bits)
.equ	COM1B0		= 4		;          COM1B BIT0 position
.equ	TCCR1A_WGM1_MASK= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1A_WGM10	= 0		;          TCCR1A_WGM1 BIT0 position

; ----------	Register TCCR1B bits		------------------------
.equ	ICNC1		= 7		; 0x80 - Input Capture 1 Noise Canceler
.equ	ICES1		= 6		; 0x40 - Input Capture 1 Edge Select
.equ	TCCR1B_WGM1_MASK= 0x18		;      - Waveform Generation Mode (2 bits)
.equ	TCCR1B_WGM10	= 3		;          TCCR1B_WGM1 BIT0 position
.equ	CS1_MASK	= 0x07		;      - Prescaler source of Timer/Counter 1 (3 bits)
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
.equ	FOC1A		= 7		; 0x80 - Force Output Compare for Channel A
.equ	FOC1B		= 6		; 0x40 - Force Output Compare for Channel B

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	ICPSEL1		= 6		; 0x40 - Timer/Counter1 Input Capture Selection
;.equ	PSRSYNC		= 0		; 0x01 - Timer/Counter Prescaler Reset



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUX bits		------------------------
.equ	REFS_MASK	= 0xC0		;      - Reference Selection Bits (2 bits)
.equ	REFS0		= 6		;          REFS BIT0 position
.equ	ADLAR		= 5		; 0x20 - Left Adjust Result
.equ	MUX_MASK	= 0x1F		;      - ADC channel selection bits (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position
; ::::  REFS	:::: bitfield values
;			0x00		; AREF, Internal Vref turned off
;			0x40		; AVCC reference
;			0x80		; Reserved
;			0xC0		; Internal 2.56V Voltage Reference
; ::::  MUX	:::: bitfield values
;			0x00		; ADC input pin 0
;			0x01		; ADC input pin 1
;			0x02		; ADC input pin 2
;			0x03		; ADC input pin 3
;			0x04		; ADC input pin 4
;			0x05		; ADC input pin 5
;			0x06		; ADC input pin 6
;			0x07		; ADC input pin 7
;			0x08		; ADC input pin 8
;			0x09		; ADC input pin 9
;			0x0A		; ADC input pin 10
;			0x0B		; Temperature sensor
;			0x0C		; Internal VCC / 4
;			0x0D		; Current source
;			0x0E		; Analog Differential Amplifier 0
;			0x0F		; Analog Differential Amplifier 1
;			0x10		; Analog Differential Amplifier 2
;			0x11		; Bandgap
;			0x12		; 0V (GND)

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC  Prescaler Select Bits (3 bits)
.equ	ADPS0		= 0		;          ADPS BIT0 position

; ----------	Register ADCSRB bits		------------------------
.equ	ADHSM		= 7		; 0x80 - ADC High Speed Mode
.equ	ISRCEN		= 6		; 0x40 - Current Source Enable
.equ	AREFEN		= 5		; 0x20 - Analog Reference pin Enable
.equ	ADTS_MASK	= 0x0F		;      - ADC Auto Trigger Sources (4 bits)
.equ	ADTS0		= 0		;          ADTS BIT0 position
; ::::  ADTS	:::: bitfield values
;			0x00		; Free Running mode
;			0x01		; Analog Comparator
;			0x02		; External Interrupt Request 0
;			0x03		; Timer/Counter0 Compare Match A
;			0x04		; Timer/Counter0 Overflow
;			0x05		; Timer/Counter1 Compare Match B
;			0x06		; Timer/Counter1 Overflow
;			0x07		; Timer/Counter1 Capture Event
;			0x08		; PSC0ASY Event
;			0x09		; PSC1ASY Event
;			0x0A		; PSC2ASY Event
;			0x0B		; Analog comparator 1
;			0x0C		; Analog comparator 2

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC7 Digital input Disable
.equ	ADC6D		= 6		; 0x40 - ADC6 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable

; ----------	Register DIDR1 bits		------------------------
.equ	AMP2PD		= 6		; 0x40 - AMP2P Pin Digital input Disable
.equ	ACMP0D		= 5		; 0x20 - ACMP0 Pin Digital input Disable
.equ	AMP0PD		= 4		; 0x10 - AMP0P Pin Digital input Disable
.equ	AMP0ND		= 3		; 0x08 - AMP0N Pin Digital input Disable
.equ	ADC10D		= 2		; 0x04 - ADC10 Pin Digital input Disable
.equ	ADC9D		= 1		; 0x02 - ADC9 Pin Digital input Disable
.equ	ADC8D		= 0		; 0x01 - ADC8 Pin Digital input Disable

; ----------	Register AMP0CSR bits		------------------------
.equ	AMP0EN		= 7		; 0x80 - Amplifier 0 Enable
.equ	AMP0IS		= 6		; 0x40 - Amplifier 0 Input Shunt
.equ	AMP0G_MASK	= 0x30		;      - Amplifier 0 Gain Selection (2 bits)
.equ	AMP0G0		= 4		;          AMP0G BIT0 position
.equ	AMPCMP0		= 3		; 0x08 - Amplifier 0 - Comparator 0 connection
.equ	AMP0TS_MASK	= 0x07		;      - Amplifier 0 Clock Source Selection (3 bits)
.equ	AMP0TS0		= 0		;          AMP0TS BIT0 position

; ----------	Register AMP1CSR bits		------------------------
.equ	AMP1EN		= 7		; 0x80 - Amplifier 1 Enable
.equ	AMP1IS		= 6		; 0x40 - Amplifier 1 Input Shunt
.equ	AMP1G_MASK	= 0x30		;      - Amplifier 1 Gain Selection (2 bits)
.equ	AMP1G0		= 4		;          AMP1G BIT0 position
.equ	AMPCMP1		= 3		; 0x08 - Amplifier 1 - Comparator 1 Connection
.equ	AMP1TS_MASK	= 0x07		;      - Amplifier 1 Clock Source Selection (3 bits)
.equ	AMP1TS0		= 0		;          AMP1TS BIT0 position

; ----------	Register AMP2CSR bits		------------------------
.equ	AMP2EN		= 7		; 0x80 - Amplifier 2 Enable
.equ	AMP2IS		= 6		; 0x40 - Amplifier 2 Input Shunt
.equ	AMP2G_MASK	= 0x30		;      - Amplifier 2 Gain Selection (2 bits)
.equ	AMP2G0		= 4		;          AMP2G BIT0 position
.equ	AMPCMP2		= 3		; 0x08 - Amplifier 2 - Comparator 2 Connection
.equ	AMP2TS_MASK	= 0x07		;      - Amplifier 2 Clock Source Selection (3 bits)
.equ	AMP2TS0		= 0		;          AMP2TS BIT0 position



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

; ----------	Register LINBRR bits		------------------------
.equ	LDIV_MASK	= 0x0FFF	;      -  (12 bits)
.equ	LDIV0		= 0		;          LDIV BIT0 position

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
.equ	LDATA_MASK	= 0xFF		;      - LIN Data In / Data out (8 bits)
.equ	LDATA0		= 0		;          LDATA BIT0 position



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



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC3_MASK	= 0xC0		;      - External Interrupt Sense Control Bit (2 bits)
.equ	ISC30		= 6		;          ISC3 BIT0 position
.equ	ISC2_MASK	= 0x30		;      - External Interrupt Sense Control Bit (2 bits)
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
.equ	PCIE_MASK	= 0x0F		;      - Pin Change Interrupt Enables (4 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position

; ----------	Register PCMSK3 bits		------------------------
.equ	PCMSK3_PCINT_MASK= 0x07		;      - Pin Change Enable Masks (3 bits)
.equ	PCMSK3_PCINT0	= 0		;          PCMSK3_PCINT BIT0 position

; ----------	Register PCMSK2 bits		------------------------
.equ	PCMSK2_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK2_PCINT0	= 0		;          PCMSK2_PCINT BIT0 position

; ----------	Register PCMSK1 bits		------------------------
.equ	PCMSK1_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK1_PCINT0	= 0		;          PCMSK1_PCINT BIT0 position

; ----------	Register PCMSK0 bits		------------------------
.equ	PCMSK0_PCINT_MASK= 0xFF		;      - Pin Change Enable Masks (8 bits)
.equ	PCMSK0_PCINT0	= 0		;          PCMSK0_PCINT BIT0 position

; ----------	Register PCIFR bits		------------------------
.equ	PCIF_MASK	= 0x0F		;      - Pin Change Interrupt Flags (4 bits)
.equ	PCIF0		= 0		;          PCIF BIT0 position



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming mode (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEPROM Ready Interrupt Enable
.equ	EEMWE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEWE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



; ====	PSC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PIFR bits		------------------------
.equ	PEV_MASK	= 0x0E		;      - PSC External Event 2 Interrupt (3 bits)
.equ	PEV0		= 1		;          PEV BIT0 position
.equ	PEOP		= 0		; 0x01 - PSC End of Cycle Interrupt

; ----------	Register PIM bits		------------------------
.equ	PEVE_MASK	= 0x0E		;      - External Event 2 Interrupt Enable (3 bits)
.equ	PEVE0		= 1		;          PEVE BIT0 position
.equ	PEOPE		= 0		; 0x01 - PSC End of Cycle Interrupt Enable

; ----------	Register PMIC2 bits		------------------------
.equ	POVEN2		= 7		; 0x80 - PSC Module 2 Overlap Enable
.equ	PISEL2		= 6		; 0x40 - PSC Module 2 Input Select
.equ	PELEV2		= 5		; 0x20 - PSC Module 2 Input Level Selector
.equ	PFLTE2		= 4		; 0x10 - PSC Module 2 Input Filter Enable
.equ	PAOC2		= 3		; 0x08 - PSC Module 2 Asynchronous Output Control
.equ	PRFM2_MASK	= 0x07		;      - PSC Module 2 Input Mode bits (3 bits)
.equ	PRFM20		= 0		;          PRFM2 BIT0 position

; ----------	Register PMIC1 bits		------------------------
.equ	POVEN1		= 7		; 0x80 - PSC Module 1 Overlap Enable
.equ	PISEL1		= 6		; 0x40 - PSC Module 1 Input Select
.equ	PELEV1		= 5		; 0x20 - PSC Module 1 Input Level Selector
.equ	PFLTE1		= 4		; 0x10 - PSC Module 1 Input Filter Enable
.equ	PAOC1		= 3		; 0x08 - PSC Module 1 Asynchronous Output Control
.equ	PRFM1_MASK	= 0x07		;      - PSC Module 1 Input Mode bits (3 bits)
.equ	PRFM10		= 0		;          PRFM1 BIT0 position

; ----------	Register PMIC0 bits		------------------------
.equ	POVEN0		= 7		; 0x80 - PSC Module 0 Overlap Enable
.equ	PISEL0		= 6		; 0x40 - PSC Module 0 Input Select
.equ	PELEV0		= 5		; 0x20 - PSC Module 0 Input Level Selector
.equ	PFLTE0		= 4		; 0x10 - PSC Module 0 Input Filter Enable
.equ	PAOC0		= 3		; 0x08 - PSC Module 0 Asynchronous Output Control
.equ	PRFM0_MASK	= 0x07		;      - PSC Module 0 Input Mode bits (3 bits)
.equ	PRFM00		= 0		;          PRFM0 BIT0 position

; ----------	Register PCTL bits		------------------------
.equ	PPRE_MASK	= 0xC0		;      - PSC Prescaler Select bits (2 bits)
.equ	PPRE0		= 6		;          PPRE BIT0 position
.equ	PCLKSEL		= 5		; 0x20 - PSC Input Clock Select
.equ	PCCYC		= 1		; 0x02 - PSC Complete Cycle
.equ	PRUN		= 0		; 0x01 - PSC Run

; ----------	Register POC bits		------------------------
.equ	POEN2B		= 5		; 0x20 - PSC Output 2B Enable
.equ	POEN2A		= 4		; 0x10 - PSC Output 2A Enable
.equ	POEN1B		= 3		; 0x08 - PSC Output 1B Enable
.equ	POEN1A		= 2		; 0x04 - PSC Output 1A Enable
.equ	POEN0B		= 1		; 0x02 - PSC Output 0B Enable
.equ	POEN0A		= 0		; 0x01 - PSC Output 0A Enable

; ----------	Register PCNF bits		------------------------
.equ	PULOCK		= 5		; 0x20 - PSC Update Lock
.equ	PMODE		= 4		; 0x10 - PSC Mode
.equ	POPB		= 3		; 0x08 - PSC Output B Polarity
.equ	POPA		= 2		; 0x04 - PSC Output A Polarity

; ----------	Register PSYNC bits		------------------------
.equ	PSYNC2_MASK	= 0x30		;      - Selection of Synchronization Out for ADC (2 bits)
.equ	PSYNC20		= 4		;          PSYNC2 BIT0 position
.equ	PSYNC1_MASK	= 0x0C		;      - Selection of Synchronization Out for ADC (2 bits)
.equ	PSYNC10		= 2		;          PSYNC1 BIT0 position
.equ	PSYNC0_MASK	= 0x03		;      - Selection of Synchronization Out for ADC (2 bits)
.equ	PSYNC00		= 0		;          PSYNC0 BIT0 position




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
.equ	INT_VECTORS_NUM		= 31
.equ	INT_VECTORS_SIZE	= 0x3E
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;	1	ANACOMP0	; Analog Comparator 0
;	2	ANACOMP1	; Analog Comparator 1
;	3	ANACOMP2	; Analog Comparator 2
;	4	ANACOMP3	; Analog Comparator 3
;	5	PSC_FAULT	; PSC Fault
;	6	PSC_EC		; PSC End of Cycle
;	7	INT0		; External Interrupt Request 0
;	8	INT1		; External Interrupt Request 1
;	9	INT2		; External Interrupt Request 2
;	10	INT3		; External Interrupt Request 3
;	11	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	12	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	13	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	14	TIMER1_OVF	; Timer1/Counter1 Overflow
;	15	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	16	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	17	TIMER0_OVF	; Timer/Counter0 Overflow
;	18	CAN_INT		; CAN MOB, Burst, General Errors
;	19	CAN_TOVF	; CAN Timer Overflow
;	20	LIN_TC		; LIN Transfer Complete
;	21	LIN_ERR		; LIN Error
;	22	PCINT0		; Pin Change Interrupt Request 0
;	23	PCINT1		; Pin Change Interrupt Request 1
;	24	PCINT2		; Pin Change Interrupt Request 2
;	25	PCINT3		; Pin Change Interrupt Request 3
;	26	SPI_STC		; SPI Serial Transfer Complete
;	27	ADC		; ADC Conversion Complete
;	28	WDT		; Watchdog Time-Out Interrupt
;	29	EE_READY	; EEPROM Ready
;	30	SPM_READY	; Store Program Memory Read



; **********************************************************************
; ***************	ASM PROGRAM SKELETON	************************
; **********************************************************************
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.include "ATmegaS64M1.inc"
;#	
;#	; FUSES EXTENDED byte (addr 0x02)
;#	.set	BODLEVEL	= 0x07	; Brown-out detection disabled
;#	.set	FUSES_EXTENDED	= 0xFF \
;#				  & ~(0 <<PSCRB) \
;#				  & ~(0 <<PSCRVA) \
;#				  & ~(0 <<PSCRVB) \
;#				  &  (~BODLEVEL_MASK | BODLEVEL)
;#	; FUSES HIGH byte (addr 0x01)
;#	.set	BOOTSZ		= 0x02	; Boot Flash size=2048 words Boot address=$7800
;#	.set	FUSES_HIGH	= 0xFF \
;#				  & ~(0 <<RSTDISBL) \
;#				  & ~(0 <<DWEN) \
;#				  & ~(1 <<SPIEN) \
;#				  & ~(0 <<WDTON) \
;#				  & ~(0 <<EESAVE) \
;#				  &  (~BOOTSZ_MASK | BOOTSZ) \
;#				  & ~(0 <<BOOTRST)
;#	; FUSES LOW byte (addr 0x00)
;#	.set	SUT_CKSEL	= 0x22	; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 65 ms
;#	.set	FUSES_LOW	= 0xFF \
;#				  & ~(1 <<CKDIV8) \
;#				  & ~(0 <<CKOUT) \
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
;#	.message "EXTENDED        ", FUSES_EXTENDED
;#	.message "HIGH            ", FUSES_HIGH
;#	.message "LOW             ", FUSES_LOW
;#	.message "----- Lockbits -----"
;#	.message "LOCKBIT         ", LOCKBITS_LOCKBIT
;#	.message "===================="
;#	
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET_ISR	; RESET		 - External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset
;#		reti			; ANACOMP0	 - Analog Comparator 0
;#		reti			; ANACOMP1	 - Analog Comparator 1
;#		reti			; ANACOMP2	 - Analog Comparator 2
;#		reti			; ANACOMP3	 - Analog Comparator 3
;#		reti			; PSC_FAULT	 - PSC Fault
;#		reti			; PSC_EC	 - PSC End of Cycle
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		reti			; INT2		 - External Interrupt Request 2
;#		reti			; INT3		 - External Interrupt Request 3
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer1/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; CAN_INT	 - CAN MOB, Burst, General Errors
;#		reti			; CAN_TOVF	 - CAN Timer Overflow
;#		reti			; LIN_TC	 - LIN Transfer Complete
;#		reti			; LIN_ERR	 - LIN Error
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; PCINT3	 - Pin Change Interrupt Request 3
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; ADC		 - ADC Conversion Complete
;#		reti			; WDT		 - Watchdog Time-Out Interrupt
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; SPM_READY	 - Store Program Memory Read
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET_ISR:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATMEGAS64M1_INC_ */

; ************************ END OF FILE *********************************

