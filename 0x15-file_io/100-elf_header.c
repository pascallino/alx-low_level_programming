#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
void print_elf_header(Elf64_Ehdr *header);
void error_exit(char *msg);
void read_bytes(int fd, void *buf, ssize_t count);
/**
 * error_exit - =======
 * @msg: =====
 */
void error_exit(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}
/**
 * read_bytes - ===
 * @fd: ===
 * @buf: ===
 * @count: ==
 */
void read_bytes(int fd, void *buf, ssize_t count)
{
	if (read(fd, buf, count) != count)
	{
		error_exit("read error");
	}
}
/**
 * print_elf_header - =====
 * @header: ====
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
	printf("UNIX - System V\n");
	break;
	case ELFOSABI_HPUX:
	printf("HP-UX ABI\n");
	break;
	case ELFOSABI_NETBSD:
	printf("NetBSD ABI\n");
	break;
	case ELFOSABI_LINUX:
	printf("Linux ABI\n");
	break;
	case ELFOSABI_SOLARIS:
	printf("Solaris ABI\n");
	break;
	case ELFOSABI_IRIX:
	printf("IRIX ABI\n");
	break;
	case ELFOSABI_FREEBSD:
	printf("FreeBSD ABI\n");
	break;
	case ELFOSABI_TRU64:
	printf("TRU64 UNIX ABI\n");
	break;
	case ELFOSABI_ARM_AEABI:
	printf("ARM EABI\n");
	break;
	case ELFOSABI_STANDALONE:
	printf("Standalone (embedded) application\n");
	break;
	default:
	printf("<unknown>\n");
	break;
	}
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
	case ET_NONE:
	printf("NONE (Unknown type)\n");
	break;
	case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
	case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
	case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
	case ET_CORE:
	printf("CORE (Core file)\n");
	break;
	default:
	printf("<unknown>\n");
	break;
	}
/*	printf("  Entry point address:               0x%lx\n", header->e_entry);*/
printf("  Entry point address:               ");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
{
	header->e_entry = ((header->e_entry << 8) & 0xFF00FF00) |
		((header->e_entry >> 8) & 0xFF00FF);
	header->e_entry = (header->e_entry << 16) | (header->e_entry >> 16);
}
if (header->e_ident[EI_CLASS] == ELFCLASS32)
	printf("%#x\n", (unsigned int)header->e_entry);
	else
	printf("%#lx\n", header->e_entry);
	}

/**
 * main - ====
 * @argc: ===
 * @argv: =====
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("open error");
	}
	/*Read ELF header from file*/
	read_bytes(fd, &header, sizeof(header));

	/* Check if the file is an ELF file*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_exit("not an ELF file");
	}

	/* Print ELF header information*/
	printf("ELF Header:\n");
	print_elf_header(&header);

	/* Close file*/
	close(fd);

	return (0);
}
