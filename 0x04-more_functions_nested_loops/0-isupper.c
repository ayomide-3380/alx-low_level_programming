#include "main.h"

/**
 * _isupper - print character C
 * @: _isupper test weather character is uppercase
 * Return: 1 (success), otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
