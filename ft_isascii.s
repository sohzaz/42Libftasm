global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl invalid
	cmp rdi, 127
	jg invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret
