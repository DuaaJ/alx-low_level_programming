#include"main.h"

/**
 * _islower - checks for lowercase character
 * @c: chatacter in function
 * Return: return 1 if ch lowercase
 *          return 0(successfully)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
