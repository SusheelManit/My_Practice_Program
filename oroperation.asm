#this program demonstratre or operation in assembly

.section .data
	
.global orPerform
.global xorPerform
.global notPerform
.global xoragain

.section .text
orPerform:
	movl $2783,%eax
	orl $1525,%eax
	ret

xorPerform:
	movl $2783,%eax
	xorl $1525,%eax
	ret

notPerform:
	movl $129,%eax
	notl %eax
	incl %eax
	ret

xoragain:
	movl $2783,%eax
	xorl $1525,%eax
	xorl $1525,%eax
	ret

