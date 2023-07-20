#include "variadic_functions.h"
#include <stdio.h>

char *make_nil(char *s);

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of args passed
 * @separator: string to be printed between strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
	char *str = va_arg(params, char *);

	printf("%s", make_nil(str));

	if (separator != NULL && i != n - 1)

	printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}

/**
 * make_nil - change s to be "(nil)" if s is null
 * @s: string to be used
 *
 * Return: pointer to @s
 */
char *make_nil(char *s)
{
	if (s == NULL)
	s = "(nil)";

	return (s);
}
