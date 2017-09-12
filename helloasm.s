# this is my first program for assembly

.data
	mystring:
		.ascii "Hello World\n"
.text
	.global _start
			_start:
				#perform write sys call
				movl $4,%eax
				movl $1,%ebx
				movl $mystring,%ecx
				movl $12,%edx
				int $0x80
				#perform exit call
				movl $1,%eax
				movl $0,%ebx
				int $0x80
	#now end of program

				
