#include "main.h"

/**
 * com - compare the string
 * @st:the first string of
 * @str: the second second string of
 * Return: the pointer
 */

int com(char *st, char *str)
{
	int r = 0;

	if (*st == 0)
		return (0);
	if (*st == *str)
		r += wildcmp(st + 1, str + 1);
	r += com(st + 1, str);
	return (r);
}


/**
 * astric - astrics
 * @s: the string
 * Return: the pointer
 */

char *astric(char *s)
{
	if (*s == '*')
		return (astric(s + 1));
	else
		return (s);
}


/**
 *  wildcmp - compares two strings
 *  @s1:first string
 *  @s2: second string
 *
 *  Return:1 if the strings can be considered identical
 *		otherwise return 0.
 *
 */


int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*astric(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = astric(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += com(s1, s2);
		return (!!r);
	}
	return (0);
}
