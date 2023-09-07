#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @old_size:ddd
 * @new_size:ffff
 * @ptr:ttt
 * Return:tttt
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		return (ptr1);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 ==  NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptr1);
}

