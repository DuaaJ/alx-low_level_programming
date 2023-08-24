#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @st: the string
 *
 * Return:capitalizes
 */

char *cap_string(char *st)
{

	int i = 0;
	char ch;

	while (st[i])
	{	
		ch = st[i];
			_putchar(toupper(ch));
		i++;
	}
	return (st);

}
