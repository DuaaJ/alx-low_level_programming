#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - 2 dimensional array of integers
 * @width:the width
 * @height:the hight
 * Return: 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (int i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == 0)
			{
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}

			for (int j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);
}
