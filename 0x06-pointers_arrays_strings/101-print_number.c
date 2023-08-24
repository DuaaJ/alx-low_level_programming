#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number - prints an integer
 *
 * @n: number
 */

void print_number(int n)
{
	unsigned  int nu;

	nu = n;

	if (nu < 0)
	{
		_putchar('-');
		nu = -n;
	}

	if (nu / 10 != 0)
	{
		print_number(nu / 10);
	}
	_putchar((nu % 10) + '0');
}

