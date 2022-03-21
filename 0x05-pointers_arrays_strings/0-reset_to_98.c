#include "main.h"
#include <stdio.h>

/**
 * main -  a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
 * Return: 0 always
 */

int main(void)
{
	int n;

	n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	n = 98;
	_putchar("n=%d\n", n);
	return (0);
}
