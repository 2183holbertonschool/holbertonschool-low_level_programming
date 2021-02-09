#include "holberton.h"
/**
 * main - entry point
 * Return: always 0 (success)
 **/

int print_sign(int n)
{
	int i=0;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
		else
		{
			i=-1;
			_putchar('-');
		}
        return (i);
}
