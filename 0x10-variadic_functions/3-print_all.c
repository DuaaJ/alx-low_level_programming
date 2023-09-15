#include "variadic_functions.h"


/**
 * f_s- ffgh
 * @separator: hhhjjj
 * @l:hjj
 */

void f_s(char *separator, va_list l)
{
	char *si = va_arg(l, char *);

	switch ((int)(!si))
		case 1:
			si = "(nil)";

		printf("%s%s", separator, si);
}

/**
 * f_f - ffgh
 * @separator: hhhjjj
 * @l:hjj
 */

void f_f(char *separator, va_list l)
{
	printf("%s%f", separator, va_arg(l, double));
}

/**
 * f_char - ffgh
 * @separator: hhhjjj
 * @l:hjj
 */

void f_char(char *separator, va_list l)
{
	printf("%s%c", separator, va_arg(l, int));
}

/**
 * f_int - ffgh
 * @separator: hhhjjj
 * @l:hjj
 */

void f_int(char *separator, va_list l)
{
	printf("%s%d", separator, va_arg(l, int));
}
/**
 * print_all - print
 * @format: the string
 * @...: number
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list l;

	fun_t func[] = {
		{"s", f_s},
		{"f", f_f},
		{"i", f_int},
		{"c", f_char},
		{NULL, NULL}
	};

	va_start(l, format);
	while (format && format[i])
	{
		j = 0;
		while (func[j].funct)
		{
			if (format[i] == func[j].funct[0])
			{
				func[j].fa(separator, l);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(l);

}

