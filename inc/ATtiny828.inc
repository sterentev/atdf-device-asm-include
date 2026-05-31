;***********************************************************************
;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ******************
;*************** Script version: 0.07 **********************************
;*************** tab-width 8 *******************************************
;***********************************************************************
;
;* Target MCU        : ATtiny828
;* Title             : Register/Mask/Bit Definitions for the ATtiny828
;* File Name         : ATtiny828.inc
;* Source Date       : 2026-04-11 12:34:00 UTC
;* Make Date         : 2026-05-31 13:22:20 UTC
;
;***********************************************************************

#ifndef _ATTINY828_INC_
#define _ATTINY828_INC_

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
.device	ATtiny828
.equ	JTAGID		= 0x9314
.equ	SIGNATURE0	= 0x1e
.equ	SIGNATURE1	= 0x93
.equ	SIGNATURE2	= 0x14


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
.equ	ADDR_IRAM_END			= 0x02FF
.equ	ADDR_IRAM_SIZE			= 0x0200

; ----------	EEPROM ADDRESS SPACE		------------------------
;   EEPROM
.equ	ADDR_EEPROM_START		= 0x0000
.equ	ADDR_EEPROM_END			= 0x00FF
.equ	ADDR_EEPROM_SIZE		= 0x0100

; ----------	OSCCAL ADDRESS SPACE		------------------------
;   OSCCAL
.equ	ADDR_OSCCAL_START		= 0x0000
.equ	ADDR_OSCCAL_END			= 0x0001
.equ	ADDR_OSCCAL_SIZE		= 0x0002




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
.equ	BOOTSZ_MASK	= 0x06		;      - Select boot size (2 bits)
.equ	BOOTSZ0		= 1		;          BOOTSZ BIT0 position
.equ	BOOTRST		= 0		; 0x01 - Boot Reset vector Enabled
.equ	BODPD_MASK	= 0xC0		;      - BOD mode of operation when the device is in sleep mode (2 bits)
.equ	BODPD0		= 6		;          BODPD BIT0 position
.equ	BODACT_MASK	= 0x30		;      - BOD mode of operation when the device is active or idle (2 bits)
.equ	BODACT0		= 4		;          BODACT BIT0 position
; ::::  BOOTSZ	:::: bitfield values
;			0x06		; Boot Flash size=128 words Boot address=$0F80
;			0x04		; Boot Flash size=256 words Boot address=$0F00
;			0x02		; Boot Flash size=512 words Boot address=$0E00
;			0x00		; Boot Flash size=1024 words Boot address=$0C00
; ::::  BODPD	:::: bitfield values
;			0x40		; Sampled
;			0x80		; Enabled
;			0xC0		; Disabled
; ::::  BODACT	:::: bitfield values
;			0x10		; Sampled
;			0x20		; Enabled
;			0x30		; Disabled

; ----------	Register HIGH bits		------------------------
.equ	RSTDISBL	= 7		; 0x80 - Reset Disabled (Enable PC6 as i/o pin)]
.equ	DWEN		= 6		; 0x40 - Debug Wire enable
.equ	SPIEN		= 5		; 0x20 - Serial program downloading (SPI) enabled
.equ	WDTON		= 4		; 0x10 - Watch-dog Timer always on
.equ	EESAVE		= 3		; 0x08 - Preserve EEPROM through the Chip Erase cycle
.equ	BODLEVEL_MASK	= 0x07		;      - Brown-out Detector trigger level (3 bits)
.equ	BODLEVEL0	= 0		;          BODLEVEL BIT0 position
; ::::  BODLEVEL	:::: bitfield values
;			0x07		; Brown-out detection disabled
;			0x04		; Brown-out detection at VCC=4.3 V
;			0x05		; Brown-out detection at VCC=2.7 V
;			0x06		; Brown-out detection at VCC=1.8 V

