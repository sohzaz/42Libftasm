section .text
global _ft_strdup
extern _ft_strlen
extern _malloc
extern _ft_memcpy

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	push rax
	sub rsp, 8
	call _malloc
	add rsp, 8
	cmp rax, 0
	je end
	lea rdi, [rax]
	pop rdx
	pop rsi
	call _ft_memcpy

end:
	ret
	
