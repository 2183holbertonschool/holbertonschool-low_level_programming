#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"
/**
* positive_or_negative - entry pointa any Number
*
* @n: verified number
* Return: always 0 (success)
**/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
}
