#include "main.h"
#include <string.h>
#include <stdio.h>


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
	char *a = strchr(s, c);

	return (a);
}
