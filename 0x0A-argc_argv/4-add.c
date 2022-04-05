#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a program that adds positive numbers.
 * @argc: args count
 * @argv: the arguments
 * Return: 0 for Success, 1 for Error
 */
int main(int argc, char **argv)
{
	int i, sum = 0, num;
	char *notnum;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &notnum, 10);
		if (*notnum)
		{
			puts("Error");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
