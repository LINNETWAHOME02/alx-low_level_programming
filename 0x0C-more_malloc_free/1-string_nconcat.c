#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - This function concatenates two strings
 * @s1: String input 1
 * @s2: String input 2
 * @n: First n bytes of s2 to be considered
 *
 * Return: Pointer or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	size_t len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = (char *)malloc(len1 + n + 1);
	else
		str = (char *)malloc(len1 + len2 + 1);

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
