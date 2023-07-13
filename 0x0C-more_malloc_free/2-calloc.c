#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	x = s;

	for (y = 0; y < (nmemb * size); y++)
		x[y] = '\0';

	return (s);
}
