#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search
 * @array:the array
 * @size:size of array
 * @cmp:pointer
 * Return: the index ,0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);

}
