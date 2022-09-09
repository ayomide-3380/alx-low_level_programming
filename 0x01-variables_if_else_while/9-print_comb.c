#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9 with , ans ' '
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{		
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
