#include "main.h"
/**
  * rev_string - reverse a string
  *@s: string to be reverse
  *return: nothing
  */
void rev_string(char *s)
{
	int i, j, l;
	char t;

	j = 0;
	l = 0;

	while (s[j] != '\0')
		j++;

	l = j - 1;

	for (i = 0; i < j / 2 ; i++)
	{
		t = s[i];
		s[i] = s[l];
		s[l--] = t;
	}
}
