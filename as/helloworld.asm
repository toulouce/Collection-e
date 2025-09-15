.global _start

.text
_start:
    ; Hello World program for AArch64 Darwin
    mov x0, #1               ; wtf do you mean ldr is not valid kind
    adr x1, msg
    mov x2, #13
    mov x16, #4
    svc #0

    mov x0, #0
    mov x16, #1
    svc #0x80

.data
msg:
    .ascii "Hello, World!\n"

    
