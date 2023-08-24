#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * rot13 -  encodes a string using rot13.
 *
 * @st:string
 * Return:whatever
 */


char *rot13(char *st)
{
	char root[] = "abcdefghijklmnopqrstuvwxyz";
		char ROOT[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char *p = st;
		int i;

		while (*st)
		{
			for (i = 0; i < 52; i++)
			{
				if (*st == root[i])
				{
					*st = ROOT[i];
					break;
				}
			}
			st++;
		}
		return (p);
}
