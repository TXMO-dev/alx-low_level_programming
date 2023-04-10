#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <elf.h>

void print_magic(unsigned char *e_ident) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void print_class(unsigned char class) {
    printf("Class:                             ");
    switch (class) {
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
            printf("<unknown: %d>\n", class);
            break;
    }
}

void print_data(unsigned char data) {
    printf("Data:                              ");
    switch (data) {
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
            printf("<unknown: %d>\n", data);
            break;
    }
}

void print_version(unsigned char version) {
    printf("Version:                           %d (current)\n", version);
}

void print_osabi(unsigned char osabi) {
    printf("OS/ABI:                            ");
    switch (osabi) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("Compaq TRU64 UNIX\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("<unknown: %d>\n", osabi);
            break;
    }
}

void print_type(Elf64_Half type) {
    printf("Type:                              ");
    switch (type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("<unknown: %d>\n", type);
            break;
    }
}

void print_abi_version(unsigned char abi_version) {
    printf("ABI Version:                       %d\n", abi_version);
}

void print_entry_point(Elf64_Addr entry) {
    printf("Entry point address:               0x%lx\n", entry);
}

int main(int argc, char **argv)
{
	int fd, ret;
	char buf[BUF_SIZE];
	Elf64_Ehdr header;

	if (argc != 2)
		exit_with_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit_with_error("Error: could not open file");

	ret = read(fd, &header, sizeof(header));
	if (ret != sizeof(header))
		exit_with_error("Error: could not read ELF header");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		exit_with_error("Error: file is not an ELF file");

	print_elf_header(&header);

	close(fd);
	return (0);
}
