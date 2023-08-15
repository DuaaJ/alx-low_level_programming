#include "main.h"

/**
 * main - _putchar
 * Return: Always (sucess)
 */

int main(void)
{
	char st[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(st[c]);
	_putchar('\n');

	return (0);
}
