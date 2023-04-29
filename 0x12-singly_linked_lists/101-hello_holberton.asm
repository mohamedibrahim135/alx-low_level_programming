section         .texteax,0
        extern	printf
	global	main
main:			edi, msg
	mov
	mov		eax,0
	call 	printf


section		.data
	msg db 'Hello, Holberton', Oxa, 0
