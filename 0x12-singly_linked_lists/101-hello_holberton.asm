extern printf

section .data
	msg db "Hello, Holberton", 10, 0

section .text
	global _start

_start:
mov rdi, msg
mov rax, 0
call printf
mov rdi, 0
mov rax, 60
syscall

section .bss
	buffer resb 64
