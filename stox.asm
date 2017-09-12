#this program illustrate store x instruction using assembly

.data 
	source:
		.asciz "Hello World!\n"
.bss
	.lcomm dest,20

.global _start

.text
_start:
	leal source ,%esi
	lodsb
	leal dest ,%edi
	stosb
	lodsb
	stosb
	lodsb
	stosb
	movl $1,%eax
	movl $0,%ebx
	int $0x80
	#end

	
