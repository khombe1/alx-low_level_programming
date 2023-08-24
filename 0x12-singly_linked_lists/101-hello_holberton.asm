global _start

section .text
_start:
  mov rdi, message
  call printf

  mov rax, 60
  mov rdi, 0
  syscall

section .data
message: db "Hello, Holberton", 10
