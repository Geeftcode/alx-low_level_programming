#include <stdio.h>
/**
 * main -block
 * a program to print alphabeth
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
		putchar(a);
	putchar('\n');
	return (0);
}
