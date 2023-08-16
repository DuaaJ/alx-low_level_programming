#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: the number of last
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int lastd;

	if (num < 0)
		lastd = -1 * (num % 10);
	else
		lastd = num % 10;
	_putchar(lastd + '0');
	return (lastd);
}
