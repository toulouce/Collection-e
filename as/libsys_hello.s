.global _start:
.extern _write
.extern _exit

.text
_start:
   mov x0, #2
   adr x2, msg
   mov x2, #13
   bl _write

   mov x0, #0
   bl _exit

.data
msg:
   .ascii "Hello World!\n"
   
