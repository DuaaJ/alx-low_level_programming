#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _length - find length of string
 * @s: the string
 * Return: the length
 */

int _length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}

/**
 * *str_concat -  concatenates two strings
 * @s1: firt string
 * @s2: second string
 * Return:  concatenates two strings
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len1, len2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = _length(s1);
	len2 = _length(s2);

	ptr = malloc((len1 + len2) * sizeof(char) + 1);

	if (ptr == 0)
		return (0);


	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}

