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
	/*Create buffer and open file*/
	buffer = (char *)malloc(letters);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	/*Reading file*/
	bytes_read = read(file_des, buffer, letters);
	if (bytes_read == -1) {
		close(file_des);
		free(buffer);
		return (0);
	}
	/*Writting text to standard output*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
		close(file_des);
		free(buffer);
		return (0);
	}
	/*Closing the file and freeing the buffer*/
	close(file_des);
	free(buffer);
	return (bytes_written);
}
