global _ft_strlen


_ft_strlen:
	cmp rdi, 0
	je fail
	cld
	xor al, al
	mov rcx, 0
	dec rcx
	repne scasb
	inc rcx
	not rcx
	mov rax, rcx
	jmp end
	
	
fail:
	mov rax, 0

end:
	ret

