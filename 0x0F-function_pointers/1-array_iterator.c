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
	if (array && size && action)
	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
