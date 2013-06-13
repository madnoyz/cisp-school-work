# objective:
#   replace the '?' with a single direct operand
#   so that register eax has a value of 0x54001245
#   at a break point set to "checkPoint1"
# DO NOT:
#   add any instructions
#   use any operand other than a direct one
#   change the data segement initialization
#   add any new line
#   remove any existing line
#   change any line other than replacing the ? symbol
#   change the order of any existing line
.data
.byte 0x12, 4, 63, 69
L1:
.word 0x12
.ascii "Tak!"
.text
.global _start
_start:
nop
movl ?,%eax  # use exactly one direct operand
checkPoint1:
movl $1,%eax
movl $0,%ebx
int $0x80
