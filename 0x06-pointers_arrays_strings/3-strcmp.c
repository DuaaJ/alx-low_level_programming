#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2:second string
 *
 * Return:0(same) 1(not same)
 */

int _strcmp(char *s1, char *s2)
{
	int value;

	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
		}
		break;
	}
	return (value);
}

