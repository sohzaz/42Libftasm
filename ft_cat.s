section .bss
<<<<<<< HEAD
buff: resb 64 
=======
buff: resb 64
>>>>>>> 4f4b3202ed742e7a9c8d4c445b99fb166dc7416e

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
<<<<<<< HEAD
	mov r10, rax
=======
	cmp rax, 0
	je finish
>>>>>>> 4f4b3202ed742e7a9c8d4c445b99fb166dc7416e

	lea rsi, [rel buff]
	mov rax, 0x2000004
	mov rdi, 1
<<<<<<< HEAD
	mov rdx, r10 
	syscall
	mov rdi, r9

	cmp r10, 64	
	jl end 
=======
	mov rdx, 64
	syscall
	lea rdi, [rel buff]
	mov rsi, 64
	call _ft_bzero
	mov rdi, r9

>>>>>>> 4f4b3202ed742e7a9c8d4c445b99fb166dc7416e
	jmp while1



	

<<<<<<< HEAD
=======
finish:
	lea rsi, [rel buff]
	lea rdi, [rel buff]
	call _ft_strlen
	mov rdi, rax
	mov rax, 0x2000004
	mov rdi, 1
	syscall
	ret
>>>>>>> 4f4b3202ed742e7a9c8d4c445b99fb166dc7416e

		
end:
	ret