#include <stdio.h>
/**
 * main - Entry main
 * all possible combination of two
 * digits
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = 48; m < 57; m++)
	{
		int n;

		for (n = m + 1; n < 58; n++)
		{
		putchar(m);
		putchar(n);

		if (m == 56 && n == 57)
			continue;
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
