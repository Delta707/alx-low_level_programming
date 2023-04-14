#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: memory stored
 * @b: char to copy
 * @n: number time to copy
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocate memorry for an array
 * @num: number of element in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int num, unsigned int size)
{
	char *ptr;

	if (num == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * num);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, num * size);

	return (ptr);
}
