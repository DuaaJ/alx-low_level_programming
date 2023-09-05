#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size:the size of array
 * @c:the specific character
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	for (int i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

