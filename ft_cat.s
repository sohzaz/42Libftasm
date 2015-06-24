section .bss
buff: resb 64

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
	cmp rax, 0
	je finish

	lea rsi, [rel buff]
	mov rax, 0x2000004
	mov rdi, 1
	mov rdx, 64
	syscall
	lea rdi, [rel buff]
	mov rsi, 64
	call _ft_bzero
	mov rdi, r9

	jmp while1



	

finish:
	lea rsi, [rel buff]
	lea rdi, [rel buff]
	call _ft_strlen
	mov rdi, rax
	mov rax, 0x2000004
	mov rdi, 1
	syscall
	ret

		
end:
	ret