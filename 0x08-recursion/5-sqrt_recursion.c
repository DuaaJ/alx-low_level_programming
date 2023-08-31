#include "main.h"

/**
 * _sqrt_recursion -  natural square root of a number.
 * @n:number to find sqrt
 * @r: sqrt
 * Return: the square root of n
 */

int sq(int n, int r);
int _sqrt_recursion(int n)
{
	if (n < n)
		return (-1);

	return (sq(n, 0));
}

/**
 * sq - the square of n
 * @n:the number
 * @r: the square root
 *
 * Return: the square
 */

int sq(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	else
		return (sq(n, r + 1));
}

