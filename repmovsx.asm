#this assembly program illustrate rep movsx instruction

.data
	source:
		.asciz "This program illustrate continous copy string to source to destionation thank you!"
.bss
	.lcomm dest,50

.global _start

.text
_start:
	movl $source,%esi
	leal dest,%edi
	movl $40,%ecx
	rep movsb
	movl $1,%eax
	movl $0,%ebx
	#end program
