#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	str[70] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_putchar("%s\n", str[70]);
	return (str[70]);
}
