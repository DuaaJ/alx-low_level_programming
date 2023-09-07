#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using
 * @b: ccc
 * Return: ss
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}

