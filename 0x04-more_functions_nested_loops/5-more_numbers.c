#include "main.h"

/**
 * print - number 0 to 14 x10
 * 
 * Return: none
 */
void more_numbers(void)
{
	int number;
	int count;

	count = 0;
	while (count < 10)
	{
		for (number = '0'; number <= 14; number++)

		{
			_putchar(number);
		}

		count++;
		_putchar('\n');
	}

}
