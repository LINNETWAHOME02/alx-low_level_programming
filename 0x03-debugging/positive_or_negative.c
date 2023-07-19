#include "main.h"

/**
* positive_or_negative - tests function that prints
*  if integer is positive or negative
*
*  @i: Number to be computed
*
* Return: Nothing
*/

void positive_or_negative(int i)
{
	i = 0;
	if (i % 2 == 0)
	{
		printf("%d is positive", i);
	}
	printf("\n");
}
