#include "main.h"
#include <string.h>

/**
 *  rev_string - reverses a string
 *
 *  @s: the string
 *
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
