#include "main.h"
#include <stdio.h>



/**
 * _index -  string is a palindrome
 * @s:the string
 * @beg:beginning
 * @tail:tail
 * @rem:the reminder
 * Return: the lenth
 */

int revis(char *s, int beg, int tail, int rem);
int _index(char *s)
{
	int n = 0;

if (*s > '\0')
	n += _index(s + 1) + 1;

return (n);
}


/**
 * revis - cheack the palindrome
 * @beg: from right to left
 * @tail: from left to right
 * @rem: the remindwe
 * @s:string
 * Return: 0 or 1
 */


int revis(char *s, int beg, int tail, int rem)
{
	if ((beg == tail && rem != 0) || (beg == tail + 1 && rem == 0))
		return (1);
	else if (s[beg] != s[tail])
		return (0);
	else
		return (revis(s, beg + 1, tail - 1, rem));
}

/**
 * is_palindrome -  string is a palindrome
 * @s:the string
 * Return:0 or 1;
 */

int is_palindrome(char *s)
{
	int tail = _index(s);

	return (revis(s, 0, tail - 1, tail % 2));
}

