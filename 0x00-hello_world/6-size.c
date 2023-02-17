#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	long charType;
	long long longlongType;

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longintType));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(longlongType));
	return (0);
}


