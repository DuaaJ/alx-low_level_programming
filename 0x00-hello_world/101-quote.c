#include <unistd.h>

/**
 * main - print
 * Return: Always (sucess)
 */

int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, st, 56);

	return (1);
}
