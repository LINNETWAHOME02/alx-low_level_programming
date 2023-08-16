#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints the opcodes of its own main function
 * @argc: Number of arguments passed
 * @argv: Pointer for array that points to each element
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[])
{
	int iterator;
	int num_bytes = atoi(argv[1]);
	unsigned char *main_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (iterator = 0; iterator < num_bytes; iterator++)
	{
		printf("%02x", main_ptr[iterator]);
		if (iterator < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

