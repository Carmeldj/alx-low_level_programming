#include "main.h"
/**
  *_strcat - concatenate two strings
  *@dest: first string to concatenate
  *@src: seecond string to concatenate
  *Return: a pointer to the resulting string
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
