#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block
 * get a random number and return
 * positive negative or zero
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* my code goes here */
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else 
{
	printf("%d is negative\n", n);
}
return (0);
}
