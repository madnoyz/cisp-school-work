.data
L1:
  .fill 4,1,0xa5
.text
.global _start
_start:
  movl $L1,%eax
  movb $0,2(%eax)
  movl $1,%eax
  movb $0x20,L1(%eax)

  movl $1,%eax
  movl $0,%ebx
  int $0x80
