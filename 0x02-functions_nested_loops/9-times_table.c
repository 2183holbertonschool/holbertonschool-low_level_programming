#include "holberton.h"
/**
 * times_table- entry point
 * Return: always 0 (success)
 **/
void times_table(void)
{
	int i;
	int j;
	int mul;
	int d;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			mul = i * j;
			d = mul / 10;
			if (d != 0)
			{
				_putchar(mul % 10 + 48);
			}
			_putchar(mul % 10 + 48);
			_putchar(',');
			_putchar(9);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
