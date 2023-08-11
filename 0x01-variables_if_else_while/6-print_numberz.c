#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print  all single digit numbers of base 10 starting from 0
 * Return: Always (sucess)
 */

int main(void)
{
int num = 0;

while (num <= 9)
{
putchar(num + '0');
num++;
}
putchar('\n');

return (0);
}
