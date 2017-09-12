#this progra illustrate or operation in assembly

.section .data

.section .bss

.global performOr

.section .text
	performOr:
	movl $2783,%eax
	orl $1552,%eax
	ret
