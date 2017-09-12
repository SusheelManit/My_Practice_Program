# here we use add,sub,inc,dec instruction in gas assembly

.section .data

.global add
.global sub
.global increment
.global decrement

.section .text
	add:
	#here we use 16 bit register in gas
	movw $456,%ax
	addw $4,%ax
	retw
	# function definition of sub
	sub:
	#here we use dword instruction register
	movl $2345,%eax
	subl $2345,%eax
	ret
	increment:
	#here function definition of increment using 64 bit register
	movq $111111111,%rax
	incq %rax
	retq
	decrement:
	movb $5,%bl
	decb %bl
	movb %bl,%al
	ret

		
