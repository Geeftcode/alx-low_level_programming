#include <stdio.h>
/**
 * main - Entry point
 * print digits of base 10
 * using the putchar function
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);
	putchar('\n');
	return (0);

}
