#include "main.h"
/**
  *puts2 - print character of a string
  *@str: string to be print
  *return: nothing
  */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
