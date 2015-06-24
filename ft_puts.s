section .data
global _ft_puts

init:
	.null: dw `(null)\n`
	.string: db 10

section .text
_ft_puts:
	cmp rdi, 0
	je fail
	push rdi
	mov rax, 0x2000004
	lea rsi, [rdi]
	mov rdx, 0 
loop:
	cmp byte [rdi], 0
	je next
	inc rdi
	inc rdx
	jmp loop



next:
	mov rdi, 1
	syscall
	lea rsi, [rel init.string] 
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	pop rdi
	mov rax, 0
	jmp end

fail:
	mov rdi, 1
	mov rax, 0x2000004
	lea rsi, [rel init.null]
	mov rdx, 8
	syscall
	mov rax, 0
	jmp end

end:
	ret