global _ft_isupper

_ft_isupper:

	cmp	rdi, 64
	jg .greater
	mov rax, 0
	jmp .return

.greater:
	cmp  rdi, 91
	jl .valid
	mov rax, 0
	jmp .return

.valid:
	mov rax, 1
	jmp .return

.return:
	ret
