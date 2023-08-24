#include <unistd.h>

/**
 * _putchar - print character c
 *
 * @c: character
 * Retern: 1(sucess)
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
