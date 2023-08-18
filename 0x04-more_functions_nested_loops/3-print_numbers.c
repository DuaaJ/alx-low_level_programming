#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * Return: 0(success)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
