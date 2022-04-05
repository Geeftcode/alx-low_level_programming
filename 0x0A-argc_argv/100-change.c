#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - a program that prints the minimum number of coins to make cha
 * nge for an amount of money.
 * @argc: number of argument passed to command line
 * @argv: argument vector
 * Return: 0 on sucess, 1 if test fails
 */
int main(int argc, char **argv)
{
	int num, counts = 0, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		for (i = 0; 1 < 5; i++)
		{
			if (num >= cents[i])
			{
				num -= cents[i];
				counts++;
				break;
			}
		}
	}
	printf("%d\n", counts);
	return (0);
}


