#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print he alphabet in lowercase, and then in uppercase
 * Return: Always (sucess)
 */

int main(void)
{

char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
