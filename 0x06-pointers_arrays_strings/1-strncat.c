#include "main.h"
/**
 * _strncat: a function that concatenates two strings and outputs the result in
 * dest
 * @dest: string 1
 * @src: string 2
 * @n: third variable
 * Return: always return 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
