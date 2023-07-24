#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Input string
 *
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	/**
	 * As long as counter is not at the null terminator \0,
	 * it will be incremented
	 */
	while (s[counter] != '\0')
		counter++;
	/**
	 * i is iterating from 0(from first index of string),
	 * counter is the length of the string.
	 *
	 * counter-- decrements the counter variable
	 *
	 * rev = s[i] stores the character at index i of string s
	 *
	 * s[i] = s[counter];: This line attempts to swap the character
	 *  at index i with the character at index counter in the string is
	 *
	 * s[counter] = rev;: This line attempts to place the
	 * character stored in the rev variable into the position
	 * of counter in the string s
	 */
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
