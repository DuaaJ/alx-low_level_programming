#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute an array
 * @array:the array
 * @size:the size of array
 * @action:the pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr = array + size;

	if (array && size && action)
	for (int i = 0; array < ptr; i++)
	{
		action(*array++);
	}

}
