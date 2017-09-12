#this program illustrates compariosn

.section .data
	agreater:
	.asciz "A is lesser\n"
	bgreater:
	.asciz "B is Greater\n"
.section .text
	.global _start
_start:
	movl $5,%eax
	movl $10,%ebx
	cmp %ebx,%eax
	jl T1
	movl $4,%eax
	movl $1,%ebx
	movl $bgreater,%ecx
	movl $12,%edx
	int $0x80
	T1:
	movl $4,%eax
	movl $1,%ebx
	movl $agreater,%ecx
	movl $12,%edx
	int $0x80
	movl $1,%eax
	movl $0,%ebx
	int $0x80
	
	

