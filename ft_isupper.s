section .text
global _ft_isupper

_ft_isupper:

	cmp	rdi, 64
	jl invalid
	cmp rdi, 91
	jg invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret
