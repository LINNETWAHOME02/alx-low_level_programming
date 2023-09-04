#include "main.h"
/**
 * read_textfile - This function reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Pointer to the address where the file is stored
 * @letters: number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytesWritten);
}
