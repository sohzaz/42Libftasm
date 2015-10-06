section .data
global _ft_puts
extern _ft_strlen

init: 
	.ascii db "(null)", 10


<<<<<<< HEAD
=======
init:
	.null: db `(null)\n`
	.string: db 10
>>>>>>> 4f4b3202ed742e7a9c8d4c445b99fb166dc7416e

section .text
nl:
    .str db 10
_ft_puts:
	cmp rdi, 0
	jz fail
	mov rsi, rdi
	call _ft_strlen
	mov rdx, rax
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	jc end

	mov rdi, 1
	lea rsi, [rel nl.str] 
	mov rdx, 1 
	mov rax, 0x2000004
	syscall
	ret

fail:
	mov rdi, 1
	mov rax, 0x2000004
	lea rsi, [rel init.ascii]
	mov rdx, 7 
	syscall
	ret

end:
	mov rax, -1
	ret