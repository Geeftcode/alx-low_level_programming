#include "main.h"
/**
 * swap_int - function swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: 0 Success
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;	
	*a = *b;
	*b = temp;
}
