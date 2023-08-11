#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * Return: Always (sucess)
 */

int main(void)
{
int num = 48;
while (num <= 102)
{
putchar(num);
if (num == 57)
num += 39;
num++;
}
putchar('\n');

return (0);
}

