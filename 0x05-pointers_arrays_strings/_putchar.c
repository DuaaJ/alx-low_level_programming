#include <unistd.h>

/**
 * _putchar - putchaer function
 *
 * @c: the character
 * Returen: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
