#include<stdio.h>

/**
 * main - print alphabet withou e and q
 * Return: always (success)
 */
int main(void)
{
	char c;
	for (c = 'a';  c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	return (0);
}