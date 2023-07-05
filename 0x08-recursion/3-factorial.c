#include "main.h"

/**
 * _factorial - Calculates the factorial of an integer
 * @n: The integer to calculate the factorial of
 *
 * Return: The factorial value
 */
int _factorial(int n)
{
	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		result = n * _factorial(n - 1);
	}

	return (result);
}
