SECTION .text
global main
extern printf

main:
	mov   edi, format
	xor   eax, eax
	call  printf
	mov 	eax, 0
	ret

section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
