#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success, -1 on error with errno set.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

