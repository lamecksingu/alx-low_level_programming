#include "main.h"
/**
 * print_error - a function to print error
 * @msg: error message to be printed
 */
void print_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * display_elf_header - display the header
 * @filename: the file name
 */
void display_elf_header(const char *filename)
{
	Elf64_Ehdr header;
	ssize_t bytes_read;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Unable to open file");
	}
	/*Elf64_Ehdr header;*/
	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header))
	{
		print_error("Unable to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("Magic: %c%c%c%c\n", header.e_ident[EI_MAG0],
			header.e_ident[EI_MAG1], header.e_ident[EI_MAG2],
			header.e_ident[EI_MAG3]);
	printf("Class: %s\n",
			(header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n",
			(header.e_ident[EI_DATA] == ELFDATA2LSB)
			? "2's compliment, little-endian" : "2's compliment, big-endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: %#lx\n", (unsigned long) header.e_entry);

close(fd);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	display_elf_header(argv[1]);
	return (0);
}
