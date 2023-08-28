#include"main.h"

/**
 * *_memset -  fills memory with a constant byte.
 *
 * @s: pointer
 * @b: the constant
 * @n: number of space
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{

	for (int i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
