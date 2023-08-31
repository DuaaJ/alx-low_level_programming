#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - input integer is a prime number,
 * @n:the number
 * @nu: integer number
 * Return:0 or 1
 */

int prime(int n, int nu);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - cheack the prime number
 *
 * @n:the number
 * @nu:int  factors
 *
 * Return:0 or 1
 */

int prime(int n, int nu)
{
	if (nu >= n && n > 1)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (n % nu == 0 || n < 1)
		return (0);
	else
		return (prime(n, 2 * nu + 1));
}
