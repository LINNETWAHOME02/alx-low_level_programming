#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number - This function checks  if an integer is
 *  a prime number or not
 *
 * @n: Input integer
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - Applies the concept of recursion to check if
 * an input integer is a prime number or not
 *
 * @n: Input integer
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, i - 1));
}
