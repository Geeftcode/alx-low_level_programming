#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;

	while(*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}
