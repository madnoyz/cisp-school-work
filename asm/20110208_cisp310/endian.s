.data
L1:
  .word 0x62b4
L2:
  .byte 0xb4
  .byte 0x62
.text
.global _start
_start:
  movl $1,%eax
  movl $0,%ebx
  int $0x80
