section .data
    hello db "Hello, Holberton",0
    fmt db "%s", 10, 0

section .text
    global main

extern printf

main:
    sub rsp, 8           ; Align stack to 16-byte boundary
    mov rdi, fmt
    mov rsi, hello
    call printf
    add rsp, 8           ; Restore stack

    mov rax, 60          ; syscall number for exit
    xor rdi, rdi         ; status code 0
    syscall

section .bss
    resb 128             ; Reserve space for printf buffer
