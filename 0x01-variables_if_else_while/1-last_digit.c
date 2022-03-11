#include <stdlid.h>
#include <time.h>
#include <stdio.h>
/**
 * main - blocks
 * a program to assign random numbers
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int LN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LN = n % 10;
	if (LN > 5)
	{
	printf("Last digit of %d is %d, and is greater than 5\n", n, LN)
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d, and is 0\n", n, LN)
	}
	else
	{
	printf("Last digit of %d is %d, and is less than 6 and not 0\n", n, LN)
	}
}
return (0);
}
