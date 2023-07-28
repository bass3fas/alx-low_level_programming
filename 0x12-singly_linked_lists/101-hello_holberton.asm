	global	main
	extern	printf
main:
	mov edi, format
	xor eax, eax
	call printf
	xor eax, eax
	ret
format:	 db 'Hello, Holberton\n', 0
