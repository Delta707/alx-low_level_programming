#include "main.h"

/**
 * factorial - fractorial function
 * @n: Stored numbers
 * Return: fractorial number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
