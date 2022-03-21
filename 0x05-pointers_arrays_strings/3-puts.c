<<<<<<< HEAD
#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing*
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
=======
#include "main.h"
/**
 * _puts - function prints a string
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
>>>>>>> a81be9c5b2868b485b7fa99e9d1a5a35ef7cc294
