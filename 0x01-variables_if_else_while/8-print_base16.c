#include <stdio.h>
/**
 * main -Entry point
 * print all base 16 in
 * lowercase
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
