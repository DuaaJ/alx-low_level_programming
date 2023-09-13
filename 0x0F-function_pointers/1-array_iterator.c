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
	int *ptr = array + size - 1;

	if (array && size && action)
		while (array <= ptr)
			action(*array++);

}
