#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Prototypes */
void check_elf(unsigned char *e_ident);
void show_magic(unsigned char *e_ident);
void show_class(unsigned char *e_ident);
void show_data(unsigned char *e_ident);
void show_version(unsigned char *e_ident);
void show_osabi(unsigned char *e_ident);
void show_abi(unsigned char *e_ident);
void show_type(unsigned int e_type, unsigned char *e_ident);
void show_entry_point(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
* main - displays information contained in ELF file
*
* @argc: no. of arguments
*
* @argv: array of command characters
*
* Return: 0 if successful
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: %s : No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	show_magic(header->e_ident);
	show_class(header->e_ident);
	show_data(header->e_ident);
	show_version(header->e_ident);
	show_osabi(header->e_ident);
	show_abi(header->e_ident);
	show_type(header->e_type, header->e_ident);
	show_entry_point(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);

	return (0);
}

/**
* check_elf - checks if file is in ELF format
*
* @e_ident: pointer to an array containing ELF numbers
*
* Return: void
*/

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
			e_ident[i] != 'E' &&
			e_ident[i] != 'L' &&
			e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
* show_magic - prints magic no.s of ELF header
*
* @e_ident: pointer to an array containing ELF magic no.s
*
* Return: void
*/

void show_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
* show_class - prints ELF header class
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
* show_data - prints data
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
* show_version - prints versions
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
* show_osabi - prints OS/ABI of an ELF header
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - Systerm V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
* show_abi - prints ABI Version
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
* show_type - prints type of ELF header
*
* @e_type: ELF type
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
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
			printf("<unknown: %x>\n", e_type);
	}
}

/**
* show_entry_point - prints entry point of the ELF header
*
* @e_entry: address of ELF entry point
*
* @e_ident: pointer to ELF header identifiers
*
* Return: void
*/

void show_entry_point(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
					((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
* close_elf - closes ELF file
*
* @elf: file descriptor of the ELF file
*
* Return: void
*/

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

