#include "main.h"
#include <stdlib.h>
#include <string.h>



/**
 * *str_concat -  concatenates two strings
 * @s1: firt string
 * @s2: second string
 * Return:  concatenates two strings
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	ptr = malloc((len1 + len2) * sizeof(char) + 1);

	if (ptr == 0)
		return (0);

	int s = len1 + len2 + 1;

	for (int i = 0; i <= s; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else if (i == s)
			ptr[i] = '\0';
		else
			ptr[i] = s2[i - len2];
	}
	return (ptr);
}

