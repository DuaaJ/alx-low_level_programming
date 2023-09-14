#include "3-calc.h"

/**
 * main - function
 * @argc: arg
 * @argv:vector
 * Return:0;
 */

int main(int argc, char **argv)
{
	int (*ptr)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (!ptr)
		printf("Error\n"), exit(98);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '*'))
		printf("Error\n"), exit(100);
	printf("%d\n", ptr(a, b));
	return (0);
}
