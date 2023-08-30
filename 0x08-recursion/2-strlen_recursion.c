#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		_strlen_recursion(s + 1);
	n++;
	}
return (n);
}
