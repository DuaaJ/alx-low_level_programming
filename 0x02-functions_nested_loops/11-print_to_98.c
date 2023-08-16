#include"main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: number
 */

void print_to_98(int n)
{
	int co;

	if (n > 98)
		for (co = n; co > 98; co--)
			printf("%d, ", co);
	else
		for (co = n; co < 98; co++)
			printf("%d, ", co);
	printf("98\n");
}
