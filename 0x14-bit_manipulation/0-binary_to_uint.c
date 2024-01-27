#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: pointer to a null-terminated string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * b is NULL or invaild
 */


/* A function that converts a binary string to an unsigned int */
unsigned int binary_to_uint(const char *b)
{
	/* nitialize the result as 0 */
	unsigned int num = 0;
	/* check if the input is valid */
	if (b == NULL || *b == '\0')
		return (0);

	/* loop through each character in the string */
	while (*b)
	{
		/* check if b contains a non-0/1 char */
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) | (*b - '0');
		/* move to next char */
		b++;
	}
	/* return the converted number */
	return (num);
}

