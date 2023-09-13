#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print a name
 * @name:the name
 * @f:pointer to a function to print
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
