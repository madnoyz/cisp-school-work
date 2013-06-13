.data
L1:
  .fill 20,1,0xec
.text
.global _start
_start:
  movl $L1,%eax
  movl $5,%edx
  movw $0,-2(%eax,%edx)

  movb $0x20,L1(,%edx)

  movl $1,%eax
  movl $0,%ebx
  int $0x80
