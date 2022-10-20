#include "main.h"

/**
  * print_most_numbers - the numbers from 0 to 9 followed by new line
  *
  * Return: return nothing
  */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
