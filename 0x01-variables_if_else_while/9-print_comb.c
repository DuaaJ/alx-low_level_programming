#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print ll possible combinations of single-digit numbers
 * Return: Always (sucess)
 */

int main(void)
{
	int num = 0;

while (num <= 9)
{
putchar(num + 48);

if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');

return (0);
}

