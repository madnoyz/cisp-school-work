.data
L1: .int 0x12345678
.text
.global _start
_start:
  nop
  movl L1,%eax      # expect 0x12345678 in eax
  movl $L1,%eax     # expect some address in eax
  movl (%eax),%ebx  # expect 0x12345678 in ebx

  movl $1,%eax
  movl $0,%ebx
  int $0x80
