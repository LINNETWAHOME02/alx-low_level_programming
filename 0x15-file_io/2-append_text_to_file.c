#include "main.h"
#include <string.h>
/**
 * append_text_to_file - This function appends text at end of file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_length, bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);/*Nothing to append, but the file exists.*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);/*Error opening or the file doesn't exist.*/
	text_length = strlen(text_content);
	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1 || bytes_written != text_length)
	{
		close(fd);
		return (-1);/*Error writing to the file.*/
	}
	close(fd);
	return (1);
}
