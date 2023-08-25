#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers.
 *
 * @n1:first number
 * @n2:second number
 * @r:store the result
 * @size_r:size of r
 *
 * Return: number
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, el = 0, ed = 0;
	int ek, es, ef;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		el = i;
	else
		el = j;
	if (el + 1 > size_r)
		return (0);
	r[el] = '\0';
	for (ek = el - 1; ek >= 0; el--)
	{
		j--;
		i--;
		if (i >= 0)
			ef = n1[i] - '0';
		else
			ef = 0;
		if (j >= 0)
			es = n2[j] - '0';
		else
			es = 0;
		r[ek] = (ef + es + ed) % 10 + '0';
		ed = (ef + es + ed) / 10;
	}
	if (ed == 1)
	{
		r[el + 1] = '\0';
		if (el + 2 > size_r)
			return (0);
		while (el-- >= 0)
			r[el + 1] = r[el];
		r[0] = ed + '\0';
	}
	return (r);
}
