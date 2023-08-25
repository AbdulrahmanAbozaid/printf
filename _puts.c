#include "main.h"

/**
 * _puts - prints a string passed
 * @str: string
 *
 * Return: void
 */

int _puts(char *str)
{
	char *s = str;

	while (*str)
		_putchar(*str++);
	return (str - s);
}

/**
 * _putchar - print char
 * @c: char
 *
 * Return: num 1, -1
 */

int _putchar(char c)
{
	static int i;
	static char buff[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buff[i++] = c;
	return (1);
}
