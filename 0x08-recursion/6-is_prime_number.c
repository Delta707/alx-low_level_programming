#include "main.h"

/**
 * is_prime_number - a prime number is not 2 product of natural number
 * @n: number stored
 * Return: 1 prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}