; ----------	Register LOW bits		------------------------
.equ	CKDIV8		= 7		; 0x80 - Divide clock by 8 internally
.equ	CKOUT		= 6		; 0x40 - Clock output on PORTB0
.equ	SUT_CKSEL_MASK	= 0x33		;      - Select Clock Source (4 bits)
; ::::  SUT_CKSEL	:::: bitfield values
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms
;			0x01		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms
;			0x01		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x00		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x01		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x01		; Ext. Clock; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x02		; Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x03		; Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 0 ms
;			0x03		; Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 4.1 ms
;			0x03		; Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms
;			0x03		; Int. ULP Osc. 32kHz; Start-up time PWRDWN/RESET: 6 + 14 CK + 65 ms




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
.equ	OSCTCAL0B	= 0xF1		; [MEMORY MAPPED] Oscillator Temperature Calibration Register B
.equ	OSCTCAL0A	= 0xF0		; [MEMORY MAPPED] Oscillator Temperature Calibration Register A
.equ	TOCPMSA1	= 0xE9		; [MEMORY MAPPED] Timer Output Compare Pin Mux Selection 1
.equ	TOCPMSA0	= 0xE8		; [MEMORY MAPPED] Timer Output Compare Pin Mux Selection 0
.equ	TOCPMCOE	= 0xE2		; [MEMORY MAPPED] Timer Output Compare Pin Mux Channel Output Enable
.equ	DIDR3		= 0xDF		; [MEMORY MAPPED] Digital Input Disable Register 2
.equ	DIDR2		= 0xDE		; [MEMORY MAPPED] Digital Input Disable Register 2
.equ	UDR		= 0xC6		; [MEMORY MAPPED] USART I/O Data Register
.equ	UBRR		= 0xC4		; [MEMORY MAPPED] USART Baud Rate Register  Bytes
.equ	UCSRD		= 0xC3		; [MEMORY MAPPED] USART Control and Status Register D
.equ	UCSRC		= 0xC2		; [MEMORY MAPPED] USART Control and Status Register C
.equ	UCSRB		= 0xC1		; [MEMORY MAPPED] USART Control and Status Register B
.equ	UCSRA		= 0xC0		; [MEMORY MAPPED] USART Control and Status Register A
.equ	TWSD		= 0xBD		; [MEMORY MAPPED] TWI Slave Data Register
.equ	TWSA		= 0xBC		; [MEMORY MAPPED] TWI Slave Address Register
.equ	TWSAM		= 0xBB		; [MEMORY MAPPED] TWI Slave Address Mask Register
.equ	TWSSRA		= 0xBA		; [MEMORY MAPPED] TWI Slave Status Register A
.equ	TWSCRB		= 0xB9		; [MEMORY MAPPED] TWI Slave Control Register B
.equ	TWSCRA		= 0xB8		; [MEMORY MAPPED] TWI Slave Control Register A
.equ	OCR1B		= 0x8A		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register  Bytes
.equ	OCR1A		= 0x88		; [MEMORY MAPPED] Timer/Counter1 Output Compare Register  Bytes
.equ	ICR1		= 0x86		; [MEMORY MAPPED] Timer/Counter1 Input Capture Register  Bytes
.equ	TCNT1		= 0x84		; [MEMORY MAPPED] Timer/Counter1  Bytes
.equ	TCCR1C		= 0x82		; [MEMORY MAPPED] Timer/Counter1 Control Register C
.equ	TCCR1B		= 0x81		; [MEMORY MAPPED] Timer/Counter1 Control Register B
.equ	TCCR1A		= 0x80		; [MEMORY MAPPED] Timer/Counter1 Control Register A
.equ	DIDR1		= 0x7F		; [MEMORY MAPPED] Digital Input Disable Register 1
.equ	DIDR0		= 0x7E		; [MEMORY MAPPED] Digital Input Disable Register 0
.equ	ADMUXB		= 0x7D		; [MEMORY MAPPED] The ADC multiplexer Selection Register B
.equ	ADMUXA		= 0x7C		; [MEMORY MAPPED] The ADC multiplexer Selection Register A
.equ	ADCSRB		= 0x7B		; [MEMORY MAPPED] ADC Control and Status Register B
.equ	ADCSRA		= 0x7A		; [MEMORY MAPPED] The ADC Control and Status register
.equ	ADC		= 0x78		; [MEMORY MAPPED] ADC Data Register  Bytes
.equ	PCMSK3		= 0x73		; [MEMORY MAPPED] Pin Change Mask Register 3
.equ	TIMSK1		= 0x6F		; [MEMORY MAPPED] Timer/Counter Interrupt Mask Register
.equ	TIMSK0		= 0x6E		; [MEMORY MAPPED] Timer/Counter0 Interrupt Mask Register
.equ	PCMSK2		= 0x6D		; [MEMORY MAPPED] Pin Change Mask Register 2
.equ	PCMSK1		= 0x6C		; [MEMORY MAPPED] Pin Change Mask Register 1
.equ	PCMSK0		= 0x6B		; [MEMORY MAPPED] Pin Change Mask Register 0
.equ	EICRA		= 0x69		; [MEMORY MAPPED] External Interrupt Control Register
.equ	PCICR		= 0x68		; [MEMORY MAPPED] Pin Change Interrupt Control Register
.equ	OSCCAL1		= 0x67		; [MEMORY MAPPED] Oscillator Calibration Register 32kHz
.equ	OSCCAL0		= 0x66		; [MEMORY MAPPED] Oscillator Calibration Register 8MHz
.equ	PRR		= 0x64		; [MEMORY MAPPED] Power Reduction Register
.equ	CLKPR		= 0x61		; [MEMORY MAPPED] Clock Prescale Register
.equ	WDTCSR		= 0x60		; [MEMORY MAPPED] Watchdog Timer Control and Status Register
.equ	SREG		= 0x3F		; Status Register
.equ	SP		= 0x3D		; Stack Pointer 
.equ	SPMCSR		= 0x37		; Store Program Memory Control and Status Register
.equ	CCP		= 0x36		; Configuration Change Protection
.equ	MCUCR		= 0x35		; MCU Control Register
.equ	MCUSR		= 0x34		; MCU Status Register
.equ	SMCR		= 0x33		; Sleep Mode Control Register
.equ	ACSRA		= 0x30		; Analog Comparator Control And Status Register A
.equ	ACSRB		= 0x2F		; Analog Comparator Control And Status Register B
.equ	SPDR		= 0x2E		; SPI Data Register
.equ	SPSR		= 0x2D		; SPI Status Register
.equ	SPCR		= 0x2C		; SPI Control Register
.equ	GPIOR2		= 0x2B		; General Purpose I/O Register 2
.equ	GPIOR1		= 0x2A		; General Purpose I/O Register 1
.equ	OCR0B		= 0x28		; Timer/Counter0 Output Compare Register
.equ	OCR0A		= 0x27		; Timer/Counter0 Output Compare Register
.equ	TCNT0		= 0x26		; Timer/Counter0
.equ	TCCR0B		= 0x25		; Timer/Counter Control Register B
.equ	TCCR0A		= 0x24		; Timer/Counter  Control Register A
.equ	GTCCR		= 0x23		; General Timer/Counter Control Register
.equ	EEAR		= 0x21		; EEPROM Read/Write Access
.equ	EEARL		= 0x21		; EEPROM Read/Write Access
.equ	EEDR		= 0x20		; EEPROM Data Register
.equ	EECR		= 0x1F		; EEPROM Control Register
.equ	GPIOR0		= 0x1E		; General Purpose I/O Register 0
.equ	EIMSK		= 0x1D		; External Interrupt Mask Register
.equ	EIFR		= 0x1C		; External Interrupt Flag Register
.equ	PCIFR		= 0x1B		; Pin Change Interrupt Flag Register
.equ	TIFR1		= 0x16		; Timer/Counter Interrupt Flag register
.equ	TIFR0		= 0x15		; Timer/Counter0 Interrupt Flag register
.equ	PHDE		= 0x14		; Port High Drive Enable Register
.equ	PUED		= 0x0F		; Pull-up Enable Control Register
.equ	PORTD		= 0x0E		; Port D Data Register
.equ	DDRD		= 0x0D		; Data Direction Register, Port D
.equ	PIND		= 0x0C		; Port D Input Pins
.equ	PUEC		= 0x0B		; Pull-up Enable Control Register
.equ	PORTC		= 0x0A		; Port C Data Register
.equ	DDRC		= 0x09		; Data Direction Register, Port C
.equ	PINC		= 0x08		; Port C Input Pins
.equ	PUEB		= 0x07		; Pull-up Enable Control Register
.equ	PORTB		= 0x06		; Port B Data Register
.equ	DDRB		= 0x05		; Data Direction Register, Port B
.equ	PINB		= 0x04		; Port B Input Pins
.equ	PUEA		= 0x03		; Pull-up Enable Control Register
.equ	PORTA		= 0x02		; Port A Data Register
.equ	DDRA		= 0x01		; Data Direction Register, Port A
.equ	PINA		= 0x00		; Port A Input Pins


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



