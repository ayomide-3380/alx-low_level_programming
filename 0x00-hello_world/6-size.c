#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a char: %lu bytes(s)\n", sizeof(char));
	printf("size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %2ld bytes(s)\n", sizeof(long long int));
	printf("size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
