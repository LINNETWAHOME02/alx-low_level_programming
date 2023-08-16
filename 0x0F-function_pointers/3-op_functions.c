#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - This function adds two integers
 * @a: First integer input
 * @b: Second integer input
 *
 * Return: sum of the two inputs
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function finds the difference between two integers
 * @a: First integer input
 * @b: Second integer input
 *
 * Return: Difference between two inputs
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function finds the product of two integers
 * @a: First integer input
 * @b: Second integer input
 *
 * Return: Product of two inputs
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divides two integers
 * @a: First integer input
 * @b: Second integer input
 *
 * Return: Division of two inputs
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - This function returns the modulus of inputs
 * @a: First integer input
 * @b: Second integer input
 *
 * Return: Modulus of two inputs
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
