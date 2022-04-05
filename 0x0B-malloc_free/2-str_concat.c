#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, j;
	char *str;

	k = s1 == NULL ? 0 : strlen(s1);
	j = s2 == NULL ? 0 : strlen(s2);
	str = malloc(k + j + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		str[i] = s1[i];
	for (i = 0; i < j; i++)
		str[k + i] = s2[i];
	return (str);
}
