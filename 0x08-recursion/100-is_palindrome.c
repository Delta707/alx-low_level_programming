#include "main.h"

int _strlen_recursive(char *s);
int _scan_pal(char *s, int i, int ln);
/**
 * is_palindrome - palindrome string
 * @s: locally pal stored
 * Return: result of palidrome string
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_scan_pal(s, 0, _strlen_recursive(s)));
}
/**
 * _strlen_recursive - length of the string
 * @s: calculation of length stored
 * Return: length of string
 */

int _strlen_recursive(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursive(s + 1));
}

/**
 * _scan_pal - it scan the character for palindrome
 * @s: string check
 * @i: iterator
 * @ln: length of string
 * Return: 1 (prime) 0 (not prime)
 */

int _scan_pal(char *s, int i, int ln)
{
	if (i >= ln)
		return (1);
	if (*(s + i) != *(s + ln - 1))
		return (0);
	return (_scan_pal(s, i + 1, ln - 1));
}
