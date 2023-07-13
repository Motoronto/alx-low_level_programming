#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings using
 * @s1: The first string.
 * @s2: The second string.
 * @n: Unsigned int
 *
 * Return: If the function fails, it should return NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = n, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (y = 0; s1[y]; y++)
		x++;

	s = malloc(sizeof(char) * (x + 1));

	if (s == NULL)
		return (NULL);

	x = 0;

	for (y = 0; s1[y]; y++)
		s[x++] = s1[y];

	for (y = 0; s2[y] && y < n; ++)
		s[++] = s2[y];

	s[x] = '\0';

	return (s);
}
