#include "main.h"

/**
 * main - number of arguments into program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always of 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	/*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
