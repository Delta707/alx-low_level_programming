#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * _scan_num - scan the string of digit
 * @str: array str
 * Return: always 0
 */

int _scan_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))
		/*count string*/
	{
		if (!isdigit(str[count]))
			/*Check if str there array*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Name of the program
 * @argc: count arguments
 * @argv: array of arguments
 * Return: alway 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variable*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
		/*Goes through the whole array*/
	{
		if (_scan_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/*Atoi --> convert string into int*/
			sum += str_to_int;
		}
		/*Condition if one of the number contain symbol that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	/*print sum*/
	return (0);

}
