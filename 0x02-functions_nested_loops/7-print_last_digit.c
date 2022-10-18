#include "main.h"
/**
*  print_last_digit - last digit
*
*@n: The int to print
* Return: Always 0.
*/


int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = (-1 * (n % 10));
		_putchar(r + '0');
		return (r);
	}
}
