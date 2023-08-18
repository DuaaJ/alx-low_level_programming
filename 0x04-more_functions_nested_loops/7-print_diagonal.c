#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: umber of diag
 *
 * Return: 0(success)
 *
 */


void print_diagonal(int n)
{
	int dia, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dia = 1; dia <= n; dia++)
		{
			for (space = 1; space <= dia; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
