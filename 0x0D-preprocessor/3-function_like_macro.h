#ifndef ABS(x)
#define ABS(x) ((x) - ((2) * (x)))

int  main ()
{
	int num;

#if (num > 0)
	{
		_putchar(num);
	}
#else
	{
	_putchar(ABS(x));
	}
}
#endif
