#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * print_error - print error messages to the standard error
 *
 * Return: Nothing (void return-type)
 */
void print_error(const char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * main - This function works to copy contents of one file
 * into another file
 * @argc: Number of arguments passed
 * @argv: Pointer array which points to each argumnet passed
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t nread, nwrite;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_dest == -1)
	{
		print_error("Can't write to file");
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((nread = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		nwrite = write(fd_dest, buffer, nread);
		if (nwrite == -1)
		{
			print_error("Can't write to file");
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (nread == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_source) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		print_error("Can't close fd");
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
