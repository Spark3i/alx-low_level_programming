section .data
  message db 'Hello, Holberton', 10

section .text
  global _start

_start:
  mov eax, 4
  mov ebx, 1
  mov ecx, message
  mov edx, 16
  int 0x80

  mov eax, 1
  xor, ebx, ebx
  int 0x80
 
