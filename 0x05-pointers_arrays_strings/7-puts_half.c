#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int index, lenght;

	index = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	if ((lenght % 2) != 0)
	{
		index = (lenght + 1) / 2;
	}
	else
	{
		index = (lenght / 2);
	}
	while (index < lenght)
	{
		_putchar(str[index]);
		lenght++;
	}
	_putchar('\n');
}
