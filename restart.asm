#this program illustrate restart system call

.global _start

.text
_start:
	movl $0,%eax
	int $0x80
	movl $1,%eax
	movl $0,%ebx
	int $0x80

