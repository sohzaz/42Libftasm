global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	jl invalid
	cmp rdi, 57
	jg invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret