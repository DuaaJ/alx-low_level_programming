#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s:string
 * @accept: string
 *
 * Return: pointer of bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}

	return (0);
}
