#include "main.h"

/**
 * malloc_checked - Memory using malloc
 * @b: number of byte stored
 * Return: pointed to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
