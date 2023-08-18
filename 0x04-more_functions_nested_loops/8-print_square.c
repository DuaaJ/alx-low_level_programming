#include "main.h"

/**
 *  print_square - prints a square
 *
 *  @size: number of square
 *
 *  Return:  0(success)
 */

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		_putchar('\n');
	}
}