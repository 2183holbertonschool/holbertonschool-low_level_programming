#include "holberton.h"
/**
 * jack_bauer -  prints every min of the day of Jack Bauer, from 00:00 - 23:59.
 * return: Always void
 */

void jack_bauer(void)
{
        int i;
	int j;

	for (i = 0 ; i <= 23 ; i++)
		for (j = 0 ; j <= 59 ; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(58);
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}

}
