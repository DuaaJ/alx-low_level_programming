#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  reverse_array -  reverses the content of an array of integers
 *
 *  @a: the numaric string
 *  @n:number of index
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, tem;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tem = a[i];
		a[i] = a[j];
		a[j] = tem;
	}
}
