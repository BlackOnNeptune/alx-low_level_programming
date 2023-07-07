#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
{
	if (s[i] == c)
	return (&s[i]);
	i++;
}

	return (NULL);
}
