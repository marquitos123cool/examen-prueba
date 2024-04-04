section .text

global sum
sum:
    mov rax,rdi
    add rax,rsi
    ret

global res
res:
    mov rax,rdi
    sub rax,rsi
    ret

global mtp
mtp:
    mov rax,rdi
    imul rax,rsi
    ret