; ====	PORT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PHDE bits		------------------------
.equ	PHDEC		= 2		; 0x04 - Port C High Drive Enable



; ====	CPU MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register PRR bits		------------------------
.equ	PRTWI		= 7		; 0x80 - Power Reduction TWI
.equ	PRTIM0		= 5		; 0x20 - Power Reduction Timer/Counter0
.equ	PRTIM1		= 3		; 0x08 - Power Reduction Timer/Counter1
.equ	PRSPI		= 2		; 0x04 - Power Reduction SPI
.equ	PRUSART0	= 1		; 0x02 - Power Reduction USART 0
.equ	PRADC		= 0		; 0x01 - Power Reduction ADC

; ----------	Register CLKPR bits		------------------------
.equ	CLKPS_MASK	= 0x0F		;      - Clock Prescaler Select Bits (4 bits)
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
.equ	IVSEL		= 1		; 0x02 - Interrupt Vector Select

; ----------	Register MCUSR bits		------------------------
.equ	WDRF		= 3		; 0x08 - Watchdog Reset Flag
.equ	BORF		= 2		; 0x04 - Brown-out Reset Flag
.equ	EXTRF		= 1		; 0x02 - External Reset Flag
.equ	PORF		= 0		; 0x01 - Power-on reset flag

; ----------	Register SMCR bits		------------------------
.equ	SM_MASK		= 0x06		;      - Sleep Mode Select Bits (2 bits)
.equ	SM0		= 1		;          SM BIT0 position
.equ	SE		= 0		; 0x01 - Sleep Enable
; ::::  SM	:::: bitfield values
;			0x00		; Idle
;			0x02		; ADC Noise Reduction (If Available)
;			0x04		; Power Down
;			0x06		; Reserved

