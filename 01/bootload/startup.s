.include "tn2313def.inc"
.global start
.text
start:
	ldi r17, lo8(RAMEND)
	OUT SPL, r17 ; end of SRAM: 0x04ff
	rcall main

exitl:
	rjmp exitl
