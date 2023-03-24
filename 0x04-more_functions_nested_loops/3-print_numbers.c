#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0 - 9
 * Description: only using _putchar twice
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int num = 0;

	do {
		putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	putchar('\n');

}
