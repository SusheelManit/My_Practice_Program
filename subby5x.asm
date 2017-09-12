#this assembly program take two intger and calculate a-5b

.section .data

.section .bss

.global subby5x

.section .text
	subby5x:
	movl %edi,%eax
	movl %esi,%ebx
	imull $5,%esi
	subl %esi,%eax
	ret

