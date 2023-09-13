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
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);

}
