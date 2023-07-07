#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
{
	int match = 0;
	char *a = accept;

	while (*a)
{
	if (*s == *a)
{
	count++;
	match = 1;
	break;
}
	a++;
}

	if (!match)
	break;

	s++;
}

	return (count);
}
