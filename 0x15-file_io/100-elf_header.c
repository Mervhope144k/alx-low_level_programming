#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

void display_elf_header(const char *filename)
{
	int fd;
	ssize_t bytes_read;
	Elf64 header;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read == -1)
	{
		fprintf(stderr, "Error reading file: %s\n", strerror(errno));
		exit(98);
	}

	if (memcmp(header.e_indent, "\x7f\x45\x4c\x46", 4) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}

	printf("Magic: %02x %02x %02x %02x\n", header.e_indent[0], header.e_indent[1], header.e_indent[2], header.e_indent[3]);
	printf("Class: %s\n", header.e_indent[4] == 1 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header.e_indent[5] == 1 ? "Little Endian" : "Big Endian");
	printf("Version: %d\n", header.e_indent[6]);
	printf("OS/ABI: %d\n", header.e_indent[7]);
	printf("ABI Version: %d\n", header.e_indent[8]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", header.e_entry);
	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	display_elf_header(argv[1]);

	return (0);
}
