section .text
global _ft_islower

_ft_islower:

	cmp	rdi, 97
	jl invalid
	cmp  rdi, 122
	jg invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret

