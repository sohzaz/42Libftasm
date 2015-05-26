global _ft_islower

_ft_islower:

	cmp	rdi, 96
	jg .greater
	mov rax, 0
	jmp .return

.greater:
	cmp  rdi, 123
	jl .valid
	mov rax, 0
	jmp .return

.valid:
	mov rax, 1
	jmp .return

.return:
	ret
