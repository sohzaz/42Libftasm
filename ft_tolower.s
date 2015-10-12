global _ft_tolower

extern _ft_isupper

_ft_tolower:
	call _ft_isupper
	cmp rax, 0
	je end
	add rdi, 32


end:
	mov rax, rdi
	ret	