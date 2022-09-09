#include <stdio.h>

/**
 * main - Prints alphabet without e and q
 *
 * Return: Always (Success)
 **/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
