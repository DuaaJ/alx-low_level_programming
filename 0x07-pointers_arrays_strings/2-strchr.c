#include "main.h"

/**
 * *_strchr -  locates a character in a string.
 *
 * @s:the string
 * @c: the character
 *
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