; ----------	Register SPMCSR bits		------------------------
.equ	SPMIE		= 7		; 0x80 - SPM Interrupt Enable
.equ	RWWSB		= 6		; 0x40 - Read-While-Write Section Busy
.equ	RSIG		= 5		; 0x20 - Read Device Signature Imprint Table
.equ	RWWSRE		= 4		; 0x10 - Read-While-Write section read enable
.equ	RWFLB		= 3		; 0x08 - Read/Write Fuse and Lock Bits
.equ	PGWRT		= 2		; 0x04 - Page Write
.equ	PGERS		= 1		; 0x02 - Page Erase
.equ	SPMEN		= 0		; 0x01 - Store Program Memory Enable



; ====	TC8 MODULE REGISTERS BITS DEFINITION		========
;
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

; ----------	Register TCCR0A bits		------------------------
.equ	COM0A_MASK	= 0xC0		;      - Compare Output Mode, Phase Correct PWM Mode (2 bits)
.equ	COM0A0		= 6		;          COM0A BIT0 position
.equ	COM0B_MASK	= 0x30		;      - Compare Output Mode, Fast PWm (2 bits)
.equ	COM0B0		= 4		;          COM0B BIT0 position
.equ	WGM0_MASK	= 0x03		;      - Waveform Generation Mode (2 bits)
.equ	WGM00		= 0		;          WGM0 BIT0 position

; ----------	Register TIMSK0 bits		------------------------
.equ	OCIE0B		= 2		; 0x04 - Timer/Counter0 Output Compare Match B Interrupt Enable
.equ	OCIE0A		= 1		; 0x02 - Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0		= 0		; 0x01 - Timer/Counter0 Overflow Interrupt Enable

; ----------	Register TIFR0 bits		------------------------
.equ	OCF0B		= 2		; 0x04 - Timer/Counter0 Output Compare Flag 0B
.equ	OCF0A		= 1		; 0x02 - Timer/Counter0 Output Compare Flag 0A
.equ	TOV0		= 0		; 0x01 - Timer/Counter0 Overflow Flag

; ----------	Register GTCCR bits		------------------------
.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



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
.equ	COM1A_MASK	= 0xC0		;      - Compare Output Mode 1A, bits (2 bits)
.equ	COM1A0		= 6		;          COM1A BIT0 position
.equ	COM1B_MASK	= 0x30		;      - Compare Output Mode 1B, bits (2 bits)
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
.equ	FOC1A		= 7		; 0x80 - 
.equ	FOC1B		= 6		; 0x40 - 

; ----------	Register GTCCR bits		------------------------
;.equ	TSM		= 7		; 0x80 - Timer/Counter Synchronization Mode
;.equ	PSRSYNC		= 0		; 0x01 - Prescaler Reset Timer/Counter1 and Timer/Counter0



; ====	TOCPM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TOCPMSA1 bits		------------------------
.equ	TOCC7S_MASK	= 0xC0		;      - Timer Output Compare Channel 7 Selection Bits (2 bits)
.equ	TOCC7S0		= 6		;          TOCC7S BIT0 position
.equ	TOCC6S_MASK	= 0x30		;      - Timer Output Compare Channel 6 Selection Bits (2 bits)
.equ	TOCC6S0		= 4		;          TOCC6S BIT0 position
.equ	TOCC5S_MASK	= 0x0C		;      - Timer Output Compare Channel 5 Selection Bits (2 bits)
.equ	TOCC5S0		= 2		;          TOCC5S BIT0 position
.equ	TOCC4S_MASK	= 0x03		;      - Timer Output Compare Channel 4 Selection Bits (2 bits)
.equ	TOCC4S0		= 0		;          TOCC4S BIT0 position

; ----------	Register TOCPMSA0 bits		------------------------
.equ	TOCC3S_MASK	= 0xC0		;      - Timer Output Compare Channel 3 Selection Bits (2 bits)
.equ	TOCC3S0		= 6		;          TOCC3S BIT0 position
.equ	TOCC2S_MASK	= 0x30		;      - Timer Output Compare Channel 2 Selection Bits (2 bits)
.equ	TOCC2S0		= 4		;          TOCC2S BIT0 position
.equ	TOCC1S_MASK	= 0x0C		;      - Timer Output Compare Channel 1 Selection Bits (2 bits)
.equ	TOCC1S0		= 2		;          TOCC1S BIT0 position
.equ	TOCC0S_MASK	= 0x03		;      - Timer Output Compare Channel 0 Selection Bits (2 bits)
.equ	TOCC0S0		= 0		;          TOCC0S BIT0 position

