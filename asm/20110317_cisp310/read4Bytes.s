.data
buffer: .fill 32
.text
.global _start
_start:
  movl $3,%eax      # requesting a read operation
  movl $0,%ebx      # read from stdin/cin
  movl $buffer,%ecx # where to read the characters into
  movl $32,%edx     # how many bytes should we TRY to read
  int  $0x80        # ask the OS to do it now!

  nop
checkPoint:
  movl $1,%eax
  movl $0,%ebx
  int  $0x80
