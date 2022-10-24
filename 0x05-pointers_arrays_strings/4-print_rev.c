#include "main.h"
/**
  *print_rev - print a string in reverse
  *@s: a string to be reverse
  *return: return nothing
  */
void print_rev(char *s)
{
	int i, j, l;

	for (i = 0; s[i] != '\0'; i++)
	l = i;
	for (j = l - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
