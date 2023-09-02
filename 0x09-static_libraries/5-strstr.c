#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  *_strstr - locates a substring.
 *  @haystack: string
 *  @needle: string
 *
 *  Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *s = strstr(haystack, needle);

	return (s);
}
