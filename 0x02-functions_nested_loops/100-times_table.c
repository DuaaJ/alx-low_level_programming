#include"main.h"

/**
 * print_times_table - print time table
 * @n: number
 * Return: Always (sucess)
 */

void print_times_table(int n)
{
	int res, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				res = num * mult;

				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + 48);
					_putchar((res / 10) % 10 + 48);
				} else if (res <= 99 && res >= 19)
					_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			_putchar('\n');
		}
	}
}




