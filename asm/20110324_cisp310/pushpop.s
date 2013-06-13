.text
.global _start
_start:
  nop
checkHere:
  pushl   $0xfeed0dad
  movl    $0xabcdef01,%eax
  popl    %eax
  movl    $1,%eax
  movl    $0,%ebx
  int     $0x80
