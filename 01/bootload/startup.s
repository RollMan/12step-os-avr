.global start
.text
start:
	ldi r16, 0x04
	ldi r17, 0xff
	OUT 0x3e, r16
	OUT 0x3d, r17 ; end of SRAM: 0x04ff
	rcall main

exitl:
	rjmp exitl
