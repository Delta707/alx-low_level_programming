#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum two diagonals
 * @a: arrays
 * @size: stored
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int s1, s2, b;

	s1 = 0;
	s2 = 0;

	for (b = 0 ; b < size ; b++)
	{
		s1 = s2 + a[b * size + b];
	}
	for (b = size - 1 ; b >= 0 ; b--)
	{
		s2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", s2, s1);
}
