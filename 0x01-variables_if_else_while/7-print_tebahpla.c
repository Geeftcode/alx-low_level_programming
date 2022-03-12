#include <stdio.h>
/**
 * main - Entry point
 * print the alphabeth in reverse
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
