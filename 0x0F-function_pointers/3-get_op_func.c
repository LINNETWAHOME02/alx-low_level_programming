#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - This function selects the correct function
 * to perform the operation asked by the user.
 * @s: Operator passed as argument to the program
 *
 * Return: Pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int iterator = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[iterator].op != NULL)
	{
	if (strcmp(ops[iterator].op, s) == 0)
	{
		return (ops[iterator].f);
	}
	iterator++;
	}
	return (NULL);
}
