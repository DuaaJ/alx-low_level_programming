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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
