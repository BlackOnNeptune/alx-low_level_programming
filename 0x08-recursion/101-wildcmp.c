#include "main.h"

/**
 * wildcmp - Compares two strings and checks for identity.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 1 if strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the characters match or s2 has a wildcard '*' */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* Move to the next characters in both strings */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If s2 has a wildcard '*', move to the next character in s2 */
	if (*s2 == '*')
	{
		/* Check for identity by considering '*' as an empty string */
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		/* Try to match s1 with the rest of s2 */
		if (wildcmp(s1 + 1, s2))
			return (1);
	}

	/* Strings are not identical */
	return (0);
}

