#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print  the lowercase alphabet in reverse
 * Return: Always (sucess)
 */

int main(void)
{
char ch = 'z';

while (ch <= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');

return (0);
}

