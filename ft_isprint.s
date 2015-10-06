global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	jl invalid
	cmp rdi, 126
	jg invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret

