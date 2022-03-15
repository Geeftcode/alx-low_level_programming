#include "main.h"

/**
 * main -entry point
 * a program to print out lowercase alphabet
 * in ten places
 */

void print_alphabet_x10(void)
{
	int count, alphabet;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
