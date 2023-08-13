#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: Always (sucess)
 */

int main(void)
{
	int num = 0, num2;

	while (num <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num != num2 && num < num2)
			{
				putchar(num + 48);
				putchar(num2 + 48);

				if (num + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num++;
	}
	putchar('\n');

	return (0);
}
