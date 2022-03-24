#include "main.h"
/**
 * _strcat: a function that concatenates two strings. a function was created
 * to append one string to the end of string 2
 * @dest: string 2
 * @src: string 1
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
