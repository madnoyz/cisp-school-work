.data
L1:
  .int L1
L2:
  .byte (L2 % 255)
  .byte (L2/256) % 255
  .byte (L2/256/256) % 255
  .byte (L2/256/256/256) % 255
.text
.global _start
_start:
  movl $L1,%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax
  movl (%eax),%eax

  movl $1,%eax
  movl $0,%ebx
  int $0x80
