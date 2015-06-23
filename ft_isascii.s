global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jl invalid
	cmp rdi, 127
	jg invalid
	jmp valid

invalid:
	mov rax, 0
	jmp end

valid:
	mov rax, 1

end:
	ret
