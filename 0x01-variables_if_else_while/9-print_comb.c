#include <stdio.h>
/**
 * main - Entry point
 * all possible combination of a
 * single number
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar('\n');
		return (0);
}
