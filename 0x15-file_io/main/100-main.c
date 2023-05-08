  [main !?] root@0331426d386b : [ ~/alx-low_level_programming/0x15-file_io ] 
  $ readelf -h /lib/ld-linux.so.2
  ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Machine:                           Intel 80386
  Version:                           0x1
  Entry point address:               0x1120
  Start of program headers:          52 (bytes into file)
  Start of section headers:          178660 (bytes into file)
  Flags:                             0x0
  Size of this header:               52 (bytes)
  Size of program headers:           32 (bytes)
  Number of program headers:         10
  Size of section headers:           40 (bytes)
  Number of section headers:         26
  Section header string table index: 25



   [main !?] root@0331426d386b : [ ~/alx-low_level_programming/0x15-file_io ]
 $ ./elf_header /lib/ld-linux.so.2
 ELF Header:
 Magic    7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00
 Class:                             ELF32
 Data:                              2's complement, little endian
 Version:                           1 (current)
 OS/ABI:                            UNIX - System V
 ABI Version:                       0
 Type:                              DYN (Shared object file)
 Entry point address:               0x1120

 ELF Header:
  Magic:   7f 45 4c 46 01 01 01 00 00 00 00 00 00 00 00 00
  Class:                             ELF32
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Entry point address:               0x3400001120
