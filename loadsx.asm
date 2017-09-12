# this program illustrate lodsx instruction in to register

.data 
	mystring:
		.asciz "Hello World!"
.bss
	.lcomm dest ,20

.global _start

.text
_start:
	leal mystring,%esi
	lodsb
	dec %esi
	movb $0,%al
	lodsw
	movw $0,%ax
	subl $2,%esi
	lodsl
	movl $0,%eax
	subl $4,%esi
	movl $1,%eax
	movl $0,%ebx
	int $0x80
	# end of program
