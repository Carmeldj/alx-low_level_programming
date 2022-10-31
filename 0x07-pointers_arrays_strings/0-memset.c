#include "main.h"
#include <string.h>
/**
  *_memset - fille memory with a constant byte
  * @s: A pointer to the memory area to be filled.
  * @b: The character to fill the memory area with.
  * @n: The number of bytes to be filled.
  *
  * Return: A pointer to the filled memory area @s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
