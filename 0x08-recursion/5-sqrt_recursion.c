#include "main.h"

/**
 * _sqrt_recursion -  natural square root of a number.
 * @n:number to find sqrt
 * Return: the square root of n
 */

int sq(int n, int r);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
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
	else if (r * r < n)
		return (sq(n, r + 1));
	else
		return (-1);
}

