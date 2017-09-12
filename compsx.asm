# this assembly program illustrate cmpsx family set of instruction
.data
	source:
		.asciz "Hello World"
	source1:
		.asciz "Tello India"
.bss
	.lcomm dest,20
.global _start

.text
_start:
	leal source,%esi
	leal dest,%edi
	movl $12,%ecx
	rep movsb
	leal source,%esi
	leal dest,%edi
	cmpsb
	leal source1,%esi
	leal dest,%edi
	cmpsb
	movl $1,%eax
	movl $0,%ebx
	int $0x80
#end of program