; ----------	Register TOCPMCOE bits		------------------------
.equ	TOCC7OE		= 7		; 0x80 - Timer Output Compare Channel 7 Output Enable
.equ	TOCC6OE		= 6		; 0x40 - Timer Output Compare Channel 6 Output Enable
.equ	TOCC5OE		= 5		; 0x20 - Timer Output Compare Channel 5 Output Enable
.equ	TOCC4OE		= 4		; 0x10 - Timer Output Compare Channel 4 Output Enable
.equ	TOCC3OE		= 3		; 0x08 - Timer Output Compare Channel 3 Output Enable
.equ	TOCC2OE		= 2		; 0x04 - Timer Output Compare Channel 2 Output Enable
.equ	TOCC1OE		= 1		; 0x02 - Timer Output Compare Channel 1 Output Enable
.equ	TOCC0OE		= 0		; 0x01 - Timer Output Compare Channel 0 Output Enable



; ====	ADC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ADMUXA bits		------------------------
.equ	MUX_MASK	= 0x1F		;      - Analog Channel Selection Bits 4:0 (5 bits)
.equ	MUX0		= 0		;          MUX BIT0 position

; ----------	Register ADMUXB bits		------------------------
.equ	REFS		= 5		; 0x20 - Reference Selection Bit
.equ	MUX5		= 0		; 0x01 - Analog Channel Selection Bit 5

; ----------	Register ADCSRA bits		------------------------
.equ	ADEN		= 7		; 0x80 - ADC Enable
.equ	ADSC		= 6		; 0x40 - ADC Start Conversion
.equ	ADATE		= 5		; 0x20 - ADC Auto Trigger Enable
.equ	ADIF		= 4		; 0x10 - ADC Interrupt Flag
.equ	ADIE		= 3		; 0x08 - ADC Interrupt Enable
.equ	ADPS_MASK	= 0x07		;      - ADC Prescaler Select Bits (3 bits)
.equ	ADPS0		= 0		;          ADPS BIT0 position
; ::::  ADPS	:::: bitfield values
;			0x00		; 2
;			0x01		; 2
;			0x02		; 4
;			0x03		; 8
;			0x04		; 16
;			0x05		; 32
;			0x06		; 64
;			0x07		; 128

; ----------	Register ADCSRB bits		------------------------
.equ	ADLAR		= 3		; 0x08 - 
.equ	ADTS_MASK	= 0x07		;      - ADC Auto Trigger Sources (3 bits)
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

; ----------	Register DIDR3 bits		------------------------
.equ	ADC27D		= 3		; 0x08 - ADC27 Digital input Disable
.equ	ADC26D		= 2		; 0x04 - ADC26 Digital input Disable
.equ	ADC25D		= 1		; 0x02 - ADC25 Digital input Disable
.equ	ADC24D		= 0		; 0x01 - ADC24 Digital input Disable

; ----------	Register DIDR2 bits		------------------------
.equ	ADC23D		= 7		; 0x80 - ADC23 Digital input Disable
.equ	ADC22D		= 6		; 0x40 - ADC22 Digital input Disable
.equ	ADC21D		= 5		; 0x20 - ADC21 Digital input Disable
.equ	ADC20D		= 4		; 0x10 - ADC20 Digital input Disable
.equ	ADC19D		= 3		; 0x08 - ADC19 Digital input Disable
.equ	ADC18D		= 2		; 0x04 - ADC18 Digital input Disable
.equ	ADC17D		= 1		; 0x02 - ADC17 Digital input Disable
.equ	ADC16D		= 0		; 0x01 - ADC16 Digital input Disable

; ----------	Register DIDR1 bits		------------------------
.equ	ADC15D		= 7		; 0x80 - ADC15 Digital input Disable
.equ	ADC14D		= 6		; 0x40 - ADC14 Digital input Disable
.equ	ADC13D		= 5		; 0x20 - ADC13 Digital input Disable
.equ	ADC12D		= 4		; 0x10 - ADC12 Digital input Disable
.equ	ADC11D		= 3		; 0x08 - ADC11 Digital input Disable
.equ	ADC10D		= 2		; 0x04 - ADC10 Digital input Disable
.equ	ADC9D		= 1		; 0x02 - ADC9 Digital input Disable
.equ	ADC8D		= 0		; 0x01 - ADC8 Digital input Disable

; ----------	Register DIDR0 bits		------------------------
.equ	ADC7D		= 7		; 0x80 - ADC7 Digital input Disable
.equ	ADC6D		= 6		; 0x40 - ADC6 Digital input Disable
.equ	ADC5D		= 5		; 0x20 - ADC5 Digital input Disable
.equ	ADC4D		= 4		; 0x10 - ADC4 Digital input Disable
.equ	ADC3D		= 3		; 0x08 - ADC3 Digital input Disable
.equ	ADC2D		= 2		; 0x04 - ADC2 Digital input Disable
.equ	ADC1D		= 1		; 0x02 - ADC1 Digital input Disable
.equ	ADC0D		= 0		; 0x01 - ADC0 Digital input Disable



