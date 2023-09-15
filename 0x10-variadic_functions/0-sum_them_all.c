#include "variadic_functions.h"

/**
 * sum_them_all - find the sum
 * @n:the number of arg
 * @...:integer
 * Return:sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = 0, j = n;
	va_list l;

	if (!n)
		return (0);
	va_start(l, n);
	while (j--)
		i += va_arg(l, int);
	va_end(l);
	return (i);
}
