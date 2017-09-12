# this program illustrate direction flag in assembly

.data
	mystring:
		.asciz "Hello World!"
.bss
	.lcomm dest,10

.global _start

.text
_start:
	movl $mystring ,%esi
	leal dest,%edi
	movsl
	std
	movsl
	movl $1,%eax
	movl $0,%ebx
	int $0x80
