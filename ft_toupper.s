global _ft_toupper

extern _ft_islower

_ft_toupper:
	call _ft_islower
	cmp rax, 0
	je end	
	sub rdi, 32

end:
	mov rax, rdi
	ret