#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_elf_header_osabi(Elf64_Ehdr *header);
void display_elf_header_type(Elf64_Ehdr *header);

/**
 * display_elf_header - Display the ELF header information
 * @header: Pointer to the ELF header structure
 */

void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  Version:                           %d (current)\n",
			header->e_ident[EI_VERSION]);
	display_elf_header_osabi(header);
}

/**
 * display_elf_header_osabi - Display the ELF header OS/ABI information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header_osabi(Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
		printf("Unknown\n");
		break;
	}

	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	display_elf_header_type(header);
}

/**
 * display_elf_header_type - Display the ELF header type information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header_type(Elf64_Ehdr *header)
{
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("  Start of program headers:          %lu (bytes into file)\n", header->e_phoff);
	printf("  Start of section headers:          %lu (bytes into file)\n", header->e_shoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
	printf("  Number of program headers:         %u\n", header->e_phnum);
	printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
	printf("  Number of section headers:         %u\n", header->e_shnum);
	printf("  Section header string table index: %u\n", header->e_shstrndx);
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}
