#include "main.h"

/**
 * int _strlen - print length of a string
 *@a: The strlen() function calculates the length of the string pointed to by s
 * Return: length if code is successful
 */
int _strlen(char *s)
{
		int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
}
