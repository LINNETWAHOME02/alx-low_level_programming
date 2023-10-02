#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, on_read, on_write;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	on_read = read(fd, buf, letters);
	on_write = write(STDOUT_FILENO, buf, on_read);

	free(buf);
	close(fd);
	return (on_write);
}
