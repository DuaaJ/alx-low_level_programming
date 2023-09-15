#include"variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the strng sberator
 * @n:numbers
 * @...:number to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
		}
	va_start(l, n);
	while (i--)
		printf("%d%s", va_arg(l, int), i ?
				(separator ? separator : "") : "\n");
	va_end(l);
}
