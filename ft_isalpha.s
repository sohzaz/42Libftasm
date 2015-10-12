global _ft_isalpha
extern _ft_islower
extern _ft_isupper

_ft_isalpha:
	call _ft_islower
	cmp rax, 0
	je up
	mov rax, 1
	ret

up:
	call _ft_isupper
	cmp rax, 0
	je invalid
	mov rax, 1
	ret

invalid:
	mov rax, 0
	ret