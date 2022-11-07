#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copie;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	copie = malloc(sizeof(char) * (l + 1));

	if (copie == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copie[i] = str[i];

	copie[l] = '\0';

	return (copie);
}
