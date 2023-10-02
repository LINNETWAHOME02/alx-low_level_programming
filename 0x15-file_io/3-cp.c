#include "main.h"
#include <stdio.h>
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int source, destination, on_read, on_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	source = open(argv[1], O_RDONLY);
	on_read = read(source, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (on_read > 0)
	{
		if (source == -1 || on_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		on_write = write(destination, buffer, on_read);
		if (destination == -1 || on_write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		on_read = read(source, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buffer);
	close(source);
	close(destination);

	return (0);
}
