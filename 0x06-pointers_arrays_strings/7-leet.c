#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @st:the char
 *
 * Return: encode
 */


char *leet(char *st)
{
	char *s = st;
	char lett[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};
	unsigned int i;

	while (*st)
	{
		for (i = 0; i < sizeof(lett) / sizeof(char); i++)
		{
			if (*st == lett[i] || *st == lett[i] + 32)
			{
				*st = 48 + num[i];
			}
		}
		st++;
	}
	return (s);
}
