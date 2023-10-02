#include "main.h"
/**
 * create_file - This function creates a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t bytes_written;
	
	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(file_des, text_content, _strlen(text_content));
		if (bytes_written == -1 || bytes_written != _strlen(text_content))
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
