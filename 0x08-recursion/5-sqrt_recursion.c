#include "main.h"
int natural_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return the natrural square root of a number
 * @n: number stored
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - recursive function
 * @n: number stored
 * @i: iterator
 * Return: Square Root
 */

int natural_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (natural_sqrt_recursion(n, i + 1));
}
