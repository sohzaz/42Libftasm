section .text
global _ft_strcat

_ft_strcat:
	mov rax, rdi
while1:
	cmp byte [rdi], 0
	je next
	inc rdi
	jmp while1

next:
	cmp byte [rsi], 0
	je end
	mov rbx, [rsi]
	mov [rdi], rbx 
	inc rsi
	inc rdi
	jmp next

end:
	mov byte [rdi], 0
	ret
	
