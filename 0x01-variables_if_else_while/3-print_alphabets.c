#include <stdio.h>
/**
 * main - Entry block
 * accept lowercase letter
 * and then uppercase letter
 * Return: 0
 */
int main(void)
{
	int letter;

	/*print in lowercase*/
	letter = 'a';
	while (letter <= 'z')
	{
		putchar (letter);
		letter++;
	}
	/*print in uppercase*/
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
