#include "main.h"
/**
 * swap_int - swap two values
 * @a: value 1
 * @b: value 2
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
