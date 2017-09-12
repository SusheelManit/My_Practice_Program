#this is program for passsing value in function 

.section .data

.section .bss

.global addbyint

.section .text
	addbyint:
	movl %edi,%eax
	addl %esi,%eax
	addl %edx,%eax
	addl %ecx,%eax
	ret
