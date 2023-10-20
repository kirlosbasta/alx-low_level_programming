; File: 101-hello_holberton.asm
; Auth: Kirlos Basta
; Desc: 64-bit assembly program that prints
; Hello, Holberton followed by a new line.section .data

    hello db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

    main:
        push rbp
        mov rbp, rsp

        lea rdi, [hello]
        xor eax, eax
        call printf

        mov rsp, rbp
        pop rbp
        ret
