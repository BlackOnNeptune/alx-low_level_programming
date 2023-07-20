#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  prints all the parameters passed to it
 * @n: number of args passed
 * @separator: is the string to be printed between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(params, int));
	if (separator != NULL && i != n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(params);
}
