# if (x >= y) and (x >= z) then
#   max = x
# else
#   if (y >= x) and (y >= z) then
#     max = y
#   else
#     max = z
#   end if
# end if

# implement this logic in assembly language


.data
# do not change this part!
x: .int 20394  # unsigned
y: .word 923   # unsigned
z: .word 234   # unsigned
max: .int 234  # unsigned 

.text
.global _start
_start:
  nop
takChangesTheVariablesHere:
# You put your code here
# if (x >= y) and (x >= z) then
# if (not ((x >= y) and (x >= z)) goto L1
# if (x < y) or (x < z) goto L1
# if (x < y) goto L1
#   cmp y,x
#   jb  L1
   movl x,%eax    # eax is x
   movl $0,%ebx
   movw y,%bx     # ebx is y 
   cmpl %ebx, %eax
   jb   L1
# if (x < z) goto L1
   movl x,%eax    # eax is x
   movl $0,%ebx
   movw z,%bx     # ebx is z 
   cmpl %ebx, %eax
   jb   L1
#   max = x
   movl %eax, max
   jmp  L1_exit
# else
L1:
#   if (y >= x) and (y >= z) then
   movl x,%eax    # eax is x
   movl $0,%ebx
   movw y,%bx     # ebx is y 
   cmpl %eax, %ebx
   jb   L2
   movl $0,%eax
   movw z,%ax     # eax is z
   movl $0,%ebx
   movw y,%bx     # ebx is y 
   cmpl %ebx, %eax
   jb   L2
#     max = y
   movl %ebx, max
   jmp L2_exit
#   else
L2:
#     max = z
   movl $0,%eax
   movw z,%ax
   movl %eax,max
#   end if
L2_exit:
# end if
L1_exit:
takChecksTheResultHere:  # max in memory has to have the maximum value
  movl $1,%eax
  movl $0,%ebx
  int $0x80
