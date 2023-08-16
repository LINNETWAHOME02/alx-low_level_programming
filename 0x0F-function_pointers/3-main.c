#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Checking the code
 * @argc: Number of arguments passed
 * @argv: Array of pointers that points to each element in array
 * Return: 0 (Code success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