; ====	AC MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register ACSRB bits		------------------------
.equ	HSEL		= 7		; 0x80 - Hysteresis Select
.equ	HLEV		= 6		; 0x40 - Hysteresis Level
.equ	ACNMUX_MASK	= 0x0C		;      - Analog Comparator Negative Input Multiplexer (2 bits)
.equ	ACNMUX0		= 2		;          ACNMUX BIT0 position
.equ	ACPMUX_MASK	= 0x03		;      - Analog Comparator Positive Input Multiplexer Bits 1:0 (2 bits)
.equ	ACPMUX0		= 0		;          ACPMUX BIT0 position

; ----------	Register ACSRA bits		------------------------
.equ	ACD		= 7		; 0x80 - Analog Comparator Disable
.equ	ACPMUX2		= 6		; 0x40 - Analog Comparator Positive Input Multiplexer Bit 2
.equ	ACO		= 5		; 0x20 - Analog Compare Output
.equ	ACI		= 4		; 0x10 - Analog Comparator Interrupt Flag
.equ	ACIE		= 3		; 0x08 - Analog Comparator Interrupt Enable
.equ	ACIC		= 2		; 0x04 - Analog Comparator Input Capture Enable
.equ	ACIS_MASK	= 0x03		;      - Analog Comparator Interrupt Mode Select bits (2 bits)
.equ	ACIS0		= 0		;          ACIS BIT0 position
; ::::  ACIS	:::: bitfield values
;			0x00		; Interrupt on Toggle
;			0x01		; Reserved
;			0x02		; Interrupt on Falling Edge
;			0x03		; Interrupt on Rising Edge



; ====	EXINT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EICRA bits		------------------------
.equ	ISC1_MASK	= 0x0C		;      - External Interrupt Sense Control 1 Bits (2 bits)
.equ	ISC10		= 2		;          ISC1 BIT0 position
.equ	ISC0_MASK	= 0x03		;      - External Interrupt Sense Control 0 Bits (2 bits)
.equ	ISC00		= 0		;          ISC0 BIT0 position
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
.equ	INT_MASK	= 0x03		;      - External Interrupt Request Enables (2 bits)
.equ	INT0		= 0		;          INT BIT0 position

; ----------	Register EIFR bits		------------------------
.equ	INTF_MASK	= 0x03		;      - External Interrupt Flags (2 bits)
.equ	INTF0		= 0		;          INTF BIT0 position

; ----------	Register PCICR bits		------------------------
.equ	PCIE_MASK	= 0x0F		;      - Pin Change Interrupt Enables (4 bits)
.equ	PCIE0		= 0		;          PCIE BIT0 position

; ----------	Register PCMSK3 bits		------------------------
.equ	PCMSK3_PCINT_MASK= 0x0F		;      - Pin Change Enable Masks (4 bits)
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



; ====	WDT MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register WDTCSR bits		------------------------
.equ	WDIF		= 7		; 0x80 - Watchdog Timer Interrupt Flag
.equ	WDIE		= 6		; 0x40 - Watchdog Timer Interrupt Enable
.equ	WDP_MASK	= 0x27		;      - Watchdog Timer Prescaler Bits (4 bits)
.equ	WDE		= 3		; 0x08 - Watch Dog Enable
; ::::  WDP	:::: bitfield values
;			0x00		; Oscillator Cycles 512 (16 ms)
;			0x01		; Oscillator Cycles 1K (32 ms)
;			0x02		; Oscillator Cycles 2K (64 ms)
;			0x03		; Oscillator Cycles 4K (0.125 s)
;			0x04		; Oscillator Cycles 8K (0.25 s)
;			0x05		; Oscillator Cycles 16K (0.5 s)
;			0x06		; Oscillator Cycles 32K (1.0 s)
;			0x07		; Oscillator Cycles 64K (2.0 s)
;			0x20		; Oscillator Cycles 128K (4.0 s)
;			0x21		; Oscillator Cycles 256K (8.0 s)



; ====	EEPROM MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register EECR bits		------------------------
.equ	EEPM_MASK	= 0x30		;      - EEPROM Programming Mode Bits (2 bits)
.equ	EEPM0		= 4		;          EEPM BIT0 position
.equ	EERIE		= 3		; 0x08 - EEProm Ready Interrupt Enable
.equ	EEMPE		= 2		; 0x04 - EEPROM Master Write Enable
.equ	EEPE		= 1		; 0x02 - EEPROM Write Enable
.equ	EERE		= 0		; 0x01 - EEPROM Read Enable
; ::::  EEPM	:::: bitfield values
;			0x00		; Erase and Write in one operation
;			0x10		; Erase Only
;			0x20		; Write Only



