#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @st: the string
 * Return: uppercase letter
 */

char *string_toupper(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 97 && st[i] <= 122)
		{
			st[i] = st[i] - 32;
		}
	}

	return (st);
}
