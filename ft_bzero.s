global _ft_bzero

_ft_bzero:
	cmp rsi, 0
	jle end
	mov rcx, rsi
while:
	mov byte [rdi], 0  
	inc rdi 	
	dec rcx
	jnz while

end: