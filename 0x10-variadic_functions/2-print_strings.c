#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: the string
 * @n:number
 * @...:print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list l;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(l, n);
	while (i--)
		printf("%s%s", (s = va_arg(l, char*)) ? s : "(nil)", i ?
				(separator ? separator : "") : "\n");
	va_end(l);
}
