#include "main.h"
/**
  *swap_int - swap values of two integers
  *@a: first value to be swap
  *@b: second value to be swap
  *Return: return nothing
  */
void swap_int(int *a, int *b)
{
	int c, d;

	c = 0;
	d = 0;
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
