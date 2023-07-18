#include "main.h"
/**
 * _isalpha - Checking for alphabetic character
 * @c: Character to be checked
 * Return: 1 if character is an alphabet or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	} else
		return (0);
}
