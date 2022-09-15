#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * @c:
 * Return: none
 */
void print_most_numbers(void)

{
int i;
int first_number;
int second_number;
int result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
second_number = result;
}

else
{
first_number = result / 10;
second_number = result % 10;
_putchar (first_number + '0');
}

_putchar (second_number + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}

}