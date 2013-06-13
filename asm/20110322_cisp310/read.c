int read(int fd, void *ptr, unsigned count)
{
  // copy fd to ebx
  // copy ptr to ecx
  // copy count to edx
  // copy 3 to eax
  // int $0x80
  // return eax
}
