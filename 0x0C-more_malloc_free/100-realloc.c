#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The new size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL, then the call is equivalent to free(ptr). Return  NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *p, *p_copy;
	unsigned int i; n = new_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	mem = malloc(sizeof(*p) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	p_copy = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		p_copy[i] = *p++;

	free(ptr);
	return (mem);
}	
