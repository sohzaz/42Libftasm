global _ft_puts

_ft_puts:
	push rdi
	mov rax, 0x2000004
	lea rsi, [rdi]
	mov rdx, 0 
loop:
	cmp byte [rdi], 0
	je end
	inc rdi
	inc rdx
	jmp loop

end:
	mov rdi, 1
	syscall
	pop rdi
	mov rax, 0