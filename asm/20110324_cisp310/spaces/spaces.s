.data
count: .int 0
ch: .fill 1
.text
.global _start
_start:
#count = 0
  movl $0,count
doBegin:
#do
#  read a char from stdin into ch
   movl $3,%eax
   movl $0,%ebx
   movl $ch,%ecx
   movl $1,%edx
   int $0x80
#  if (a char was actually read) then
   cmpl $0,%eax
   jz   endIf1
#    if (ch is the space character) then
     cmpb $32,ch
     jnz  endIf2
#      count = count + 1
       addl $1,count
#    end if
     endIf2:
#  end if
   endIf1:
#while (a char was actually read)
   cmpl $0,%eax
   jnz  doBegin
checkHere:
checkPoint:
  movl $1,%eax
  movl $0,%ebx
  int $0x80