; ====	TWI MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register TWSCRA bits		------------------------
.equ	TWSHE		= 7		; 0x80 - TWI SDA Hold Time Enable
.equ	TWDIE		= 5		; 0x20 - TWI Data Interrupt Enable
.equ	TWASIE		= 4		; 0x10 - TWI Address/Stop Interrupt Enable
.equ	TWEN		= 3		; 0x08 - Two-Wire Interface Enable
.equ	TWSIE		= 2		; 0x04 - TWI Stop Interrupt Enable
.equ	TWPME		= 1		; 0x02 - TWI Promiscuous Mode Enable
.equ	TWSME		= 0		; 0x01 - TWI Smart Mode Enable

; ----------	Register TWSCRB bits		------------------------
.equ	TWHNM		= 3		; 0x08 - TWI High Noise Mode
.equ	TWAA		= 2		; 0x04 - TWI Acknowledge Action
.equ	TWCMD_MASK	= 0x03		;      -  (2 bits)
.equ	TWCMD0		= 0		;          TWCMD BIT0 position

; ----------	Register TWSSRA bits		------------------------
.equ	TWDIF		= 7		; 0x80 - TWI Data Interrupt Flag.
.equ	TWASIF		= 6		; 0x40 - TWI Address/Stop Interrupt Flag
.equ	TWCH		= 5		; 0x20 - TWI Clock Hold
.equ	TWRA		= 4		; 0x10 - TWI Receive Acknowledge
.equ	TWC		= 3		; 0x08 - TWI Collision
.equ	TWBE		= 2		; 0x04 - TWI Bus Error
.equ	TWDIR		= 1		; 0x02 - TWI Read/Write Direction
.equ	TWAS		= 0		; 0x01 - TWI Address or Stop

; ----------	Register TWSD bits		------------------------
.equ	TWSD_MASK	= 0xFF		;      - TWI slave data bit (8 bits)
.equ	TWSD0		= 0		;          TWSD BIT0 position

; ----------	Register TWSAM bits		------------------------
.equ	TWSAM_MASK	= 0xFE		;      - TWI Address Mask Bits (7 bits)
.equ	TWSAM0		= 1		;          TWSAM BIT0 position
.equ	TWAE		= 0		; 0x01 - TWI Address Enable



; ====	USART MODULE REGISTERS BITS DEFINITION		========
;
; ----------	Register UCSRA bits		------------------------
.equ	RXC		= 7		; 0x80 - USART Receive Complete
.equ	TXC		= 6		; 0x40 - USART Transmit Complete
.equ	UDRE		= 5		; 0x20 - USART Data Register Empty
.equ	FE		= 4		; 0x10 - Framing Error
.equ	DOR		= 3		; 0x08 - Data Overrun
.equ	UPE		= 2		; 0x04 - Parity Error
.equ	U2X		= 1		; 0x02 - Double the USART transmission speed
.equ	MPCM		= 0		; 0x01 - Multi-processor Communication Mode

; ----------	Register UCSRB bits		------------------------
.equ	RXCIE		= 7		; 0x80 - RX Complete Interrupt Enable
.equ	TXCIE		= 6		; 0x40 - TX Complete Interrupt Enable
.equ	UDRIE		= 5		; 0x20 - USART Data register Empty Interrupt Enable
.equ	RXEN		= 4		; 0x10 - Receiver Enable
.equ	TXEN		= 3		; 0x08 - Transmitter Enable
.equ	UCSZ2		= 2		; 0x04 - Character Size
.equ	RXB8		= 1		; 0x02 - Receive Data Bit 8
.equ	TXB8		= 0		; 0x01 - Transmit Data Bit 8

; ----------	Register UCSRC bits		------------------------
.equ	UMSEL_MASK	= 0xC0		;      - USART Mode Select (2 bits)
.equ	UMSEL0		= 6		;          UMSEL BIT0 position
.equ	UPM_MASK	= 0x30		;      - Parity Mode Bits (2 bits)
.equ	UPM0		= 4		;          UPM BIT0 position
.equ	USBS		= 3		; 0x08 - Stop Bit Select
.equ	UCSZ_MASK	= 0x06		;      - Character Size (2 bits)
.equ	UCSZ0		= 1		;          UCSZ BIT0 position
.equ	UCPOL		= 0		; 0x01 - Clock Polarity
; ::::  UMSEL	:::: bitfield values
;			0x00		; Asynchronous Operation
;			0x40		; Synchronous Operation
; ::::  UPM	:::: bitfield values
;			0x00		; Disabled
;			0x10		; Reserved
;			0x20		; Enabled, Even Parity
;			0x30		; Enabled, Odd Parity
; ::::  USBS	:::: bitfield values
;			0x00		; 1-bit
;			0x08		; 2-bit

