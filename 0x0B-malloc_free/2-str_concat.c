#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This function concatenates two strings
 * @s1: First string input
 * @s2: Second string input
 * Return: concatenated string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s1_s2 = malloc(sizeof(char) * (i + j + 1));

	if (s1_s2 == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s1_s2[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s1_s2[i] = s2[j];
		i++, j++;
	}
	s1_s2[i] = '\0';
	return (s1_s2);
}
