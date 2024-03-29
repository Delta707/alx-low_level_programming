#include "lists.h"


/**
 * list_len - return the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
