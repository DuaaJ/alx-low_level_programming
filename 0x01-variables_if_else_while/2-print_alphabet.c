#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print  the alphabet in lowercase
 * Return: Always (sucess)
 */

int main(void)
{

char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
	return (0);
}
