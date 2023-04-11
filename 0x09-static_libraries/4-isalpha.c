#include "main.h"

/**
 * _isalpha - chacker function
 *
 * @c: parameter to be printed
 * Return: 1 if it is a lower case
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
