#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 * @argc:number
 * @argv:array
 * Return: 0
 */


int main(int argc, char *argv[])
{
	char *ptr;
	int sum = 0;

	while (--argc)
	{
		for (ptr = argv[argc]; *ptr; ptr++)
			if (*ptr < '0' || *ptr > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
