# atdf-device-asm-include

Generate device-specifc macroassembler include files for AVR8 MCU family from .atdf (XML) MCU specification.

## Preamble

Microchip provides own macroassembler *.inc* files for their devices. But I found them not much useful when working with independent compiler like AVRA <https://github.com/Ro5bert/avra>. Great thing that there is detailed XML specification for MCUs in *.atdf* files in their “device packs”. Packs are available for download on their website [http://packs.download.atmel.com](http://packs.download.atmel.com/). So I created own converter which makes include files from *.atdf* descriptions. Actually it works for AVR, AVR8 and AVR8L architectures only. But this covers even more devices than AVRA supports.

Another aim of the project was to reduce almost permanent necessity to look into MCU docs when working with registers. Actual includes contain enough detailed comments and ready-to-use values. This does not cancel reading docs of course but simplifies working with the includes.

## Differences with “pack .inc files”

Naming of the registers and bits is kept as close as possible with Microchip one. But in some cases it appeared better to follow *.atdf* specification closer than their “historical naming”. For example **SRAM_START** become  **ADDR_IRAM_START**, **RAMEND** become **ADDR_IRAM_END**, also **FLASHEND** become **ADDR_FLASH_END** (and without “word” variations), etc. At least this allowed to define all address spaces used in MCUs in unified manner.

Instead of defining bare bit numbers for registers, another combined approach is used.

Single bit oriented MCU operations refer to the bit number in the corresponding assembler command, i.e.

```
sbi EECR, EEMPE
...
sbic ADCSRA, ADEN
```

Other commands work rather with set of bits, but it’s easy to get bitmask from bit number using shift operator, i.e.

```
ori r16, (1<<WDCE) | (1<<WDE)
```

So all single bits in MCU registers are defined by their numbers.

```
.equ    PUD             = 6             ; 0x40 - Pull-up Disable 
.equ    SE              = 5             ; 0x20 - Sleep Enable
```

Another case is a group of bits which alltogether control certain functionality. Instead of single bit operations it makes sense to work with their set only. So for such cases bitmask is defined in *.inc* file (bitfield name suffixed with **\_MASK**).

```
.equ  WDP_MASK       = 0x27   ;      - Watchdog Timer Prescaler Bits (4 bits)
```

(pay attention that in the example above bits are not sequential, there is “a gap” between them)

In case there is no “gap” in the bits, the number of lower bit for the bitfield is defined also (bitfield name suffixed with **0**):

```
.equ  COM0B_MASK     = 0x30   ;      - Compare Match Output B Mode (2 bits) 
.equ  COM0B0         = 4      ;          COM0B BIT0 position
```

When *.atdf* specification contains values for such bitfield, they are listed as a comment with hex numbers ready to apply to the register without shift operation. See for example values for WDP bitfield shown above:

```
; ::::  WDP     :::: bitfield values 
;                       0x00            ; Oscillator Cycles 2K 
;                       0x01            ; Oscillator Cycles 4K 
;                       0x02            ; Oscillator Cycles 8K 
;                       0x03            ; Oscillator Cycles 16K 
;                       0x04            ; Oscillator Cycles 32K 
;                       0x05            ; Oscillator Cycles 64K 
;                       0x06            ; Oscillator Cycles 128K 
;                       0x07            ; Oscillator Cycles 256K 
;                       0x20            ; Oscillator Cycles 512K 
;                       0x21            ; Oscillator Cycles 1024K
```

Other differences include absence of *#pragma*s. There is also a skeleton of asm program at the end of each *.inc* file (included as a comment!). It contains all interrupt entries of the defined MCU represented as an assembler code (which you could simple copy-paste to the beginning of your program).

## Scripts

**atdf2inc.sh** - converts MCU XML description (*.atdf* file) into macroassembler definitions (*.inc* file)

**atdfdir2incdir.sh** - provides mass conversion of *.atdf* files into their *.inc* “images”.

**test4avra.sh** - checks a list of *.inc* files (placed in a dir) on compatibility with AVRA macroassembler. For every *.inc* file an almost empty assembler code is generated and then compiled using *avra*. Success or failure is displayed. To see compilation errors use *-v* flag.

## Notes

Compatibility with “device packs” *.inc*s is not the aim of this project although matching *.atdf* specification is inevitable requirement. Work is not finished, so it’s possible that some MCU options/functionality remain absent in the *.inc* files (but specified in *.atdf* file). Also other MCU families could be added to the project if approach proves itself. Suggestions are welcome. And of course a lot of live testing is still required.