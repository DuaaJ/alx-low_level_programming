#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * Return: 0(success)
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch + 48);
	}
	_putchar('\n');
}
