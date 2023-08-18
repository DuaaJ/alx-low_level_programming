#include <stdio.h>

/**
 * _square - find square root of number
 *
 * @n: number to
 *
 * Return: the square root of number
 */

double _square(double n)
{
	float sq, temp;

	sq = n / 2;
	temp = 0;

	while (temp != 0)
	{
		temp = sq;
		sq = (n / temp + temp) / 2;
	}
	return (sq);
}

/**
 * _large_factor - find the large factor
 *
 * @nu: the number
 */

void _large_factor(long int nu)
{
	int p, large;

	while (nu % 2 == 0)
		nu = nu / 2;

	for (p = 3; p <= _square(nu); p += 2)
	{
		while (nu % p == 0)
		{
			nu = nu / p;
			large = p;
		}
	}

	if (nu > 2)
		large = nu;
	printf("%d\n", large);
}


/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0(success)
 */

int main(void)
{
	_large_factor(612852475143);

	return (0);
}

