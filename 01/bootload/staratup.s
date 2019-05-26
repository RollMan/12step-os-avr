.include "m88Pdef.inc"
.CSEG
; .global _start
_start:
	mov.l #0xffff00, sp
	ldi sph, 0x04
	ldi spl, 0xff ; end of SRAM: 0x04ff
	rcall _main

exitl:
	rjmp exitl
