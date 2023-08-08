#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *my_str;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	my_str = malloc(sizeof(char) * (i + 1));

	if (my_str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		my_str[j] = str[j];

	return (my_str);
}
