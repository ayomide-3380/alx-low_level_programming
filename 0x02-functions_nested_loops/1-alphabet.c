#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet(void) - print alphabet lowercase
 * Return: Always (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
