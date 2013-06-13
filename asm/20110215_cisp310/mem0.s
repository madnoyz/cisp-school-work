.data
.byte 0x23, 5
L1:
.word 12
.int 0x205
L2:
.asciz "Tak!"
L3:
.int L2
.text
.global _start
_start:
  movl $1,%eax
  movl $0,%ebx
  int $0x80
