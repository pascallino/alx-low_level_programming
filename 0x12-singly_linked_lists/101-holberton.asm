section .data
    hello db 'Hello, Holberton',10,0  ; string to be printed

section .text
    global main
    extern printf

main:
    push rbp             ; set up stack frame
    mov rbp, rsp

    mov edi, hello       ; pass the address of the string as the first argument to printf
    xor eax, eax         ; clear the EAX register (which is used to return the result of a function call)
    call printf          ; call the printf function

    mov rsp, rbp         ; tear down stack frame
    pop rbp
    xor eax, eax         ; return 0 to indicate success
    ret

