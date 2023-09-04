#include "main.h"
#include <string.h>
/**
 * create_file - This function creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 *  file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_length, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