; ----------	Register UCSRD bits		------------------------
.equ	RXSIE		= 7		; 0x80 - USART RX Start Interrupt Enable
.equ	RXS		= 6		; 0x40 - USART RX Start Flag
.equ	SFDE		= 5		; 0x20 - USART RX Start Frame Detection Enable




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
.equ	INT_VECTORS_NUM		= 26
.equ	INT_VECTORS_SIZE	= 0x34
;
; ----------	INTERRUPT INDEXES		------------------------
;
;	0	RESET		; External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;	1	INT0		; External Interrupt Request 0
;	2	INT1		; External Interrupt Request 1
;	3	PCINT0		; Pin Change Interrupt Request 0
;	4	PCINT1		; Pin Change Interrupt Request 1
;	5	PCINT2		; Pin Change Interrupt Request 2
;	6	PCINT3		; Pin Change Interrupt Request 3
;	7	WDT		; Watchdog Time-out Interrupt
;	8	TIMER1_CAPT	; Timer/Counter1 Capture Event
;	9	TIMER1_COMPA	; Timer/Counter1 Compare Match A
;	10	TIMER1_COMPB	; Timer/Counter1 Compare Match B
;	11	TIMER1_OVF	; Timer/Counter1 Overflow
;	12	TIMER0_COMPA	; Timer/Counter0 Compare Match A
;	13	TIMER0_COMPB	; Timer/Counter0 Compare Match B
;	14	TIMER0_OVF	; Timer/Counter0 Overflow
;	15	SPI_STC		; SPI Serial Transfer Complete
;	16	USART_START	; USART, Start
;	17	USART_RX	; USART Rx Complete
;	18	USART_UDRE	; USART, Data Register Empty
;	19	USART_TX	; USART Tx Complete
;	20	ADC		; ADC Conversion Complete
;	21	EE_READY	; EEPROM Ready
;	22	ANALOG_COMP	; Analog Comparator
;	23	TWI_SLAVE	; Two-wire Serial Interface
;	24	SPM_Ready	; Store Program Memory Read
;	25	QTRIP		; Touch Sensing


; ====	ASM PROGRAM SKELETON				========
;
;  Copy-paste following definitions into your code,
;  uncomment and modify for your needs
;
; ----------	 >>>   SKELETON BEGIN   <<<	------------------------
;#	.org 0x0000
;#	; Interrupt vectors begin
;#		rjmp	RESET		; RESET		 - External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset
;#		rjmp	INT0_ISR	; INT0		 - External Interrupt Request 0
;#		reti			; INT1		 - External Interrupt Request 1
;#		rjmp	PCINT0_ISR	; PCINT0	 - Pin Change Interrupt Request 0
;#		reti			; PCINT1	 - Pin Change Interrupt Request 1
;#		reti			; PCINT2	 - Pin Change Interrupt Request 2
;#		reti			; PCINT3	 - Pin Change Interrupt Request 3
;#		reti			; WDT		 - Watchdog Time-out Interrupt
;#		reti			; TIMER1_CAPT	 - Timer/Counter1 Capture Event
;#		reti			; TIMER1_COMPA	 - Timer/Counter1 Compare Match A
;#		reti			; TIMER1_COMPB	 - Timer/Counter1 Compare Match B
;#		reti			; TIMER1_OVF	 - Timer/Counter1 Overflow
;#		reti			; TIMER0_COMPA	 - Timer/Counter0 Compare Match A
;#		reti			; TIMER0_COMPB	 - Timer/Counter0 Compare Match B
;#		reti			; TIMER0_OVF	 - Timer/Counter0 Overflow
;#		reti			; SPI_STC	 - SPI Serial Transfer Complete
;#		reti			; USART_START	 - USART, Start
;#		reti			; USART_RX	 - USART Rx Complete
;#		reti			; USART_UDRE	 - USART, Data Register Empty
;#		reti			; USART_TX	 - USART Tx Complete
;#		reti			; ADC		 - ADC Conversion Complete
;#		rjmp	EE_READY_ISR	; EE_READY	 - EEPROM Ready
;#		reti			; ANALOG_COMP	 - Analog Comparator
;#		reti			; TWI_SLAVE	 - Two-wire Serial Interface
;#		reti			; SPM_Ready	 - Store Program Memory Read
;#		reti			; QTRIP		 - Touch Sensing
;#	; Interrupt vectors end
;#	;.org INT_VECTORS_SIZE
;#	RESET:
;#		cli
;#		ldi	r16, high(ADDR_IRAM_END)
;#		out	SP+1, r16
;#		ldi	r16, low(ADDR_IRAM_END)
;#		out	SP, r16
; ----------	 >>>   SKELETON  END    <<<	------------------------

#endif /* _ATTINY828_INC_ */

; ************************ END OF FILE *********************************

