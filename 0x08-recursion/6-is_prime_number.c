#include "main.h"

int real_prime(int n, int i);
/**
 * is_prime_number - a prime number is not 2 product of natural number
 * @n: number stored
 * Return: 1 (prime) 0 (Not prime)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - Recursion of a prime number
 * @n: prime number stored
 * @i: iterator
 * Return: 1 (prime) 0 (if not a prime)
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
