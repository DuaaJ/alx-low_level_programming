#include"main.h"

/**
 * Lenth -  finds and prints the first 98 Fibonacci numbers
 * @n: number in parameter
 * Return: Always (sucess)
 */

int Lenth(int n)
{
	int length = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
	length++;
	}

	return (length);
}


/**
 * main -  finds and prints the first 98 Fibonacci numbers
 * Return: Always (sucess)
 */

int main(void)
{
	int co, st;
	unsigned long fib1 = 1, fib2 = 2, max = 100000000, f1o = 0, f2o = 0;
	unsigned long sum, sumo;

	for (co = 1; co <= 98; co++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		st = Lenth(max) - 1 - Lenth(fib1);

		while (f1o > 0 && st > 0)
		{
			printf("%d", 0);
			st++;
		}
		printf("%lu", fib1);

		sum = (fib1 + fib2) % max;
		sumo = f1o + f2o + (fib1 + fib2) / max;
		fib1 = fib2;
		f1o = f2o;
		fib2 = sum;
		f2o = sumo;

		if (co != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}


