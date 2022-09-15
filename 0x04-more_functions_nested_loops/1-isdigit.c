#include "main.h"

/**
 * _isdigit - print character C
 * @c: _isdigit checks for a digit
 * Return: 1 (success), otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}