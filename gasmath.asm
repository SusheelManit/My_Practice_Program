# this assembly program for addiition and subtraction

.section .data

.global init
.global sub

.section .text
	init:
		movl $25,%eax
		ret
	sub:
		movl $25,%eax
		sub $25,%eax
		ret
