#include "main.h"
/**
*print_alphabet_x10 - print alphabet in lowercase 10 times
*
*Return: return nothing
*/
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
