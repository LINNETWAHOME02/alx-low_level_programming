#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function multiplies two numbers
 *
 * @argc: Number of arguments
 * @argv: Pointer array which points to each
 * argument passed
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc < 3 || argc > 3)
	{
		printf("Error: Check number of arguments passed\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
