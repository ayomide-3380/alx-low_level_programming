#include "main.h"

/**
 * _puts - 
 * 
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
