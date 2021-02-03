#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longType;
	long long int longlongType;
	char charType;

	printf("Size of int data type: %zu byte(s)\n", sizeof(intType));
	printf("Size of char data type: %zu byte(s)\n", sizeof(charType));
	printf("Size of long data type: %zu byte(s)\n", sizeof(longType));
	printf("Size of long long int data type: %zu\n", sizeof(longlongType));
	printf("Size of float data type: %zu\n", sizeof(floatType);
	return (0);
}
