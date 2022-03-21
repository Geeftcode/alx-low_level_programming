#include "main.h"
#include <stdio.h>

/**
 * main -  a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
 * Return: 0 always
 */

void reset_to_98(int *n) \\ resets the value of n to 98
{
printf("value of n:%p\n", &n);
}
int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("the value of n is %d\n", n);
	reset_to_98(&n);
	n = 98;
	printf("value of n is %d\n", n);
	return (0);
}
