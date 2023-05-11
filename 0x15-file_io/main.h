#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


typedef struct
{
	unsigned char e_indent[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void display_elf_header(const char *filename);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
