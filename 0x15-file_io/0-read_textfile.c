#include "main.h"
/**
 * read_textfile - This function that reads a text file
 *  and prints it to the POSIX standard output.
 *  @filename: Pointer to mem where file is located
 *  @letters: number of letters it should read and print
 *
 *  Return: bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *buffer;
	ssize_t bytes_read, bytes_written;
	
	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(letters);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);

	bytes_read = read(file_des, buffer, letters);
	if (bytes_read == -1) {
		close(file_des);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
		close(file_des);
		free(buffer);
		return (0);
	}

	close(file_des);
	free(buffer);
	return (bytes_written);
}
