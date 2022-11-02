#include "main.h"
/**
  *_puts_recursion - Print a string folowed by new line
  *
  *@s: String to be print
  *Return: return nothing
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
