#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase
 * Return: Always (sucess)
 */

int main(void)
{
char ch = 'a';
char c = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}

while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
