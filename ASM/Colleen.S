section .data
string: db "section .data%1$cstring: db %2$c%3$s%2$c%1$c%1$c; here we go again%1$csection .text%1$cglobal main%1$cextern printf%1$c%1$cmy_function:%1$c    push rbx%1$c    mov rdi, string%1$c    mov rsi, 10%1$c    mov rdx, 34%1$c    mov rcx, string%1$c    call printf         ; lol I'm inside your function%1$c    pop rbx%1$c    ret%1$c%1$cmain:%1$c    push rbx%1$c    call my_function%1$c    pop rbx%1$c    ret%1$c%1$c"

; here we go again
section .text
global main
extern printf

my_function:
    push rbx
    mov rdi, string
    mov rsi, 10
    mov rdx, 34
    mov rcx, string
    call printf         ; lol I'm inside your function
    pop rbx
    ret

main:
    push rbx
    call my_function
    pop rbx
    ret

