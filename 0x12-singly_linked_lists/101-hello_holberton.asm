section .data
    message db 'Hello, Holberton', 10  ; 10 is ASCII code for newline character

section .text
    global main

main:
    push rbp
    mov rbp, rsp

    lea rdi, [rel message]  ; load address of message into rdi
    xor eax, eax            ; set rax to 0 (number of floating-point arguments)
    call printf             ; call printf with rdi as argument

    mov rsp, rbp
    pop rbp
    xor eax, eax            ; return 0 from main function
    ret
