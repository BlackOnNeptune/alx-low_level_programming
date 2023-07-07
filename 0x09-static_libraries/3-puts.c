#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
{
	_putchar(*ptr);
	ptr++;
}
	_putchar('\n');
}
