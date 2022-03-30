#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: an integer
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (0);
	else
		return (n * factorial(n - 1));
}
