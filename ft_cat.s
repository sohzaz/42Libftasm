section .bss
buff: resb 512 

section .text

global _ft_cat
extern _ft_strlen
extern _ft_bzero

_ft_cat:
	mov r9, rdi

while1:
	mov	rax, 0x2000003
	mov rdx, 64
	lea rsi, [rel buff]
	syscall
	jc end
	mov r10, rax

	lea rsi, [rel buff]
	mov rax, 0x2000004
	mov rdi, 1
	mov rdx, r10 
	syscall
	jc end 
	mov rdi, r9

	cmp r10, 64	
	jl end 
	jmp while1

end:
	mov rax, 0
	ret
