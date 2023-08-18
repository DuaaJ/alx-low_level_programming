#include <unistd.h>
#include "main.h"

/**
 * _putchar - print _putchar
 * @ch: character to print
 * Return: Always (sucess)
 */

int _putchar(char ch)
{
        return (write(1, &ch, 1));
}
