section .data
    string: db "section .data%2$c    string: db %3$c%1$s%3$c, 0%2$c%2$c    filename_format: db %3$cSully_%%d.S%3$c, 0%2$c    command_format: db %3$cnasm -f elf64 Sully_%%1$d.S&&cc -m64 -no-pie -lc Sully_%%1$d.o -o Sully_%%1$d&&./Sully_%%1$d%3$c, 0%2$csection .bss%2$c    filename: resb 13%2$c    command: resb 150%2$c%2$c; here we go again%2$csection .text%2$cglobal main%2$cextern dprintf%2$cextern sprintf%2$cextern system%2$c%2$c%%define CREAT_SYS_CALL 85%2$c%%define CLOSE_SYS_CALL 3%2$c%2$c%2$cmain:%2$c    mov r12, %4$d%2$c    cmp r12, 2%2$c    jl END%2$c    dec r12%2$cprepare_stack:%2$c    push rbp%2$c    mov rbp, rsp%2$c    push rdi%2$c    push rsi%2$c    push rdx%2$c    push rcx%2$cname_file:%2$c    mov rdi, filename%2$c    mov rsi, filename_format%2$c    mov rdx, r12%2$c    call sprintf%2$ccreat_file:%2$c    mov rax, CREAT_SYS_CALL%2$c    mov rdi, filename%2$c    mov rsi, 111111111b%2$c    syscall%2$c    cmp rax, -1%2$c    je  return_stack%2$cbirthing_child:%2$c    mov rdi, rax%2$c    mov rsi, string%2$c    mov rdx, string%2$c    mov rcx, 10%2$c    mov r9, r12%2$c    mov r8, 34%2$c    call dprintf         ; lol I'm inside your function%2$c    cmp rax, 0%2$c    jl  return_stack%2$cclose_file:%2$c    mov rdi, rdx%2$c    mov rax, CLOSE_SYS_CALL%2$c    syscall%2$c    cmp rax, 0%2$c    jl  return_stack%2$cprepare_command:%2$c    mov rdi, command%2$c    mov rsi, command_format%2$c    mov rdx, r12%2$c    call sprintf%2$cexecute:%2$c    mov rdi, command%2$c    call system%2$c    mov rax, 0%2$creturn_stack:%2$c    pop rcx%2$c    pop rdx%2$c    pop rsi%2$c    pop rdi%2$c    pop rbp%2$cEND:%2$c    ret%2$c%2$c", 0

    filename_format: db "Sully_%d.S", 0
    command_format: db "nasm -f elf64 Sully_%1$d.S&&cc -m64 -no-pie -lc Sully_%1$d.o -o Sully_%1$d&&./Sully_%1$d", 0
section .bss
    filename: resb 13
    command: resb 150

; here we go again
section .text
global main
extern dprintf
extern sprintf
extern system

%define CREAT_SYS_CALL 85
%define CLOSE_SYS_CALL 3


main:
    mov r12, 5
    cmp r12, 2
    jl END
    dec r12
prepare_stack:
    push rbp
    mov rbp, rsp
    push rdi
    push rsi
    push rdx
    push rcx
name_file:
    mov rdi, filename
    mov rsi, filename_format
    mov rdx, r12
    call sprintf
creat_file:
    mov rax, CREAT_SYS_CALL
    mov rdi, filename
    mov rsi, 111111111b
    syscall
    cmp rax, -1
    je  return_stack
birthing_child:
    mov rdi, rax
    mov rsi, string
    mov rdx, string
    mov rcx, 10
    mov r9, r12
    mov r8, 34
    call dprintf         ; lol I'm inside your function
    cmp rax, 0
    jl  return_stack
close_file:
    mov rdi, rdx
    mov rax, CLOSE_SYS_CALL
    syscall
    cmp rax, 0
    jl  return_stack
prepare_command:
    mov rdi, command
    mov rsi, command_format
    mov rdx, r12
    call sprintf
execute:
    mov rdi, command
    call system
    mov rax, 0
return_stack:
    pop rcx
    pop rdx
    pop rsi
    pop rdi
    pop rbp
END:
    ret

