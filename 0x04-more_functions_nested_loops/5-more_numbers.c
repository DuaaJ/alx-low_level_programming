#include "main.h"

/**
 *  more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *  Return: 0(success)
 */

void more_numbers(void)
{
	int n, num;

	for (n = 1; n <= 10; n++)
	{

		for (num = 0; num <= 14; num++)
		{
			_putchar(num + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
