;$ nasm hello.asm -o H.o[ENTER]		=> Assembling
;$ ld H.o -o H				=> Creating Binary
;$ ./H					=> Running
;$ rm H H.o				=> Delete files

section .data				;.data starts here
	msg db "Hello, World!",0dh,0ah	;initialized String to be printed
					;"Hello World\n\0"
	l equ $-msg			;Length(msg)
section .text				;.text starts here
	global _start			;Moving to start
_start:					;starts here
	mov rax,1			;Sys_Write fun()
	mov rdi,1			;Std_Out file-descriptor
	mov rsi,msg			;Offset of msg
	mov rdx,l			;Length(msg)...already told
	syscall				;call kernel
	mov rax,60			;Sys_Exit fun()
	mov rdi,0			;Successfull termination
	syscall				;call kernel
end:					;ends here
