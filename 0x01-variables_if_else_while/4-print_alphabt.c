#include <stdio.h>
/**
 * main - Entry point
 * print all alphabeth except q and e
 * Return: 0
 */
int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
