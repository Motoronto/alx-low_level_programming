#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: Minimum range of values stored.
 * @max: Maximum range of values and number elements.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *range index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		range[index] = min++;

	return (range);
}
