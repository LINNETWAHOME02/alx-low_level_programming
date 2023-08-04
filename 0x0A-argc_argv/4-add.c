#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function adds two positive numbers
 *
 * @argc: Number of arguments passed
 * @argv: Pointer array which points to each
 * argument passed
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[])
{
	int count;
	int string_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (atoi(argv[count]))

		{
			string_int = atoi(argv[count]);
			sum += string_int;
		}

		/*If number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
