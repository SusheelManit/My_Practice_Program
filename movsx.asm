#this program illustrate movsx instruction

.section .data
	mystring:
		.asciz "Hello World"
.bss
	.lcomm yourstring 20

.global _start
.section .text
_start:
	movl $mystring,%esi
	movl $yourstring ,%edi
	movsb

	#now use movsw instructrion
	leal mystring,%esi
	leal yourstring,%edi
	movsw

	# now perform movsl instruction
	movl $mystring,%esi
	movl $yourstring,%edi
	movsl
	movl $1,%eax
	movl $0,%ebx
	int $0x80
