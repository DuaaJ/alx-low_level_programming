#include "main.h"

/**
 *  print_triangle - check the code
 *
 * @size: the size
 *
 *   Return: Always 0.
 */

void print_triangle(int size)
{
	int h, g;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (g = 1; g <= size; g++)
			{
				if ((h + g) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
