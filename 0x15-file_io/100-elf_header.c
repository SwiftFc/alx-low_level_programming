#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * print_addre - A function to print address
 * @pt: A pointer to an array which stores the ElF version
 *
 * Return: Not specified
 */
void print_addre(char *pt)
{
	int x;
	int start;
	char sys;

	printf("  Entry point address:               0x");

	sys = pt[4] + '0';
	if (sys == '1')
	{
		start = 26;
		printf("80");
		for (x = start; x >= 22; x--)
		{
			if (pt[x] > 0)
				printf("%x", pt[x]);
			else if (pt[x] < 0)
				printf("%x", 256 + pt[x]);
		}
		if (pt[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		start = 26;
		for (x = start; x > 23; x--)
		{
			if (pt[x] >= 0)
				printf("%02x", pt[x]);

			else if (pt[x] < 0)
				printf("%02x", 256 + pt[x]);
		}
	}
	printf("\n");
}

/**
 * print_type - A program to print a type of function
 * @pt: A pointer to an array which stores the the ELF version
 *
 * Return: Not specified
 */
void print_type(char *pt)
{
	char type = pt[16];

	if (pt[5] == 1)
		type = pt[16];
	else
		type = pt[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<uknown: %x>\n", type);
}

/**
 * print_osabi - A function to print the OS/ABI of an ELF header
 * @pt: A pointer to an array which stores the ELF version
 *
 * Return: Not specified
 */
void print_osabi(char *pt)
{
	char osabi = pt[7];

	printf("  OS/ABI:                            ");

	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);
	printf("  ABI Version:                       %d\n", pt[8]);
}

/**
 * print_version - A function to print the version of an ELF header
 * @pt: A pointer to an array which stores the ELF version
 *
 * Return: Not specified
 */
void print_version(char *pt)
{
	int version = pt[6];

	printf("  version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_data - A function to print the data of an ELF header
 * @pt: A pointer to an array which stores the ELF version
 */
void print_data(char *pt)
{
	char data = pt[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}

/**
 * print_magic - A function to print magic to the ELF header
 * @pt: A pointer to an array which stores the ELF version
 */

void print_magic(char *pt)
{
	int bytes;

	printf("  Magic:   ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", pt[bytes]);

	printf("\n");
}

/**
 * find_sys - finds the version system
 * @pt: A pointer to an array which stores the ELF version
 *
 * Return: Not specified
 */

void find_sys(char *pt)
{
	char sys = pt[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(pt);

	if (sys == '1')
		printf("  Class:                            ELF32\n");

	if (sys == '2')
		printf("  Class:                            Elf64\n");

	print_data(pt);
	print_version(pt);
	print_osabi(pt);
	print_type(pt);
	print_addre(pt);
}

/**
 * find_elf - find function to check if it is an ELF file
 * @pt: A pointer to an array which stores the ELF version
 *
 * Return: 1 on success, 0 if not an ELF file
 */
int find_elf(char *pt)
{
	int addre = (int)pt[0];
	char E = pt[1];
	char L = pt[2];
	char F = pt[3];

	if (addre == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - Dispalys the information which stores the ELF header
 * @argc: Argument count
 * @argv: Argument vector pointer
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char pt[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, pt, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if(!find_elf(pt))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	find_sys(pt);
	close(fd);

	return (0);
}
