#include <stdio.h>
/**
 * main - This function prints the number of arguments
 * passed into it
 *
 * @argc: Number of arguments passed
 * @argv: Pointer array which points to each argumnet passed
 *
 * Return: 0 (Code success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
