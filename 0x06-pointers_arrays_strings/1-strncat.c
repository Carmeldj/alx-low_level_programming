#include "main.h"
/**
  *_strncat - concatenate n byte of a string to another
  *@dest: first string to concatenate
  *@src: second string to concatenate
  *@n: number of bute to be concatenate
  *Return: return pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
