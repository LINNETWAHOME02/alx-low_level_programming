#include <stdio.h>
/**
 * main - This function prints all arguments it receives
 *
 * @argc: Number of arguments passed
 * @argv: Pointer array which points
 * to each argument passed
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
