#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 **/
int main(void)
{
	int i, j;

	for (i = 48 ; i <= 57 ; i++)
		for (j = i + 1 ; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
