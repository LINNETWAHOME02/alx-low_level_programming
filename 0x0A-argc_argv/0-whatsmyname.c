#include <stdio.h>
/**
 * main - This function prints its name followed
 * by a new line
 *
 * @argc: Number of arguments passsed
 * @argv: Pointer array which points to each argument
 *
 * Return: 0 (Code success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
