#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of an char: %2ld bytes(s)\n", sizeof(char));
	printf("size of a int: %2ld bytes(s)\n", sizeof(int));
	printf("size of a long int: %2ld bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %2ld bytes(s)\n", sizeof(long long int));
	printf("size of a float: %2ld bytes(s)\n", sizeof(float));
	return (0);
}
