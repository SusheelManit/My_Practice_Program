#this assembly program illustrate to jmp instruction in program

.section .data
	mystring:
		.asciz "Hello World\n"
	callstring:
		.asciz "Call me back\n"
.section .text
	.global _start
_start:
	call Callme
	movl $4,%eax #write sys call
	movl $1,%ebx #file descriptor for writeing
	movl $mystring,%ecx #address of buffer
	movl $12,%edx #length of string
	int $0x80 #trap to system call
	Exit:
	movl $1,%eax #exit sys call number
	movl $0,%ebx #return value of program
	int $0x80 #trap to system mode
	
	Callme:
	movl $4,%eax #write sys call number
	movl $1,%ebx #file descriptor for write(stdout)
	movl $callstring,%ecx #address of buffer
	movl $12,%edx #length of tring
	int $0x80
	ret

