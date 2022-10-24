#include "main.h"
/**
  *_strlen - return length of a string
  *@s: variable we want lentgh
  *Return: return length
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
