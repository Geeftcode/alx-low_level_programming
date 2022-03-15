#include "main.h"
/**
 * main - entry point
 * print alphabet in lowercase
 */
void print_alphabet(void)
{
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
