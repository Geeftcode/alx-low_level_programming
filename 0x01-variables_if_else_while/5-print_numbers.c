#include <stdio.h>
/**
 * main - Entry point
 * print single digits
 * of base 10
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	printf("\n");
	return (0);
}
