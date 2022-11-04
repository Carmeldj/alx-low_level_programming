#include <stdio.h>
#include <unistd.h>

void _puts(char *str);
int _putchar(char c);

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	return (0);
}

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
