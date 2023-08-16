#include"main.h"

/**
 * main - Fibonacci sequence
 * Return: Always (sucess)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float totals;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			totals += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", totals);

	return (0);
}
