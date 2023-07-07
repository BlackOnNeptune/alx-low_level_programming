#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the found substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, const char *needle)
{
	while (*haystack != '\0')
{
	char *h = haystack;
	const char *n = needle;

	while (*h == *n && *n != '\0')
	{
	h++;
	n++;
}

	if (*n == '\0')
	return (haystack);

	haystack++;
}

	return (NULL);
}

