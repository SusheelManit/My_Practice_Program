;here my first asm file which compile using nasm

global GetValue

segment .data

segment .bss

segment .text
	GetValue:
	mov rax,2345
	ret
