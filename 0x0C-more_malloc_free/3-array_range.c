#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min:min
 * @max:max
 * Return:something
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}

