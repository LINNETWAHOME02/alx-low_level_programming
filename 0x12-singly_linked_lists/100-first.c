#include <stdio.h>
/**
 *  before_main - This function is executed before the main function
 * __attribute__((constructor)) - GCC-specific attribute that indicates that
 *  the function should be executed before the main function
 *
 *  Return: Nothing (void return-type)
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
