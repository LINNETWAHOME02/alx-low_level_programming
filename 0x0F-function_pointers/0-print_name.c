#include "function_pointers.h"
/**
 * print_name - This function prints a name
 * 
 * @name: Character pointer to the name variable
 * @f: Variable pointer to name pointer
 *
 * Return: Nothing (void return type)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
