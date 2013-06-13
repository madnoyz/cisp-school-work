printf "\n\n\n\nTak's own gdb initialization script:\n"
printf "\nAdding new command definitions\n"
# flags prints the CSZO flags, plus the non-existent L flag for
# signed compare

printf "flags prints the flags out\n"

define flags
  printf "%c%c%c%c%c\n",\
    ($eflags & 0x001) ? 'C' : ' ',\
    ($eflags & 0x040) ? 'Z' : ' ',\
    ($eflags & 0x080) ? 'S' : ' ',\
    ($eflags & 0x800) ? 'O' : ' ',\
    ((($eflags & 0x080) == 0x080) != (($eflags & 0x800) == 0x800)) ? 'L' : ' '
end

document flags
  examine and interpret useful flags from eflags
  flags is a command that lists important flags for numerical operations.
  Currently, C, Z, S and O are interpreted. An imaginary L flag (for signed
  less than) is also included.
end

# currentline prints the line number corresponding to the current instruction
# pointer, plus the surrounding lines around it

printf "currentline prints the current line number and surrounding lines\n"

define currentline
  list *$eip
end

document currentline
  prints the current source line
  currentline is a simple command to find the line number corresponding
  to the current instruction pointer (eip). It also prints the context
  around the current line.
end

printf "setbyte is like set, but it only affects the lowest 8 bits\n"

define setbyte
  set $arg0 = ($arg1 & 0xff) | ($arg0 & ~0xff)
end

document setbyte
  sets (assignment) a single byte (8-bit)
  setbyte is like set, but instead of treating the LHS by default as a
  long (32-bit), it is treated as a byte (8-bit). This makes sure that
  only one byte is affected.
end

printf "setword is like set, but it only affects the lowest 16 bits\n"

define setword
  set $arg0 = ($arg1 & 0xffff) | ($arg0 & ~0xffff)
end

document setword
  sets (assignment) a word (16-bit)
  setword is like set, but instead of treating the LHS by default as a 
  long (32-bit), it is treated as a word (16-bit). This makes sure that
  only two bytes are affected.
end

