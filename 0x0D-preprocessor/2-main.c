#include "2-main.h"
#include <stdio.h>
/**
 * main - This function prints the name of the file
 * it was compiled from
 *
 * Return: 0 (Code success)
 */
int main(void)
{
	char *file;

	file = __FILE__;
	printf("%s\n", file);
	return (0);
}
