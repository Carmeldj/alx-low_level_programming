#include "main.h"
/**
  * print_numbers - priints the numbers from 0 to 9 followed by new line
  *
  *Return: return nothing
  */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
