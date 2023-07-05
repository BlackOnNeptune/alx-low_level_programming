#include "main.h"

/**
 * custom_pow_recursion - Calculates the power of a number
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 */
int custom_pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * custom_pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
