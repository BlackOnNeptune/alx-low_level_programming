#include "main.h"

/**
 * _atoi - converts a string into an integer.
 * @s: the string to convert.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	int result = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
	if (s[i] == '-')
	sign *= -1;
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	result = (result * 10) + (s[i] - '0');
	i++;
	}

	result *= sign;
	return (result);
}
