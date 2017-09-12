# this program illustrate different datatype 

.data
	mybyte:
		.byte 23
	mystring:
		.asciz "Hello World\n"
	myshort:
		.short 78
	myinteger:
		.int 5354
	myfloat:
		.float 34.56
.bss
	.comm myarray 300

.text
	.global _start
			_start:
				movl $1,%eax
				movl $0,%ebx
				int $0x80
	#here we end program


