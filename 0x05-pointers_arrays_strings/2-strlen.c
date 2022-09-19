#include "main.h"

/**
 * _strlen - Return the qty f bytes that a string has
 * @s: The string
 *
 * Return: The long of the string as an integer number
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

