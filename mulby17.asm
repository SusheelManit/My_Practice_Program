#this assembly program take a signed integr and multiply by it 17

.section .data

.section .bss

.global mulby17

.section .text
	mulby17:
	movl %edi,%eax
	imull $17,%eax
	ret

